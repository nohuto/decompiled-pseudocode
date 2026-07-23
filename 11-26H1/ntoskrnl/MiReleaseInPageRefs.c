/*
 * XREFs of MiReleaseInPageRefs @ 0x1402EBD88
 * Callers:
 *     MiInvalidateCollidedIos @ 0x1402F1414 (MiInvalidateCollidedIos.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402EC1B0 (MiDereferenceControlAreaPfnList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiReleaseInPageRefs(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx
  _QWORD *SubsectionFromPte; // rax
  unsigned __int64 result; // rax
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = 48 * (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
    KeBugCheckEx(0x1Au, 0x61950uLL, BugCheckParameter2, v2, *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiLockAndDecrementShareCount(v2, 2LL);
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    SubsectionFromPte = (_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiDereferenceControlAreaPfnList(*SubsectionFromPte, SubsectionFromPte, 1LL);
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
    result = *(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFBuLL;
    *(_QWORD *)(BugCheckParameter2 + 16) = result;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
