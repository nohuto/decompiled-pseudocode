/*
 * XREFs of ?KiAbCpuBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@CPEAU_SINGLE_LIST_ENTRY@@11@Z @ 0x14026EAB0
 * Callers:
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1406001C4 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026DBD4 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 */

void __fastcall LegacyAutoBoost::KiAbCpuBoostOwners(
        struct _KLOCK_ENTRY *this,
        struct _KLOCK_ENTRY *a2,
        struct LegacyAutoBoost::_AB_PRIORITY *a3,
        struct _KTHREAD *a4,
        struct _SINGLE_LIST_ENTRY *a5)
{
  unsigned __int64 Min; // rbx
  struct _SINGLE_LIST_ENTRY *v7; // r12
  char v9; // bp
  unsigned __int64 v11; // rax
  _QWORD **v12; // rcx
  _QWORD *i; // rcx
  struct _SINGLE_LIST_ENTRY v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  Min = (unsigned __int64)this->OwnerTree.Min;
  v7 = a5;
  v9 = (char)a2;
  v15 = (unsigned __int8)a2;
  LODWORD(v14.Next) = 0;
  while ( Min && *(char *)(Min + 24) < v9 )
  {
    LegacyAutoBoost::KiAbSetMinimumThreadPriority(
      (struct _KLOCK_ENTRY *)(Min - 16),
      (struct _KLOCK_ENTRY *)&v15,
      a3,
      a4,
      v7,
      &v14);
    *(_BYTE *)(Min + 24) = v9;
    v11 = Min;
    v12 = *(_QWORD ***)(Min + 8);
    if ( v12 )
    {
      Min = *(_QWORD *)(Min + 8);
      for ( i = *v12; i; i = (_QWORD *)*i )
        Min = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        Min = *(_QWORD *)(Min + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Min || *(_QWORD *)Min == v11 )
          break;
        v11 = Min;
      }
    }
  }
  if ( !this->WaitingByte )
    LegacyAutoBoost::KiAbSetMinimumThreadPriority(this, (struct _KLOCK_ENTRY *)&v15, a3, a4, v7, &v14);
}
