/*
 * XREFs of LdrpDestroyNode @ 0x1800E5D90
 * Callers:
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall LdrpDestroyNode(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v3; // rbx

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    do
    {
      v3 = (_QWORD *)*v1;
      RtlFreeHeap_0();
      v1 = v3;
    }
    while ( v3 );
  }
  return RtlFreeHeap_0();
}
