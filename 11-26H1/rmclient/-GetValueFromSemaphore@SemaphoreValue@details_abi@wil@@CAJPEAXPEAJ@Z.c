/*
 * XREFs of ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180008400
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180008100 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011AB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180011AD8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  unsigned int v5; // r8d
  const char *v6; // r9
  unsigned int v7; // r8d
  const char *v8; // r9
  __int64 v10; // rdx
  const char *v11; // r9
  DWORD v12; // eax
  const char *v13; // r9
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v17; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x99, v5, v6);
  if ( v4 && v4 != 258 )
  {
    v10 = 154LL;
    goto LABEL_9;
  }
  PreviousCount = 0;
  if ( v4 )
  {
    v17 = 0;
    if ( ReleaseSemaphore(hHandle, 1, &v17) )
    {
      if ( v17 )
      {
        v10 = 178LL;
        goto LABEL_9;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v10 = 181LL;
        goto LABEL_9;
      }
      v12 = WaitForSingleObject(hHandle, 0);
      if ( v12 != -1 )
      {
        if ( v12 )
        {
          v10 = 185LL;
          goto LABEL_9;
        }
LABEL_7:
        *a2 = PreviousCount;
        return 0LL;
      }
      return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xB8, v5, v13);
    }
    else
    {
      return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xB1, v5, v11);
    }
  }
  else
  {
    if ( ReleaseSemaphore(hHandle, 1, &PreviousCount) )
    {
      ++PreviousCount;
      if ( !ReleaseSemaphore(hHandle, 1, 0LL) && GetLastError() == 298 )
        goto LABEL_7;
      v10 = 167LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(retaddr, (void *)v10, v5, (const char *)0x8000FFFFLL, v14);
      return 2147549183LL;
    }
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xA2, v7, v8);
  }
}
