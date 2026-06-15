/*
 * XREFs of ?SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800D07A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetAllVolumes(
        CServerAudioSessionControl *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4,
        int *a5)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const float *, const struct _GUID *, int *))(**((_QWORD **)this + 9)
                                                                                               + 328LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           a4,
           a5);
}
