/*
 * XREFs of MiInsertMappingNode @ 0x1404D2228
 * Callers:
 *     MmAllocateMappingAddressEx @ 0x140AF4820 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 */

void __fastcall MiInsertMappingNode(_QWORD *a1)
{
  unsigned __int64 v1; // rdi
  KIRQL v3; // al
  _QWORD *v4; // rdx
  bool v5; // r8
  KIRQL v6; // bl
  _QWORD *v7; // rcx

  v1 = a1[3];
  v3 = ExAcquireSpinLockExclusive(&dword_140E34CE8);
  v4 = (_QWORD *)qword_140E34CF0;
  v5 = 0;
  v6 = v3;
  if ( !qword_140E34CF0 )
    goto LABEL_5;
  while ( v1 < v4[3] )
  {
    v7 = (_QWORD *)*v4;
    if ( !*v4 )
      goto LABEL_5;
LABEL_8:
    v4 = v7;
  }
  v7 = (_QWORD *)v4[1];
  if ( v7 )
    goto LABEL_8;
  v5 = 1;
LABEL_5:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E34CF0, (unsigned __int64)v4, v5, a1);
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34CE8);
  else
    ExReleaseSpinLockExclusive(&dword_140E34CE8, v6);
}
