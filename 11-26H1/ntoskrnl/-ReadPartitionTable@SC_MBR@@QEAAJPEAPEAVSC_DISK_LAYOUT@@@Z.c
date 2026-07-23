/*
 * XREFs of ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140720840
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140720128 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1407201BC (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x140720604 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140720B48 (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140793650 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_MBR::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2, unsigned __int8 a3)
{
  unsigned int v3; // r12d
  const __m128i *v4; // rsi
  unsigned int v5; // r15d
  unsigned int v6; // edi
  char *v7; // rax
  char *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // r8
  char *v11; // rbp
  unsigned int v12; // edi
  __int8 *v13; // r14
  char v14; // r13
  __int64 v15; // rsi
  MBR_ENTRY *v16; // rax
  char v17; // r13
  __int16 v18; // ax
  __int8 v19; // al
  bool v20; // zf
  char v21; // al
  unsigned int v22; // eax
  unsigned int v23; // ebp
  char *v24; // rax
  char *v25; // rsi
  unsigned int v27; // [rsp+20h] [rbp-68h]
  int Sectors; // [rsp+24h] [rbp-64h]
  MBR_ENTRY *v29; // [rsp+28h] [rbp-60h]
  const __m128i *v30; // [rsp+30h] [rbp-58h]
  char v33; // [rsp+A0h] [rbp+18h]
  unsigned int v34; // [rsp+A8h] [rbp+20h]

  v34 = 0;
  v33 = 0;
  v3 = 0;
  Sectors = 0;
  v4 = (const __m128i *)*((_QWORD *)*this + 33);
  v5 = 0;
  v30 = v4;
  v6 = 0;
  v27 = 0;
  *a2 = 0LL;
  v7 = (char *)SC_ENV::Allocate(0x270uLL, (unsigned int)a2, a3, 0);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7 + 4, 0, 0x26CuLL);
    *(_DWORD *)v8 = 0;
    *((_DWORD *)v8 + 2) = v4[27].m128i_i32[2];
    *((_DWORD *)v8 + 3) = MBR_HEADER::CheckSum(v4);
    while ( 1 )
    {
      if ( v4[31].m128i_i16[7] != -21931 )
      {
LABEL_34:
        *((_DWORD *)v8 + 1) = (v5 + 3) & 0xFFFFFFFC;
        *a2 = (struct SC_DISK_LAYOUT *)v8;
        return v6;
      }
      v11 = 0LL;
      v12 = 0;
      v13 = &v4[28].m128i_i8[2];
      do
      {
        v14 = *v13;
        v15 = 18LL * v5;
        if ( *v13 == 5 || v14 == 15 )
        {
          if ( v11 )
          {
            v17 = 1;
            v33 = 1;
            goto LABEL_24;
          }
          v11 = v13 - 4;
          v16 = (MBR_ENTRY *)(v13 - 4);
        }
        else
        {
          v3 = v27;
          v16 = (MBR_ENTRY *)(v13 - 4);
        }
        v29 = v16;
        if ( MBR_ENTRY::Validate(v16, v3, *((_QWORD *)*this + 31)) )
        {
          ++v5;
          if ( v14 )
          {
            *(_DWORD *)&v8[8 * v15 + 48] = 0;
            v18 = v12 + 1;
            if ( v3 )
              v18 = 0;
            v10 = (unsigned __int8)this;
            *(_WORD *)&v8[8 * v15 + 52] = v18;
            v9 = (v3 + (unsigned __int64)*((unsigned int *)v13 + 1)) << *((_DWORD *)*this + 60);
            *(_QWORD *)&v8[8 * v15 + 56] = v9;
            *(_QWORD *)&v8[8 * v15 + 64] = (unsigned __int64)*((unsigned int *)v13 + 2) << *((_DWORD *)*this + 60);
            *(_DWORD *)&v8[8 * v15 + 72] = 0;
            v8[8 * v15 + 80] = *v13;
            v8[8 * v15 + 81] = *(_BYTE *)v29 == 0x80;
            v19 = *v13;
            if ( !*v13 || v19 == 5 || (v20 = v19 == 15, v21 = 1, v20) )
              v21 = 0;
            v8[8 * v15 + 82] = v21;
            *(_DWORD *)&v8[8 * v15 + 84] = *((_DWORD *)v13 + 1);
            *(_QWORD *)&v8[8 * v15 + 88] = *((unsigned int *)v8 + 2);
            *(_QWORD *)&v8[8 * v15 + 96] = v9;
          }
          v17 = v33;
        }
        else
        {
          v17 = 1;
          v33 = 1;
        }
        v3 = v34;
LABEL_24:
        ++v12;
        v13 += 16;
      }
      while ( v12 < 4 );
      v6 = Sectors;
      if ( v17 || !v11 )
        goto LABEL_34;
      v22 = *((_DWORD *)v11 + 2);
      v23 = v22 + v3;
      if ( !v3 )
        v3 = v22;
      v27 = v23;
      v34 = v3;
      v24 = (char *)SC_ENV::Allocate(144 * v5 + 624, v9, v10, 0);
      v25 = v24;
      if ( !v24 )
      {
        v6 = -1073741670;
        if ( !v8 )
          return v6;
LABEL_33:
        PspUserApcKernelRoutine(v8);
        return v6;
      }
      memmove(v24, v8, (int)(144 * v5 + 48));
      memset_0(&v25[144 * v5 + 48], 0, 0x240uLL);
      PspUserApcKernelRoutine(v8);
      v8 = v25;
      Sectors = SC_DISK::ReadSectors(*this, 1LL, v23, 0LL);
      v6 = Sectors;
      if ( Sectors < 0 )
        goto LABEL_33;
      v4 = v30;
    }
  }
  return (unsigned int)-1073741670;
}
