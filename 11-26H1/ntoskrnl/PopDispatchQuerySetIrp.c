/*
 * XREFs of PopDispatchQuerySetIrp @ 0x14048089C
 * Callers:
 *     PoHandleIrp @ 0x1404804CC (PoHandleIrp.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 */

LONG __fastcall PopDispatchQuerySetIrp(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rdx

  v2 = a1[23];
  *(_BYTE *)(v2 + 3) |= 1u;
  ObfReferenceObjectWithTag(*(PVOID *)(v2 + 40), 0x72496F50u);
  v3 = a1 + 21;
  if ( a1 == (_QWORD *)PopInrushIrp )
  {
    v5 = PopIrpWorkerList;
    if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList )
LABEL_3:
      __fastfail(3u);
    *v3 = PopIrpWorkerList;
    a1[22] = &PopIrpWorkerList;
    *(_QWORD *)(v5 + 8) = v3;
    PopIrpWorkerList = (__int64)(a1 + 21);
  }
  else
  {
    v4 = (_QWORD *)qword_140F103C8;
    if ( *(__int64 **)qword_140F103C8 != &PopIrpWorkerList )
      goto LABEL_3;
    *v3 = &PopIrpWorkerList;
    a1[22] = v4;
    *v4 = v3;
    qword_140F103C8 = (__int64)(a1 + 21);
  }
  return KeReleaseSemaphore(&PopIrpWorkerSemaphore, 0, 1, 0);
}
