/*
 * XREFs of ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x14037E398
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x14037E300 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x14037EEE4 (-ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x14037EF10 (-Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x14037EFF0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x14037F10C (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 */

void __fastcall DXGGLOBAL::SetPDCIdleResiliencyEngaged(DXGGLOBAL *this, int a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGGLOBAL *)((char *)this + 2112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( a2 )
  {
    DripsBlockerTrackingHelper::TimeInterval::Start((DXGGLOBAL *)((char *)this + 304360));
  }
  else
  {
    DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((DXGGLOBAL *)((char *)this + 2280));
    DripsBlockerTrackingHelper::TimeInterval::Stop((DXGGLOBAL *)((char *)this + 304360));
  }
  DripsBlockerTrackingHelper::ResetDAM((DXGGLOBAL *)((char *)this + 2280));
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v4);
}
