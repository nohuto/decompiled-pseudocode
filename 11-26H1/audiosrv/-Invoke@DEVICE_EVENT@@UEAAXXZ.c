/*
 * XREFs of ?Invoke@DEVICE_EVENT@@UEAAXXZ @ 0x180152F00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DEVICE_EVENT::Invoke(DEVICE_EVENT *this)
{
  int v1; // eax
  int v2; // eax
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 2);
  switch ( v1 )
  {
    case 0:
      v2 = (*(__int64 (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 48LL))(
             g_AudioService,
             *((_QWORD *)this + 2));
      if ( v2 >= 0 )
        return;
      v3 = 384LL;
      goto LABEL_10;
    case 1:
      v2 = (*(__int64 (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 56LL))(
             g_AudioService,
             *((_QWORD *)this + 2));
      if ( v2 >= 0 )
        return;
      v3 = 388LL;
      goto LABEL_10;
    case 2:
      v2 = (*(__int64 (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 64LL))(
             g_AudioService,
             *((_QWORD *)this + 2));
      if ( v2 < 0 )
      {
        v3 = 392LL;
LABEL_10:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          v3,
          (__int64)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
          (const char *)(unsigned int)v2);
      }
      break;
  }
}
