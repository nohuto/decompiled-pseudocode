/*
 * XREFs of ?OpmReset@ADAPTER_DISPLAY@@AEAAXXZ @ 0x1401A3E88
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401A4780 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::OpmReset(ADAPTER_DISPLAY *this)
{
  _BYTE *i; // rax
  _BYTE v3[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7018;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 7018LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (ADAPTER_DISPLAY *)((char *)this + 376), 0);
  for ( i = (_BYTE *)*((_QWORD *)this + 44); i != (char *)this + 352; i = *(_BYTE **)i )
    i[32] = 1;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v3);
}
