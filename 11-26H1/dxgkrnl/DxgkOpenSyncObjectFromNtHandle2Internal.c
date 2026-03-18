/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1403F4984
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14006A624 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x1400A2A20 (-Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z.c)
 * Callees:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F49D0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Internal(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  void *v4; // [rsp+20h] [rbp-18h]

  return DxgkOpenSyncObjectFromNtHandle2Impl(a1, 0, a2, a3, v4);
}
