/*
 * XREFs of MiFillFileOnlyProtoAsBad @ 0x1406FEA80
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x140873544 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiMakeSubsectionPte @ 0x1404AF348 (MiMakeSubsectionPte.c)
 */

__int64 __fastcall MiFillFileOnlyProtoAsBad(__int64 a1, unsigned __int64 *a2)
{
  __int64 SubsectionPte; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 17;
  SubsectionPte = MiMakeSubsectionPte(a1);
  v4 = MiLockProtoPoolPageForce((ULONG_PTR)a2, &v9);
  v5 = MiLockLeafPage(a2, 0);
  if ( v5 )
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    *a2 = SubsectionPte;
  LOBYTE(v6) = v9;
  return MiUnlockProtoPoolPage(v4, v6, v7);
}
