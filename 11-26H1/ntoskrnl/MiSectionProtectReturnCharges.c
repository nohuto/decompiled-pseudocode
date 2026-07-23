/*
 * XREFs of MiSectionProtectReturnCharges @ 0x140A86D54
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1404C3598 (MiReturnFullProcessCharges.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiSectionProtectReturnCharges(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v1 && *(_BYTE *)(a1 + 89) )
  {
    v4 -= v1;
    v1 = 0LL;
  }
  if ( v4 )
    MiReturnCommit(*(_QWORD *)a1, v4, 0);
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    v7 = (*(unsigned int *)(v6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32)) - v5;
    *(_DWORD *)(v6 + 52) -= v5;
    *(_BYTE *)(v6 + 34) = BYTE4(v7);
    MiReturnCommit(v3, v5 - v1, 0);
    MiReturnFullProcessCharges(*(_QWORD *)(a1 + 8), v5);
  }
  v8 = *(_QWORD *)(a1 + 72);
  if ( v8 )
    MiReturnFullProcessCommitment(*(_QWORD *)(a1 + 8), v8);
}
