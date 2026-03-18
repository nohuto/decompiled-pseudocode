/*
 * XREFs of NtUserSetDesktopVisualInputSink @ 0x1401BF950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1401609D8 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401A8B80 (-CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z.c)
 */

__int64 __fastcall NtUserSetDesktopVisualInputSink(void *a1, unsigned __int16 *Src)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  ULONG v7; // ecx
  __int64 CurrentProcessWin32Process; // rax
  struct _LUID v10; // [rsp+60h] [rbp+18h] BYREF
  struct _LUID v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v11 = 0LL;
  v5 = UIPrivilegeIsolation::CheckCapability(L"shellExperienceComposer", Src);
  if ( v5 < 0 )
  {
    v7 = RtlNtStatusToDosError(v5);
LABEL_3:
    UserSetLastError(v7);
    return v4;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_BYTE *)(CurrentProcessWin32Process + 808) & 0x30) != 0x10 )
  {
    v7 = 5;
    goto LABEL_3;
  }
  if ( a1 )
  {
    v10 = 0LL;
    RtlCopyFromUser(&v10, Src, 8uLL);
    v11 = v10;
  }
  return CDesktopInputSink::SetDesktopInputSink(a1, &v11);
}
