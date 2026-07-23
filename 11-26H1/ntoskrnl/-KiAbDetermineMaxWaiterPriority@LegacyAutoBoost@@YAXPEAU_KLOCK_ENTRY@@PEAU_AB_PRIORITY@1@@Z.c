/*
 * XREFs of ?KiAbDetermineMaxWaiterPriority@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@@Z @ 0x14026FB20
 * Callers:
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyAutoBoost::KiAbDetermineMaxWaiterPriority(
        LegacyAutoBoost *this,
        struct _KLOCK_ENTRY *a2,
        struct LegacyAutoBoost::_AB_PRIORITY *a3)
{
  int v4; // ecx
  __int64 v5; // rax
  char v6; // al

  *(_DWORD *)&a2->LockState.0 = 0;
  v4 = *((_DWORD *)this + 21);
  if ( (_BYTE)v4 )
    a2->Reserved[0] = 2;
  if ( (v4 & 0x7F00) != 0 )
    a2->Reserved[1] = 1;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    a2->CrossThreadReleasableAndBusyByte = *(_BYTE *)(v5 + 24);
  if ( *((_BYTE *)this + 9) )
  {
    v6 = *(_BYTE *)(*((_QWORD *)this - 11 * (*((_BYTE *)this + 8) & 0x3F) - 2) + 195LL);
    if ( v6 > 30 )
      v6 = 30;
    if ( v6 > (char)a2->CrossThreadReleasableAndBusyByte )
      a2->CrossThreadReleasableAndBusyByte = v6;
  }
}
