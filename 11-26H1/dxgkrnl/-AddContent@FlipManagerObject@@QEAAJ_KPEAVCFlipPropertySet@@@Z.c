/*
 * XREFs of ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x140044948
 * Callers:
 *     NtFlipObjectAddContent @ 0x140044810 (NtFlipObjectAddContent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1400449B8 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::AddContent(
        FlipManagerObject *this,
        unsigned __int64 a2,
        struct CFlipPropertySet *a3)
{
  char *v3; // rdi
  int v6; // ebx

  v3 = (char *)this + 32;
  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    v6 = CFlipManager::AddContent((CFlipManager *)v3, a2, a3);
    CPushLock::ReleaseLock((CPushLock *)(v3 + 8));
  }
  return (unsigned int)v6;
}
