/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x14014FC0C
 * Callers:
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 *     ReferenceClass @ 0x140151720 (ReferenceClass.c)
 * Callees:
 *     ??$UserFreeIsolatedType@UtagCLS@@@@YAXPEAUtagCLS@@@Z @ 0x1401502DC (--$UserFreeIsolatedType@UtagCLS@@@@YAXPEAUtagCLS@@@Z.c)
 */

void __fastcall ClassFree(PVOID *a1, PVOID *a2)
{
  _DWORD *v3; // rbx
  bool v4; // zf
  void *CurrentWin32kStackRefLookAside; // rax

  if ( a1 )
    RtlFreeHeap(a1[17], 0, a2[1]);
  else
    Win32FreePool(a2[1]);
  v3 = a2[16];
  if ( v3 )
  {
    v4 = v3[2] == 0;
    *(_QWORD *)v3 = 0LL;
    *((_BYTE *)v3 + 12) = 1;
    if ( v4 )
    {
      CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
      Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v3);
    }
  }
  UserFreeIsolatedType<tagCLS>(a2);
}
