/*
 * XREFs of LdrpDestroyNode @ 0x1800E3FA0
 * Callers:
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

LOGICAL __fastcall LdrpDestroyNode(_QWORD *BaseAddress)
{
  _QWORD *v1; // r8
  _QWORD *v4; // rbx

  v1 = (_QWORD *)BaseAddress[2];
  if ( v1 )
  {
    do
    {
      v4 = (_QWORD *)*v1;
      RtlFreeHeap_0(LdrpHeap, 0, v1);
      v1 = v4;
    }
    while ( v4 );
  }
  return RtlFreeHeap_0(LdrpHeap, 0, BaseAddress);
}
