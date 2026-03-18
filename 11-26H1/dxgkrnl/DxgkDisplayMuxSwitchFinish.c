/*
 * XREFs of DxgkDisplayMuxSwitchFinish @ 0x1400912B4
 * Callers:
 *     NtDxgkDisplayMuxSwitchFinish @ 0x1401B97D0 (NtDxgkDisplayMuxSwitchFinish.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x14008A910 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x14008C2F8 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 */

void __fastcall DxgkDisplayMuxSwitchFinish(_QWORD *a1)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *v4; // rdx
  PVOID v5; // rbx
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  char v9; // [rsp+40h] [rbp-10h]
  PVOID Object; // [rsp+60h] [rbp+10h] BYREF

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v9 = 1;
    v7 = 2227;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 2227);
  v2 = (void *)*a1;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(v2, 0x20000u, g_pDpDisplayMuxSwitchNtObject, 1, &Object, 0LL);
  if ( !CheckFailed(v3, 1280, (__int64)(a1 + 1), 0x125Fu) )
  {
    v4 = (struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *)(a1 + 8);
    v5 = Object;
    DISPLAY_MUX_SWITCH_OPERATION::FinishSwitch(*(DISPLAY_MUX_SWITCH_OPERATION **)Object, v4);
    ObfDereferenceObject(v5);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( v9 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
  }
}
