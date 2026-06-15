/*
 * XREFs of AUDIOVOLUMECONTROL_rundown @ 0x18007F920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall AUDIOVOLUMECONTROL_rundown(__int64 a1)
{
  _UNKNOWN **result; // rax

  result = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    result = (_UNKNOWN **)WPP_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 2),
                            11LL,
                            &WPP_65ee0b4b100c35d101a73a70e6d7f7c6_Traceguids,
                            a1);
  }
  if ( a1 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
