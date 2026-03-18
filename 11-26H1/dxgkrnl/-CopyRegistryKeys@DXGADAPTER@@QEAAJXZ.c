/*
 * XREFs of ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x1401974FC
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1400361A4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x14022FAE8 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 */

__int64 __fastcall DXGADAPTER::CopyRegistryKeys(DXGADAPTER *this)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned __int16 v4[264]; // [rsp+20h] [rbp-228h] BYREF

  v1 = 0;
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry0(4LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 12876;
    return result;
  }
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x16u )
  {
    RtlStringCbCopyW((char *)v4, 0x208uLL, (char *)L"Classes");
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys((DXGADAPTER *)((char *)this + 4712), v4);
    if ( (int)result < 0 )
      return result;
    RtlStringCbCopyW((char *)v4, 0x208uLL, (char *)L"MediaFoundation\\Transforms");
    return (unsigned int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys((DXGADAPTER *)((char *)this + 4712), v4);
  }
  return v1;
}
