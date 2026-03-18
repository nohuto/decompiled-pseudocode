/*
 * XREFs of GdiProcessCallout @ 0x140083E20
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x1400842FC (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     GreIsCurrentProcessSystemCritical @ 0x14008457C (GreIsCurrentProcessSystemCritical.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ?OPMProcessTerminating@@YAXPEAX@Z @ 0x140084AA4 (-OPMProcessTerminating@@YAXPEAX@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x140084B10 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1400C09E0 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1400C0A58 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     IsUmfdUninitializeProcessSupported @ 0x1401A2460 (IsUmfdUninitializeProcessSupported.c)
 *     UmfdUninitializeProcess @ 0x14023E630 (UmfdUninitializeProcess.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  __int64 ProcessPeb; // rax
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 SessionState; // rax
  NTSTATUS v9; // edi
  HANDLE v10; // rax
  int v12; // r15d
  HANDLE ProcessId; // rax
  __int64 (*v14)(void); // rax
  int v15; // eax
  HANDLE v16; // rdi
  void (__fastcall *v17)(HANDLE); // rax
  BOOLEAN i; // dl
  PVOID v19; // rax
  char *v20; // rdi
  char *v21; // rdi
  void *v22; // rcx
  char *v23; // rcx
  char *v24; // rcx
  ULONG_PTR ViewSize[5]; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+18h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+20h] BYREF

  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
  {
    if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() < 0 || !(unsigned int)UmfdIsCurrentProcessUmfdHostNoLock() )
      return 0LL;
    if ( !a2 )
    {
      if ( (int)IsUmfdUninitializeProcessSupported() >= 0 )
        UmfdUninitializeProcess();
      return 0LL;
    }
    if ( a1 || (int)IsUmfdUninitializeProcessSupported() < 0 )
      return 0LL;
    UmfdUninitializeProcess();
    return 3221225495LL;
  }
  if ( !a1 )
    return 3221225495LL;
  if ( a2 )
  {
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(a1 + 88),
      GDIEngUserMemAllocNodeCompare,
      GDIEngUserMemAllocNodeAlloc,
      (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
    *(_QWORD *)(a1 + 200) = a1 + 192;
    *(_QWORD *)(a1 + 192) = a1 + 192;
    *(_QWORD *)(a1 + 216) = a1 + 208;
    *(_QWORD *)(a1 + 208) = a1 + 208;
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    v5 = ProcessPeb;
    if ( ProcessPeb
      && (*(_DWORD *)(ProcessPeb + 264) = *(_DWORD *)(a1 + 280),
          memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
          ViewSize[1] = a1 + 248,
          LOBYTE(v6) = a2,
          (int)DxDdProcessCallout(a1 + 248, v6) >= 0) )
    {
      BaseAddress = 0LL;
      ViewSize[0] = 0LL;
      SectionHandle = 0LL;
      SessionState = W32GetSessionState(v7);
      if ( ObOpenObjectByPointer(
             *(PVOID *)(*(_QWORD *)(SessionState + 88) + 2184LL),
             0x200u,
             0LL,
             0xF001Fu,
             0LL,
             0,
             &SectionHandle) < 0 )
      {
        v9 = -1073741502;
      }
      else
      {
        v9 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               0LL,
               ViewSize,
               ViewUnmap,
               0,
               2u);
        if ( v9 >= 0 && (v10 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u), (*(_QWORD *)(a1 + 240) = v10) != 0LL) )
          *(_QWORD *)(v5 + 248) = BaseAddress;
        else
          v9 = -1073741502;
        ZwClose(SectionHandle);
      }
      if ( v9 < 0 )
        DxDdProcessCallout(a1 + 248, 0LL);
      return (unsigned int)v9;
    }
    else
    {
      return 3221225794LL;
    }
  }
  else
  {
    GdiUnmapGDIW32PIDLockedBitmaps(a1);
    v12 = GrepCloseCurrentProcess();
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    OPMProcessTerminating(ProcessId);
    v14 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2424LL);
    if ( v14 )
      v15 = v14();
    else
      v15 = -1073741637;
    if ( v15 >= 0 )
    {
      v16 = PsGetProcessId(*(PEPROCESS *)a1);
      v17 = *(void (__fastcall **)(HANDLE))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2432LL);
      if ( v17 )
        v17(v16);
    }
    DxDdProcessCallout(a1 + 248, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v19 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
      if ( !v19 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v19);
    }
    v20 = *(char **)(a1 + 192);
    if ( v20 )
    {
      while ( v20 != (char *)(a1 + 192) )
      {
        v23 = v20;
        v20 = *(char **)v20;
        GreDeleteFastMutex(v23);
      }
    }
    v21 = *(char **)(a1 + 208);
    if ( v21 )
    {
      while ( v21 != (char *)(a1 + 208) )
      {
        v24 = v21;
        v21 = *(char **)v21;
        GreDeleteFastMutex(v24);
      }
    }
    v22 = *(void **)(a1 + 240);
    if ( v22 )
    {
      MmUnsecureVirtualMemory(v22);
      *(_QWORD *)(a1 + 240) = 0LL;
    }
    return v12 == 0 ? 0xC0000121 : 0;
  }
}
