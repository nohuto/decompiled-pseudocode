/*
 * XREFs of InitializeWin32KSyscallFilter @ 0x140141B80
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     FastGetProfileDwordEx @ 0x1400E1800 (FastGetProfileDwordEx.c)
 *     ?CreateWin32KFilterBitmap@@YAJKQEBQEBDHKPEAE@Z @ 0x140141E8C (-CreateWin32KFilterBitmap@@YAJKQEBQEBDHKPEAE@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x140142338 (IsCurrentSessionHostServiceSession.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1401984DC (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 InitializeWin32KSyscallFilter()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 Win32kBaseApiSetTable; // rdx
  int v3; // r8d
  __int64 (*v4)(void); // rax
  unsigned int v5; // ecx
  int v6; // ebp
  __int64 UserSessionState; // rax
  __int64 v8; // rdi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // esi
  __int64 v13; // r14
  unsigned int i; // ebp
  unsigned __int8 *v15; // rax
  int v16; // r8d
  int Win32KFilterBitmap; // eax
  bool v18; // sf
  __int64 Pool2; // rax
  __int64 v21; // rax

  v0 = 0;
  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
  {
    FastGetProfileDwordEx(0LL, 52, L"ServiceFilterAuditThrottleMode", 1, 0, &gdwServiceFilterAuditThrottleMode, 0LL);
    FastGetProfileDwordEx(0LL, 52, L"ServiceFilterAuditCaptureWER", 1, 0, &gdwServiceFilterAuditCaptureWER, 0LL);
    FastGetProfileDwordEx(
      0LL,
      52,
      L"ServiceFilterAuditStackCacheSize",
      4096,
      0,
      &gstServiceFilterAuditStackCacheSize,
      0LL);
  }
  Win32kBaseApiSetTable = W32GetWin32kBaseApiSetTable(v1);
  v4 = *(__int64 (**)(void))(*(_QWORD *)(Win32kBaseApiSetTable
                                       + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                           + 56LL);
  if ( v4 )
    v5 = v4();
  else
    v5 = 0;
  v6 = (v5 >> 3) + 1;
  if ( (v5 & 7) == 0 )
    v6 = v5 >> 3;
  UserSessionState = W32GetUserSessionState(v5, Win32kBaseApiSetTable, v3);
  v8 = UserSessionState + 70704;
  *(_QWORD *)(UserSessionState + 70768) = 0LL;
  *(_QWORD *)(UserSessionState + 70784) = off_140258350;
  *(_QWORD *)(UserSessionState + 70800) = off_1402574F0;
  *(_QWORD *)(UserSessionState + 70816) = off_140258348;
  *(_QWORD *)(UserSessionState + 70832) = off_1402562D0;
  *(_QWORD *)(UserSessionState + 70848) = off_14025A930;
  *(_QWORD *)(UserSessionState + 70864) = off_1402598E0;
  *(_QWORD *)(UserSessionState + 70776) = 0LL;
  *(_QWORD *)(UserSessionState + 70792) = 690LL;
  *(_QWORD *)(UserSessionState + 70808) = 459LL;
  *(_QWORD *)(UserSessionState + 70824) = 1LL;
  *(_QWORD *)(UserSessionState + 70840) = 580LL;
  *(_QWORD *)(UserSessionState + 70856) = 419LL;
  *(_DWORD *)(UserSessionState + 70872) = 521;
  *(_DWORD *)(UserSessionState + 70876) = 1;
  v12 = v6;
  v13 = W32GetUserSessionState(v10, v9, v11);
  if ( (_DWORD)gdwServiceFilterAuditCaptureWER )
  {
    if ( (v6 & 3) != 0 )
      v12 = v6 - (v6 & 3) + 4;
    Pool2 = ExAllocatePool2(64LL, v12, 1818653525LL);
    *(_QWORD *)(v13 + 70880) = Pool2;
    if ( !Pool2
      || !(_DWORD)gdwServiceFilterAuditThrottleMode
      && (gstServiceFilterAuditStackCacheSize = (gstServiceFilterAuditStackCacheSize + 3) & 0xFFFFFFFFFFFFFFFCuLL,
          v21 = ExAllocatePool2(64LL, gstServiceFilterAuditStackCacheSize, 1818653525LL),
          (*(_QWORD *)(v13 + 70888) = v21) == 0LL) )
    {
LABEL_24:
      v0 = -1073741801;
LABEL_25:
      FreeWin32KSyscallFilter();
      return (unsigned int)v0;
    }
  }
  for ( i = 0; i < 7; ++i )
  {
    if ( *(_DWORD *)(v8 + 16LL * i + 72) )
    {
      v15 = (unsigned __int8 *)ExAllocatePool2(64LL, v12, 1818653525LL);
      *(_QWORD *)(v8 + 8LL * i + 8) = v15;
      if ( !v15 )
        goto LABEL_24;
      Win32KFilterBitmap = CreateWin32KFilterBitmap(
                             *(_DWORD *)(v8 + 16LL * i + 72),
                             *(const char *const *const *)(v8 + 16 * (i + 4LL)),
                             v16,
                             v12,
                             v15);
      v0 = 0;
      if ( Win32KFilterBitmap != -1073741702 )
        v0 = Win32KFilterBitmap;
      v18 = v0 < 0;
      if ( v0 )
        goto LABEL_16;
    }
    else
    {
      *(_QWORD *)(v8 + 8LL * i + 8) = 0LL;
    }
  }
  v18 = v0 < 0;
LABEL_16:
  if ( v18 )
    goto LABEL_25;
  return (unsigned int)v0;
}
