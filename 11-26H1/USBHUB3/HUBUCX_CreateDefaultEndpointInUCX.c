/*
 * XREFs of HUBUCX_CreateDefaultEndpointInUCX @ 0x140026620
 * Callers:
 *     HUBDSM_CreatingUCXDefaultEndpointFor30 @ 0x140021730 (HUBDSM_CreatingUCXDefaultEndpointFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_CreateDefaultEndpointInUCX(__int64 a1)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 440LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 248LL),
         *(_QWORD *)(a1 + 24),
         *(unsigned int *)(a1 + 160),
         a1 + 88);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = v2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x25u,
        (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
        v4);
    }
    *(_DWORD *)(a1 + 1572) = -1073737728;
    *(_DWORD *)(a1 + 1568) = -1073741670;
  }
  return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
}
