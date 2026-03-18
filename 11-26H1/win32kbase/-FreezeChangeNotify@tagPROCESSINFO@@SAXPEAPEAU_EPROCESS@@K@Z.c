/*
 * XREFs of ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x14013A1DC
 * Callers:
 *     ProcessFreezeChangeNotify @ 0x14014C310 (ProcessFreezeChangeNotify.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDqs @ 0x14013A35C (WPP_RECORDER_AND_TRACE_SF_qDqs.c)
 *     ?Freeze@tagPROCESSINFO@@AEAAXXZ @ 0x1401B9914 (-Freeze@tagPROCESSINFO@@AEAAXXZ.c)
 *     ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401B9A48 (-Thaw@tagPROCESSINFO@@AEAAXXZ.c)
 */

void __fastcall tagPROCESSINFO::FreezeChangeNotify(struct _EPROCESS **a1, unsigned int a2, int a3)
{
  __int64 v5; // r15
  int IsProcessDeepFrozen; // r13d
  __int64 ProcessWin32Process; // rax
  tagPROCESSINFO *v8; // rsi
  bool v9; // bp
  bool v10; // r12
  unsigned __int8 ProcessId; // al
  PEPROCESS v12; // rbx
  char v13; // di
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 UserSessionState; // rax
  const char *v18; // rcx
  int v19; // r8d
  int v20; // edx
  int v21; // [rsp+20h] [rbp-78h]
  int v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+38h] [rbp-60h]
  _BYTE v25[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v26; // [rsp+68h] [rbp-30h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25, a2, a3);
  if ( a2 )
  {
    v5 = a2;
    do
    {
      IsProcessDeepFrozen = KfIsProcessDeepFrozen(*a1);
      ProcessWin32Process = PsGetProcessWin32Process(*a1);
      v8 = (tagPROCESSINFO *)ProcessWin32Process;
      if ( ProcessWin32Process )
        v8 = (tagPROCESSINFO *)(-(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process);
      v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ProcessId = (unsigned __int8)PsGetProcessId(*a1);
        v12 = *a1;
        v13 = ProcessId & 0xFC;
        UserSessionState = W32GetUserSessionState(v15, v14, v16);
        v18 = "Frozen";
        LOBYTE(v19) = v10;
        LOBYTE(v20) = v9;
        if ( !IsProcessDeepFrozen )
          v18 = "Running";
        WPP_RECORDER_AND_TRACE_SF_qDqs(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(UserSessionState + 69136),
          v21,
          v22,
          v23,
          v24,
          (char)v12,
          v13,
          (char)v8,
          (__int64)v18);
      }
      if ( v8 )
      {
        if ( IsProcessDeepFrozen )
          tagPROCESSINFO::Freeze(v8);
        else
          tagPROCESSINFO::Thaw(v8);
      }
      ++a1;
      --v5;
    }
    while ( v5 );
  }
  if ( v25[0] )
    --*(_DWORD *)(v26 + 28);
}
