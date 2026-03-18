/*
 * XREFs of ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140044C7C
 * Callers:
 *     NtFlipObjectAddPoolBuffer @ 0x140044B00 (NtFlipObjectAddPoolBuffer.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140044CF8 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::AddPoolBuffer(
        FlipManagerObject *this,
        unsigned __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5)
{
  char *v5; // rdi
  int v9; // ebx

  v5 = (char *)this + 32;
  v9 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v9 >= 0 )
  {
    v9 = CFlipManager::AddPoolBuffer((CFlipManager *)v5, a2, a3, a4, a5);
    CPushLock::ReleaseLock((CPushLock *)(v5 + 8));
  }
  return (unsigned int)v9;
}
