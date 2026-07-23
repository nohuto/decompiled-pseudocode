/*
 * XREFs of ?KiAbpInitializeThreadEntries@AutoBoost@@YAXPEAU_AB_THREAD_ENTRIES@1@PEAU_KTHREAD@@K@Z @ 0x1404916FC
 * Callers:
 *     ?KiAbpInitializeThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x14049169C (-KiAbpInitializeThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AutoBoost::KiAbpInitializeThreadEntries(
        AutoBoost *this,
        struct AutoBoost::_AB_THREAD_ENTRIES *a2,
        struct _KTHREAD *a3)
{
  unsigned int v3; // r9d
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rcx
  char v8; // al

  v3 = 0;
  if ( this )
  {
    *(_QWORD *)this = a2;
    v5 = *((unsigned __int8 *)this + 14);
    *(_DWORD *)((char *)this + 10) = 0;
    *((_WORD *)this + 4) = (1LL << v5) - 1;
    if ( v5 )
    {
      v6 = -(int)a3;
      do
      {
        v7 = 6LL * v3;
        v8 = (v6 == 0 ? 0x80 : 0) | v3++ & 0x7F;
        *((_BYTE *)this + 8 * v7 + 52) = v8;
      }
      while ( v3 < *((unsigned __int8 *)this + 14) );
    }
  }
}
