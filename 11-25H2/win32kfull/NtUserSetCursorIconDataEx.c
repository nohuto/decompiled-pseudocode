/*
 * XREFs of NtUserSetCursorIconDataEx @ 0x14029E9C0
 * Callers:
 *     NtUserSetCursorIconData @ 0x14029E9A0 (NtUserSetCursorIconData.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140131284 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserSetCursorIconDataEx(__int64 a1, ULONG64 a2, ULONG64 a3, ULONG64 a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  struct tagCURSOR *v11; // rsi
  unsigned int v12; // ebx
  int v13; // edx
  WCHAR *v14; // r8
  WCHAR *v15; // r9
  ULONG64 v16; // r9
  __int64 v17; // rcx
  size_t Size; // [rsp+20h] [rbp-128h]
  int v20; // [rsp+30h] [rbp-118h]
  struct _UNICODE_STRING v21; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-F8h]
  struct _UNICODE_STRING v23; // [rsp+58h] [rbp-F0h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+90h] [rbp-B8h]
  __int128 v27; // [rsp+A0h] [rbp-A8h]
  __int128 v28; // [rsp+B0h] [rbp-98h]
  __int128 v29; // [rsp+C0h] [rbp-88h]
  __int128 v30; // [rsp+D0h] [rbp-78h]
  __int128 v31; // [rsp+E0h] [rbp-68h]
  __int128 v32; // [rsp+F0h] [rbp-58h]
  __int64 v33; // [rsp+100h] [rbp-48h]

  v21 = 0LL;
  v23 = 0LL;
  memset_0(&v25, 0, 0x88uLL);
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
  LOBYTE(v9) = 3;
  v10 = HMValidateHandleWithDescriptor(a1, v9);
  v11 = (struct tagCURSOR *)v10;
  v12 = 0;
  if ( !v10 )
    goto LABEL_39;
  if ( (*(_DWORD *)(v10 + 80) & 0x800) == 0 )
  {
    UserSetLastError(0);
    goto LABEL_39;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_DWORD *)&v21.Length = *(_DWORD *)a2;
  v21.Buffer = *(PWSTR *)(a2 + 8);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v13 = *(_DWORD *)a3;
  v20 = *(_DWORD *)a3;
  *(_DWORD *)&v23.Length = *(_DWORD *)a3;
  v14 = *(WCHAR **)(a3 + 8);
  v23.Buffer = v14;
  if ( ((__int64)v21.Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (PWSTR)((char *)v21.Buffer + v21.Length + 2);
  if ( v15 <= v21.Buffer || (unsigned __int64)v15 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( v21.Length > v21.MaximumLength )
  {
    if ( (v21.Length & 1) == 0 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( (v21.Length & 1) != 0 )
  {
LABEL_36:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8109);
LABEL_37:
    ExRaiseAccessViolation();
  }
  if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
    if ( v16 <= (unsigned __int64)v14 || v16 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v13 > HIWORD(v20) || (v13 & 1) != 0 )
    {
      if ( (v13 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8110);
      ExRaiseAccessViolation();
    }
  }
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v25 = *(_OWORD *)a4;
  v26 = *(_OWORD *)(a4 + 16);
  v27 = *(_OWORD *)(a4 + 32);
  v28 = *(_OWORD *)(a4 + 48);
  v29 = *(_OWORD *)(a4 + 64);
  v30 = *(_OWORD *)(a4 + 80);
  v31 = *(_OWORD *)(a4 + 96);
  v32 = *(_OWORD *)(a4 + 112);
  v33 = *(_QWORD *)(a4 + 128);
  if ( (DWORD2(v26) & 0xFFFFEFB0) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_39;
  }
  if ( (BYTE8(v26) & 8) == 0 )
  {
LABEL_34:
    v22 = v12;
    ProbeForRead(*((volatile void **)&v31 + 1), v12, 4u);
    LODWORD(Size) = v12;
    v12 = (unsigned __int8)_SetCursorIconDataEx(v11, &v21, &v23, (struct tagCURSORDATA *)&v25, Size, a5);
    goto LABEL_39;
  }
  if ( !(WORD1(v31) | WORD3(v31)) && v32 == __PAIR128__(8LL * (int)v31, *((_QWORD *)&v32 + 1) + 4LL * SDWORD1(v31)) )
  {
    v12 = 8 * (DWORD1(v31) + v31);
    goto LABEL_34;
  }
LABEL_39:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
  UserSessionSwitchLeaveCrit(v17);
  return (int)v12;
}
