/*
 * XREFs of CmpTestRegistryLockExclusive @ 0x1402611A0
 * Callers:
 *     HvpTruncateBins @ 0x1408BEFE0 (HvpTruncateBins.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char CmpTestRegistryLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *UserAffinity; // rax
  unsigned __int64 v2; // rax
  int v3; // r8d
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Callers[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+50h] [rbp-B0h]
  __int128 v9; // [rsp+60h] [rbp-A0h]
  __int128 v10; // [rsp+70h] [rbp-90h]
  __int128 v11; // [rsp+80h] [rbp-80h]
  __int128 v12; // [rsp+90h] [rbp-70h] BYREF
  __int128 v13; // [rsp+A0h] [rbp-60h]
  __int128 v14; // [rsp+B0h] [rbp-50h]
  __int128 v15; // [rsp+C0h] [rbp-40h]
  __int128 v16; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v18; // [rsp+100h] [rbp+0h]
  __int64 v19; // [rsp+108h] [rbp+8h]
  __int128 *v20; // [rsp+110h] [rbp+10h]
  __int64 v21; // [rsp+118h] [rbp+18h]
  __int64 *v22; // [rsp+120h] [rbp+20h]
  __int64 v23; // [rsp+128h] [rbp+28h]

  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( !UserAffinity )
  {
    *(_OWORD *)Callers = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    RtlWalkFrameChain(Callers, 0xAu, 0);
    if ( Callers[0] >= PsNtosImageBase && Callers[0] <= (PVOID)PsNtosImageEnd )
      *(_QWORD *)&v12 = (char *)Callers[0] - (char *)PsNtosImageBase;
    if ( Callers[1] >= PsNtosImageBase && Callers[1] <= (PVOID)PsNtosImageEnd )
      *((_QWORD *)&v12 + 1) = (char *)Callers[1] - (char *)PsNtosImageBase;
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
    if ( (unsigned __int64)v11 >= (unsigned __int64)PsNtosImageBase && (unsigned __int64)v11 <= PsNtosImageEnd )
      *(_QWORD *)&v16 = v11 - (_QWORD)PsNtosImageBase;
    if ( *((_QWORD *)&v11 + 1) >= (unsigned __int64)PsNtosImageBase
      && *((_QWORD *)&v11 + 1) <= (unsigned __int64)PsNtosImageEnd )
    {
      *((_QWORD *)&v16 + 1) = *((_QWORD *)&v11 + 1) - (_QWORD)PsNtosImageBase;
    }
    if ( (unsigned int)dword_140E09EE8 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_140E09EE8, 0x400000000000LL) )
      {
        v5 = 1LL;
        v18 = &v5;
        v19 = 8LL;
        v20 = &v12;
        v21 = 80LL;
        v22 = &v6;
        v6 = 0x1000000LL;
        v23 = 8LL;
        tlgWriteAgg((int)&dword_140E09EE8, (int)&byte_140056E99, v3, 5, &v17);
      }
    }
    KeBugCheckEx(0x51u, 0x35uLL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  }
  v2 = UserAffinity->Bitmap[0];
  if ( v2 )
    LOBYTE(v2) = v2 == 1;
  return v2;
}
