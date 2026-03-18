/*
 * XREFs of ?StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1403DB058
 * Callers:
 *     DxgkStartDisplayCalloutBatch @ 0x1403DB03C (DxgkStartDisplayCalloutBatch.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::StartDisplayCalloutBatch(ADAPTER_DISPLAY *this)
{
  unsigned int v2; // edi
  __int64 v4; // [rsp+20h] [rbp-48h]
  _BYTE v5[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8989;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 8989LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (ADAPTER_DISPLAY *)((char *)this + 552), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  if ( *((_BYTE *)this + 600) )
  {
    v2 = -1073741811;
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741811LL);
    v4 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 9001;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Multiple display callout batches have been started on adapter 0x%I64x, returning 0x%I64x.",
      v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    *((_BYTE *)this + 600) = 1;
    v2 = 0;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v5);
  return v2;
}
