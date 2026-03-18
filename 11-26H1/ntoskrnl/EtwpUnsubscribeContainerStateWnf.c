/*
 * XREFs of EtwpUnsubscribeContainerStateWnf @ 0x1406C4440
 * Callers:
 *     <none>
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140A41930 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void EtwpUnsubscribeContainerStateWnf()
{
  __int64 v0; // rbx

  v0 = EtwpHostSiloState;
  ExUnsubscribeWnfStateChange(*(_QWORD *)(EtwpHostSiloState + 4424));
  ExFreePoolWithTag(*(PVOID *)(v0 + 4440), 0);
  *(_QWORD *)(v0 + 4440) = 0LL;
}
