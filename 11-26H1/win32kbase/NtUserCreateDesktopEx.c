/*
 * XREFs of NtUserCreateDesktopEx @ 0x1401E2790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserCreateDesktopEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v10; // r10
  __int64 result; // rax
  __int64 (__fastcall *v12)(__int64, __int64, __int64, _QWORD, int, int); // r11

  v10 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  result = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int))(v10 + 640);
  if ( v12 )
    return v12(a1, a2, a3, a4, a5, a6);
  return result;
}
