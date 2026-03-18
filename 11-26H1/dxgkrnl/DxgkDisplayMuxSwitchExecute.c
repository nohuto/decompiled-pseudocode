/*
 * XREFs of DxgkDisplayMuxSwitchExecute @ 0x1400911A0
 * Callers:
 *     NtDxgkDisplayMuxSwitchExecute @ 0x1401B9650 (NtDxgkDisplayMuxSwitchExecute.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x14008A910 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 */

void __fastcall DxgkDisplayMuxSwitchExecute(_QWORD *a1)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  int *v4; // r8
  struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *v5; // rdx
  PVOID v6; // rbx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h]
  char v10; // [rsp+40h] [rbp-10h]
  PVOID Object; // [rsp+60h] [rbp+10h] BYREF

  v8 = -1;
  v9 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v10 = 1;
    v8 = 2226;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2226);
  v2 = (void *)*a1;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(v2, 0x20000u, g_pDpDisplayMuxSwitchNtObject, 1, &Object, 0LL);
  if ( !CheckFailed(v3, 1024, (__int64)(a1 + 1), 0x1243u) )
  {
    v4 = (int *)(a1 + 28);
    v5 = (struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *)(a1 + 8);
    v6 = Object;
    DISPLAY_MUX_SWITCH_OPERATION::PerformSwitch(*(DISPLAY_MUX_SWITCH_OPERATION **)Object, v5, v4);
    ObfDereferenceObject(v6);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
  }
}
