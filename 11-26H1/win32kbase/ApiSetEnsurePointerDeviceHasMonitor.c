/*
 * XREFs of ApiSetEnsurePointerDeviceHasMonitor @ 0x140047B58
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400477E4 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEnsurePointerDeviceHasMonitor(__int64 a1)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  unsigned int (__fastcall *v6)(__int64); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3920LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 3928LL);
      if ( v6 )
        return v6(a1);
    }
  }
  return v2;
}
