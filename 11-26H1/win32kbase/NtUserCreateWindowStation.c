/*
 * XREFs of NtUserCreateWindowStation @ 0x1401E3700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserCreateWindowStation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v12; // r10
  __int64 result; // rax
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, _QWORD, int, __int64, __int64, int, _DWORD); // r11

  v12 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  result = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, __int64, __int64, int, _DWORD))(v12 + 752);
  if ( v14 )
    return v14(a1, a2, a3, a4, a5, a6, a7, a8, 0);
  return result;
}
