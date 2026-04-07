/*
 * XREFs of ??1CTimelineBase@@UEAA@XZ @ 0x180060E0C
 * Callers:
 *     ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x180060D00 (--_E-$CTimeline@I@@UEAAPEAXI@Z.c)
 *     ??1CLivePreviewTimeline@@UEAA@XZ @ 0x180060D9C (--1CLivePreviewTimeline@@UEAA@XZ.c)
 *     ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x180060DC0 (--_E-$CTimeline@M@@UEAAPEAXI@Z.c)
 *     ??_ECTimelineBase@@UEAAPEAXI@Z @ 0x1800CAD30 (--_ECTimelineBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTimelineBase::~CTimelineBase(CTimelineBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CTimelineBase::`vftable';
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  CBaseObject::~CBaseObject(this);
}
