/*
 * XREFs of ObGetHandleInformationEx @ 0x140A2E74C
 * Callers:
 *     ExpGetHandleInformationEx @ 0x140A2ED04 (ExpGetHandleInformationEx.c)
 * Callees:
 *     ExpSnapShotHandleTables @ 0x140929930 (ExpSnapShotHandleTables.c)
 */

__int64 __fastcall ObGetHandleInformationEx(unsigned int a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  if ( a3 < 0x10 )
    return 3221225476LL;
  *(_QWORD *)a2 = 0LL;
  result = ExpSnapShotHandleTables((__int64)ObpCaptureHandleInformationEx, a1, a2, (struct _KLOCK_ENTRIES *)a3, &v6, 1);
  if ( a4 )
    *a4 = v6;
  return result;
}
