/*
 * XREFs of MiLogNoStealNonPagedPool @ 0x140250E98
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     MiUpdateNonPagedPoolNoSteal @ 0x14024FD1C (MiUpdateNonPagedPoolNoSteal.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogNoStealNonPagedPool(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // esi
  int v7; // r8d
  volatile signed __int32 *v8; // rax
  unsigned __int32 v9; // edx
  __int16 v10; // r8
  __int64 result; // rax
  unsigned int v12; // r8d
  bool v13; // zf
  unsigned int v14; // r8d
  int v15; // ecx
  unsigned __int32 v16; // ecx
  signed __int32 v17; // eax
  unsigned __int32 v18; // r9d
  unsigned int v19; // r9d
  int v20; // edx
  int v21; // [rsp+28h] [rbp-49h]
  int v22; // [rsp+30h] [rbp-41h]
  __int64 v23; // [rsp+48h] [rbp-29h] BYREF
  __int64 v24; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-19h] BYREF
  __int64 v26[10]; // [rsp+68h] [rbp-9h] BYREF

  v5 = a3;
  if ( (unsigned __int8)KeGetEffectiveIrql(a1, a2, a3) <= 2u
    && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && (*((_DWORD *)stru_140E366D8.FirstArgument + 4) & 0x8000LL) != 0
    && (*((_QWORD *)stru_140E366D8.FirstArgument + 3) & 0x8000LL) == *((_QWORD *)stru_140E366D8.FirstArgument + 3) )
  {
    v24 = a2;
    v26[4] = (__int64)&v24;
    v26[5] = 8LL;
    v26[6] = (__int64)&v23;
    LODWORD(v23) = v5;
    v26[8] = (__int64)&v25;
    v26[7] = 4LL;
    v25 = a4;
    v26[9] = 8LL;
    tlgWriteEx_EtwWriteEx((int)stru_140E366D8.FirstArgument, (int)&word_14005933E, v7, 1, v21, v22, 5u, (__int64)v26);
  }
  if ( a4 )
  {
    if ( a4 < 0x400 )
    {
      v8 = (volatile signed __int32 *)&unk_140E2C8DC;
    }
    else if ( a4 < 0x1000 )
    {
      v8 = (volatile signed __int32 *)&unk_140E2C8E0;
    }
    else if ( (a4 & 0xFFF) != 0 )
    {
      v8 = (volatile signed __int32 *)&unk_140E2C8E8;
      if ( (a4 & 0xFFF) > 0x20 )
        v8 = (volatile signed __int32 *)&unk_140E2C8EC;
    }
    else
    {
      v8 = (volatile signed __int32 *)&unk_140E2C8E4;
    }
  }
  else
  {
    v8 = (volatile signed __int32 *)&unk_140E2C8D8;
  }
  _InterlockedIncrement(v8);
  v9 = dword_140E2C8D0;
  do
  {
    v10 = v9;
    result = v9;
    if ( (v9 & 0x400000) != 0 )
      v10 = v9 >> 11;
    v12 = v10 & 0x7FF;
    if ( v12 >= 0x400 )
    {
      if ( (v9 & 0x400000) != 0 )
        v13 = (v9 & 0x7FF) == 0;
      else
        v13 = ((v9 >> 11) & 0x7FF) == 0;
      if ( !v13 )
      {
        _InterlockedIncrement(&dword_140E2C8D4);
        return result;
      }
      LODWORD(result) = v9 ^ (v9 ^ (((v9 >> 22) - 1) << 22)) & 0x400000;
      v12 = 0;
    }
    v14 = v12 + 1;
    if ( (result & 0x400000) != 0 )
      v15 = (result ^ (v14 << 11)) & 0x3FF800;
    else
      v15 = (v14 ^ result) & 0x7FF;
    v16 = result ^ v15;
    v17 = _InterlockedCompareExchange(&dword_140E2C8D0, v16, v9);
    v13 = v9 == v17;
    v9 = v17;
  }
  while ( !v13 );
  LOWORD(v18) = v16;
  if ( (v16 & 0x400000) != 0 )
    v18 = v16 >> 11;
  v19 = (v18 & 0x7FF) - 1;
  v23 = v5;
  v20 = 0x7FFFFFFF;
  if ( (a4 & 0x7FFFFFFF) == a4 )
    v20 = a4 & 0x7FFFFFFF;
  HIDWORD(v23) = v20 | 0x80000000;
  result = qword_140E2C8C8;
  *(_QWORD *)(qword_140E2C8C8 + 8 * (v19 + ((((unsigned __int64)v16 >> 22) & 1) << 10))) = v23;
  return result;
}
