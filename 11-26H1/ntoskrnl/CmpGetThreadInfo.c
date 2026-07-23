/*
 * XREFs of CmpGetThreadInfo @ 0x140262070
 * Callers:
 *     CmpRecordRegistryLockExclusiveAcquire @ 0x140260570 (CmpRecordRegistryLockExclusiveAcquire.c)
 *     CmpDoQueryKeyName @ 0x1402606D0 (CmpDoQueryKeyName.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_KAFFINITY_EX *CmpGetThreadInfo()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *result; // rax
  int v2; // r8d
  __int64 v3; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v4; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Callers[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v6; // [rsp+50h] [rbp-B0h]
  __int128 v7; // [rsp+60h] [rbp-A0h]
  __int128 v8; // [rsp+70h] [rbp-90h]
  __int128 v9; // [rsp+80h] [rbp-80h]
  __int128 v10; // [rsp+90h] [rbp-70h] BYREF
  __int128 v11; // [rsp+A0h] [rbp-60h]
  __int128 v12; // [rsp+B0h] [rbp-50h]
  __int128 v13; // [rsp+C0h] [rbp-40h]
  __int128 v14; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v16; // [rsp+100h] [rbp+0h]
  __int64 v17; // [rsp+108h] [rbp+8h]
  __int128 *v18; // [rsp+110h] [rbp+10h]
  __int64 v19; // [rsp+118h] [rbp+18h]
  __int64 *v20; // [rsp+120h] [rbp+20h]
  __int64 v21; // [rsp+128h] [rbp+28h]

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].UserAffinity;
  if ( !result )
  {
    *(_OWORD *)Callers = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    RtlWalkFrameChain(Callers, 0xAu, 0);
    if ( Callers[0] >= PsNtosImageBase && Callers[0] <= (PVOID)PsNtosImageEnd )
      *(_QWORD *)&v10 = (char *)Callers[0] - (char *)PsNtosImageBase;
    if ( Callers[1] >= PsNtosImageBase && Callers[1] <= (PVOID)PsNtosImageEnd )
      *((_QWORD *)&v10 + 1) = (char *)Callers[1] - (char *)PsNtosImageBase;
    if ( (unsigned __int64)v6 >= (unsigned __int64)PsNtosImageBase && (unsigned __int64)v6 <= PsNtosImageEnd )
      *(_QWORD *)&v11 = v6 - (_QWORD)PsNtosImageBase;
    if ( *((_QWORD *)&v6 + 1) >= (unsigned __int64)PsNtosImageBase
      && *((_QWORD *)&v6 + 1) <= (unsigned __int64)PsNtosImageEnd )
    {
      *((_QWORD *)&v11 + 1) = *((_QWORD *)&v6 + 1) - (_QWORD)PsNtosImageBase;
    }
    if ( (unsigned __int64)v7 >= (unsigned __int64)PsNtosImageBase && (unsigned __int64)v7 <= PsNtosImageEnd )
      *(_QWORD *)&v12 = v7 - (_QWORD)PsNtosImageBase;
    if ( *((_QWORD *)&v7 + 1) >= (unsigned __int64)PsNtosImageBase
      && *((_QWORD *)&v7 + 1) <= (unsigned __int64)PsNtosImageEnd )
    {
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&v7 + 1) - (_QWORD)PsNtosImageBase;
    }
    if ( (unsigned __int64)v8 >= (unsigned __int64)PsNtosImageBase && (unsigned __int64)v8 <= PsNtosImageEnd )
      *(_QWORD *)&v13 = v8 - (_QWORD)PsNtosImageBase;
    if ( *((_QWORD *)&v8 + 1) >= (unsigned __int64)PsNtosImageBase
      && *((_QWORD *)&v8 + 1) <= (unsigned __int64)PsNtosImageEnd )
    {
      *((_QWORD *)&v13 + 1) = *((_QWORD *)&v8 + 1) - (_QWORD)PsNtosImageBase;
    }
    if ( (unsigned __int64)v9 >= (unsigned __int64)PsNtosImageBase && (unsigned __int64)v9 <= PsNtosImageEnd )
      *(_QWORD *)&v14 = v9 - (_QWORD)PsNtosImageBase;
    if ( *((_QWORD *)&v9 + 1) >= (unsigned __int64)PsNtosImageBase
      && *((_QWORD *)&v9 + 1) <= (unsigned __int64)PsNtosImageEnd )
    {
      *((_QWORD *)&v14 + 1) = *((_QWORD *)&v9 + 1) - (_QWORD)PsNtosImageBase;
    }
    if ( (unsigned int)dword_140E09EE8 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_140E09EE8, 0x400000000000LL) )
      {
        v3 = 1LL;
        v16 = &v3;
        v17 = 8LL;
        v18 = &v10;
        v19 = 80LL;
        v20 = &v4;
        v4 = 0x1000000LL;
        v21 = 8LL;
        tlgWriteAgg((int)&dword_140E09EE8, (int)&byte_140056E99, v2, 5, &v15);
      }
    }
    KeBugCheckEx(0x51u, 0x35uLL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  }
  return result;
}
