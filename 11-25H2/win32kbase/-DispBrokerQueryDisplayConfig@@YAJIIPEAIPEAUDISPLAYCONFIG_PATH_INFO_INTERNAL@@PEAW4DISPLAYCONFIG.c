/*
 * XREFs of ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401ABA3C
 * Callers:
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x14002BF94 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x14002C0C8 (DrvQueryDisplayConfigInternal.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140047A1C (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140047BB4 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEA_KPEAU?$AlpcReply@$07@1@@Z @ 0x140029F44 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEA_KPEAU-$AlpcRepl.c)
 *     DrvSampleDisplayState @ 0x14002B4D0 (DrvSampleDisplayState.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     DrvLogAndUpdateQDCCacheForDatabaseQuery @ 0x1401CE6B4 (DrvLogAndUpdateQDCCacheForDatabaseQuery.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DispBrokerQueryDisplayConfig(
        __int64 a1,
        int a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5)
{
  unsigned int v7; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 result; // rax
  __int64 v10; // rbx
  ULONG TimeIncrement; // eax
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  int v20; // ebx
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // [rsp+40h] [rbp-89h]
  int v24; // [rsp+44h] [rbp-85h] BYREF
  int v25; // [rsp+48h] [rbp-81h]
  unsigned __int64 v26; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v27[24]; // [rsp+60h] [rbp-69h] BYREF

  v24 = 0;
  v25 = a2;
  v7 = a1;
  v23 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, enum DISPLAYCONFIG_TOPOLOGY_ID *, int *))(DxgkWin32kInterface + 800))(
             v7,
             a3,
             a4,
             a5,
             &v24);
  if ( (int)result < 0 )
  {
    v10 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v13 = *a3;
    v14 = v10 * TimeIncrement;
    if ( !a4 )
    {
      *a3 = 0;
      v13 = 5;
    }
    v15 = 216LL * v13 + 96;
    v26 = v15;
    if ( v15 >= 0x7FFF )
      return 2147483653LL;
    v16 = Win32AllocPoolWithQuotaZInitImpl(v12, v15, 0x44535042u);
    if ( !v16 )
      return 3221225495LL;
    memset(v27, 0, sizeof(v27));
    v27[10] = 8;
    v27[11] = 1;
    if ( (int)DrvSampleDisplayState((__int64)&v27[12]) >= 0 )
    {
      v27[0] = 6291512;
      LOWORD(v27[1]) = 0x8000;
      v27[20] = v23;
      v27[21] = v13;
      v27[22] = 1;
    }
    UserSessionState = W32GetUserSessionState(v18, v17);
    v20 = DispBroker::DispBrokerClient::SyncMessage<8>(
            *(_QWORD *)(UserSessionState + 57016),
            (int)v27,
            (__int64)&v26,
            v16);
    if ( v20 < 0 )
    {
      if ( v20 == -1073741789 )
        v20 = -1073741823;
    }
    else
    {
      v20 = *(_DWORD *)(v16 + 80);
      if ( v20 >= 0 )
      {
        v21 = *(unsigned int *)(v16 + 84);
        if ( (unsigned int)v21 > v13 || v26 < 216 * v21 + 96 )
          v20 = -1073741762;
      }
    }
    if ( !a4 && v20 == -1073741789 )
      goto LABEL_29;
    if ( v20 < 0 )
    {
      v22 = 0;
      if ( v20 == -1073741789 )
        v22 = v13;
    }
    else
    {
      v22 = *(_DWORD *)(v16 + 84);
    }
    DrvLogAndUpdateQDCCacheForDatabaseQuery(v24, v20, v23, v25, v22, v16 + 96, *(_DWORD *)(v16 + 88), v14);
    if ( v20 >= 0 )
    {
      *a3 = *(_DWORD *)(v16 + 84);
      if ( a4 )
      {
        memmove(a4, (const void *)(v16 + 96), 216LL * *(unsigned int *)(v16 + 84));
        if ( a5 )
          *(_DWORD *)a5 = *(_DWORD *)(v16 + 88);
      }
      else
      {
        v20 = -1073741789;
      }
      goto LABEL_30;
    }
    if ( v20 == -1073741789 )
LABEL_29:
      *a3 = *(_DWORD *)(v16 + 84);
LABEL_30:
    GreDeleteFastMutex((char *)v16);
    return (unsigned int)v20;
  }
  return result;
}
