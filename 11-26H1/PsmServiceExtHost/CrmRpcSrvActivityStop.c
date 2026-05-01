/*
 * XREFs of CrmRpcSrvActivityStop @ 0x18001BB00
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogSrvActivityStopStop @ 0x18001C010 (CrmLogSrvActivityStopStop.c)
 *     CrmActivityCleanup @ 0x180022350 (CrmActivityCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvActivityStop(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v4; // r15
  int v6; // ebx
  int v7; // r14d
  __int64 *v8; // rsi
  __int64 *i; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // eax
  signed __int64 v14; // rax
  bool v15; // cc
  signed __int64 v16; // rax
  __int64 v18; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v19[32]; // [rsp+38h] [rbp-70h] BYREF
  UUID *v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h]

  v2 = 0;
  v4 = -1LL;
  v6 = 3;
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 && (qword_1800E1300 & 1) == qword_1800E1300 )
  {
    v21 = 16LL;
    v20 = &Uuid;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CC430, 0LL, 0LL, 3, v19);
  }
  v7 = 1;
  RtlAcquireSRWLockShared(a2);
  v8 = 0LL;
  for ( i = *(__int64 **)(a2 + 56); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(a2 + 56) )
    {
      v13 = -1073741811;
      goto LABEL_15;
    }
    if ( i[7] == a1 )
      break;
  }
  v8 = i;
  v2 = 1;
  if ( _InterlockedIncrement64(i + 2) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(a2);
  v7 = 0;
  RtlAcquireSRWLockExclusive(i + 10);
  *((_DWORD *)i + 22) = GetCurrentThreadId();
  v18 = 0LL;
  if ( *((_DWORD *)i + 40) )
  {
    RtlQueryUnbiasedInterruptTime(&v18);
    v10 = v18;
    v11 = v18 - i[24];
    if ( *((_DWORD *)i + 25) == *((_DWORD *)i + 24) )
      i[25] += v11;
    else
      i[26] += v11;
    i[24] = v10;
  }
  v12 = (*((_DWORD *)i + 40))-- == 1;
  v4 = i[27];
  v6 = *((_DWORD *)i + 46);
  if ( v12 )
  {
    *((_DWORD *)i + 46) = 3;
    i[27] = -1LL;
  }
  v13 = 0;
LABEL_15:
  CrmLogSrvActivityStopStop(a2, a1, (_DWORD)v8, v6, v4, v13);
  if ( v2 )
  {
    *((_DWORD *)v8 + 22) = 0;
    RtlReleaseSRWLockExclusive(v8 + 10);
  }
  if ( v7 )
    RtlReleaseSRWLockShared(a2);
  if ( v8 )
  {
    v14 = _InterlockedExchangeAdd64(v8 + 2, 0xFFFFFFFFFFFFFFFFuLL);
    v15 = v14 <= 1;
    v16 = v14 - 1;
    if ( v15 )
    {
      if ( v16 )
        __fastfail(0xEu);
      CrmActivityCleanup(v8);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    }
  }
  return 0LL;
}
