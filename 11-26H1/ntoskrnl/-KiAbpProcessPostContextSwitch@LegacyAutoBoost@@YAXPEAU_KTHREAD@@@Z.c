/*
 * XREFs of ?KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x14023D580
 * Callers:
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 * Callees:
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448C0C (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 *     ?KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448DD0 (-KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z.c)
 *     ?KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE@1@KK@Z @ 0x14047F03C (-KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE.c)
 */

void __fastcall LegacyAutoBoost::KiAbpProcessPostContextSwitch(
        LegacyAutoBoost *this,
        struct _KTHREAD *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *v6; // r8
  unsigned int v7; // ebp
  bool i; // zf
  unsigned int v9; // ecx
  __int64 v10; // r14
  __int64 v11; // rsi
  struct _KLOCK_ENTRY *v12; // rax
  struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *v13; // rdx
  struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *v14; // r9
  __int64 v15; // rcx
  struct _KLOCK_ENTRY v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h]

  v4 = *((_QWORD *)this + 143);
  memset(&v16, 0, 56);
  if ( v4 )
  {
    v6 = (struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *)((unsigned int)(1LL << *(_BYTE *)(v4 + 12)) - 1);
    if ( (_DWORD)v6 != (*(unsigned __int16 *)(v4 + 8) | *(unsigned __int16 *)(v4 + 10)) )
    {
      if ( *((_BYTE *)this + 793) )
      {
        v7 = ((1LL << *(_BYTE *)(v4 + 12)) - 1) ^ (*(unsigned __int16 *)(v4 + 8) | *(unsigned __int16 *)(v4 + 10));
        for ( i = !_BitScanForward(&v9, v7); !i; i = !_BitScanForward(&v9, v7) )
        {
          v10 = v9;
          v7 &= v7 - 1;
          v11 = 88LL * v9 + v4;
          if ( !*(_BYTE *)(v11 + 25) && !*(_DWORD *)(v11 + 96) )
          {
            v12 = LegacyAutoBoost::KiAbAcquireLocksForEntry(
                    (LegacyAutoBoost *)(v11 + 16),
                    &v16,
                    v6,
                    a4,
                    *(_DWORD *)&v16.LockState.0);
            if ( *(_DWORD *)(v11 + 96) || *(__int64 *)(v11 + 16) >= 0 )
            {
              LegacyAutoBoost::KiAbReleaseLocksForEntry((LegacyAutoBoost *)&v16, v13);
            }
            else
            {
              LegacyAutoBoost::KiAbEntryRemoveEntryFromTreeAndRelease((LegacyAutoBoost *)(v11 + 16), v12, &v16, v14);
              *(_QWORD *)(v11 + 16) = 0LL;
              *(_WORD *)(v4 + 8) |= (unsigned __int8)(1 << (*(_BYTE *)(v11 + 24) & 0x3F));
              v15 = *((_QWORD *)this + 100);
              if ( v15 )
              {
                v17 = *(_QWORD *)(v15 + 8 * v10);
                HIBYTE(v17) &= ~0x80u;
                *(_QWORD *)(v15 + 8 * v10) = v17;
              }
            }
          }
        }
      }
    }
  }
}
