/*
 * XREFs of ?KiAbThreadAreAllEntriesFree@LegacyAutoBoost@@YAKPEAU_KTHREAD@@@Z @ 0x140270FEC
 * Callers:
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     KeAbThreadAreAllEntriesFree @ 0x140270FC4 (KeAbThreadAreAllEntriesFree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LegacyAutoBoost::KiAbThreadAreAllEntriesFree(LegacyAutoBoost *this, struct _KTHREAD *a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d
  BOOL v4; // r10d

  v2 = *((_QWORD *)this + 143);
  v3 = 1;
  if ( v2 )
    v4 = (unsigned int)(1LL << *(_BYTE *)(v2 + 12)) - 1 == (*(unsigned __int16 *)(v2 + 8) | *(unsigned __int16 *)(v2 + 10));
  else
    v4 = 1;
  if ( (unsigned int)(1LL << *(_BYTE *)(*((_QWORD *)this + 142) + 12LL)) - 1 != (*(unsigned __int16 *)(*((_QWORD *)this + 142) + 8LL) | *(unsigned __int16 *)(*((_QWORD *)this + 142) + 10LL))
    || !v4 )
  {
    return 0;
  }
  return v3;
}
