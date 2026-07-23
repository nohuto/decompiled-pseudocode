/*
 * XREFs of MiValidateAndLockAweMapCountPage @ 0x140479C7C
 * Callers:
 *     MiDecrementAweMapCount @ 0x1404799BC (MiDecrementAweMapCount.c)
 *     MiIncrementAweMapCount @ 0x140706818 (MiIncrementAweMapCount.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiIsPageInHugePfn @ 0x140315910 (MiIsPageInHugePfn.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 */

__int64 __fastcall MiValidateAndLockAweMapCountPage(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 *v5; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  const signed __int64 *v13; // r14
  __int64 v14; // r9
  int v16; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)a4 = 0LL;
  v5 = 0LL;
  if ( a3 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = a2 / v7;
    v5 = (unsigned __int64 *)(a1 + 24);
    v9 = a2 / v7;
    if ( ((v7 - 1) & a2) != 0 || v8 >= *v5 || !_bittest64(*(const signed __int64 **)(a1 + 32), v8) )
      return 0LL;
  }
  else
  {
    v9 = 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a1 + 8) & 4) != 0 )
  {
    v11 = 0LL;
    v12 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * ((a2 >> 18) & 0x3FFFFF);
    v10 = 48 * a2;
  }
  else
  {
    v10 = 48 * a2;
    v11 = 48 * a2 - 0x220000000000LL;
    v12 = 0LL;
  }
  if ( a3 )
  {
    v13 = (const signed __int64 *)v5[1];
    if ( a2 <= qword_140E2D920 && ((*(_QWORD *)(v10 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      if ( !v11 )
        return 0LL;
      *(_QWORD *)a4 = v11;
      *(_DWORD *)(a4 + 8) = 1;
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
    }
    else
    {
      if ( !MiIsPageInHugePfn(a2) || !v12 )
        return 0LL;
      *(_QWORD *)v14 = v12;
      *(_DWORD *)(v14 + 8) = 0;
      MiLockHugePfnAtDpc(v12);
    }
    if ( !_bittest64(v13, v9) )
    {
      if ( v11 )
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      else
        _InterlockedAnd(
          (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                    + 4
                                    * ((((v12 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << ((v12 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
      return 0LL;
    }
  }
  else if ( v11 )
  {
    *(_QWORD *)a4 = v11;
    *(_DWORD *)(a4 + 8) = 1;
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
  }
  else
  {
    *(_QWORD *)a4 = v12;
    *(_DWORD *)(a4 + 8) = 0;
    MiLockHugePfnAtDpc(v12);
  }
  return 1LL;
}
