/*
 * XREFs of ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140720BA8
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1407204DC (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14072072C (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1407201BC (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1407205C0 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x140720604 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x140720648 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140793774 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_MBR::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2)
{
  __int8 *v2; // r8
  unsigned int v4; // edx
  const __m128i *v6; // rbp
  unsigned int v7; // r13d
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v10; // r11d
  char v11; // r14
  __int8 *v12; // r15
  unsigned int i; // edi
  __int64 v14; // r8
  const __m128i *v15; // r9
  char v16; // cl
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // edi
  int Sectors; // eax
  int v24; // [rsp+20h] [rbp-58h]
  unsigned int v25; // [rsp+24h] [rbp-54h]
  struct _GUID v26; // [rsp+28h] [rbp-50h] BYREF

  v2 = 0LL;
  v25 = 0;
  v4 = 0;
  v24 = 0;
  v6 = (const __m128i *)*((_QWORD *)*this + 33);
  v7 = 0;
  v8 = *((_DWORD *)a2 + 2);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v26 = 0LL;
  if ( !v8 )
  {
    SC_ENV::CreateGuid(&v26);
    v4 = 0;
    v10 = 0;
    v8 = *(_DWORD *)&v26.Data4[4] ^ *(_DWORD *)v26.Data4 ^ *(_DWORD *)&v26.Data2 ^ v26.Data1;
    *((_DWORD *)a2 + 2) = v8;
    v2 = 0LL;
  }
  if ( v6[27].m128i_i32[2] != v8 )
  {
    v6[27].m128i_i32[2] = v8;
    v11 = 1;
    *((_DWORD *)a2 + 3) = MBR_HEADER::CheckSum(v6);
  }
  while ( 1 )
  {
    v12 = v2;
    for ( i = (unsigned int)v2; i < 4 && v4 < *((_DWORD *)a2 + 1); ++i )
    {
      v14 = 18LL * v4;
      v15 = &v6[i];
      v16 = *((_BYTE *)a2 + 144 * v4 + 80);
      if ( v16 == 5 || v16 == 15 )
      {
        if ( v12 )
          return (unsigned int)-1073741823;
        v12 = &v15[27].m128i_i8[14];
        v10 = v7;
      }
      *((_DWORD *)a2 + 36 * v4 + 22) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 36 * v4 + 23) = 0;
      *((_QWORD *)a2 + 18 * v4 + 12) = *((_QWORD *)a2 + 18 * v4 + 7);
      if ( *((_BYTE *)a2 + 144 * v4 + 76) )
      {
        if ( v16 )
        {
          v15[27].m128i_i8[14] = *((_BYTE *)a2 + 144 * v4 + 81) != 0 ? 0x80 : 0;
          v6[i + 28].m128i_i8[2] = *((_BYTE *)a2 + 144 * v4 + 80);
          v17 = *((_QWORD *)a2 + 18 * v4 + 7);
          v18 = *((_DWORD *)*this + 59);
          if ( v18 )
            v17 /= (__int64)v18;
          *(__int32 *)((char *)&v6[i + 28].m128i_i32[1] + 2) = v17 - v10;
          v19 = *((_QWORD *)a2 + v14 + 8);
          v20 = *((_DWORD *)*this + 59);
          if ( v20 )
            v19 /= (__int64)v20;
          *(__int32 *)((char *)&v6[i + 28].m128i_i32[2] + 2) = v19;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)((char *)&v15[27].m128i_u64[1] + 6), (struct _DISK_GEOMETRY *)*this + 9);
          v4 = v24;
        }
        else
        {
          *(const __m128i *)((char *)&v15[27] + 14) = 0LL;
        }
        v11 = 1;
      }
      v10 = v25;
      v24 = ++v4;
    }
    if ( v11 )
    {
      v9 = SC_DISK::WriteSectors(*this, 1LL, v10, 0LL);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v11 = 0;
    }
    if ( !v12 )
      break;
    v21 = *((_DWORD *)v12 + 2);
    v25 = v21 + v7;
    Sectors = SC_DISK::ReadSectors(*this, 1LL, v21 + v7, 0LL);
    v2 = 0LL;
    v9 = Sectors;
    if ( Sectors < 0 )
      break;
    v4 = v24;
    v10 = v21 + v7;
    if ( v7 )
      v21 = v7;
    v6[31].m128i_i16[7] = -21931;
    v7 = v21;
  }
  return (unsigned int)v9;
}
