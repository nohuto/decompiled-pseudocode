/*
 * XREFs of ?KiAbpTryDecrementIoWaiterCounts@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140479360
 * Callers:
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AutoBoost::KiAbpTryDecrementIoWaiterCounts(
        AutoBoost *this,
        struct AutoBoost::_AB_HEAD_ENTRY *a2,
        struct AutoBoost::_AB_THREAD_ENTRY *a3)
{
  char v3; // al
  _BYTE *v4; // r8

  v3 = *((_BYTE *)a2 + 32);
  v4 = (char *)this + 76;
  if ( (v3 & 8) != 0 )
  {
    --*v4;
    *((_BYTE *)a2 + 32) &= ~8u;
    v3 = *((_BYTE *)a2 + 32);
  }
  if ( (v3 & 0x10) != 0 )
  {
    *(_DWORD *)v4 ^= ((unsigned __int16)*(_DWORD *)v4 ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)v4 >> 8) - 1) << 8)) & 0x7F00;
    *((_BYTE *)a2 + 32) &= ~0x10u;
  }
}
