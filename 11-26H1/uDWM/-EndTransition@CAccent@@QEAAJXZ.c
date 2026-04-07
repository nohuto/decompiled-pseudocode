/*
 * XREFs of ?EndTransition@CAccent@@QEAAJXZ @ 0x1800635F0
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18006374C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x180095424 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18006384C (-_UpdateResources@CAccent@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::EndTransition(CAccent *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct CVisual *v4; // rdx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  unsigned int v8; // eax
  int updated; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 216) )
  {
    v11 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v3 = *((_QWORD *)this + 33);
    if ( v3 )
    {
      CBaseObject::Release((CBaseObject *)(v3 + 8));
      *((_QWORD *)this + 33) = 0LL;
    }
    v4 = (struct CVisual *)*((_QWORD *)this + 28);
    if ( v4 )
      CContainerVisual::RemoveChild(this, v4);
    v5 = (CBaseObject *)*((_QWORD *)this + 28);
    if ( v5 )
      CBaseObject::Release(v5);
    v6 = (CBaseObject *)*((_QWORD *)this + 29);
    *((_QWORD *)this + 28) = v6;
    if ( v6 )
      CBaseObject::AddRef(v6);
    v7 = (CBaseObject *)*((_QWORD *)this + 29);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)this + 29) = 0LL;
    }
    v8 = *((_DWORD *)this + 52);
    *((_DWORD *)this + 65) = v8;
    if ( (*((_BYTE *)this + 204) & 1) != 0 )
      CAccent::s_clrCurrentAccentBackground = v8;
    *(_OWORD *)((char *)this + 184) = *(_OWORD *)((char *)this + 200);
    *((_DWORD *)this + 49) = 0;
    *((_BYTE *)this + 216) = 0;
    *((_DWORD *)this + 50) = 6;
    updated = CAccent::_UpdateResources(this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x243u, 0LL);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
    }
    else
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
  }
  return v2;
}
