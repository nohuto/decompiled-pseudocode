/*
 * XREFs of PspInsertExpansionEntry @ 0x140617B9C
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1407F5B50 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403C7AF4 (PspLockQuotaExpansion.c)
 */

void __fastcall PspInsertExpansionEntry(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  KIRQL v8; // dl
  KIRQL v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  PspLockQuotaExpansion((_DWORD *)a1, &v9, a3, a4);
  v6 = (_QWORD *)(a2 + 80);
  v7 = *(_QWORD **)(a1 + 48);
  if ( *v7 != a1 + 40 )
    __fastfail(3u);
  v6[1] = v7;
  *v6 = a1 + 40;
  *v7 = v6;
  v8 = v9;
  *(_QWORD *)(a1 + 48) = v6;
  PspUnlockQuotaExpansion(a1, v8);
}
