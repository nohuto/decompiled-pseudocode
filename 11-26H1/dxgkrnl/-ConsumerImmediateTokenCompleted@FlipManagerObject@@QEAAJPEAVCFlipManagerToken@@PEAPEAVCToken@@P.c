/*
 * XREFs of ?ConsumerImmediateTokenCompleted@FlipManagerObject@@QEAAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x1400189B4
 * Callers:
 *     ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018990 (-FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFl.c)
 * Callees:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerImmediateTokenCompleted(
        FlipManagerObject *this,
        struct CFlipManagerToken *a2,
        struct CToken **a3,
        struct CFlipManagerSignal **a4)
{
  char *v4; // rdi
  int v8; // ebx

  v4 = (char *)this + 32;
  v8 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v8 >= 0 )
  {
    CFlipManager::ConsumerImmediateTokenCompleted((CFlipManager *)v4, a2, a3, a4);
    CPushLock::ReleaseLock((CPushLock *)(v4 + 8));
  }
  return (unsigned int)v8;
}
