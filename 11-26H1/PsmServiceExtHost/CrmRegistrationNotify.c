/*
 * XREFs of CrmRegistrationNotify @ 0x180020C30
 * Callers:
 *     CrmActivityUpdate @ 0x18001E5C0 (CrmActivityUpdate.c)
 *     CrmRegistrationReadyQueueRemoveAndNotify @ 0x18001ECC8 (CrmRegistrationReadyQueueRemoveAndNotify.c)
 *     CrmActivityStart @ 0x180034D80 (CrmActivityStart.c)
 * Callees:
 *     CrmLogRegistrationNotify @ 0x180020F28 (CrmLogRegistrationNotify.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CrmActivityTelemetryStop @ 0x18005DD44 (CrmActivityTelemetryStop.c)
 */

__int64 __fastcall CrmRegistrationNotify(__int64 a1, __int64 a2, int a3)
{
  int v4; // r13d
  unsigned int v5; // r12d
  int v7; // eax
  unsigned __int64 v8; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 UnbiasedInterruptTimeMs64; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v7 = *(_DWORD *)(a2 + 124);
  if ( v18 != v7 )
  {
    v5 = 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        CrmActivityTelemetryStop(a2, 1LL);
    }
    else if ( *(_DWORD *)(a2 + 64) == 1301 )
    {
      v10 = *(_QWORD *)(a2 + 248);
      v11 = *(_QWORD *)(a2 + 272);
      UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
      v13 = *(_QWORD *)(a2 + 320);
      v14 = UnbiasedInterruptTimeMs64 - v11;
      *(_QWORD *)(a2 + 296) += UnbiasedInterruptTimeMs64 - v11;
      v15 = UnbiasedInterruptTimeMs64 - v10;
      if ( v13 <= UnbiasedInterruptTimeMs64 - v10 )
        v13 = UnbiasedInterruptTimeMs64 - v10;
      *(_QWORD *)(a2 + 320) = v13;
      RtlAcquireSRWLockExclusive(&unk_1800E3A08);
      GetCurrentThreadId();
      qword_1800E3A50 += v14;
      if ( qword_1800E3A68 > v15 )
        v15 = qword_1800E3A68;
      dword_1800E3A10 = 0;
      qword_1800E3A68 = v15;
      RtlReleaseSRWLockExclusive(&unk_1800E3A08);
      *(_QWORD *)(a2 + 248) = -1LL;
      *(_QWORD *)(a2 + 272) = -1LL;
    }
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        if ( *(_DWORD *)(a2 + 64) == 1301 )
        {
          v17 = 0LL;
          RtlQueryUnbiasedInterruptTime(&v17);
          v8 = v17 / 0x2710;
          *(_QWORD *)(a2 + 256) = v17 / 0x2710;
          *(_QWORD *)(a2 + 280) = v8;
          ++*(_DWORD *)(a2 + 348);
          RtlAcquireSRWLockExclusive(&unk_1800E3A08);
          GetCurrentThreadId();
          ++dword_1800E3A84;
          dword_1800E3A10 = 0;
          RtlReleaseSRWLockExclusive(&unk_1800E3A08);
        }
        *(_DWORD *)(a2 + 360) = 1;
      }
    }
    else
    {
      if ( *(_DWORD *)(a2 + 64) == 1301 )
      {
        v16 = CempQueryUnbiasedInterruptTimeMs64();
        *(_QWORD *)(a2 + 248) = v16;
        *(_QWORD *)(a2 + 272) = v16;
        ++*(_DWORD *)(a2 + 344);
        RtlAcquireSRWLockExclusive(&unk_1800E3A08);
        GetCurrentThreadId();
        ++dword_1800E3A80;
        dword_1800E3A10 = 0;
        RtlReleaseSRWLockExclusive(&unk_1800E3A08);
      }
      *(_DWORD *)(a2 + 356) = 1;
    }
    if ( *(_DWORD *)(a2 + 144) || *(_DWORD *)(a2 + 148) )
      v4 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 144), 0LL, &v18, 4LL, 0LL);
    *(_DWORD *)(a2 + 124) = v18;
  }
  *(_DWORD *)(a1 + 8) = 0;
  RtlReleaseSRWLockExclusive(a1);
  CrmLogRegistrationNotify(a1, a2, v5, v18, v4);
  return v5;
}
