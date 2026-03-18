/*
 * XREFs of MiFillFileOnlyProtoAsBad @ 0x1406F9DB0
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x14086D164 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiMakeSubsectionPte @ 0x1404B5EF8 (MiMakeSubsectionPte.c)
 */

__int64 __fastcall MiFillFileOnlyProtoAsBad(__int64 a1, unsigned __int64 *a2)
{
  __int64 SubsectionPte; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int8 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 17;
  SubsectionPte = MiMakeSubsectionPte(a1);
  v4 = MiLockProtoPoolPageForce((ULONG_PTR)a2, &v7);
  v5 = MiLockLeafPage(a2, 0);
  if ( v5 )
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    *a2 = SubsectionPte;
  return MiUnlockProtoPoolPage(v4, v7);
}
