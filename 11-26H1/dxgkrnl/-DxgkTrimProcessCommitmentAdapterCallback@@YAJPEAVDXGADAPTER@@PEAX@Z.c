/*
 * XREFs of ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1404020F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkTrimProcessCommitmentAdapterCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h]
  char v21[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v22; // [rsp+70h] [rbp-90h]
  char v23; // [rsp+78h] [rbp-88h]
  _BYTE v24[144]; // [rsp+80h] [rbp-80h] BYREF

  if ( a2[3] < a2[2] )
  {
    v22 = a1;
    v23 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    if ( *((_DWORD *)a1 + 50) == 1 && !*((_BYTE *)a1 + 209) )
    {
      v4 = *a2;
      v17 = 0LL;
      v20 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4 + 448, 0LL);
      *(_QWORD *)(v4 + 456) = KeGetCurrentThread();
      v5 = *a2 + 472LL;
      v6 = *(__int64 ***)(*a2 + 480LL);
      if ( *v6 != (__int64 *)v5 )
        goto LABEL_5;
      v19 = *(__int64 **)(*a2 + 480LL);
      v18 = v5;
      *v6 = &v18;
      *(_QWORD *)(v5 + 8) = &v18;
      v12 = *a2;
      *(_QWORD *)(v12 + 456) = 0LL;
      ExReleasePushLockExclusiveEx(v12 + 448, 0LL);
      KeLeaveCriticalRegion();
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 396) + 760LL)
                                                                                         + 8LL)
                                                                             + 1096LL))(
             *(_QWORD *)(*((_QWORD *)a1 + 396) + 768LL),
             *a2,
             &v17,
             *((unsigned int *)a2 + 2)) == -1071775484 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, a1, 0LL);
        if ( (a2[1] & 2) != 0 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL) >= 0 )
        {
          v13 = *((_QWORD *)a1 + 396);
          v14 = a2[2] - a2[3];
          v15 = *((unsigned int *)a2 + 2);
          v16 = 0LL;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64, __int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(v13 + 760) + 8LL)
                                                                                         + 1088LL))(
            *(_QWORD *)(v13 + 768),
            *a2,
            &v17,
            v15,
            v14,
            &v16);
          a2[3] += v16;
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 973;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
      }
      v7 = *a2;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v7 + 448, 0LL);
      *(_QWORD *)(v7 + 456) = KeGetCurrentThread();
      v8 = v18;
      v9 = v19;
      if ( *(__int64 **)(v18 + 8) != &v18 || (__int64 *)*v19 != &v18 )
LABEL_5:
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = *a2;
      *(_QWORD *)(v10 + 456) = 0LL;
      ExReleasePushLockExclusiveEx(v10 + 448, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  }
  return 0LL;
}
