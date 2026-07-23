/*
 * XREFs of CmpTestRegistryLock @ 0x140261420
 * Callers:
 *     CmpDoReOpenTransKey @ 0x140869E38 (CmpDoReOpenTransKey.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

bool CmpTestRegistryLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *UserAffinity; // rax
  int v3; // r8d
  __int64 v4; // [rsp+38h] [rbp-D0h] BYREF
  __int64 Callers; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Callers_8[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v7; // [rsp+58h] [rbp-B0h]
  __int128 v8; // [rsp+68h] [rbp-A0h]
  __int128 v9; // [rsp+78h] [rbp-90h]
  __int128 v10; // [rsp+88h] [rbp-80h]
  __int128 v11; // [rsp+98h] [rbp-70h] BYREF
  __int128 v12; // [rsp+A8h] [rbp-60h]
  __int128 v13; // [rsp+B8h] [rbp-50h]
  __int128 v14; // [rsp+C8h] [rbp-40h]
  __int128 v15; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+108h] [rbp+0h]
  __int64 v18; // [rsp+110h] [rbp+8h]
  __int128 *v19; // [rsp+118h] [rbp+10h]
  __int64 v20; // [rsp+120h] [rbp+18h]
  __int64 *p_Callers; // [rsp+128h] [rbp+20h]
  __int64 v22; // [rsp+130h] [rbp+28h]

  if ( BYTE5(NlsMbOemCodePageTag) )
    return 1;
  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( !UserAffinity )
  {
    *(_OWORD *)Callers_8 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    RtlWalkFrameChain(Callers_8, 0xAu, 0);
    if ( Callers_8[0] >= PsNtosImageBase && Callers_8[0] <= (PVOID)PsNtosImageEnd )
      *(_QWORD *)&v11 = (char *)Callers_8[0] - (char *)PsNtosImageBase;
    if ( Callers_8[1] >= PsNtosImageBase && Callers_8[1] <= (PVOID)PsNtosImageEnd )
      *((_QWORD *)&v11 + 1) = (char *)Callers_8[1] - (char *)PsNtosImageBase;
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
    if ( (unsigned __int64)v10 >= (unsigned __int64)PsNtosImageBase && (unsigned __int64)v10 <= PsNtosImageEnd )
      *(_QWORD *)&v15 = v10 - (_QWORD)PsNtosImageBase;
    if ( *((_QWORD *)&v10 + 1) >= (unsigned __int64)PsNtosImageBase
      && *((_QWORD *)&v10 + 1) <= (unsigned __int64)PsNtosImageEnd )
    {
      *((_QWORD *)&v15 + 1) = *((_QWORD *)&v10 + 1) - (_QWORD)PsNtosImageBase;
    }
    if ( (unsigned int)dword_140E09EE8 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_140E09EE8, 0x400000000000LL) )
      {
        v4 = 1LL;
        v17 = &v4;
        v18 = 8LL;
        v19 = &v11;
        v20 = 80LL;
        p_Callers = &Callers;
        Callers = 0x1000000LL;
        v22 = 8LL;
        tlgWriteAgg((int)&dword_140E09EE8, (int)&byte_140056E99, v3, 5, &v16);
      }
    }
    KeBugCheckEx(0x51u, 0x35uLL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  }
  return LODWORD(UserAffinity->StaticBitmap[1]) != 0;
}
