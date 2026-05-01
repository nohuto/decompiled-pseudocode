/*
 * XREFs of ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x18003C5A8
 * Callers:
 *     ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18003C03C (-HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSystemOpenAppRegistryKey(const unsigned __int16 *a1, void *a2, __int64 a3, HKEY *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  WCHAR *Heap; // rax
  WCHAR *v8; // rsi
  LSTATUS v9; // eax
  signed int LastError; // ebx
  HKEY phkResult; // [rsp+50h] [rbp-10h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+30h] BYREF

  v14 = 0;
  hKey = 0LL;
  phkResult = 0LL;
  v5 = OpenStateExplicitForUserSid(a2, a1);
  v6 = v5;
  if ( v5 )
  {
    GetSystemAppDataKey(v5, 0LL, 0LL, &v14);
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v14);
    v8 = Heap;
    if ( Heap )
    {
      if ( (unsigned int)GetSystemAppDataKey(v6, &hKey, Heap, &v14) )
      {
        v9 = RegCreateKeyExW(hKey, v8, 0, 0LL, 0, 4u, 0LL, &phkResult, 0LL);
        LastError = v9;
        if ( v9 > 0 )
          LastError = (unsigned __int16)v9 | 0xC0070000;
        if ( LastError >= 0 )
        {
          LastError = 0;
          *a4 = phkResult;
          phkResult = 0LL;
        }
      }
      else if ( (int)GetLastError() > 0 )
      {
        LastError = (unsigned __int16)GetLastError() | 0xC0070000;
      }
      else
      {
        LastError = GetLastError();
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    }
    else
    {
      LastError = -1073741801;
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  if ( v6 )
    CloseState(v6);
  return (unsigned int)LastError;
}
