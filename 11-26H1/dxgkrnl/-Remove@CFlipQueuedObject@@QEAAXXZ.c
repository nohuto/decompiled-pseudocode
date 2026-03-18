/*
 * XREFs of ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x1400184EC
 * Callers:
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140018B90 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001C4D8 (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipQueuedObject::Remove(CFlipQueuedObject *this)
{
  __int64 *v1; // rdx
  __int64 *v2; // r8
  __int64 **v3; // rax
  _QWORD *v4; // rax

  v1 = (__int64 *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  v2 = (__int64 *)*v1;
  if ( *(__int64 **)(*v1 + 8) != v1
    || (v3 = *(__int64 ***)((((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64))
                          + 8),
        *v3 != v1) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  v2[1] = (__int64)v3;
  v4 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v4[1] = v4;
  *v4 = v4;
}
