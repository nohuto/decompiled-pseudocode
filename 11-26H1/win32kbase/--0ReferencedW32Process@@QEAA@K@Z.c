/*
 * XREFs of ??0ReferencedW32Process@@QEAA@K@Z @ 0x1400C56AC
 * Callers:
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgIncProcessHandleCountEx @ 0x1400C5508 (HmgIncProcessHandleCountEx.c)
 * Callees:
 *     <none>
 */

ReferencedW32Process *__fastcall ReferencedW32Process::ReferencedW32Process(ReferencedW32Process *this, int a2)
{
  void *v2; // rbx
  __int64 v4; // rcx
  PVOID *CurrentProcessWin32Process; // rax
  PVOID *v6; // rbx
  PVOID *ProcessWin32Process; // rax
  PVOID *v9; // rbx
  PEPROCESS Process; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void *)a2;
  *(_QWORD *)this = 0LL;
  if ( a2 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    CurrentProcessWin32Process = (PVOID *)PsGetCurrentProcessWin32Process(v4);
    v6 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    {
      *(_QWORD *)this = 0LL;
    }
    else
    {
      *(_QWORD *)this = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        ObfReferenceObject(*CurrentProcessWin32Process);
        _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      }
    }
  }
  else
  {
    Process = 0LL;
    if ( PsLookupProcessByProcessId(v2, &Process) >= 0 )
    {
      ProcessWin32Process = (PVOID *)PsGetProcessWin32Process(Process);
      v9 = ProcessWin32Process;
      if ( ProcessWin32Process && !*ProcessWin32Process )
      {
        *(_QWORD *)this = 0LL;
      }
      else
      {
        *(_QWORD *)this = ProcessWin32Process;
        if ( ProcessWin32Process )
        {
          ObfReferenceObject(*ProcessWin32Process);
          _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
        }
      }
      ObfDereferenceObject(Process);
    }
  }
  return this;
}
