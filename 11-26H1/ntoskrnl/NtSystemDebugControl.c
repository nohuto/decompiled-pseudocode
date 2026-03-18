/*
 * XREFs of NtSystemDebugControl @ 0x1408459A0
 * Callers:
 *     DifNtSystemDebugControlWrapper @ 0x14068F4B0 (DifNtSystemDebugControlWrapper.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     DbgBreakPointWithStatus @ 0x140534930 (DbgBreakPointWithStatus.c)
 *     DbgkCaptureLiveKernelDump @ 0x1405B4278 (DbgkCaptureLiveKernelDump.c)
 *     KdDisableDebugger @ 0x1405E39D0 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405E3B10 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x1405E4038 (KdSetDbgPrintBufferSize.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     DbgkCaptureLiveDump @ 0x14078B088 (DbgkCaptureLiveDump.c)
 *     ExpKdPullRemoteFileForUser @ 0x140845480 (ExpKdPullRemoteFileForUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     EtwTiLogSyscallUsage @ 0x140A53288 (EtwTiLogSyscallUsage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSystemDebugControl(
        int a1,
        char *a2,
        unsigned int a3,
        char *a4,
        unsigned int Length,
        unsigned int *a6)
{
  SIZE_T v7; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v12; // edi
  unsigned int v13; // esi
  int ULongFromUser; // eax
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  char v35; // cl
  int v36; // eax
  int v37; // eax
  unsigned int v38; // r15d
  void *Pool2; // rbx
  __int64 v40; // r8
  int v41; // eax
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx
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

  v7 = a3;
  LODWORD(Size) = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  memset_0(v57, 0, 0x48uLL);
  v51 = 0LL;
  P[0] = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((a1 - 29) & 0xFFFFFFF7) != 0 )
    return 3221226324LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a1 != 38 && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
    return 3221225506LL;
  v12 = 0;
  if ( PreviousMode )
  {
    if ( (_DWORD)v7 )
      ProbeForRead(a2, v7, 4u);
    v13 = Length;
    if ( Length )
      ProbeForWrite(a4, Length, 4u);
    if ( a6 )
    {
      ULongFromUser = RtlReadULongFromUser(a6);
      RtlWriteULongToUser(a6, ULongFromUser);
    }
  }
  else
  {
    v13 = Length;
  }
  if ( a1 <= 19 )
  {
    if ( a1 == 19 )
      return 3221225474LL;
    if ( a1 > 9 )
    {
      v21 = a1 - 10;
      if ( !v21 )
        return 3221225474LL;
      v22 = v21 - 1;
      if ( !v22 )
        return 3221225474LL;
      v23 = v22 - 1;
      if ( !v23 )
        return 3221225474LL;
      v24 = v23 - 1;
      if ( !v24 )
        return 3221225474LL;
      v25 = v24 - 1;
      if ( !v25 )
        return 3221225474LL;
      v26 = v25 - 1;
      if ( !v26 )
        return 3221225474LL;
      v20 = v26 - 1;
      if ( !v20 )
        return 3221225474LL;
    }
    else
    {
      if ( a1 == 9 )
        return 3221225474LL;
      if ( !a1 )
        return 3221225474LL;
      v15 = a1 - 1;
      if ( !v15 )
        return 3221225474LL;
      v16 = v15 - 1;
      if ( !v16 )
        return 3221225474LL;
      v17 = v16 - 1;
      if ( !v17 )
        return 3221225474LL;
      v18 = v17 - 1;
      if ( !v18 )
        return 3221225474LL;
      v19 = v18 - 1;
      if ( !v19 )
        return 3221225474LL;
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
      return 3221225474LL;
LABEL_95:
    v12 = -1073741821;
    goto LABEL_124;
  }
  if ( a1 > 29 )
  {
    v42 = a1 - 30;
    if ( !v42 )
    {
      if ( v13 == 1 )
      {
        *a4 = KdBlockEnable;
        goto LABEL_124;
      }
      return 3221225476LL;
    }
    v43 = v42 - 1;
    if ( !v43 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdBlockEnable = *a2;
        goto LABEL_124;
      }
      return 3221225476LL;
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
                  RtlCopyFromUser(v57, a2, (unsigned int)v7);
                else
                  RtlCopyVolatileMemory(v57, a2, (unsigned int)v7);
                v12 = DbgkCaptureLiveKernelDump((__int64)v57);
                EtwTiLogSyscallUsage((unsigned int)v12, 26LL);
                goto LABEL_124;
              }
              return 3221225476LL;
            }
            if ( v49 != 1 )
              goto LABEL_95;
            if ( (_DWORD)v7 != 16 || v13 )
              return 3221225476LL;
            v36 = ExpKdPullRemoteFileForUser(a2);
LABEL_67:
            v12 = v36;
            goto LABEL_124;
          }
          goto LABEL_110;
        }
        if ( v13 != 4 )
          return 3221225476LL;
        if ( PreviousMode )
          RtlWriteULongToUser(a4, KdUmAttachPid);
        else
          *(_DWORD *)a4 = KdUmAttachPid;
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
        return 3221225476LL;
      if ( PreviousMode )
        RtlWriteULongToUser(a4, KdUmBreakPid);
      else
        *(_DWORD *)a4 = KdUmBreakPid;
      if ( !KdResetUmBreakPid )
        goto LABEL_118;
    }
    KdUmBreakPid = 0;
    goto LABEL_118;
  }
  if ( a1 == 29 )
  {
    if ( (_DWORD)v7 == 56 && v13 >= 0x40000 )
    {
      v53 = *(_OWORD *)a2;
      v54 = *((_OWORD *)a2 + 1);
      v55 = *((_OWORD *)a2 + 2);
      v56 = *((_QWORD *)a2 + 6);
      if ( DWORD2(v55) || !HIDWORD(v55) || (v53 & 0xFFFFFFFE) != 0 || 8 * (unsigned __int64)HIDWORD(v55) > 0xFFFFFFFF )
        return 3221225485LL;
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
              memmove(a4, Pool2, (unsigned int)Size);
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
    return 3221225476LL;
  }
  v27 = a1 - 20;
  if ( !v27 )
    return 3221225474LL;
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
      *a4 = KdAutoEnableOnEvent;
      goto LABEL_124;
    }
    return 3221225476LL;
  }
  v31 = v30 - 1;
  if ( !v31 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      KdAutoEnableOnEvent = *a2 != 0;
      goto LABEL_124;
    }
    return 3221225476LL;
  }
  v32 = v31 - 1;
  if ( !v32 )
  {
    if ( v13 == 4 )
    {
      *(_DWORD *)a4 = KdPrintBufferSize;
      goto LABEL_124;
    }
    return 3221225476LL;
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    if ( (_DWORD)v7 != 4 )
      return 3221225476LL;
    HIDWORD(Size) = 0;
    v36 = KdSetDbgPrintBufferSize(*(_DWORD *)a2);
    goto LABEL_67;
  }
  v34 = v33 - 1;
  if ( v34 )
  {
    if ( v34 != 1 )
      goto LABEL_95;
    if ( (_DWORD)v7 == 1 )
    {
      KdIgnoreUmExceptions = *a2 == 0;
      goto LABEL_124;
    }
    return 3221225476LL;
  }
  if ( v13 != 1 )
    return 3221225476LL;
  v35 = KdIgnoreUmExceptions == 0;
  LODWORD(v51) = KdIgnoreUmExceptions == 0;
  if ( PreviousMode )
    RtlWriteUCharToUser(a4, v35);
  else
    *a4 = v35;
LABEL_124:
  if ( a6 )
    *a6 = Size;
  return (unsigned int)v12;
}
