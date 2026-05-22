/*
 * XREFs of ?OnUndockedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180072390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::OnUndockedEventsRequiredChanged(PenEventsClientCustomProxy *this)
{
  __int64 v2; // r8

  LOBYTE(v2) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 120LL))((char *)this + 8);
  return PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged(this, 4LL, v2);
}
