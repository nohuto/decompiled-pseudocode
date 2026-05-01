/*
 * XREFs of ??$ActivateInstance@UITileQueryFilter@Tiles@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUITileQueryFilter@Tiles@Internal@1@@Z @ 0x18068B3C0
 * Callers:
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x180691A7C (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Internal::Tiles::ITileQueryFilter>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v5 = 0LL;
  v3 = RoActivateInstance(a1, &v5);
  if ( v3 >= 0 )
  {
    if ( !memcmp_0(&GUID_ffb7d4af_e8e8_49d1_992e_50e5b4d8615f, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
    {
      *a2 = v5;
    }
    else
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5)(
             v5,
             &GUID_ffb7d4af_e8e8_49d1_992e_50e5b4d8615f,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return (unsigned int)v3;
}
