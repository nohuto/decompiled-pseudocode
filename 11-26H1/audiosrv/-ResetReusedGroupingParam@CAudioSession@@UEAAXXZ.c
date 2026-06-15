/*
 * XREFs of ?ResetReusedGroupingParam@CAudioSession@@UEAAXXZ @ 0x1800868E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSession::ResetReusedGroupingParam(CAudioSession *this)
{
  UUID Uuid; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 220) )
  {
    Uuid = 0LL;
    UuidCreate(&Uuid);
    (*(void (__fastcall **)(CAudioSession *, UUID *, _QWORD))(*(_QWORD *)this + 112LL))(this, &Uuid, 0LL);
  }
}
