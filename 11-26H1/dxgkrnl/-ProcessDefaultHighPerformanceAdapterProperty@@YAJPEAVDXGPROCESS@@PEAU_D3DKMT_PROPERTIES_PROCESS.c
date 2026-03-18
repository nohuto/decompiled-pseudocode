/*
 * XREFs of ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x14036CA80
 * Callers:
 *     NtDxgkSetProperties @ 0x14036C450 (NtDxgkSetProperties.c)
 *     NtDxgkGetProperties @ 0x140413730 (NtDxgkGetProperties.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ProcessDefaultHighPerformanceAdapterProperty(
        struct DXGPROCESS *a1,
        struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *a2,
        char a3)
{
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !a1 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6183;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v6;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGPROCESS *)((char *)a1 + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( a3 )
  {
    if ( *((_BYTE *)a1 + 556) )
    {
      v6 = -1073740528;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 6200;
      goto LABEL_5;
    }
    *((_OWORD *)a1 + 34) = *(_OWORD *)a2;
    *((_BYTE *)a1 + 556) = 1;
  }
  else
  {
    *(_OWORD *)a2 = *((_OWORD *)a1 + 34);
  }
  v6 = 0;
LABEL_5:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  return v6;
}
