/*
 * XREFs of ?GetPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1806917B0
 * Callers:
 *     ?GetPinnedItem@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180688F90 (-GetPinnedItem@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1CPinList@@QEAA@XZ @ 0x18068C154 (--1CPinList@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18068EC70 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x1806943F0 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::GetPinnedItem(CPinnedList *this, const struct _ITEMIDLIST *a2, struct _ITEMIDLIST **a3)
{
  signed int v5; // ebx
  const ITEMIDLIST **PidlOrAppID; // rax
  struct _ITEMIDLIST *v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v5 = CPinList::Load((CPinList *)&v9, (CPinnedList *)((char *)this - 16));
  if ( v5 >= 0 )
  {
    v5 = 1;
    PidlOrAppID = CPinList::FindPidlOrAppID((HDSA *)&v9, a2, 0, 0LL);
    if ( PidlOrAppID )
    {
      v7 = ILClone(*PidlOrAppID);
      *a3 = v7;
      v5 = v7 == 0LL ? 0x8007000E : 0;
    }
  }
  CPinList::~CPinList((CPinList *)&v9);
  return (unsigned int)v5;
}
