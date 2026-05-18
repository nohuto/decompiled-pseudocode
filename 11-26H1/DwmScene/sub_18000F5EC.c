/*
 * XREFs of sub_18000F5EC @ 0x18000F5EC
 * Callers:
 *     sub_180010B1C @ 0x180010B1C (sub_180010B1C.c)
 * Callees:
 *     sub_1800102A4 @ 0x1800102A4 (sub_1800102A4.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 */

__int64 __fastcall sub_18000F5EC(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // rdx
  __int64 v7; // rdx
  DWORD v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v5 = 153LL;
    return sub_1800102A4(retaddr, v5);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v11 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v11) )
      {
        v5 = 177LL;
        return sub_1800102A4(retaddr, v5);
      }
      if ( v11 )
      {
        v7 = 178LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 181LL;
        goto LABEL_25;
      }
      v8 = WaitForSingleObject(hHandle, 0);
      if ( v8 == -1 )
      {
        v5 = 184LL;
        return sub_1800102A4(retaddr, v5);
      }
      if ( v8 )
      {
        v7 = 185LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v5 = 162LL;
        return sub_1800102A4(retaddr, v5);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 167LL;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v7 = 154LL;
LABEL_25:
  sub_1800102C4(retaddr, v7, "wil", 2147549183LL);
  return 2147549183LL;
}
