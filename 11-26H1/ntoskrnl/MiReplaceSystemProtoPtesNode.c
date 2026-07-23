/*
 * XREFs of MiReplaceSystemProtoPtesNode @ 0x140714D44
 * Callers:
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiObtainProtoBaseFromNode @ 0x140443F40 (MiObtainProtoBaseFromNode.c)
 */

void __fastcall MiReplaceSystemProtoPtesNode(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbp
  KIRQL v5; // si
  bool v6; // r10
  _QWORD *CycleTime; // r11
  _QWORD *v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiObtainProtoBaseFromNode(a1, &v9);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
  RtlAvlRemoveNode((unsigned __int64 *)&stru_140E2D2D0.CycleTime, (__int64)a1);
  a1[3] &= ~8uLL;
  v6 = 0;
  CycleTime = (_QWORD *)stru_140E2D2D0.CycleTime;
  if ( !stru_140E2D2D0.CycleTime )
    goto LABEL_5;
  while ( v4 < MiObtainProtoBaseFromNode(CycleTime, &v9) )
  {
    v8 = (_QWORD *)*CycleTime;
    if ( !*CycleTime )
      goto LABEL_5;
LABEL_8:
    CycleTime = v8;
  }
  v8 = (_QWORD *)CycleTime[1];
  if ( v8 )
    goto LABEL_8;
  v6 = 1;
LABEL_5:
  RtlAvlInsertNodeEx((unsigned __int64 *)&stru_140E2D2D0.CycleTime, (unsigned __int64)CycleTime, v6, a2);
  a2[3] |= 8uLL;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
  else
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime, v5);
}
