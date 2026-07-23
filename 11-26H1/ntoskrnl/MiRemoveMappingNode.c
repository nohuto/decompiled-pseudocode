/*
 * XREFs of MiRemoveMappingNode @ 0x1404D0CE4
 * Callers:
 *     MmFreeMappingAddress @ 0x140B14CF0 (MmFreeMappingAddress.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiRemoveMappingNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rbp
  KIRQL v4; // al
  _QWORD *v5; // rbx
  ULONG_PTR v6; // r8
  KIRQL v7; // di
  ULONG_PTR v8; // rcx

  v3 = (unsigned int)BugCheckParameter3;
  v4 = ExAcquireSpinLockExclusive(&dword_140E34CE8);
  v5 = (_QWORD *)qword_140E34CF0;
  v6 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = v4;
  if ( !qword_140E34CF0 )
    goto LABEL_12;
  do
  {
    v8 = v5[3];
    if ( v6 < v8 )
    {
      v5 = (_QWORD *)*v5;
    }
    else
    {
      if ( v6 < v8 + (v5[4] << 12) )
        break;
      v5 = (_QWORD *)v5[1];
    }
  }
  while ( v5 );
  if ( !v5 )
LABEL_12:
    KeBugCheckEx(0xDAu, 0x106uLL, BugCheckParameter2, v3, 0LL);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E34CF0, (__int64)v5);
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34CE8);
  else
    ExReleaseSpinLockExclusive(&dword_140E34CE8, v7);
  return v5;
}
