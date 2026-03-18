/*
 * XREFs of ParseRelease @ 0x14000C360
 * Callers:
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     ReleaseASLMutex @ 0x14000DF90 (ReleaseASLMutex.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     RtlStringCbPrintfA @ 0x14000903C (RtlStringCbPrintfA.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     DequeueAndReadyContext @ 0x14000E1E8 (DequeueAndReadyContext.c)
 *     ReleaseGL @ 0x14003930C (ReleaseGL.c)
 *     ConvertNtStatusToAMLIStatus @ 0x14004A4D8 (ConvertNtStatusToAMLIStatus.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ParseRelease(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  KSPIN_LOCK *v5; // rdi
  const void *v6; // r12
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // r15
  KSPIN_LOCK v10; // rax
  unsigned int *v11; // rsi
  __int64 v12; // rsi
  KIRQL v13; // al
  KIRQL v14; // r15
  _QWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rdx
  int v19; // eax
  _QWORD *v20; // rcx
  const void *v22; // r8
  unsigned int v23; // ecx
  const void *v24; // rdx
  const void *v25; // r14
  int v26; // eax
  int v27; // eax
  _QWORD v28[3]; // [rsp+40h] [rbp-178h] BYREF
  __int128 v29; // [rsp+58h] [rbp-160h]
  __int64 v30; // [rsp+68h] [rbp-150h]
  char pszDest[256]; // [rsp+70h] [rbp-148h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  v5 = *(KSPIN_LOCK **)(a2 + 32);
  LODWORD(v6) = a3;
  if ( (v3 & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) == 1 )
      goto LABEL_10;
    if ( (*(_DWORD *)(a2 + 16) & 0xF) == 2 )
      goto LABEL_14;
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xF) != 4 )
        return (unsigned int)v6;
      goto LABEL_21;
    }
LABEL_20:
    v19 = v3 + 1;
    *(_DWORD *)(a2 + 16) = v19;
    if ( (v19 & 0x10000) != 0 )
    {
      v26 = ReleaseGL(a1);
      v6 = (const void *)v26;
      if ( v26 )
      {
        LogError(-1072431101);
        AcpiDiagTraceAmlError(a1, -1072431101);
        PrintDebugMessage(0xACu, v6, 0LL, 0LL, 0LL);
        LODWORD(v6) = -1072431101;
      }
    }
LABEL_21:
    if ( (*(_DWORD *)(a2 + 16) & 0x40000) == 0 )
    {
      v20 = *(_QWORD **)(a1 + 416);
      *(_QWORD *)(a1 + 416) = v20[1];
      HeapFree(v20);
    }
    return (unsigned int)v6;
  }
  v8 = v5 + 23;
  *(_DWORD *)(a2 + 16) = v3 + 1;
  LODWORD(v6) = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(v5 + 23);
  if ( !*((_DWORD *)v5 + 1) )
  {
    LODWORD(v6) = -1072431082;
    LogError(-1072431082);
    AcpiDiagTraceAmlError(a1, -1072431082);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      DbgPrintEx(0x19u, 0, off_14008D5F8, 0LL, 0LL, 0LL, 0LL);
      if ( (gDebugger & 0x40000) != 0 )
      {
        RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 137, 0LL, 0LL, 0LL, 0LL);
        DbgCommandString("ACPI", pszDest);
        *(_DWORD *)(a2 + 16) += 2;
        v11 = (unsigned int *)(v5 + 1);
        goto LABEL_8;
      }
    }
    else
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 137, 0LL, 0LL, 0LL, 0LL);
      DbgPrintEx(0x19u, 0, "%s\n", pszDest);
    }
LABEL_27:
    *(_DWORD *)(a2 + 16) += 2;
    v11 = (unsigned int *)(v5 + 1);
    goto LABEL_8;
  }
  v10 = v5[1];
  v11 = (unsigned int *)(v5 + 1);
  if ( !v10 || *(_QWORD *)(v10 + 8) != a1 )
  {
    LODWORD(v6) = -1072431081;
    LogError(-1072431081);
    AcpiDiagTraceAmlError(a1, -1072431081);
    v22 = 0LL;
    v23 = 138;
    v24 = 0LL;
LABEL_30:
    PrintDebugMessage(v23, v24, v22, 0LL, 0LL);
    goto LABEL_27;
  }
  if ( *(_DWORD *)v5 > *(_DWORD *)(a1 + 112) )
  {
    LODWORD(v6) = -1072431083;
    LogError(-1072431083);
    AcpiDiagTraceAmlError(a1, -1072431083);
    v22 = (const void *)*(unsigned int *)(a1 + 112);
    v23 = 136;
    v24 = (const void *)*(unsigned int *)v5;
    goto LABEL_30;
  }
  *(_DWORD *)(a1 + 112) = *(_DWORD *)v5;
  if ( *((_DWORD *)v5 + 1) == 1 )
    *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_8:
  KeReleaseSpinLock(v5 + 23, v9);
  v3 = *(_DWORD *)(a2 + 16);
  if ( (*(_BYTE *)(a2 + 16) & 0xF) == 3 )
    goto LABEL_20;
  if ( (v3 & 0x80000) == 0 )
  {
    ++v3;
    goto LABEL_15;
  }
LABEL_10:
  v12 = a1;
  if ( (v3 & 0x20000) == 0 )
    v12 = 0LL;
  if ( *((_DWORD *)v5 + 8) != 3 )
    goto LABEL_13;
  if ( gDeviceLockMutexSupported && ghMutexObject )
  {
    v28[0] = 3LL;
    v28[1] = v5 + 10;
    v30 = 0LL;
    v28[2] = v12;
    v29 = 0LL;
    v27 = ((__int64 (__fastcall *)(_QWORD *))ghMutexObject)(v28);
    v25 = (const void *)v27;
    if ( v27 < 0 && v27 != -1073741643 && v27 != -1073741536 )
    {
      LogError(-1072431101);
      AcpiDiagTraceAmlError(v12, -1072431101);
      PrintDebugMessage(0x91u, v25, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    LODWORD(v25) = 0;
  }
  LODWORD(v6) = ConvertNtStatusToAMLIStatus((unsigned int)v25);
  if ( (_DWORD)v6 != 32772 )
  {
LABEL_13:
    v3 = *(_DWORD *)(a2 + 16) + 1;
LABEL_14:
    v8 = v5 + 23;
    v11 = (unsigned int *)(v5 + 1);
LABEL_15:
    *(_DWORD *)(a2 + 16) = v3 + 1;
    v13 = KeAcquireSpinLockRaiseToDpc(v8);
    --*((_DWORD *)v5 + 1);
    v14 = v13;
    if ( (*(_DWORD *)(a2 + 16) & 0x80000) != 0 )
    {
      v15 = *(_QWORD **)v11;
      v16 = *(_QWORD *)(*(_QWORD *)v11 + 24LL);
      v17 = *(_QWORD *)v11 + 24LL;
      if ( *(_QWORD *)(v16 + 8) != v17 || (v18 = *(_QWORD **)(*(_QWORD *)v11 + 32LL), *v18 != v17) )
        __fastfail(3u);
      *v18 = v16;
      *(_QWORD *)(v16 + 8) = v18;
      HeapFree(v15);
      *(_QWORD *)v11 = 0LL;
      DequeueAndReadyContext(v5 + 2);
    }
    KeReleaseSpinLock(v8, v14);
    v3 = *(_DWORD *)(a2 + 16);
    goto LABEL_20;
  }
  return (unsigned int)v6;
}
