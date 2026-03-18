/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x140320E04
 * Callers:
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x140320A58 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     DxgkCheckOcclusion @ 0x140320AC0 (DxgkCheckOcclusion.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140321198 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2)
{
  _QWORD **v3; // r13
  _QWORD *v4; // r12
  char v5; // bl
  _QWORD *v6; // rax
  bool v7; // zf
  volatile signed __int32 *v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int i; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int j; // ebp
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // r9
  LONG left; // r8d
  LONG right; // ecx
  LONG bottom; // ecx
  LONG top; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  DXGADAPTERLISTLOCK *v29[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-E8h] BYREF
  char v31; // [rsp+70h] [rbp-D8h]
  _BYTE v32[144]; // [rsp+80h] [rbp-C8h] BYREF

  v3 = (_QWORD **)((char *)this + 808);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v29, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v29);
  v4 = *v3;
  v5 = 0;
LABEL_2:
  while ( 2 )
  {
    v6 = 0LL;
    if ( v4 != v3 )
      v6 = v4;
    if ( v6 )
    {
      v7 = v4 == v3;
      v8 = (volatile signed __int32 *)v4;
      v4 = (_QWORD *)*v4;
      if ( v7 )
        v8 = 0LL;
      _m_prefetchw((const void *)(v8 + 6));
      v9 = *((_QWORD *)v8 + 3);
      do
      {
        if ( !v9 )
          goto LABEL_2;
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v9 + 1, v9);
      }
      while ( v10 != v9 );
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, (struct DXGADAPTER *const)v8, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
      if ( !*((_QWORD *)v8 + 395) )
      {
LABEL_13:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
        continue;
      }
      v30[1] = v8;
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 3);
      v30[0] = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v8 + 34, 0LL);
      _InterlockedIncrement(v8 + 38);
      v12 = *((_DWORD *)v8 + 50);
      v31 = 1;
      if ( v12 != 1 )
      {
LABEL_12:
        _InterlockedDecrement(v8 + 38);
        ExReleasePushLockSharedEx(v8 + 34, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
        goto LABEL_13;
      }
      v13 = *((_QWORD *)v8 + 395);
      if ( !a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2548;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pWindowClientRect != NULL", 2548LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( a2->left != a2->right && a2->top != a2->bottom )
      {
        v14 = *((_QWORD *)DXGPROCESS::GetCurrent(v11) + 11);
        if ( !v14 || !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v14 + 240))(0LL, 0LL, 0LL) )
        {
          for ( i = 0; i < *(_DWORD *)(v13 + 96); ++i )
          {
            v16 = 4024LL * i;
            v17 = *(_QWORD *)(v13 + 128);
            if ( *(_DWORD *)(v16 + v17 + 736) == 1 && *(_BYTE *)(v16 + v17 + 760) )
              goto LABEL_25;
          }
          for ( j = 0; j < *(_DWORD *)(v13 + 96); ++j )
          {
            v20 = *(_QWORD *)(v13 + 128);
            v21 = 4024LL * j;
            if ( !*(_BYTE *)(v21 + v20 + 760)
              || !DmmIsTargetNonStandard(*(struct DXGADAPTER **)(v13 + 16), *(_DWORD *)(v21 + v20 + 1072)) )
            {
              v22 = *(_QWORD *)(v13 + 128);
              left = a2->left;
              right = a2->right;
              if ( a2->left <= *(_DWORD *)(v22 + v21 + 628) )
                left = *(_DWORD *)(v22 + v21 + 628);
              if ( right >= *(_DWORD *)(v22 + v21 + 636) )
                right = *(_DWORD *)(v22 + v21 + 636);
              if ( left < right )
              {
                bottom = a2->bottom;
                top = a2->top;
                if ( bottom >= *(_DWORD *)(v22 + v21 + 640) )
                  bottom = *(_DWORD *)(v22 + v21 + 640);
                if ( top <= *(_DWORD *)(v22 + v21 + 632) )
                  top = *(_DWORD *)(v22 + v21 + 632);
                if ( top < bottom )
                {
                  if ( !*(_DWORD *)(v22 + v21 + 736)
                    && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v13, j) )
                  {
                    goto LABEL_25;
                  }
                  v27 = *(_QWORD *)(v13 + 128);
                  v28 = 4024LL * j;
                  if ( a2->left >= *(_DWORD *)(v28 + v27 + 628)
                    && a2->right <= *(_DWORD *)(v28 + v27 + 636)
                    && a2->top >= *(_DWORD *)(v28 + v27 + 632)
                    && a2->bottom <= *(_DWORD *)(v28 + v27 + 640) )
                  {
                    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
                    goto LABEL_26;
                  }
                }
              }
            }
          }
          goto LABEL_12;
        }
      }
LABEL_25:
      _InterlockedDecrement(v8 + 38);
      ExReleasePushLockSharedEx(v8 + 34, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
      v5 = 1;
LABEL_26:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    }
    break;
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v29);
  return v5;
}
