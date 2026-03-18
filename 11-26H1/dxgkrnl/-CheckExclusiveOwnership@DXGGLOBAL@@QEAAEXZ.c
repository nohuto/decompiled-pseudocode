/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x14036E4F8
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x14036E450 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  _QWORD **v1; // r15
  _QWORD *v2; // r14
  char v3; // si
  _QWORD *v4; // rax
  bool v5; // zf
  volatile signed __int32 *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned int i; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  DXGADAPTERLISTLOCK *v20[2]; // [rsp+38h] [rbp-69h] BYREF
  char v21; // [rsp+48h] [rbp-59h] BYREF
  char v22; // [rsp+49h] [rbp-58h]
  _BYTE v23[16]; // [rsp+50h] [rbp-51h] BYREF
  DXGADAPTER *v24; // [rsp+60h] [rbp-41h]
  char v25; // [rsp+68h] [rbp-39h]
  char *v26; // [rsp+70h] [rbp-31h]
  _BYTE v27[16]; // [rsp+90h] [rbp-11h] BYREF
  DXGADAPTER *v28; // [rsp+A0h] [rbp-1h]
  char v29; // [rsp+A8h] [rbp+7h]
  char *v30; // [rsp+B0h] [rbp+Fh]

  v1 = (_QWORD **)((char *)this + 808);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v20, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v20);
  v2 = *v1;
  v3 = 1;
  while ( 1 )
  {
LABEL_2:
    v4 = 0LL;
    if ( v2 != v1 )
      v4 = v2;
    if ( !v4 )
      break;
    v5 = v2 == v1;
    v6 = (volatile signed __int32 *)v2;
    v2 = (_QWORD *)*v2;
    if ( v5 )
      v6 = 0LL;
    _m_prefetchw((const void *)(v6 + 6));
    v7 = *((_QWORD *)v6 + 3);
    while ( v7 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v7 + 1, v7);
      if ( v8 == v7 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v21, (struct DXGADAPTER *const)v6, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
        if ( *((_QWORD *)v6 + 395) )
        {
          _InterlockedAdd64((volatile signed __int64 *)v6 + 3, 1uLL);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v6 + 34, 0LL);
          _InterlockedAdd(v6 + 38, 1u);
          if ( *((_DWORD *)v6 + 50) == 1 )
          {
            v10 = *((_QWORD *)v6 + 395);
            v11 = 0;
            v12 = *(_DWORD *)(v10 + 96);
            while ( v11 < v12 )
            {
              v13 = 4024LL * v11;
              v14 = *(_QWORD *)(v10 + 128);
              if ( *(_QWORD *)(v13 + v14 + 728) && *(_DWORD *)(v13 + v14 + 736) == 2 )
              {
LABEL_37:
                _InterlockedDecrement(v6 + 38);
                ExReleasePushLockSharedEx(v6 + 34, 0LL);
                KeLeaveCriticalRegion();
                DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v21);
                goto LABEL_38;
              }
              ++v11;
            }
            for ( i = 0; i < v12; ++i )
            {
              v17 = 4024LL * i;
              v18 = *(_QWORD *)(v10 + 128);
              if ( *(_QWORD *)(v17 + v18 + 728) && *(_DWORD *)(v17 + v18 + 736) == 3 )
                goto LABEL_37;
            }
          }
          _InterlockedDecrement(v6 + 38);
          ExReleasePushLockSharedEx(v6 + 34, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v6);
        }
        if ( v22 )
        {
          if ( v24 != v28 )
          {
            if ( !v25 )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, v23, 0LL, 0LL);
              WdLogGlobalForLineNumber = 7763;
            }
            v25 = 0;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v24 + 23) )
              DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v24, v26);
            v26 = 0LL;
          }
          if ( !v29 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v27, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7763;
          }
          v29 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v28 + 23) )
            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v28, v30);
          v30 = 0LL;
          v22 = 0;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v27, v9);
        COREACCESS::~COREACCESS((COREACCESS *)v23, v15);
        goto LABEL_2;
      }
    }
  }
  v3 = 0;
LABEL_38:
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v20);
  return v3;
}
