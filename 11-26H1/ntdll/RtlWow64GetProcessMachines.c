/*
 * XREFs of RtlWow64GetProcessMachines @ 0x180020110
 * Callers:
 *     LdrpGetModuleName @ 0x18001EF80 (LdrpGetModuleName.c)
 *     DbgUiIssueRemoteBreakin @ 0x180139060 (DbgUiIssueRemoteBreakin.c)
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180161C10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163510 (_alloca_probe.c)
 */

NTSTATUS __cdecl RtlWow64GetProcessMachines(HANDLE ProcessHandle, PUSHORT ProcessMachine, PUSHORT NativeMachine)
{
  __int64 v3; // rbx
  int v6; // r9d
  USHORT v7; // cx
  USHORT i; // dx
  NTSTATUS result; // eax
  ULONG *p_ReturnLength; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  void *v14; // rsp
  ULONG v15; // r8d
  USHORT v16; // r10
  USHORT v17; // r11
  struct _TEB *v18; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v20; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp+0h] BYREF
  HANDLE InputBuffer; // [rsp+38h] [rbp+8h] BYREF
  _BYTE SystemInformation[24]; // [rsp+40h] [rbp+10h] BYREF

  LODWORD(v3) = 0;
  InputBuffer = ProcessHandle;
  v6 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    if ( !NtCurrentTeb()->WowTebOffset )
    {
      v7 = 0;
      i = -31132;
      goto LABEL_4;
    }
    v18 = NtCurrentTeb();
    WowTebOffset = v18->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v18 = (struct _TEB *)((char *)v18 + WowTebOffset);
    if ( (_DWORD)v18 == LODWORD(v18->NtTib.SubSystemTib) )
      v20 = (_WORD *)LODWORD(v18->glDispatchTable[137]);
    else
      v20 = v18->TlsSlots[10];
    if ( v20 )
    {
      v7 = v20[17];
      if ( v7 )
      {
        i = v20[16];
        if ( i )
          goto LABEL_4;
      }
    }
  }
  ReturnLength = 20;
  p_ReturnLength = (ULONG *)SystemInformation;
  v6 = NtQuerySystemInformationEx(
         SystemSupportedProcessorArchitectures2,
         &InputBuffer,
         8u,
         SystemInformation,
         0x14u,
         &ReturnLength);
  if ( v6 == -1073741789 )
  {
    v11 = ReturnLength + 15LL;
    if ( v11 <= ReturnLength )
      v11 = 0xFFFFFFFFFFFFFF0LL;
    v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
    v13 = alloca(v12);
    v14 = alloca(v12);
    p_ReturnLength = &ReturnLength;
    v6 = NtQuerySystemInformationEx(
           SystemSupportedProcessorArchitectures2,
           &InputBuffer,
           8u,
           &ReturnLength,
           ReturnLength,
           &ReturnLength);
  }
  if ( v6 < 0 )
    return v6;
  v15 = *p_ReturnLength;
  v7 = 0;
  for ( i = 0; (_WORD)v15; i = v17 )
  {
    v3 = (unsigned int)(v3 + 1);
    v16 = v15;
    if ( (v15 & 0x1C0000) != 0x180000 )
      v16 = v7;
    v7 = v16;
    if ( (v15 & 0x40000) == 0 )
      LOWORD(v15) = i;
    v17 = v15;
    v15 = p_ReturnLength[v3];
  }
LABEL_4:
  *ProcessMachine = v7;
  result = v6;
  if ( NativeMachine )
    *NativeMachine = i;
  return result;
}
