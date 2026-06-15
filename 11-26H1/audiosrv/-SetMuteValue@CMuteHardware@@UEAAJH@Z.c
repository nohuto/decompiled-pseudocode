/*
 * XREFs of ?SetMuteValue@CMuteHardware@@UEAAJH@Z @ 0x180109520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMuteHardware::SetMuteValue(CMuteHardware *this, unsigned int a2)
{
  __int64 v4; // rcx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x13u,
      (__int64)&WPP_896a03467a023f83569b8c3d81c0998d_Traceguids,
      this,
      a2);
  }
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v4 + 24LL))(v4, a2, (char *)this + 68);
  else
    return 2147500035LL;
}
