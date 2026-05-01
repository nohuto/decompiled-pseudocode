/*
 * XREFs of CrmRegistrationReadyQueueAdd @ 0x18001ED78
 * Callers:
 *     CrmActivityUpdate @ 0x18001E5C0 (CrmActivityUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRegistrationReadyQueueAdd(__int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+38h] [rbp-31h] BYREF
  __int64 v14; // [rsp+40h] [rbp-29h] BYREF
  char v15[32]; // [rsp+50h] [rbp-19h] BYREF
  UUID *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  unsigned __int64 *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  __int64 *v20; // [rsp+90h] [rbp+27h]
  __int64 v21; // [rsp+98h] [rbp+2Fh]
  __int64 *v22; // [rsp+A0h] [rbp+37h]
  __int64 v23; // [rsp+A8h] [rbp+3Fh]

  RtlAcquireSRWLockExclusive(&unk_1800E3958);
  dword_1800E3960 = GetCurrentThreadId();
  if ( !dword_1800E3998 )
  {
    dword_1800E3998 = 1;
    TpPostWork(qword_1800E3990);
  }
  v3 = xmmword_1800E3968;
  if ( (BYTE8(xmmword_1800E3968) & 1) != 0 && (_QWORD)xmmword_1800E3968 )
    v3 = (unsigned __int64)&xmmword_1800E3968 ^ xmmword_1800E3968;
  LOBYTE(v2) = 0;
  if ( v3 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    while ( 1 )
    {
      if ( v2 < *(_QWORD *)(v3 + 104) )
      {
        v4 = *(_QWORD *)v3;
        if ( (BYTE8(xmmword_1800E3968) & 1) != 0 )
        {
          if ( !v4 )
          {
LABEL_21:
            LOBYTE(v2) = 0;
            break;
          }
          v4 ^= v3;
        }
        if ( !v4 )
          goto LABEL_21;
      }
      else
      {
        v4 = *(_QWORD *)(v3 + 8);
        if ( (BYTE8(xmmword_1800E3968) & 1) != 0 )
        {
          if ( !v4 )
          {
LABEL_11:
            LOBYTE(v2) = 1;
            break;
          }
          v4 ^= v3;
        }
        if ( !v4 )
          goto LABEL_11;
      }
      v3 = v4;
    }
  }
  RtlRbInsertNodeEx(&xmmword_1800E3968, v3, v2, a1 + 24);
  v5 = *(_QWORD *)(a1 + 48);
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( *(_DWORD *)(a1 + 64) == 1301 )
  {
    v12 = 0LL;
    RtlQueryUnbiasedInterruptTime(&v12);
    v6 = v12 / 0x2710;
    *(_QWORD *)(a1 + 264) = v12 / 0x2710;
    *(_QWORD *)(a1 + 288) = v6;
    ++*(_DWORD *)(a1 + 352);
    RtlAcquireSRWLockExclusive(&unk_1800E3A08);
    GetCurrentThreadId();
    ++dword_1800E3A88;
    dword_1800E3A10 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E3A08);
  }
  v7 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v7 + 8) = 0;
  RtlReleaseSRWLockExclusive(v7);
  v8 = *(_QWORD *)(a1 + 128);
  dword_1800E3960 = 0;
  result = RtlReleaseSRWLockExclusive(&unk_1800E3958);
  if ( (unsigned int)dword_1800E12E8 > 5 )
  {
    result = tlgKeywordOn(&dword_1800E12E8, 1LL);
    if ( (_BYTE)result )
    {
      v17 = 16LL;
      v16 = &Uuid;
      v10 = *(_QWORD *)(a1 + 48);
      v19 = 8LL;
      v21 = 8LL;
      v14 = v8;
      v11 = *(_QWORD *)(v10 + 16);
      v18 = &v12;
      v13 = *(_QWORD *)(a1 + 56);
      v20 = &v13;
      v22 = &v14;
      v12 = v11;
      v23 = 8LL;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CC126, 0LL, 0LL, 6, v15);
    }
  }
  return result;
}
