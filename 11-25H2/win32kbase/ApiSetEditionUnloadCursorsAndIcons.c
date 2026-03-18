/*
 * XREFs of ApiSetEditionUnloadCursorsAndIcons @ 0x140196CC8
 * Callers:
 *     CleanupResources @ 0x1401B9768 (CleanupResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionUnloadCursorsAndIcons(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2040LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 2048LL);
      if ( result )
        return (__int64 (*)(void))result();
    }
  }
  return result;
}
