/*
 * XREFs of ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x140424ED4
 * Callers:
 *     NtDxgkSetProperties @ 0x14036C450 (NtDxgkSetProperties.c)
 *     NtDxgkGetProperties @ 0x140413730 (NtDxgkGetProperties.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ProcessUserPreferredAdapterProperty(
        struct DXGPROCESS *a1,
        struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *a2,
        char a3)
{
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( a1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGPROCESS *)((char *)a1 + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    if ( a3 )
    {
      if ( *((_BYTE *)a1 + 540) )
      {
        v6 = -1073740528;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 6163;
LABEL_9:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
        return v6;
      }
      *((_OWORD *)a1 + 33) = *(_OWORD *)a2;
      *((_BYTE *)a1 + 540) = 1;
    }
    else
    {
      *(_OWORD *)a2 = *((_OWORD *)a1 + 33);
    }
    v6 = 0;
    goto LABEL_9;
  }
  v6 = -1073741811;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 6146;
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
