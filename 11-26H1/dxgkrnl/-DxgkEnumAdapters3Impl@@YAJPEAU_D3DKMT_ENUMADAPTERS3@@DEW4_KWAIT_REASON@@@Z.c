/*
 * XREFs of ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x140369220
 * Callers:
 *     DxgkEnumAdapters3Internal @ 0x1401B5BD0 (DxgkEnumAdapters3Internal.c)
 *     NtDxgkEnumAdapters3 @ 0x1403691F0 (NtDxgkEnumAdapters3.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140369800 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140369894 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters3Impl(
        struct _D3DKMT_ENUMADAPTERS3 *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  DXGGLOBAL *v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rdi
  int v12; // edi
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int MaximumAdapterCountInSession; // eax
  DXGGLOBAL *Global; // rax
  PVOID v17; // rcx
  bool v18; // zf
  struct DXGPROCESS *i; // rsi
  int v21; // ecx
  DXGGLOBAL *v22; // rax
  _BYTE v23[24]; // [rsp+58h] [rbp-130h] BYREF
  __int64 v24; // [rsp+70h] [rbp-118h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-110h]
  __int64 v26; // [rsp+88h] [rbp-100h]
  PVOID P; // [rsp+90h] [rbp-F8h]
  _BYTE v28[160]; // [rsp+98h] [rbp-F0h] BYREF
  int v29; // [rsp+138h] [rbp-50h]

  if ( !a1 )
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1380;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters3 caller specified NULL D3DKMT_ENUMADAPTERS3, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v29 = 0;
  if ( a2 == 1 )
  {
    RtlCopyFromUser(v23, a1, 0x18uLL);
  }
  else
  {
    *(_OWORD *)v23 = *(_OWORD *)a1;
    *(_QWORD *)&v23[16] = *((_QWORD *)a1 + 2);
  }
  if ( (*(_QWORD *)v23 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    v26 = *(_QWORD *)v23;
    if ( !*(_QWORD *)&v23[16] )
    {
      v12 = 0;
      Global = DXGGLOBAL::GetGlobal();
      MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
      goto LABEL_25;
    }
    v8 = DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::GetMaximumAdapterCountInSession(v8);
    v10 = *(_DWORD *)&v23[8];
    if ( v9 < *(_DWORD *)&v23[8] )
    {
      v22 = DXGGLOBAL::GetGlobal();
      v10 = DXGGLOBAL::GetMaximumAdapterCountInSession(v22);
      *(_DWORD *)&v23[8] = v10;
    }
    v11 = 1LL;
    if ( v10 > 1 )
      v11 = v10;
    if ( (unsigned int)v11 <= 8 )
    {
      P = v28;
      memset(v28, 0, 20 * v11);
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v11 < 0x14 )
      {
LABEL_14:
        if ( !P )
        {
          v12 = -1073741801;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1447;
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
          v17 = P;
          v18 = P == v28;
          goto LABEL_31;
        }
        Src[1] = P;
        HIDWORD(v24) = v10;
        v12 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v24, a2, a3, a4);
        v13 = *(unsigned int *)&v23[8];
        if ( (unsigned int)v24 > *(_DWORD *)&v23[8] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1470;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
            1470LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (unsigned int)v24 > HIDWORD(v24) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1471;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
            1471LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v14 = (unsigned int)Src[0];
        if ( (unsigned int)v24 > LODWORD(Src[0]) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1472;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
            1472LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v14 = (unsigned int)Src[0];
        }
        if ( v12 < 0 )
        {
LABEL_37:
          for ( i = DXGPROCESS::GetCurrent(v13);
                ;
                DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src[1] + 5 * (unsigned int)(v21 - 1))) )
          {
            v21 = v24;
            if ( !(_DWORD)v24 )
              break;
            LODWORD(v24) = v24 - 1;
          }
          goto LABEL_30;
        }
        if ( HIDWORD(v24) < v14 )
        {
          v12 = -1073741789;
          *(_DWORD *)&v23[8] = 0;
LABEL_26:
          if ( v12 >= 0 )
          {
            if ( a2 == 1 )
            {
              RtlCopyToUser(a1, v23, 0x18uLL);
            }
            else
            {
              *(_OWORD *)a1 = *(_OWORD *)v23;
              *((_QWORD *)a1 + 2) = *(_QWORD *)&v23[16];
            }
            if ( *(_QWORD *)&v23[16] )
            {
              if ( a2 == 1 )
                RtlCopyToUser(*(void **)&v23[16], Src[1], 20LL * (unsigned int)v24);
              else
                memmove(*(void **)&v23[16], Src[1], 20LL * (unsigned int)v24);
            }
            goto LABEL_30;
          }
          goto LABEL_37;
        }
        MaximumAdapterCountInSession = v24;
LABEL_25:
        *(_DWORD *)&v23[8] = MaximumAdapterCountInSession;
        goto LABEL_26;
      }
      P = (PVOID)ExAllocatePool2(256LL, 20 * v11, 1265072196LL);
    }
    v10 = *(_DWORD *)&v23[8];
    v29 = v11;
    goto LABEL_14;
  }
  v12 = -1073741811;
  WdLogSingleEntry2(2LL, *(_QWORD *)v23, -1073741811LL);
  WdLogGlobalForLineNumber = 1413;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DxgkEnumAdapters3 caller specified an invalid filter 0x%I64x, returning 0x%I64x",
    *(__int64 *)v23,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_30:
  v17 = P;
  v18 = P == v28;
LABEL_31:
  if ( !v18 && v17 )
    ExFreePoolWithTag(v17, 0);
  return (unsigned int)v12;
}
