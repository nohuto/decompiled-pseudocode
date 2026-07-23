/*
 * XREFs of ObGetHandleInformation @ 0x140A30AF8
 * Callers:
 *     ExpGetHandleInformation @ 0x140A2F8F0 (ExpGetHandleInformation.c)
 * Callees:
 *     ExpSnapShotHandleTables @ 0x140929930 (ExpSnapShotHandleTables.c)
 */

__int64 __fastcall ObGetHandleInformation(unsigned int a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  if ( a3 < 8 )
    return 3221225476LL;
  *a2 = 0;
  result = ExpSnapShotHandleTables((__int64)ObpCaptureHandleInformation, a1, a2, (struct _KLOCK_ENTRIES *)a3, &v6, 0);
  if ( a4 )
    *a4 = v6;
  return result;
}
