/*
 * XREFs of PoFxPowerControl @ 0x1403C1020
 * Callers:
 *     DifPoFxPowerControlWrapper @ 0x1406971B0 (DifPoFxPowerControlWrapper.c)
 * Callees:
 *     PopFxTryReferenceDevice @ 0x14021B7B8 (PopFxTryReferenceDevice.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopPluginRequestPowerControl @ 0x1403C10D8 (PopPluginRequestPowerControl.c)
 */

__int64 __fastcall PoFxPowerControl(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  int v11; // ebx
  __int64 v12; // rcx

  v11 = PopFxTryReferenceDevice(a1, 1);
  if ( v11 >= 0 )
  {
    v11 = -1073741637;
    v12 = *(_QWORD *)(a1 + 56);
    if ( a7 )
      *a7 = 0LL;
    if ( *(_BYTE *)(v12 + 124) )
      v11 = PopPluginRequestPowerControl(*(_QWORD *)(v12 + 32), a2, a3, a4, a5, a6, (__int64)a7);
    PopFxDereferenceDevice(a1, 1);
  }
  return (unsigned int)v11;
}
