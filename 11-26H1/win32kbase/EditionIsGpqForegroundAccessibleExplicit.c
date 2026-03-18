/*
 * XREFs of EditionIsGpqForegroundAccessibleExplicit @ 0x14015276C
 * Callers:
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x140124498 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionIsGpqForegroundAccessibleExplicit(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4))(_QWORD, __int64, __int64 *, _QWORD)
{
  unsigned int v7; // ebp
  __int64 (__fastcall *result)(_QWORD, __int64, __int64 *, _QWORD); // rax
  __int64 v9; // xmm0_8
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]

  v7 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                    + 48)
                                                                        + 4688LL);
  if ( result )
  {
    v9 = *a3;
    v11 = *((_DWORD *)a3 + 2);
    v10 = v9;
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64 *, _QWORD))result(v7, a2, &v10, a4);
  }
  return result;
}
