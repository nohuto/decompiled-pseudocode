/*
 * XREFs of ?EndTransition@CAccent@@QEAAJXZ @ 0x180084928
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180084834 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A0DF0 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x1800406A8 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::EndTransition(CAccent *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct CVisualProxy **v4; // rdx
  CBaseObject *v5; // rcx
  CMILRefCountBase *v6; // rcx
  CBaseObject *v7; // rcx
  unsigned int v8; // eax
  int updated; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 272) )
  {
    v11 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v3 = *((_QWORD *)this + 40);
    if ( v3 )
    {
      CBaseObject::Release((CBaseObject *)(v3 + 8));
      *((_QWORD *)this + 40) = 0LL;
    }
    v4 = (struct CVisualProxy **)*((_QWORD *)this + 35);
    if ( v4 )
      CContainerVisual::RemoveChild(this, v4);
    v5 = (CBaseObject *)*((_QWORD *)this + 35);
    if ( v5 )
      CBaseObject::Release(v5);
    v6 = (CMILRefCountBase *)*((_QWORD *)this + 36);
    *((_QWORD *)this + 35) = v6;
    if ( v6 )
      CMILRefCountBase::AddRef(v6);
    v7 = (CBaseObject *)*((_QWORD *)this + 36);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)this + 36) = 0LL;
    }
    v8 = *((_DWORD *)this + 66);
    *((_DWORD *)this + 79) = v8;
    if ( (*((_BYTE *)this + 260) & 1) != 0 )
      CAccent::s_clrCurrentAccentBackground = v8;
    *((_OWORD *)this + 15) = *((_OWORD *)this + 16);
    *((_DWORD *)this + 63) = 0;
    *((_BYTE *)this + 272) = 0;
    *((_DWORD *)this + 64) = 6;
    updated = CAccent::_UpdateBackgroundGeometry(this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x263u, 0LL);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
    }
    else
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
  }
  return v2;
}
