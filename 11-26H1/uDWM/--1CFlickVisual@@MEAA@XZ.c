/*
 * XREFs of ??1CFlickVisual@@MEAA@XZ @ 0x1800B4D84
 * Callers:
 *     ??_GCFlickVisual@@MEAAPEAXI@Z @ 0x1800B4E00 (--_GCFlickVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800A94B0 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800B4F30 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 */

void __fastcall CFlickVisual::~CFlickVisual(CFlickVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CFlickVisual::`vftable';
  CFlickVisual::StopTimer(this);
  CContactManager::PostFlickFeedbackUpdate(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20),
    *((_DWORD *)this + 56),
    *((_DWORD *)this + 57),
    (_QWORD *)this + 30,
    0);
  v2 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v3 )
    CBaseObject::Release(v3);
  CTouchVisual::~CTouchVisual((CBaseObject **)this);
}
