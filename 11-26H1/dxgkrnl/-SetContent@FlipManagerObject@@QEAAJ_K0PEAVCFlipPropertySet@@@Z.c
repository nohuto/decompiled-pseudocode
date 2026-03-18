/*
 * XREFs of ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x14001B5F4
 * Callers:
 *     NtFlipObjectSetContent @ 0x14001B470 (NtFlipObjectSetContent.c)
 * Callees:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x14001C354 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall FlipManagerObject::SetContent(
        FlipManagerObject *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct CFlipPropertySet *a4)
{
  char *v4; // rdi
  int v8; // ebx

  v4 = (char *)this + 32;
  v8 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v8 >= 0 )
  {
    v8 = CFlipManager::SetContent((CFlipManager *)v4, a2, a3, a4);
    CPushLock::ReleaseLock((CPushLock *)(v4 + 8));
  }
  return (unsigned int)v8;
}
