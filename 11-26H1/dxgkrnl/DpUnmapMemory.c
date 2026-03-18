/*
 * XREFs of DpUnmapMemory @ 0x1404161F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpUnmapMemory(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rdi
  char v5; // r14
  __int64 v6; // rsi
  int v7; // eax
  __int64 *i; // rcx
  __int64 *v9; // rdx
  __int64 **v11; // rax

  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( a1 && a2 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 && *(_DWORD *)(v6 + 16) == 1953656900 && ((v7 = *(_DWORD *)(v6 + 20), v7 == 3) || v7 == 2) )
    {
      if ( KeGetCurrentIrql() )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 3080;
      }
      KeWaitForSingleObject((PVOID)(v6 + 2544), Executive, 0, 0, 0LL);
      for ( i = *(__int64 **)(v6 + 2528); ; i = (__int64 *)*i )
      {
        v9 = (__int64 *)*i;
        if ( *i == *(_QWORD *)(v6 + 2528) )
          break;
        v4 = i;
        if ( i[8] == a2 )
        {
          if ( (*((_DWORD *)i + 6))-- == 1 )
          {
            if ( (__int64 *)v9[1] != i || (v11 = (__int64 **)i[1], *v11 != i) )
              __fastfail(3u);
            *v11 = v9;
            v5 = 1;
            v9[1] = (__int64)v11;
          }
          break;
        }
      }
      KeReleaseMutex((PRKMUTEX)(v6 + 2544), 0);
      if ( v5 == 1 )
      {
        if ( *((_BYTE *)v4 + 72) == 1 )
        {
          if ( *((_BYTE *)v4 + 45) == 1 )
            v2 = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v4[8]);
          else
            MmUnmapIoSpace((PVOID)v4[8], *((unsigned int *)v4 + 10));
        }
        ExFreePoolWithTag(v4, 0x74727044u);
      }
    }
    else
    {
      v2 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3070;
    }
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3057;
  }
  return v2;
}
