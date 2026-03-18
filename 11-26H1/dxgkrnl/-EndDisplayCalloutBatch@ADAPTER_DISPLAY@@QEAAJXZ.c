/*
 * XREFs of ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1403D8B7C
 * Callers:
 *     DxgkEndDisplayCalloutBatch @ 0x1403D8B60 (DxgkEndDisplayCalloutBatch.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1403D8CD4 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::EndDisplayCalloutBatch(struct _LIST_ENTRY *this)
{
  unsigned int v2; // ebx
  DXGADAPTER *Flink; // rcx
  struct _LUID *v4; // rdx
  DXGDISPLAYCALLOUTQUEUE *v5; // r11
  _BYTE v7[16]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9189;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 9189LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGFASTMUTEX *const)&this[34].Blink, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( !LOBYTE(this[37].Blink) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9194;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DisplayCalloutBatchStarted", 9194LL, 0LL, 0LL, 0LL, 0LL);
  }
  LOBYTE(this[37].Blink) = 0;
  if ( this[38].Flink != &this[38] )
  {
    DXGGLOBAL::GetGlobal();
    Flink = (DXGADAPTER *)this[1].Flink;
    v8 = 0LL;
    DXGADAPTER::IsAdapterSessionized(Flink, v4, 0LL, &v8);
    v2 = DXGDISPLAYCALLOUTQUEUE::SubmitBatch(v5, this + 38, v8);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
  return v2;
}
