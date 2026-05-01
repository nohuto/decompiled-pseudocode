/*
 * XREFs of CrmRegistrationReadyQueueRemove @ 0x18002143C
 * Callers:
 *     CrmActivityUpdate @ 0x18001E5C0 (CrmActivityUpdate.c)
 *     CrmRegistrationReadyQueueRemoveAndNotify @ 0x18001ECC8 (CrmRegistrationReadyQueueRemoveAndNotify.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRegistrationReadyQueueRemove(__int64 a1, int a2)
{
  unsigned int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 UnbiasedInterruptTimeMs64; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-59h] BYREF
  __int64 v18; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v20[32]; // [rsp+58h] [rbp-39h] BYREF
  UUID *v21; // [rsp+78h] [rbp-19h]
  __int64 v22; // [rsp+80h] [rbp-11h]
  __int64 *v23; // [rsp+88h] [rbp-9h]
  __int64 v24; // [rsp+90h] [rbp-1h]
  __int64 *v25; // [rsp+98h] [rbp+7h]
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  __int64 *v27; // [rsp+A8h] [rbp+17h]
  __int64 v28; // [rsp+B0h] [rbp+1Fh]

  if ( !a2 )
  {
    RtlAcquireSRWLockExclusive(&unk_1800E3958);
    dword_1800E3960 = GetCurrentThreadId();
  }
  v4 = 0;
  if ( *(_QWORD *)(a1 + 40) != -1LL )
  {
    RtlRbRemoveNode(&xmmword_1800E3968, a1 + 24);
    *(_QWORD *)(a1 + 40) = -1LL;
    v4 = 1;
    v5 = *(_QWORD *)(a1 + 48);
    RtlAcquireSRWLockExclusive(v5);
    *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
    if ( *(_DWORD *)(a1 + 64) == 1301 )
    {
      v6 = *(_QWORD *)(a1 + 264);
      v7 = *(_QWORD *)(a1 + 288);
      UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
      v9 = *(_QWORD *)(a1 + 336);
      v10 = UnbiasedInterruptTimeMs64 - v7;
      *(_QWORD *)(a1 + 312) += UnbiasedInterruptTimeMs64 - v7;
      v11 = UnbiasedInterruptTimeMs64 - v6;
      if ( v9 <= UnbiasedInterruptTimeMs64 - v6 )
        v9 = UnbiasedInterruptTimeMs64 - v6;
      *(_QWORD *)(a1 + 336) = v9;
      CempLockAcquireExclusive(&unk_1800E3A08);
      qword_1800E3A60 += v10;
      if ( qword_1800E3A78 > v11 )
        v11 = qword_1800E3A78;
      dword_1800E3A10 = 0;
      qword_1800E3A78 = v11;
      RtlReleaseSRWLockExclusive(&unk_1800E3A08);
      *(_QWORD *)(a1 + 264) = -1LL;
      *(_QWORD *)(a1 + 288) = -1LL;
    }
    v12 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(v12 + 8) = 0;
    RtlReleaseSRWLockExclusive(v12);
  }
  v13 = *(_QWORD *)(a1 + 128);
  if ( !a2 )
  {
    dword_1800E3960 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E3958);
  }
  if ( v4 && (unsigned int)dword_1800E12E8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800E12E8, 1LL) )
  {
    v22 = 16LL;
    v21 = &Uuid;
    v15 = *(_QWORD *)(a1 + 48);
    v24 = 8LL;
    v26 = 8LL;
    v19 = v13;
    v16 = *(_QWORD *)(v15 + 16);
    v23 = &v17;
    v18 = *(_QWORD *)(a1 + 56);
    v25 = &v18;
    v27 = &v19;
    v17 = v16;
    v28 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CC0B4, 0LL, 0LL, 6, v20);
  }
  return v4;
}
