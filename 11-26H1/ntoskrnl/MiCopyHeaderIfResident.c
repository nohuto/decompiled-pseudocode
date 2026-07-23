/*
 * XREFs of MiCopyHeaderIfResident @ 0x1404AE5F4
 * Callers:
 *     MiCreateImageMapHeader @ 0x140A63364 (MiCreateImageMapHeader.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140478A34 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiUpdatePageAttributeStamp @ 0x1404C69C8 (MiUpdatePageAttributeStamp.c)
 *     MiStandbyPageContentsIntact @ 0x140708D64 (MiStandbyPageContentsIntact.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // r14d
  ULONG_PTR v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  volatile LONG *v18; // rcx
  KIRQL OldIrql; // [rsp+50h] [rbp+30h] BYREF
  __int64 v20; // [rsp+60h] [rbp+40h] BYREF
  __int64 v21; // [rsp+68h] [rbp+48h] BYREF

  v2 = *(__int64 **)(a1 + 40);
  OldIrql = 0;
  v4 = MiLockSectionControlArea(v2, 1, &OldIrql);
  v6 = v4;
  if ( !v4 )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 56) & 3) != 0
    || (v7 = *(unsigned __int64 **)(v4 + 136)) == 0LL
    || (v21 = 0LL, v20 = 0LL, (int)MiTryLockProtoPoolPageAtDpc((ULONG_PTR)v7, v5, &v20, (__int64)&v21) < 0) )
  {
    v18 = (volatile LONG *)(v6 + 72);
    if ( OldIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v18);
    else
      ExReleaseSpinLockExclusive(v18, OldIrql);
    return 0LL;
  }
  v8 = v21;
  if ( (*(_DWORD *)(v21 + 32) & 0xC00000) != 0x400000
    || (*(_DWORD *)(v21 + 32) & 0x40000000) != 0
    || MiIsPageOnBadList(v21)
    || !(unsigned int)MiStandbyPageContentsIntact(v9) )
  {
    goto LABEL_17;
  }
  v10 = *v7;
  if ( (*v7 & 1) != 0 )
  {
    v11 = 0;
  }
  else
  {
    if ( qword_140E2D8C0 )
    {
      if ( (v10 & 0x10) != 0 )
        v10 &= ~0x10uLL;
      else
        v10 &= qword_140E2D8C8;
    }
    v11 = 1;
  }
  v12 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * a2 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
LABEL_17:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v13) = OldIrql;
    MiUnlockProtoPoolPage(v20, v13, v14);
    return 0LL;
  }
  MiCopyPage(a2, v12, 4u);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( v11 )
    MiUpdatePageAttributeStamp(v8);
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v15) = OldIrql;
  MiUnlockProtoPoolPage(v20, v15, v16);
  return 1LL;
}
