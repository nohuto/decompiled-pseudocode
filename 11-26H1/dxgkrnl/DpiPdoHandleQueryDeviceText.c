/*
 * XREFs of DpiPdoHandleQueryDeviceText @ 0x1404100F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003CCB8 (--1-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PEAG$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140055408 (-reset@-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PE.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140060408 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x14006DC18 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@_E$1-FreePoolWithTag@-$pool_helpers@PEA.c)
 *     ?RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ @ 0x140094B08 (-RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkAcquireAdapterCoreSync @ 0x14030D100 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceText(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r13
  unsigned int v5; // edi
  int v6; // edi
  char v7; // r14
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 v14; // bx
  __int64 v15; // rcx
  int v16; // ebx
  unsigned int i; // ecx
  void *v18; // rsi
  int v19; // eax
  __int64 v20; // rbx
  __int64 Pool2; // rax
  void *v23; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  char *v26; // [rsp+70h] [rbp-90h]
  void (__fastcall *v27)(void *); // [rsp+78h] [rbp-88h] BYREF
  _QWORD v28[4]; // [rsp+80h] [rbp-80h] BYREF
  char v29; // [rsp+A0h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
    return *(unsigned int *)(a2 + 48);
  if ( *(_QWORD *)(a2 + 56) )
    return 0;
  v23 = 0LL;
  DestinationString = 0LL;
  if ( *(_WORD *)(v2 + 818) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(v2 + 818));
    Pool2 = ExAllocatePool2(256LL, DestinationString.MaximumLength, 1953656900LL);
    _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
      (__int64 *)&v23,
      Pool2);
    if ( ____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&v23) )
    {
      v5 = -1073741801;
      goto LABEL_36;
    }
    v18 = v23;
    memset(v23, 0, DestinationString.MaximumLength);
    memmove(v18, DestinationString.Buffer, DestinationString.MaximumLength);
    goto LABEL_40;
  }
  v6 = 302;
  v25 = 0x800000LL;
  v7 = 0;
  v26 = &v29;
  v8 = *(_DWORD *)(v2 + 496);
  if ( v8 != 3 && v8 != 1 )
    goto LABEL_14;
  DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 4032), 1);
  v9 = *(unsigned int *)(v2 + 504);
  v10 = *(_QWORD *)(v4 + 4032);
  v13 = WdLogNewEntry5_WdTrace(v12, v11);
  *(_QWORD *)(v13 + 24) = v9;
  *(_QWORD *)(v13 + 32) = v10;
  WdLogGlobalForLineNumber = 2210;
  if ( v10 && (_DWORD)v9 != -1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v28, v10, v9, 1u);
    if ( v28[0] )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v28[0] + 216LL) + 160LL);
      if ( v15 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 104LL))(v15, &v25);
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v28);
        if ( v16 >= 0 && *(_WORD *)v26 )
        {
          v7 = 1;
          for ( i = 0; i < (unsigned __int16)v25 >> 1; ++i )
          {
            if ( *(_WORD *)&v26[2 * i] == 44 )
            {
              v7 = 0;
              goto LABEL_12;
            }
          }
        }
        goto LABEL_12;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2222;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v28);
  }
LABEL_12:
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 4032), 1u);
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 936) + 4LL) != 0x80000000 )
  {
    v14 = g_RegistryPath.Length + 24;
    if ( !v7 )
    {
      v6 = 300;
      goto LABEL_28;
    }
    v6 = 303;
LABEL_26:
    v14 += v25 + 2;
    goto LABEL_28;
  }
  v6 = v7 != 0 ? 304 : 301;
LABEL_14:
  v14 = g_RegistryPath.Length + 24;
  if ( v7 )
    goto LABEL_26;
LABEL_28:
  v23 = (void *)ExAllocatePool2(256LL, v14, 1953656900LL);
  v18 = v23;
  if ( !____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&v23) )
  {
    DestinationString.MaximumLength = v14;
    DestinationString.Buffer = (wchar_t *)v18;
    if ( v7 )
      v19 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 2304, L"%wZ,%u,%wZ", &g_RegistryPath, v6, &v25);
    else
      v19 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 2304, L"%wZ,%u", &g_RegistryPath, v6);
    v5 = v19;
    if ( v19 < 0 )
    {
      v20 = v19;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5483;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create the default name for a monitor device (Status = 0x%I64x)",
        v20,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_36:
      __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ(&v23);
      return v5;
    }
LABEL_40:
    v23 = 0LL;
    *(_QWORD *)(a2 + 56) = v18;
    __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ(&v23);
    return 0;
  }
  v5 = -1073741801;
  if ( v18 )
  {
    v23 = v18;
    v27 = DXGQUOTAALLOCATOR<256,1835156294>::operator delete;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v27, &v23);
  }
  return v5;
}
