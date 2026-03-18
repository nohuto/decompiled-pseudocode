/*
 * XREFs of EditionPostKeyboardInputMessage @ 0x14023EA20
 * Callers:
 *     ApiSetEditionPostKeyboardInputMessage @ 0x140225C08 (ApiSetEditionPostKeyboardInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionPostKeyboardInputMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6,
        __int16 a7,
        int a8,
        __int16 a9,
        __int64 a10)
{
  char v11; // di
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(_QWORD, __int64, _QWORD, _QWORD, __int16, __int16, __int16, int, __int16, __int64); // r10

  v11 = a2;
  v12 = a1;
  v14 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int16, __int16, __int16, int, __int16, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7392LL);
  if ( !v14 )
    return 3221225659LL;
  LOBYTE(v13) = v11;
  return v14(v12, v13, 0LL, a4, a5, a6, a7, a8, a9, a10);
}
