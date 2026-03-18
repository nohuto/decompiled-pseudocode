/*
 * XREFs of ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14003E610
 * Callers:
 *     DxgNotifyDpcCB @ 0x1400374A0 (DxgNotifyDpcCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x14003E6EC (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x14003E84C (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x14006B70C (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x14009B424 (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 */

void __fastcall DXGDODPRESENT::NotifyDpc(DXGDODPRESENT *this, struct DXGADAPTER *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rsi
  __int64 v6; // rbx
  unsigned int updated; // eax
  struct DXGGLOBAL *Global; // rax
  bool v9; // [rsp+20h] [rbp-28h]
  _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = _InterlockedExchange64((volatile __int64 *)this + 10, 0LL);
        (unsigned int)v2 < *(_DWORD *)this;
        v2 = (unsigned int)(v2 + 1) )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + v2 + 4, 0) )
    {
      v6 = 3040LL * (unsigned int)v2;
      updated = BLTQUEUE::UpdateVsyncCount((BLTQUEUE *)(v6 + *((_QWORD *)this + 1)), 0LL);
      LODWORD(v6) = *(_DWORD *)(*((_QWORD *)this + 1) + v6 + 260);
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(*((ADAPTER_DISPLAY **)a2 + 395), a2, v2, updated, v9);
      Global = DXGGLOBAL::GetGlobal();
      HOSTVMMONITORMAPPING::TriggerRemoteVsync(
        (struct DXGGLOBAL *)((char *)Global + 305328),
        *(struct _LUID *)((char *)a2 + 412),
        v6,
        0,
        0);
    }
    if ( (i & 3) != 0 )
    {
      v10.VidPnSourceId = v2;
      v10.ProgressId = ((unsigned __int8)i >> 1) & 1;
      DXGDODPRESENT::PresentDisplayOnlySetProgress(this, &v10);
    }
    i >>= 2;
  }
}
