/*
 * XREFs of ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x140368B20
 * Callers:
 *     DxgkEnumAdapters2 @ 0x140368AF0 (DxgkEnumAdapters2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x14003CB24 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x14003E5E8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ??0DXGCRITICALREGION@@QEAA@XZ @ 0x140058858 (--0DXGCRITICALREGION@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140369800 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140369894 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x140369E6C (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     _DxgkEnumAdapters2Impl_::_2_::ENSURE_CLEANUP::_ENSURE_CLEANUP @ 0x1403EE4F0 (_DxgkEnumAdapters2Impl_--_2_--ENSURE_CLEANUP--_ENSURE_CLEANUP.c)
 */

__int64 __fastcall DxgkEnumAdapters2Impl(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  __int64 v8; // rax
  WatchdogTimeoutReport *v9; // rsi
  DXGGLOBAL *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int MaximumAdapterCountInSession; // eax
  DXGGLOBAL *Global; // rax
  struct DXGPROCESS *i; // r14
  int v21; // ecx
  DXGGLOBAL *v22; // rax
  _BYTE v23[16]; // [rsp+60h] [rbp-148h] BYREF
  void *v24[2]; // [rsp+70h] [rbp-138h] BYREF
  __int64 v25; // [rsp+80h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-120h]
  __int64 v27; // [rsp+98h] [rbp-110h]
  WatchdogTimeoutReport *v28; // [rsp+A0h] [rbp-108h]
  WatchdogTimeoutReport *v29; // [rsp+A8h] [rbp-100h] BYREF
  PVOID P; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v31[160]; // [rsp+B8h] [rbp-F0h] BYREF
  int v32; // [rsp+158h] [rbp-50h]

  v23[8] = a2;
  if ( !a1 )
  {
    v14 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1130;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters2 caller specified NULL D3DKMT_ENUMADAPTERS2, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v14;
  }
  DXGCRITICALREGION::DXGCRITICALREGION((DXGCRITICALREGION *)v23);
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)v23);
  v8 = operator new(0x100uLL, 0x4B677844u, 64LL);
  if ( v8 )
  {
    v9 = (WatchdogTimeoutReport *)WatchdogTimeoutReport::WatchdogTimeoutReport(
                                    v8,
                                    403LL,
                                    2069LL,
                                    2LL,
                                    KeGetCurrentThread(),
                                    0LL,
                                    7,
                                    0LL,
                                    0LL,
                                    1,
                                    10000);
    v28 = v9;
  }
  else
  {
    v9 = 0LL;
    v28 = 0LL;
  }
  v29 = v9;
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1173;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate memory for wdTimeoutReport",
      1173LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  *(_OWORD *)Src = 0LL;
  v27 = 2LL;
  P = 0LL;
  v32 = 0;
  if ( a2 == 1 )
    RtlCopyFromUser(v24, a1, 0x10uLL);
  else
    *(struct _D3DKMT_ENUMADAPTERS2 *)v24 = *a1;
  if ( !v24[1] )
  {
    v14 = 0;
    Global = DXGGLOBAL::GetGlobal();
    MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
    goto LABEL_23;
  }
  v10 = DXGGLOBAL::GetGlobal();
  v11 = DXGGLOBAL::GetMaximumAdapterCountInSession(v10);
  v12 = (unsigned int)v24[0];
  if ( v11 < LODWORD(v24[0]) )
  {
    v22 = DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::GetMaximumAdapterCountInSession(v22);
    LODWORD(v24[0]) = v12;
  }
  v13 = 1LL;
  if ( v12 > 1 )
    v13 = v12;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v13);
  if ( !P )
  {
    v14 = -1073741801;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1232;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate memory for D3DKMT_ADAPTERINFO buffer, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v31 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v32 = 0;
    DxgkEnumAdapters2Impl_::_2_::ENSURE_CLEANUP::_ENSURE_CLEANUP(&v29);
    goto LABEL_33;
  }
  Src[1] = P;
  HIDWORD(v25) = v24[0];
  v14 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v25, a2, a3, a4);
  v15 = LODWORD(v24[0]);
  if ( (unsigned int)v25 > LODWORD(v24[0]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1255;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
      1255LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v25 > HIDWORD(v25) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1256;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
      1256LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v16 = (unsigned int)Src[0];
  if ( (unsigned int)v25 > LODWORD(Src[0]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1257;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
      1257LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v16 = (unsigned int)Src[0];
  }
  if ( v14 < 0 )
    goto LABEL_38;
  if ( HIDWORD(v25) >= v16 )
  {
    MaximumAdapterCountInSession = v25;
LABEL_23:
    LODWORD(v24[0]) = MaximumAdapterCountInSession;
    goto LABEL_24;
  }
  v14 = -1073741789;
  LODWORD(v24[0]) = 0;
LABEL_24:
  if ( v14 >= 0 )
  {
    if ( a2 == 1 )
      RtlCopyToUser(a1, v24, 0x10uLL);
    else
      *a1 = *(struct _D3DKMT_ENUMADAPTERS2 *)v24;
    if ( v24[1] )
    {
      if ( a2 == 1 )
        RtlCopyToUser(v24[1], Src[1], 20LL * (unsigned int)v25);
      else
        memmove(v24[1], Src[1], 20LL * (unsigned int)v25);
    }
    goto LABEL_28;
  }
LABEL_38:
  for ( i = DXGPROCESS::GetCurrent(v15); ; DXGADAPTER::DestroyHandle(
                                             i,
                                             *((_DWORD *)Src[1] + 5 * (unsigned int)(v21 - 1))) )
  {
    v21 = v25;
    if ( !(_DWORD)v25 )
      break;
    LODWORD(v25) = v25 - 1;
  }
LABEL_28:
  if ( P != v31 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v32 = 0;
  if ( v9 )
  {
    WatchdogTimeoutReport::~WatchdogTimeoutReport(v9);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  }
LABEL_33:
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v23);
  return (unsigned int)v14;
}
