/*
 * XREFs of ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800585D4
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800582A8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  const char *v5; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  DWORD v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v7 = 153LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, (unsigned int)"wil", v5);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v13 = 0;
      if ( ReleaseSemaphore(hHandle, 1, &v13) )
      {
        if ( v13 )
        {
          v8 = 178LL;
          goto LABEL_25;
        }
        if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
        {
          v8 = 181LL;
          goto LABEL_25;
        }
        v9 = WaitForSingleObject(hHandle, 0);
        if ( v9 != -1 )
        {
          if ( v9 )
          {
            v8 = 185LL;
            goto LABEL_25;
          }
          goto LABEL_7;
        }
        v7 = 184LL;
      }
      else
      {
        v7 = 177LL;
      }
    }
    else
    {
      if ( ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        ++PreviousCount;
        if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
        {
          v8 = 167LL;
          goto LABEL_25;
        }
LABEL_7:
        *a2 = PreviousCount;
        return 0LL;
      }
      v7 = 162LL;
    }
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, (unsigned int)"wil", v5);
  }
  v8 = 154LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v8, (unsigned int)"wil", (const char *)0x8000FFFFLL, v10);
  return 2147549183LL;
}
