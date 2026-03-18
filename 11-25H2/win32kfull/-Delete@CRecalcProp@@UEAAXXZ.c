/*
 * XREFs of ?Delete@CRecalcProp@@UEAAXXZ @ 0x1401E6F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1401E702C (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 */

void __fastcall CRecalcProp::Delete(CRecalcProp *this)
{
  unsigned int v2; // edx
  char v3; // bl
  char v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v4 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v3 = 0;
  }
  if ( v4 || v3 )
  {
    UserSessionState = W32GetUserSessionState(this, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v6) = v3;
    LOBYTE(v7) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      7,
      59,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
  }
  if ( this )
    CRecalcProp::`scalar deleting destructor'(this, v2);
}
