/*
 * XREFs of InitializeWin32KSyscallFilter @ 0x140100E20
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     FastGetProfileDwordEx @ 0x1400A97B0 (FastGetProfileDwordEx.c)
 *     ?CreateWin32KFilterBitmap@@YAJKQEBQEBDHKPEAE@Z @ 0x1401010FC (-CreateWin32KFilterBitmap@@YAJKQEBQEBDHKPEAE@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401014D8 (IsCurrentSessionHostServiceSession.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x140158F5C (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 InitializeWin32KSyscallFilter()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 Win32kBaseApiSetTable; // rdx
  unsigned int (*v4)(void); // rax
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 UserSessionState; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // r14
  __int64 Pool2; // rax
  __int64 v14; // rax
  unsigned int i; // ebp
  unsigned __int8 *v16; // rax
  int v17; // r8d
  int Win32KFilterBitmap; // eax
  bool v19; // sf

  v0 = 0;
  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
  {
    FastGetProfileDwordEx(0LL, 52LL, L"ServiceFilterAuditThrottleMode", 1, 0, &gdwServiceFilterAuditThrottleMode, 0LL);
    FastGetProfileDwordEx(0LL, 52LL, L"ServiceFilterAuditCaptureWER", 1, 0, &gdwServiceFilterAuditCaptureWER, 0LL);
    FastGetProfileDwordEx(
      0LL,
      52LL,
      L"ServiceFilterAuditStackCacheSize",
      4096,
      0,
      &gstServiceFilterAuditStackCacheSize,
      0LL);
  }
  Win32kBaseApiSetTable = W32GetWin32kBaseApiSetTable(v2, v1);
  v4 = *(unsigned int (**)(void))(*(_QWORD *)(Win32kBaseApiSetTable
                                            + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                                + 56LL);
  if ( v4 )
    v5 = v4();
  else
    v5 = 0LL;
  v6 = ((unsigned int)v5 >> 3) + 1;
  if ( (v5 & 7) == 0 )
    v6 = (unsigned int)v5 >> 3;
  UserSessionState = W32GetUserSessionState(v5, Win32kBaseApiSetTable);
  v8 = UserSessionState + 70720;
  *(_QWORD *)(UserSessionState + 70784) = 0LL;
  *(_QWORD *)(UserSessionState + 70800) = off_14024E020;
  *(_QWORD *)(UserSessionState + 70816) = off_14024D1D0;
  *(_QWORD *)(UserSessionState + 70832) = &off_14024E010;
  *(_QWORD *)(UserSessionState + 70848) = off_14024BFD0;
  *(_QWORD *)(UserSessionState + 70864) = off_1402505C0;
  *(_QWORD *)(UserSessionState + 70880) = off_14024F590;
  *(_QWORD *)(UserSessionState + 70792) = 0LL;
  *(_QWORD *)(UserSessionState + 70808) = 685LL;
  *(_QWORD *)(UserSessionState + 70824) = 456LL;
  *(_QWORD *)(UserSessionState + 70840) = 1LL;
  *(_QWORD *)(UserSessionState + 70856) = 575LL;
  *(_QWORD *)(UserSessionState + 70872) = 414LL;
  *(_DWORD *)(UserSessionState + 70888) = 518;
  *(_DWORD *)(UserSessionState + 70892) = 1;
  v11 = v6;
  v12 = W32GetUserSessionState(v10, v9);
  if ( (_DWORD)gdwServiceFilterAuditCaptureWER )
  {
    if ( (v6 & 3) != 0 )
      v11 = v6 - (v6 & 3) + 4;
    Pool2 = ExAllocatePool2(64LL, v11, 1818653525LL);
    *(_QWORD *)(v12 + 70896) = Pool2;
    if ( !Pool2
      || !(_DWORD)gdwServiceFilterAuditThrottleMode
      && (gstServiceFilterAuditStackCacheSize = (gstServiceFilterAuditStackCacheSize + 3) & 0xFFFFFFFFFFFFFFFCuLL,
          v14 = ExAllocatePool2(64LL, gstServiceFilterAuditStackCacheSize, 1818653525LL),
          (*(_QWORD *)(v12 + 70904) = v14) == 0LL) )
    {
LABEL_12:
      v0 = -1073741801;
LABEL_26:
      FreeWin32KSyscallFilter();
      return (unsigned int)v0;
    }
  }
  for ( i = 0; i < 7; ++i )
  {
    if ( *(_DWORD *)(v8 + 16LL * i + 72) )
    {
      v16 = (unsigned __int8 *)ExAllocatePool2(64LL, v11, 1818653525LL);
      *(_QWORD *)(v8 + 8LL * i + 8) = v16;
      if ( !v16 )
        goto LABEL_12;
      Win32KFilterBitmap = CreateWin32KFilterBitmap(
                             *(_DWORD *)(v8 + 16LL * i + 72),
                             *(const char *const *const *)(v8 + 16 * (i + 4LL)),
                             v17,
                             v11,
                             v16);
      v0 = 0;
      if ( Win32KFilterBitmap != 127 )
        v0 = Win32KFilterBitmap;
      v19 = v0 < 0;
      if ( v0 )
        goto LABEL_25;
    }
    else
    {
      *(_QWORD *)(v8 + 8LL * i + 8) = 0LL;
    }
  }
  v19 = v0 < 0;
LABEL_25:
  if ( v19 )
    goto LABEL_26;
  return (unsigned int)v0;
}
