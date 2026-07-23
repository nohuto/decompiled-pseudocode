/*
 * XREFs of ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026DBD4
 * Callers:
 *     ?KiAbCpuBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@CPEAU_SINGLE_LIST_ENTRY@@11@Z @ 0x14026EAB0 (-KiAbCpuBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@CPEAU_SINGLE_LIST_ENTRY@@11@Z.c)
 *     ?KiAbIoBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@KPEAU_SINGLE_LIST_ENTRY@@11@Z @ 0x14026EBB8 (-KiAbIoBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@KPEAU_SINGLE_LIST_ENTRY@@11@Z.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x14026C7A0 (PsGetBaseIoPriorityThread.c)
 *     ?KiAbThreadGetIoQoSPriority@LegacyAutoBoost@@YA?AW4KI_AB_IO_QOS_PRIORITY@1@PEAU_KTHREAD@@@Z @ 0x14026DE44 (-KiAbThreadGetIoQoSPriority@LegacyAutoBoost@@YA-AW4KI_AB_IO_QOS_PRIORITY@1@PEAU_KTHREAD@@@Z.c)
 *     ?KiAbEntryGetCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026DE68 (-KiAbEntryGetCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14026ED10 (-KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     KiSetPriorityFloor @ 0x1403825B0 (KiSetPriorityFloor.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1404AAB54 (EtwTraceAutoBoostSetFloor.c)
 *     ?KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z @ 0x1404D0718 (-KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z.c)
 */

__int64 __fastcall LegacyAutoBoost::KiAbSetMinimumThreadPriority(
        struct _KLOCK_ENTRY *this,
        struct _KLOCK_ENTRY *a2,
        struct LegacyAutoBoost::_AB_PRIORITY *a3,
        struct _KTHREAD *a4,
        struct _SINGLE_LIST_ENTRY *a5,
        struct _SINGLE_LIST_ENTRY *a6)
{
  unsigned __int64 EntryLock; // rdi
  unsigned int v8; // ebx
  int IoPriorityThread; // r15d
  struct _KLOCK_ENTRY *v10; // rdx
  signed __int8 CpuPriorityKey; // al
  char *v12; // r9
  char v13; // r13
  _KLOCK_ENTRY_BOOST_BITMAP *p_BoostBitmap; // rsi
  char v15; // bp
  int BaseIoPriorityThread; // eax
  int v17; // r8d
  __int64 v18; // r9
  unsigned int v19; // r10d
  _KLOCK_ENTRY_BOOST_BITMAP *v20; // r12
  int v21; // eax
  unsigned int *v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+50h] [rbp-48h]
  int v25; // [rsp+54h] [rbp-44h]
  char v26; // [rsp+58h] [rbp-40h]
  char IoQoSPriority; // [rsp+5Ch] [rbp-3Ch]
  char v28; // [rsp+A0h] [rbp+8h]

  EntryLock = this[-(this->StaticByte & 0x3F) - 1].EntryLock;
  v28 = *(_BYTE *)(EntryLock + 195);
  v8 = 0;
  IoPriorityThread = PsGetIoPriorityThread(EntryLock, a2, a3, a2);
  v26 = 2;
  if ( IoPriorityThread < 2 && *(_DWORD *)(EntryLock + 1504) )
    LOBYTE(IoPriorityThread) = 2;
  IoQoSPriority = LegacyAutoBoost::KiAbThreadGetIoQoSPriority(EntryLock);
  v24 = 0;
  v25 = 0;
  LODWORD(a6->Next) = 0;
  CpuPriorityKey = LegacyAutoBoost::KiAbEntryGetCpuPriorityKey(this, v10);
  v13 = *v12;
  p_BoostBitmap = &this->BoostBitmap;
  v15 = 1;
  if ( CpuPriorityKey >= *v12 )
  {
    v13 = 0;
  }
  else
  {
    LOBYTE(v24) = *v12;
    p_BoostBitmap->AllBoosts = p_BoostBitmap->AllBoosts & 0xC0000000 ^ (p_BoostBitmap->AllBoosts | (1 << (v13 - 1))) & 0x3FFFFFFF;
    v25 = (unsigned __int8)KiSetPriorityFloor(EntryLock);
  }
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(EntryLock);
  v20 = &this->BoostBitmap;
  if ( BaseIoPriorityThread >= *(char *)(v18 + 1)
    || (p_BoostBitmap->AllBoosts & 0x40000000) != 0
    || !LegacyAutoBoost::KiAbThreadBoostIoPriority((LegacyAutoBoost *)EntryLock, (struct _KTHREAD *)a5, 0LL, v19, v23) )
  {
    v26 = 0;
  }
  else
  {
    p_BoostBitmap->AllBoosts |= 0x40000000u;
    v20 = &this->BoostBitmap;
    v25 = 1;
    BYTE1(v24) = 2;
  }
  if ( (*(_DWORD *)(EntryLock + 1512) == 0) < (char)a2->Reserved[1]
    && (p_BoostBitmap->AllBoosts & 0x80000000) == 0
    && LegacyAutoBoost::KiAbThreadBoostIoPriority(
         (LegacyAutoBoost *)EntryLock,
         (struct _KTHREAD *)a5,
         (struct _SINGLE_LIST_ENTRY *)1,
         (unsigned int)a6,
         v23) )
  {
    v20->AllBoosts |= 0x80000000;
    v21 = 1;
    BYTE2(v24) = 1;
  }
  else
  {
    v15 = 0;
    v21 = v25;
  }
  if ( a4 && v21 && *(_BYTE *)(EntryLock + 792) )
    LegacyAutoBoost::KiAbThreadInsertList(
      (LegacyAutoBoost *)EntryLock,
      a4,
      (struct _SINGLE_LIST_ENTRY *)(EntryLock + 808),
      (struct _SINGLE_LIST_ENTRY *)v18);
  if ( (WORD2(xmmword_140FC0C10) & 0x1000) != 0 && v24 )
  {
    LOBYTE(v18) = v26;
    LOBYTE(v17) = v13;
    EtwTraceAutoBoostSetFloor(
      EntryLock,
      *(_DWORD *)&this->LockState.0 & 0xFFFFFFFC,
      v17,
      v18,
      v15,
      v28,
      IoPriorityThread,
      IoQoSPriority);
  }
  LOBYTE(v8) = v13 != 0;
  return v8;
}
