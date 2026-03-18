/*
 * XREFs of _GetPointerDeviceType @ 0x140197514
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401969A0 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1401FC0FC (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x14020D788 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1402A6534 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x1401975E8 (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v4; // edx

  LOBYTE(a2) = 19;
  v2 = HMValidateHandleNoSecure(a1, a2);
  v4 = -1;
  if ( v2 && (*(_DWORD *)(v2 + 184) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v2 + 456), 0xFFFFFFFFLL, v3);
  return v4;
}
