/*
 * XREFs of ?FreezeChangeNotify@tagPROCESSINFO@@SAXPEAPEAU_EPROCESS@@K@Z @ 0x1401A66A0
 * Callers:
 *     ProcessFreezeChangeNotify @ 0x1401A7350 (ProcessFreezeChangeNotify.c)
 * Callees:
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Freeze@tagPROCESSINFO@@AEAAXXZ @ 0x1401A656C (-Freeze@tagPROCESSINFO@@AEAAXXZ.c)
 *     ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401A6EA8 (-Thaw@tagPROCESSINFO@@AEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDqs @ 0x1401A7A38 (WPP_RECORDER_AND_TRACE_SF_qDqs.c)
 */

void __fastcall tagPROCESSINFO::FreezeChangeNotify(struct _EPROCESS **a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  int IsProcessDeepFrozen; // r13d
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  tagPROCESSINFO *v8; // rsi
  bool v9; // bp
  bool v10; // r12
  unsigned __int8 ProcessId; // al
  PEPROCESS v12; // rbx
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  const char *v17; // rcx
  int v18; // r8d
  int v19; // edx
  int v20; // [rsp+20h] [rbp-78h]
  int v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+30h] [rbp-68h]
  int v23; // [rsp+38h] [rbp-60h]
  _BYTE v24[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v25; // [rsp+68h] [rbp-30h]

  v25 = 0LL;
  v3 = a2;
  v24[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v24, a2);
  if ( v3 )
  {
    v4 = v3;
    do
    {
      IsProcessDeepFrozen = KfIsProcessDeepFrozen(*a1);
      ProcessWin32Process = PsGetProcessWin32Process(*a1);
      v8 = (tagPROCESSINFO *)ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        v7 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
        v8 = (tagPROCESSINFO *)(v7 & ProcessWin32Process);
      }
      v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ProcessId = (unsigned __int8)PsGetProcessId(*a1);
        v12 = *a1;
        v13 = ProcessId & 0xFC;
        UserSessionState = W32GetUserSessionState(v15, v14);
        v17 = "Frozen";
        LOBYTE(v18) = v10;
        LOBYTE(v19) = v9;
        if ( !IsProcessDeepFrozen )
          v17 = "Running";
        WPP_RECORDER_AND_TRACE_SF_qDqs(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(UserSessionState + 69144),
          v20,
          v21,
          v22,
          v23,
          (char)v12,
          v13,
          (char)v8,
          (__int64)v17);
      }
      if ( v8 )
      {
        if ( IsProcessDeepFrozen )
          tagPROCESSINFO::Freeze(v8, v7);
        else
          tagPROCESSINFO::Thaw(v8);
      }
      ++a1;
      --v4;
    }
    while ( v4 );
  }
  if ( v24[0] )
    --*(_DWORD *)(v25 + 28);
}
