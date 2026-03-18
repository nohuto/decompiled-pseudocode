/*
 * XREFs of ?KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14026F7A0
 * Callers:
 *     ?KiAbProcessEffectiveIoPriorityChange@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1402055E8 (-KiAbProcessEffectiveIoPriorityChange@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     ?KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x140237C68 (-KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     PsBoostThreadIoEx @ 0x1402468A0 (PsBoostThreadIoEx.c)
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026E664 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272FF0 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 *     ?KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z @ 0x1404D6F48 (-KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall LegacyAutoBoost::KiAbThreadInsertList(
        LegacyAutoBoost *this,
        struct _KTHREAD *a2,
        struct _SINGLE_LIST_ENTRY *a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  unsigned int v4; // edi
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)this + 16, 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *((_QWORD *)this + 8) );
  }
  if ( a3->Next == (struct _SINGLE_LIST_ENTRY *)1 )
  {
    v4 = 1;
    a3->Next = *(struct _SINGLE_LIST_ENTRY **)&a2->Header.Lock;
    *(_QWORD *)&a2->Header.Lock = a3;
  }
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 )
    _InterlockedAdd16((volatile signed __int16 *)this + 434, 1u);
  return v4;
}
