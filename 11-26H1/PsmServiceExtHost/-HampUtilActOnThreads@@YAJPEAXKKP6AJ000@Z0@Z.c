/*
 * XREFs of ?HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z @ 0x1800177F4
 * Callers:
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x180065068 (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 *     ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007921C (-HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?HampSystemWaitForSingleObject@@YAJPEAXK@Z @ 0x180017CC8 (-HampSystemWaitForSingleObject@@YAJPEAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampUtilActOnThreads(
        HANDLE SourceHandle,
        int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(void *, HANDLE, void *),
        void *a5)
{
  unsigned int v5; // esi
  HANDLE CurrentProcess; // rbx
  HANDLE v9; // rax
  NTSTATUS v10; // eax
  int NextThread; // ebx
  HANDLE v12; // rdi
  HANDLE v13; // rdx
  unsigned int v14; // edx
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  void *TargetHandle; // [rsp+48h] [rbp-8h] BYREF

  TargetHandle = 0LL;
  v5 = a2 | 0x100800;
  Handle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v9 = GetCurrentProcess();
  v10 = NtDuplicateObject(v9, SourceHandle, CurrentProcess, &TargetHandle, 0x400u, 0, 0);
LABEL_2:
  NextThread = v10;
  if ( v10 >= 0 )
  {
    while ( 1 )
    {
      v12 = Handle;
      v13 = Handle;
      Handle = 0LL;
      NextThread = NtGetNextThread(TargetHandle, v13, v5, 0LL, 0, &Handle);
      if ( v12 )
        NtClose(v12);
      if ( NextThread == -2147483622 )
        break;
      if ( NextThread < 0 )
        goto LABEL_10;
      if ( (unsigned int)HampSystemWaitForSingleObject(Handle, v14) )
      {
        v10 = a4(TargetHandle, Handle, a5);
        goto LABEL_2;
      }
    }
    NextThread = 0;
  }
LABEL_10:
  if ( Handle )
    NtClose(Handle);
  if ( TargetHandle )
    NtClose(TargetHandle);
  return (unsigned int)NextThread;
}
