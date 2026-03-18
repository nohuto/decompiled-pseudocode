/*
 * XREFs of ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1403687E8
 * Callers:
 *     DxgkEnumAdapters @ 0x1403687D0 (DxgkEnumAdapters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140369894 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersImpl(struct _D3DKMT_ENUMADAPTERS *a1, __int64 a2, __int64 a3, enum _KWAIT_REASON a4)
{
  __int64 v5; // rsi
  unsigned int v6; // eax
  unsigned int v8; // [rsp+50h] [rbp-188h] BYREF
  unsigned int v9; // [rsp+54h] [rbp-184h]
  __int64 v10; // [rsp+58h] [rbp-180h]
  _DWORD *v11; // [rsp+60h] [rbp-178h]
  __int64 v12; // [rsp+68h] [rbp-170h]
  _DWORD Src[84]; // [rsp+70h] [rbp-168h] BYREF

  if ( a1 )
  {
    memset(Src, 0, 0x144uLL);
    v8 = 0;
    v10 = 0LL;
    v11 = &Src[1];
    v9 = 16;
    v12 = 2LL;
    v5 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v8, 1, 1u, UserRequest);
    v6 = v8;
    if ( v8 > 0x10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1033;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= MAX_ENUM_ADAPTERS",
        1033LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = v8;
    }
    if ( v6 > v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1034;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
        1034LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = v8;
    }
    if ( v6 > (unsigned int)v10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1035;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
        1035LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = v8;
    }
    if ( (int)v5 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1040;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkEnumAdaptersInternal failed, returning 0x%I64x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      Src[0] = v6;
      RtlCopyToUser(a1, Src, 0x144uLL);
    }
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1000;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters caller specified NULL D3DKMT_ENUMADAPTERS, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
