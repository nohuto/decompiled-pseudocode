/*
 * XREFs of HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x140021C60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x140027134 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  unsigned int v4; // r10d
  int v5; // ecx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 80);
  if ( v2 )
  {
    if ( *(_DWORD *)(v1 + 96) )
    {
      *(_DWORD *)(v1 + 112) = 0;
      v4 = 0;
      *(_DWORD *)(v1 + 144) = 0;
      for ( *(_DWORD *)(v1 + 128) = 0; v4 < *(_DWORD *)(v2 + 24); ++v4 )
      {
        v5 = *(_DWORD *)(v2 + 80LL * v4 + 48);
        if ( v5 == 4 )
        {
          *(_DWORD *)(v2 + 80LL * v4 + 48) = 5;
          *(_QWORD *)(*(_QWORD *)(v1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(v1 + 128))++) = *(_QWORD *)(v2 + 80LL * v4 + 40);
        }
        else if ( v5 == 6 )
        {
          *(_QWORD *)(*(_QWORD *)(v1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(v1 + 144))++) = *(_QWORD *)(v2 + 80LL * v4 + 40);
        }
      }
      if ( *(_DWORD *)(v1 + 128) )
      {
        HUBUCX_EnableDisableEndpointsUsingUCXIoctl(v1);
        return 1000LL;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        4,
        5,
        58,
        (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
    }
  }
  HUBSM_AddEvent(v1 + 512, 4028);
  return 1000LL;
}
