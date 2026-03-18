/*
 * XREFs of ?Delete@CRecalcProp@@UEAAXXZ @ 0x1402101E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1402102BC (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 */

void __fastcall CRecalcProp::Delete(CRecalcProp *this)
{
  unsigned int v2; // edx
  char v3; // bl
  char v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  v2 = (unsigned int)WPP_GLOBAL_Control;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v4 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( v4 || v3 )
  {
    UserSessionState = W32GetUserSessionState(this, WPP_GLOBAL_Control);
    LOBYTE(v6) = v3;
    LOBYTE(v7) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      7,
      59,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
  if ( this )
    CRecalcProp::`scalar deleting destructor'(this, v2);
}
