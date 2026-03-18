/*
 * XREFs of ?VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227C60
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkGetFeatureDescriptor@@YAPEBUDXGK_FEATURE_DESC@@W4_DXGK_FEATURE_ID@@@Z @ 0x14028930C (-DxgkGetFeatureDescriptor@@YAPEBUDXGK_FEATURE_DESC@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     DpiIsFeatureEnabled @ 0x1403EC964 (DpiIsFeatureEnabled.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusIsFeatureEnabled(struct VMBPACKETCOMPLETION__ **a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 FeatureDescriptor; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v6 = 0LL;
    LODWORD(v6) = DpiIsFeatureEnabled(0LL, *(unsigned int *)(v2 + 24), 0LL, (char *)&v6 + 10);
    if ( (BYTE12(v6) & 2) != 0 )
    {
      FeatureDescriptor = DxgkGetFeatureDescriptor(*(unsigned int *)(v3 + 24));
      DWORD1(v6) = *(_DWORD *)FeatureDescriptor;
      WORD4(v6) = *(_WORD *)(FeatureDescriptor + 4);
    }
    VmBusCompletePacket(a1[16], &v6, 0x10u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
