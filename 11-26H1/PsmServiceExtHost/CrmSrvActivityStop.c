/*
 * XREFs of CrmSrvActivityStop @ 0x18001BD90
 * Callers:
 *     CrmpInProcActivityStop @ 0x18001BAE0 (CrmpInProcActivityStop.c)
 * Callees:
 *     CrmLogSrvActivityStopStop @ 0x18001C010 (CrmLogSrvActivityStopStop.c)
 *     CrmActivityCleanup @ 0x180022350 (CrmActivityCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CrmSrvActivityStop(__int64 a1, __int64 a2)
{
  char *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // r9d
  BOOLEAN result; // al
  signed __int64 v11; // rdi
  bool v12; // cc
  signed __int64 v13; // rdi
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  char v15[32]; // [rsp+38h] [rbp-50h] BYREF
  UUID *v16; // [rsp+58h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp-28h]

  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 && (qword_1800E1300 & 1) == qword_1800E1300 )
  {
    v17 = 16LL;
    v16 = &Uuid;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CC430, 0LL, 0LL, 3, v15);
  }
  RtlAcquireSRWLockShared(a2);
  for ( i = *(char **)(a2 + 56); ; i = *(char **)i )
  {
    if ( i == (char *)(a2 + 56) )
    {
      CrmLogSrvActivityStopStop(a2, a1, 0, 3, -1LL, -1073741811);
      return RtlReleaseSRWLockShared(a2);
    }
    if ( *((_QWORD *)i + 7) == a1 )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)i + 2) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(a2);
  RtlAcquireSRWLockExclusive(i + 80);
  *((_DWORD *)i + 22) = GetCurrentThreadId();
  v14 = 0LL;
  if ( *((_DWORD *)i + 40) )
  {
    RtlQueryUnbiasedInterruptTime(&v14);
    v5 = v14;
    v6 = v14 - *((_QWORD *)i + 24);
    if ( *((_DWORD *)i + 25) == *((_DWORD *)i + 24) )
      *((_QWORD *)i + 25) += v6;
    else
      *((_QWORD *)i + 26) += v6;
    *((_QWORD *)i + 24) = v5;
  }
  v7 = (*((_DWORD *)i + 40))-- == 1;
  v8 = *((_QWORD *)i + 27);
  v9 = *((_DWORD *)i + 46);
  if ( v7 )
  {
    *((_DWORD *)i + 46) = 3;
    *((_QWORD *)i + 27) = -1LL;
  }
  CrmLogSrvActivityStopStop(a2, a1, (_DWORD)i, v9, v8, 0);
  *((_DWORD *)i + 22) = 0;
  result = RtlReleaseSRWLockExclusive(i + 80);
  if ( i )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)i + 2, 0xFFFFFFFFFFFFFFFFuLL);
    v12 = v11 <= 1;
    v13 = v11 - 1;
    if ( v12 )
    {
      if ( v13 )
        __fastfail(0xEu);
      CrmActivityCleanup(i);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
    }
  }
  return result;
}
