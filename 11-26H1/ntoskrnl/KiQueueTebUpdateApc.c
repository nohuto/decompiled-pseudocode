/*
 * XREFs of KiQueueTebUpdateApc @ 0x1402094C4
 * Callers:
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140202DF8 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 */

__int64 __fastcall KiQueueTebUpdateApc(__int64 a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v3; // rbx
  __int64 v5; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = a1 + 1824;
  if ( *(_QWORD *)(a1 + 240) && (*(_DWORD *)(a1 + 116) & 0x4000) != 0 && !*(_BYTE *)(a1 + 1906) )
  {
    *(_BYTE *)(a1 + 1906) = 1;
    KiInsertQueueApc(a1 + 1824);
    LOBYTE(v5) = a2;
    return KiSignalThreadForApc(CurrentPrcb, v3, v5, 1LL);
  }
  return result;
}
