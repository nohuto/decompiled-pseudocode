/*
 * XREFs of ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C
 * Callers:
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x14003D0E4 (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x14003D2F0 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x14007D414 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x14007D4F8 (DrvQueryDisplayConfigInternal.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     DrvQueryDatabaseFromQDCCache @ 0x14007D948 (DrvQueryDatabaseFromQDCCache.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DA94 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DB18 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     DrvLogAndUpdateQDCCacheForDatabaseQuery @ 0x14007DB68 (DrvLogAndUpdateQDCCacheForDatabaseQuery.c)
 *     DrvSampleDisplayState @ 0x14007EBD0 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DispBrokerQueryDisplayConfig(
        int a1,
        int a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5)
{
  __int64 result; // rax
  __int64 v8; // rbx
  ULONG TimeIncrement; // eax
  int v10; // ecx
  unsigned int v11; // esi
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned int v27; // edx
  __int64 v28; // rax
  int v30; // [rsp+44h] [rbp-95h] BYREF
  int v31; // [rsp+48h] [rbp-91h]
  unsigned __int64 v32; // [rsp+50h] [rbp-89h] BYREF
  __int64 v33; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v34[8]; // [rsp+68h] [rbp-71h] BYREF
  _DWORD v35[24]; // [rsp+70h] [rbp-69h] BYREF

  v31 = a2;
  v30 = 0;
  result = DrvQueryDatabaseFromQDCCache(a1, (_DWORD)a3, (_DWORD)a4, (_DWORD)a5, (__int64)&v30);
  if ( (int)result < 0 )
  {
    v8 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v11 = *a3;
    v12 = v8 * TimeIncrement;
    if ( !a4 )
    {
      *a3 = 0;
      v11 = 5;
    }
    v13 = 216LL * v11 + 96;
    v32 = v13;
    if ( v13 >= 0x7FFF )
    {
      return 2147483653LL;
    }
    else
    {
      v14 = Win32AllocPoolWithQuotaZInitImpl(v10, v13, 0x44535042u);
      if ( v14 )
      {
        memset(v35, 0, sizeof(v35));
        v35[10] = 8;
        v35[11] = 1;
        if ( (int)DrvSampleDisplayState(&v35[12]) >= 0 )
        {
          v35[0] = 6291512;
          LOWORD(v35[1]) = 0x8000;
          v35[20] = a1;
          v35[21] = v11;
          v35[22] = 1;
        }
        v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 57008);
        LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v34);
        v33 = *(_QWORD *)(v18 + 16);
        v19 = (unsigned __int64)&v33 & -(__int64)(v33 != 0);
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v21, v20);
        v23 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64, unsigned __int64 *, _QWORD, unsigned __int64))(DxgkWin32kInterface + 760))(
                1179648LL,
                v35,
                0LL,
                v14,
                &v32,
                0LL,
                v19);
        LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v34);
        v26 = 3221225507LL;
        if ( v23 >= 0 )
        {
          v23 = *(_DWORD *)(v14 + 80);
          if ( v23 >= 0 )
          {
            v28 = *(unsigned int *)(v14 + 84);
            if ( (unsigned int)v28 > v11 || v32 < 216 * v28 + 96 )
              v23 = -1073741762;
          }
        }
        else if ( v23 == -1073741789 )
        {
          v23 = -1073741823;
        }
        if ( !a4 && v23 == -1073741789 )
          goto LABEL_13;
        if ( v23 < 0 )
        {
          v27 = 0;
          if ( v23 == -1073741789 )
            v27 = v11;
        }
        else
        {
          v27 = *(_DWORD *)(v14 + 84);
        }
        DrvLogAndUpdateQDCCacheForDatabaseQuery(v30, v23, a1, v31, v27, v14 + 96, *(_DWORD *)(v14 + 88), v12);
        if ( v23 >= 0 )
        {
          *a3 = *(_DWORD *)(v14 + 84);
          if ( a4 )
          {
            memmove(a4, (const void *)(v14 + 96), 216LL * *(unsigned int *)(v14 + 84));
            if ( a5 )
              *(_DWORD *)a5 = *(_DWORD *)(v14 + 88);
          }
          else
          {
            v23 = -1073741789;
          }
          goto LABEL_19;
        }
        if ( v23 == -1073741789 )
LABEL_13:
          *a3 = *(_DWORD *)(v14 + 84);
LABEL_19:
        GreDeleteFastMutex((char *)v14, v24, v26, v25);
        return (unsigned int)v23;
      }
      return 3221225495LL;
    }
  }
  return result;
}
