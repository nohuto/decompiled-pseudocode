/*
 * XREFs of GdiProcessCallout @ 0x1401ADA20
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x140009C18 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x140024580 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ @ 0x140025730 (-GrepCloseCurrentProcessPreserveObjectReference@@YAHXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline @ 0x1400C49B4 (Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline.c)
 *     ?GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z @ 0x140163ED0 (-GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlSetUserMemory @ 0x1402D2218 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  __int64 ProcessPeb; // rax
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 SessionState; // rax
  NTSTATUS v10; // ebx
  HANDLE v11; // rax
  int v12; // eax
  int v13; // r15d
  HANDLE ProcessId; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 (*v18)(void); // rax
  int v19; // eax
  HANDLE v20; // rbx
  __int64 v21; // rcx
  void (__fastcall *v22)(HANDLE); // rax
  BOOLEAN i; // dl
  PVOID v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rbx
  char *v29; // rcx
  char *v30; // rbx
  char *v31; // rcx
  void *v32; // rcx
  PVOID BaseAddress; // [rsp+80h] [rbp+8h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+98h] [rbp+20h] BYREF

  if ( !a1 )
    return 3221225495LL;
  if ( a2 )
  {
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(a1 + 88),
      (PRTL_AVL_COMPARE_ROUTINE)GDIEngUserMemAllocNodeCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)GDIEngUserMemAllocNodeAlloc,
      (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
    *(_QWORD *)(a1 + 200) = a1 + 192;
    *(_QWORD *)(a1 + 192) = a1 + 192;
    *(_QWORD *)(a1 + 216) = a1 + 208;
    *(_QWORD *)(a1 + 208) = a1 + 208;
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    v6 = ProcessPeb;
    if ( ProcessPeb
      && (RtlWriteULongToUser(ProcessPeb + 264, *(unsigned int *)(a1 + 280)),
          RtlSetUserMemory((void *)(v6 + 320)),
          LOBYTE(v7) = a2,
          (int)DxDdProcessCallout(a1 + 248, v7) >= 0) )
    {
      BaseAddress = 0LL;
      ViewSize = 0LL;
      SectionHandle = 0LL;
      SessionState = W32GetSessionState(v8);
      if ( ObOpenObjectByPointer(
             *(PVOID *)(*(_QWORD *)(SessionState + 88) + 2272LL),
             0x200u,
             0LL,
             0xF001Fu,
             0LL,
             0,
             &SectionHandle) < 0 )
      {
        v10 = -1073741502;
      }
      else
      {
        v10 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0LL,
                0LL,
                &ViewSize,
                ViewUnmap,
                0,
                2u);
        if ( v10 >= 0
          && (v11 = GrepSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u), (*(_QWORD *)(a1 + 240) = v11) != 0LL) )
        {
          RtlWriteULong64ToUser(v6 + 248, BaseAddress);
        }
        else
        {
          v10 = -1073741502;
        }
        ZwClose(SectionHandle);
      }
      if ( v10 < 0 )
        DxDdProcessCallout(a1 + 248, 0LL);
      return (unsigned int)v10;
    }
    else
    {
      return 3221225794LL;
    }
  }
  else
  {
    GdiUnmapGDIW32PIDLockedBitmaps(a1);
    if ( (unsigned int)Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline() )
      v12 = GrepCloseCurrentProcessPreserveObjectReference();
    else
      v12 = GrepCloseCurrentProcess();
    v13 = v12;
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    v16 = W32GetSessionState(v15);
    COPM::DestroyProtectedOutputsOwnedByProcess(*(COPM **)(*(_QWORD *)(v16 + 88) + 3728LL), ProcessId);
    v18 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 24) + 2432LL);
    if ( v18 )
      v19 = v18();
    else
      v19 = -1073741637;
    if ( v19 >= 0 )
    {
      v20 = PsGetProcessId(*(PEPROCESS *)a1);
      v22 = *(void (__fastcall **)(HANDLE))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21) + 24) + 2440LL);
      if ( v22 )
        v22(v20);
    }
    DxDdProcessCallout(a1 + 248, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v24 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
      if ( !v24 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v24);
    }
    v28 = *(char **)(a1 + 192);
    if ( v28 )
    {
      while ( v28 != (char *)(a1 + 192) )
      {
        v29 = v28;
        v28 = *(char **)v28;
        GreDeleteFastMutex(v29, v25, v26, v27);
      }
    }
    v30 = *(char **)(a1 + 208);
    if ( v30 )
    {
      while ( v30 != (char *)(a1 + 208) )
      {
        v31 = v30;
        v30 = *(char **)v30;
        GreDeleteFastMutex(v31, v25, v26, v27);
      }
    }
    v32 = *(void **)(a1 + 240);
    if ( v32 )
    {
      MmUnsecureVirtualMemory(v32);
      *(_QWORD *)(a1 + 240) = 0LL;
    }
    return v13 == 0 ? 0xC0000121 : 0;
  }
}
