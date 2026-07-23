/*
 * XREFs of NtSystemDebugControl @ 0x14084A9E0
 * Callers:
 *     DifNtSystemDebugControlWrapper @ 0x140693090 (DifNtSystemDebugControlWrapper.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     DbgBreakPointWithStatus @ 0x140536DB0 (DbgBreakPointWithStatus.c)
 *     DbgkCaptureLiveKernelDump @ 0x1405B6A88 (DbgkCaptureLiveKernelDump.c)
 *     KdDisableDebugger @ 0x1405E6340 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405E6480 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x1405E69A8 (KdSetDbgPrintBufferSize.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     DbgkCaptureLiveDump @ 0x14078DBB8 (DbgkCaptureLiveDump.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084A4C4 (ExpKdPullRemoteFileForUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSystemDebugControl(
        SYSDBG_COMMAND Command,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  SIZE_T v7; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS v12; // edi
  ULONG v13; // esi
  int ULongFromUser; // eax
  __int32 v15; // ebx
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  int v19; // ebx
  int v20; // ebx
  __int32 v21; // ebx
  __int32 v22; // ebx
  __int32 v23; // ebx
  __int32 v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int32 v27; // ebx
  __int32 v28; // ebx
  __int32 v29; // ebx
  __int32 v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  char v35; // cl
  NTSTATUS v36; // eax
  int v37; // eax
  unsigned int v38; // r15d
  void *Pool2; // rbx
  __int64 v40; // r8
  int v41; // eax
  __int32 v42; // ebx
  __int32 v43; // ebx
  __int32 v44; // ebx
  __int32 v45; // ebx
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  int v49; // ebx
  size_t Size; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+40h] [rbp-D8h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v53; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v54; // [rsp+68h] [rbp-B0h]
  __int128 v55; // [rsp+78h] [rbp-A0h]
  __int64 v56; // [rsp+88h] [rbp-90h]
  _BYTE v57[136]; // [rsp+90h] [rbp-88h] BYREF

  v7 = InputBufferLength;
  LODWORD(Size) = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  memset_0(v57, 0, 0x48uLL);
  v51 = 0LL;
  P[0] = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((Command - 29) & 0xFFFFFFF7) != 0 )
    return -1073740972;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Command != SysDbgKdPullRemoteFile && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
    || PsIsCurrentThreadInServerSilo() )
  {
    return -1073741790;
  }
  v12 = 0;
  if ( PreviousMode )
  {
    if ( (_DWORD)v7 )
      ProbeForRead(InputBuffer, v7, 4u);
    v13 = OutputBufferLength;
    if ( OutputBufferLength )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 4u);
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
  }
  else
  {
    v13 = OutputBufferLength;
  }
  if ( Command <= SysDbgWriteBusData )
  {
    if ( Command == SysDbgWriteBusData )
      return -1073741822;
    if ( Command > SysDbgWriteVirtual )
    {
      v21 = Command - 10;
      if ( !v21 )
        return -1073741822;
      v22 = v21 - 1;
      if ( !v22 )
        return -1073741822;
      v23 = v22 - 1;
      if ( !v23 )
        return -1073741822;
      v24 = v23 - 1;
      if ( !v24 )
        return -1073741822;
      v25 = v24 - 1;
      if ( !v25 )
        return -1073741822;
      v26 = v25 - 1;
      if ( !v26 )
        return -1073741822;
      v20 = v26 - 1;
      if ( !v20 )
        return -1073741822;
    }
    else
    {
      if ( Command == SysDbgWriteVirtual )
        return -1073741822;
      if ( Command == SysDbgQueryModuleInformation )
        return -1073741822;
      v15 = Command - 1;
      if ( !v15 )
        return -1073741822;
      v16 = v15 - 1;
      if ( !v16 )
        return -1073741822;
      v17 = v16 - 1;
      if ( !v17 )
        return -1073741822;
      v18 = v17 - 1;
      if ( !v18 )
        return -1073741822;
      v19 = v18 - 1;
      if ( !v19 )
        return -1073741822;
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( (_BYTE)KdDebuggerEnabled == 1 )
          DbgBreakPointWithStatus(6u);
        else
          v12 = -1073741823;
        goto LABEL_124;
      }
    }
    if ( (unsigned int)(v20 - 1) <= 1 )
      return -1073741822;
LABEL_95:
    v12 = -1073741821;
    goto LABEL_124;
  }
  if ( Command > SysDbgGetTriageDump )
  {
    v42 = Command - 30;
    if ( !v42 )
    {
      if ( v13 == 1 )
      {
        *(_BYTE *)OutputBuffer = KdBlockEnable;
        goto LABEL_124;
      }
      return -1073741820;
    }
    v43 = v42 - 1;
    if ( !v43 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdBlockEnable = *(_BYTE *)InputBuffer;
        goto LABEL_124;
      }
      return -1073741820;
    }
    v44 = v43 - 1;
    if ( !v44 )
    {
      KdUmBreakMarker = -618808389;
      goto LABEL_118;
    }
    v45 = v44 - 1;
    if ( v45 )
    {
      v46 = v45 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( v47 )
        {
          v48 = v47 - 1;
          if ( v48 )
          {
            v49 = v48 - 1;
            if ( !v49 )
            {
              if ( !v13 && (((_DWORD)v7 - 64) & 0xFFFFFFF7) == 0 )
              {
                if ( PreviousMode )
                  RtlCopyFromUser(v57, InputBuffer, (unsigned int)v7);
                else
                  RtlCopyVolatileMemory(v57, InputBuffer, (unsigned int)v7);
                v12 = DbgkCaptureLiveKernelDump((__int64)v57);
                EtwTiLogSyscallUsage((unsigned int)v12, 26LL);
                goto LABEL_124;
              }
              return -1073741820;
            }
            if ( v49 != 1 )
              goto LABEL_95;
            if ( (_DWORD)v7 != 16 || v13 )
              return -1073741820;
            v36 = ExpKdPullRemoteFileForUser(InputBuffer);
LABEL_67:
            v12 = v36;
            goto LABEL_124;
          }
          goto LABEL_110;
        }
        if ( v13 != 4 )
          return -1073741820;
        if ( PreviousMode )
          RtlWriteULongToUser(OutputBuffer, KdUmAttachPid);
        else
          *(_DWORD *)OutputBuffer = KdUmAttachPid;
        if ( KdResetUmAttachPid )
LABEL_110:
          KdUmAttachPid = 0;
LABEL_118:
        v12 = 0;
        goto LABEL_124;
      }
    }
    else
    {
      if ( v13 != 4 )
        return -1073741820;
      if ( PreviousMode )
        RtlWriteULongToUser(OutputBuffer, KdUmBreakPid);
      else
        *(_DWORD *)OutputBuffer = KdUmBreakPid;
      if ( !KdResetUmBreakPid )
        goto LABEL_118;
    }
    KdUmBreakPid = 0;
    goto LABEL_118;
  }
  if ( Command == SysDbgGetTriageDump )
  {
    if ( (_DWORD)v7 == 56 && v13 >= 0x40000 )
    {
      v53 = *(_OWORD *)InputBuffer;
      v54 = *((_OWORD *)InputBuffer + 1);
      v55 = *((_OWORD *)InputBuffer + 2);
      v56 = *((_QWORD *)InputBuffer + 6);
      if ( DWORD2(v55) || !HIDWORD(v55) || (v53 & 0xFFFFFFFE) != 0 || 8 * (unsigned __int64)HIDWORD(v55) > 0xFFFFFFFF )
        return -1073741811;
      v37 = 0x100000;
      if ( v13 <= 0x100000 )
        v37 = v13;
      v38 = v37;
      Pool2 = (void *)ExAllocatePool2(0x40uLL);
      P[1] = Pool2;
      if ( Pool2 )
      {
        LOBYTE(v40) = PreviousMode;
        v12 = ExLockUserBuffer(v56, (unsigned int)(8 * HIDWORD(v55)), v40, 0LL, &v51, P);
        if ( v12 >= 0 )
        {
          v56 = v51;
          v41 = DbgkCaptureLiveDump((__int64)&v53, Pool2, v38, (__int64)&Size);
          v12 = v41;
          if ( v41 >= 0 )
          {
            if ( (unsigned int)Size <= v13 )
            {
              EtwTiLogSyscallUsage((unsigned int)v41, 25LL);
              memmove(OutputBuffer, Pool2, (unsigned int)Size);
            }
            else
            {
              v12 = -1073741823;
            }
          }
          ExFreePoolWithTag(Pool2, 0);
          ExUnlockUserBuffer((struct _MDL *)P[0]);
        }
        else
        {
          ExFreePoolWithTag(Pool2, 0);
        }
      }
      else
      {
        v12 = -1073741801;
      }
      goto LABEL_124;
    }
    return -1073741820;
  }
  v27 = Command - 20;
  if ( !v27 )
    return -1073741822;
  v28 = v27 - 1;
  if ( !v28 )
  {
    v36 = KdEnableDebugger();
    goto LABEL_67;
  }
  v29 = v28 - 1;
  if ( !v29 )
  {
    v36 = KdDisableDebugger();
    goto LABEL_67;
  }
  v30 = v29 - 1;
  if ( !v30 )
  {
    if ( v13 == 1 )
    {
      *(_BYTE *)OutputBuffer = KdAutoEnableOnEvent;
      goto LABEL_124;
    }
    return -1073741820;
  }
  v31 = v30 - 1;
  if ( !v31 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      KdAutoEnableOnEvent = *(_BYTE *)InputBuffer != 0;
      goto LABEL_124;
    }
    return -1073741820;
  }
  v32 = v31 - 1;
  if ( !v32 )
  {
    if ( v13 == 4 )
    {
      *(_DWORD *)OutputBuffer = KdPrintBufferSize;
      goto LABEL_124;
    }
    return -1073741820;
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    if ( (_DWORD)v7 != 4 )
      return -1073741820;
    HIDWORD(Size) = 0;
    v36 = KdSetDbgPrintBufferSize(*(_DWORD *)InputBuffer);
    goto LABEL_67;
  }
  v34 = v33 - 1;
  if ( v34 )
  {
    if ( v34 != 1 )
      goto LABEL_95;
    if ( (_DWORD)v7 == 1 )
    {
      KdIgnoreUmExceptions = *(_BYTE *)InputBuffer == 0;
      goto LABEL_124;
    }
    return -1073741820;
  }
  if ( v13 != 1 )
    return -1073741820;
  v35 = KdIgnoreUmExceptions == 0;
  LODWORD(v51) = KdIgnoreUmExceptions == 0;
  if ( PreviousMode )
    RtlWriteUCharToUser(OutputBuffer, v35);
  else
    *(_BYTE *)OutputBuffer = v35;
LABEL_124:
  if ( ReturnLength )
    *ReturnLength = Size;
  return v12;
}
