/*
 * XREFs of DxgkOpenResource @ 0x1403CDAA0
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140228E80 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403CDBFC (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 */

__int64 __fastcall DxgkOpenResource(void *Src)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v5; // [rsp+28h] [rbp-70h] BYREF
  __int64 v6; // [rsp+30h] [rbp-68h]
  char v7; // [rsp+38h] [rbp-60h]
  _DWORD v8[22]; // [rsp+40h] [rbp-58h] BYREF

  v5 = -1;
  v6 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v7 = 1;
    v5 = 2005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v7 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v5, 2005);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    memset(v8, 0, 0x48uLL);
    RtlCopyFromUser(v8, Src, 0x48uLL);
  }
  v2 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(Src);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v5);
  if ( v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
  return v2;
}
