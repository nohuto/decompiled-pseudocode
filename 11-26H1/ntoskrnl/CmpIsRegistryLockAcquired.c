/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x140262890
 * Callers:
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14084FD20 (NtReplaceKey.c)
 *     NtSaveMergedKeys @ 0x140850190 (NtSaveMergedKeys.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     CmPostCallbackNotification @ 0x1408C93B0 (CmPostCallbackNotification.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotificationEx @ 0x1408C9D50 (CmPostCallbackNotificationEx.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     CmpSecurityMethod @ 0x1408ED400 (CmpSecurityMethod.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14097D340 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A76FC0 (NtRestoreKey.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140262D70 (RtlWalkFrameChain.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 CmpIsRegistryLockAcquired()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *UserAffinity; // rax
  int v3; // r8d
  __int64 v4; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Callers[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v7; // [rsp+50h] [rbp-B0h]
  __int128 v8; // [rsp+60h] [rbp-A0h]
  __int128 v9; // [rsp+70h] [rbp-90h]
  __int128 v10; // [rsp+80h] [rbp-80h]
  __int128 v11; // [rsp+90h] [rbp-70h] BYREF
  __int128 v12; // [rsp+A0h] [rbp-60h]
  __int128 v13; // [rsp+B0h] [rbp-50h]
  __int128 v14; // [rsp+C0h] [rbp-40h]
  __int128 v15; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+100h] [rbp+0h]
  __int64 v18; // [rsp+108h] [rbp+8h]
  __int128 *v19; // [rsp+110h] [rbp+10h]
  __int64 v20; // [rsp+118h] [rbp+18h]
  __int64 *v21; // [rsp+120h] [rbp+20h]
  __int64 v22; // [rsp+128h] [rbp+28h]

  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( !UserAffinity )
  {
    *(_OWORD *)Callers = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    RtlWalkFrameChain(Callers, 0xAu, 0);
    if ( Callers[0] >= (PVOID)PsNtosImageBase && Callers[0] <= (PVOID)PsNtosImageEnd )
      *(_QWORD *)&v11 = (char *)Callers[0] - PsNtosImageBase;
    if ( Callers[1] >= (PVOID)PsNtosImageBase && Callers[1] <= (PVOID)PsNtosImageEnd )
      *((_QWORD *)&v11 + 1) = (char *)Callers[1] - PsNtosImageBase;
    if ( (unsigned __int64)v7 >= PsNtosImageBase && (unsigned __int64)v7 <= PsNtosImageEnd )
      *(_QWORD *)&v12 = v7 - PsNtosImageBase;
    if ( *((_QWORD *)&v7 + 1) >= PsNtosImageBase && *((_QWORD *)&v7 + 1) <= (unsigned __int64)PsNtosImageEnd )
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&v7 + 1) - PsNtosImageBase;
    if ( (unsigned __int64)v8 >= PsNtosImageBase && (unsigned __int64)v8 <= PsNtosImageEnd )
      *(_QWORD *)&v13 = v8 - PsNtosImageBase;
    if ( *((_QWORD *)&v8 + 1) >= PsNtosImageBase && *((_QWORD *)&v8 + 1) <= (unsigned __int64)PsNtosImageEnd )
      *((_QWORD *)&v13 + 1) = *((_QWORD *)&v8 + 1) - PsNtosImageBase;
    if ( (unsigned __int64)v9 >= PsNtosImageBase && (unsigned __int64)v9 <= PsNtosImageEnd )
      *(_QWORD *)&v14 = v9 - PsNtosImageBase;
    if ( *((_QWORD *)&v9 + 1) >= PsNtosImageBase && *((_QWORD *)&v9 + 1) <= (unsigned __int64)PsNtosImageEnd )
      *((_QWORD *)&v14 + 1) = *((_QWORD *)&v9 + 1) - PsNtosImageBase;
    if ( (unsigned __int64)v10 >= PsNtosImageBase && (unsigned __int64)v10 <= PsNtosImageEnd )
      *(_QWORD *)&v15 = v10 - PsNtosImageBase;
    if ( *((_QWORD *)&v10 + 1) >= PsNtosImageBase && *((_QWORD *)&v10 + 1) <= (unsigned __int64)PsNtosImageEnd )
      *((_QWORD *)&v15 + 1) = *((_QWORD *)&v10 + 1) - PsNtosImageBase;
    if ( (unsigned int)dword_140E09EE8 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_140E09EE8, 0x400000000000LL) )
      {
        v4 = 1LL;
        v17 = &v4;
        v18 = 8LL;
        v19 = &v11;
        v20 = 80LL;
        v21 = &v5;
        v5 = 0x1000000LL;
        v22 = 8LL;
        tlgWriteAgg((int)&dword_140E09EE8, (int)&word_140055EA6, v3, 5, &v16);
      }
    }
    KeBugCheckEx(0x51u, 0x35uLL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  }
  return LODWORD(UserAffinity->StaticBitmap[1]);
}
