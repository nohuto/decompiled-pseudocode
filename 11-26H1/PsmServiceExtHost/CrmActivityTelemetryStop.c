/*
 * XREFs of CrmActivityTelemetryStop @ 0x18005DD44
 * Callers:
 *     CrmRegistrationNotify @ 0x180020C30 (CrmRegistrationNotify.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 */

void __fastcall CrmActivityTelemetryStop(__int64 a1, int a2)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 UnbiasedInterruptTimeMs64; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax

  if ( *(_DWORD *)(a1 + 64) == 1301 )
  {
    v3 = a2;
    v4 = *(_QWORD *)(a1 + 8LL * a2 + 248);
    v5 = *(_QWORD *)(a1 + 8LL * a2 + 272);
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    v7 = *(_QWORD *)(a1 + 8 * v3 + 320);
    v8 = UnbiasedInterruptTimeMs64 - v5;
    *(_QWORD *)(a1 + 8 * v3 + 296) += UnbiasedInterruptTimeMs64 - v5;
    v9 = UnbiasedInterruptTimeMs64 - v4;
    if ( v7 <= UnbiasedInterruptTimeMs64 - v4 )
      v7 = UnbiasedInterruptTimeMs64 - v4;
    *(_QWORD *)(a1 + 8 * v3 + 320) = v7;
    CempLockAcquireExclusive((__int64)&unk_1800E3A08);
    v10 = *((_QWORD *)&CrmGlobals + v3 + 85);
    *((_QWORD *)&CrmGlobals + v3 + 82) += v8;
    if ( v10 <= v9 )
      v10 = v9;
    *((_QWORD *)&CrmGlobals + v3 + 85) = v10;
    dword_1800E3A10 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E3A08);
    *(_QWORD *)(a1 + 8 * v3 + 248) = -1LL;
    *(_QWORD *)(a1 + 8 * v3 + 272) = -1LL;
  }
}
