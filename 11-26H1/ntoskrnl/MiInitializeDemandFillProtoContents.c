/*
 * XREFs of MiInitializeDemandFillProtoContents @ 0x140480DBC
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiInitializeDemandFillProtoContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdi
  signed __int64 v5; // rdx
  signed __int64 v6; // rax
  bool i; // zf
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 48 * a1 - 0x220000000000LL;
  if ( MiGetSubsectionFromPte(a2) )
  {
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    v5 = *(_QWORD *)(v4 + 40);
    v6 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)(v4 + 40),
           v5 & 0x8FFFFFFFFFFFFFFFuLL | 0x4000000000000000LL,
           v5);
    for ( i = v5 == v6; !i; i = v8 == v6 )
    {
      v8 = v6;
      v6 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(v4 + 40),
             v6 & 0x8FFFFFFFFFFFFFFFuLL | 0x4000000000000000LL,
             v6);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else if ( (v2 & 0x3E0) != 0 )
  {
    v2 &= ~0x400uLL;
  }
  else
  {
    v2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  v9 = v2 & 0xFBFFFFFFFFFFFFFFuLL;
  v10 = (unsigned __int64 *)MiMapPageInHyperSpaceWorker(a1, 0LL, 0x80000000);
  v11 = v10;
  v12 = 512LL;
  do
  {
    *v10++ = v9;
    --v12;
  }
  while ( v12 );
  result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)((((unsigned __int64)v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  return result;
}
