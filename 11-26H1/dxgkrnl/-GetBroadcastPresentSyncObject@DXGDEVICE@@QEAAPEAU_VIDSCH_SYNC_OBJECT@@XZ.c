/*
 * XREFs of ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1401919F0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F4EA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidSchCreateSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGSYNCOBJECT@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAU_VIDSCH_CROSS_ADAPTER_SYNC_OBJECT_INFO@@PEAUVIDMM_PAGING_QUEUE@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_D3DDDI_NATIVEFENCEINFO@@7PEAVVIDMM_DEVICE@@@Z @ 0x140050988 (-VidSchCreateSyncObject@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGSYNCOBJECT@@PEAU_D3DDDI_S.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

struct _VIDSCH_SYNC_OBJECT *__fastcall DXGDEVICE::GetBroadcastPresentSyncObject(DXGDEVICE *this)
{
  char *v1; // rbx
  _QWORD *v3; // rcx
  int v4; // edx
  __int64 v6; // [rsp+30h] [rbp-98h]
  __int64 v7; // [rsp+60h] [rbp-68h]
  _DWORD v8[20]; // [rsp+70h] [rbp-58h] BYREF

  v1 = (char *)this + 208;
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 208));
  if ( !*((_QWORD *)this + 242) )
  {
    memset(v8, 0, sizeof(v8));
    v3 = (_QWORD *)*((_QWORD *)this + 2);
    v4 = 3;
    v7 = *((_QWORD *)this + 99);
    if ( *(int *)(v3[2] + 3044LL) >= 2400 )
      v4 = 5;
    v8[0] = v4;
    if ( (int)VIDSCH_EXPORT::VidSchCreateSyncObject(
                v3[92],
                v3[93],
                0LL,
                (__int64)v8,
                0xAu,
                0LL,
                v6,
                0,
                (__int64)this + 1936,
                0LL,
                0LL,
                0LL,
                v7) < 0 )
      return 0LL;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + 242);
}
