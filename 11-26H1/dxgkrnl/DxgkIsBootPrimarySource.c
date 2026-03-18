/*
 * XREFs of DxgkIsBootPrimarySource @ 0x1403D8F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1403D90F0 (-DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z.c)
 */

unsigned __int8 __fastcall DxgkIsBootPrimarySource(struct DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int8 v4; // si
  int v6; // edx
  int IsSourcePresentedOnClientVidPnUsedByFirmware; // eax
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // eax
  bool v11; // bl
  unsigned __int8 v12[16]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = a2;
  v4 = 0;
  v12[0] = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL) >= 0
    && ((v6 = *((_DWORD *)a1 + 111), (v6 & 1) != 0) || DXGADAPTER::IsBddFallbackDriver(a1)) )
  {
    if ( (v6 & 0x8000) != 0 )
    {
      IsSourcePresentedOnClientVidPnUsedByFirmware = DmmIsSourcePresentedOnClientVidPnUsedByFirmware(a1, v2, v12);
      if ( IsSourcePresentedOnClientVidPnUsedByFirmware >= 0 )
      {
        v4 = v12[0];
      }
      else
      {
        v8 = IsSourcePresentedOnClientVidPnUsedByFirmware;
        WdLogSingleEntry3(2LL, a1, v2, IsSourcePresentedOnClientVidPnUsedByFirmware);
        WdLogGlobalForLineNumber = 935;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DmmIsSourcePresentedOnClientVidPnUsedByFirmware failed on adapter 0x%I64x (SourceId = 0x%I64x Status = 0x%I64x)",
          (__int64)a1,
          v2,
          v8,
          0LL,
          0LL);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
      return v4;
    }
    else
    {
      v9 = *((_QWORD *)a1 + 395);
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 200LL) == 1 )
        v10 = *(_DWORD *)(v9 + 136);
      else
        v10 = -1;
      v11 = (_DWORD)v2 == v10;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
      return v11;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
    return 0;
  }
}
