/*
 * XREFs of SetDialogPointer @ 0x1402E1884
 * Callers:
 *     NtUserSetDialogPointer @ 0x14024D910 (NtUserSetDialogPointer.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1402860FC (unsafe_cast_fnid_zero_to_PDIALOG.c)
 */

__int64 __fastcall SetDialogPointer(struct tagWND *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // ecx
  __int64 v11; // [rsp+70h] [rbp+18h]

  v4 = (_QWORD *)((char *)a1 + 40);
  v5 = *((_QWORD *)a1 + 5);
  if ( *(int *)(v5 + 200) >= 30 && (*(_BYTE *)(v5 + 18) & 4) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v7 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) )
    {
      if ( !*(_DWORD *)(*v4 + 248LL) || *(_WORD *)(*v4 + 42LL) )
      {
        v11 = unsafe_cast_fnid_zero_to_PDIALOG((__int64)a1);
        if ( v11 )
        {
          *(_QWORD *)(v11 + 8) = a2;
          v8 = *v4;
          if ( a2 )
          {
            if ( !*(_WORD *)(v8 + 42) )
              *(_WORD *)(v8 + 42) = 676;
            v9 = 1;
          }
          else
          {
            *(_WORD *)(v8 + 42) |= 0x4000u;
            v9 = 0;
          }
          SetOrClrWF(v9, a1, 0x201u, 1);
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 68);
      }
    }
  }
  return 1LL;
}
