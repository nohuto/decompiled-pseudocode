/*
 * XREFs of ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1400A9CBC
 * Callers:
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1400A9D68 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140122390 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CDeletedNotificationList::EnsureTagAllocation(
        DirectComposition::CDeletedNotificationList *this)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rcx
  int v4; // esi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned int v8; // edx
  size_t v9; // r8
  __int64 v10; // r9
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 3);
  v3 = *((unsigned int *)this + 11);
  v4 = 0;
  if ( (_DWORD)v3 + *((_DWORD *)this + 12) == v1 )
  {
    v6 = v3;
    v7 = v1 - *((unsigned int *)this + 10);
    v4 = DirectComposition::CDCompDynamicArrayBase::Grow(this, 1uLL, 0x626E4344u);
    if ( v4 < 0 )
      return (unsigned int)v4;
    if ( v6 > v7 )
    {
      v8 = *((_DWORD *)this + 10);
      v9 = *((_QWORD *)this + 4);
      v10 = *(_QWORD *)this;
      *((_DWORD *)this + 10) = v8 + 1;
      Src = *(_QWORD *)(v9 * v8 + v10);
      memmove((void *)(v10 + v9 * (*((_QWORD *)this + 3) - 1LL)), &Src, v9);
    }
  }
  ++*((_DWORD *)this + 12);
  return (unsigned int)v4;
}
