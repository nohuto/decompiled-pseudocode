/*
 * XREFs of VADServerUserSessionChanged @ 0x18001CD2C
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180080B00 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18001CE88 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18001D138 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ?NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z @ 0x1800D37C0 (-NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // edi
  unsigned int TsAudioProtocol; // r14d
  __int64 v6; // rcx
  unsigned int v7; // edx
  _QWORD *v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v12[7]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp-18h]

  v2 = *(_DWORD *)(a2 + 4);
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
  {
    TsAudioProtocol = GetTsAudioProtocol(v2);
    v11 = TsAudioProtocol;
    LODWORD(v10) = v2;
    v12[0] = off_1801702C8;
    v12[1] = &v10;
    v12[2] = &v11;
    v13 = v12;
    CEndpointStoreCache::ForEachEndpoint(v6, v12);
    if ( v13 )
    {
      v8 = v12;
      LOBYTE(v8) = v13 != v12;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 32LL))(v13, v8);
    }
    if ( g_pVolumeProvider )
      (*(void (__fastcall **)(struct IVolumeProvider *, _QWORD, _QWORD))(*(_QWORD *)g_pVolumeProvider + 24LL))(
        g_pVolumeProvider,
        v2,
        TsAudioProtocol);
    if ( a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 && a1 != 5 && a1 != 7 && a1 != 8 && a1 != 9 )
    {
      if ( a1 == 11 )
      {
        AudioSessionManagerProvider::NotifySessionTerminate(
          (AudioSessionManagerProvider *)*(unsigned int *)(a2 + 4),
          v7);
      }
      else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids, a1, v10);
      }
    }
  }
  return 0LL;
}
