/*
 * XREFs of NtGdiGetStats @ 0x1401F0C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiGetStats(__int64 a1, int a2, unsigned int a3, volatile void *a4, SIZE_T Length)
{
  int v8; // r14d
  __int64 v9; // r13
  int v10; // ebx
  int v11; // edi
  int v12; // edi
  unsigned int v13; // r14d
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v8 = a1;
  v17 = 0LL;
  v9 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v10 = 0;
  if ( (RtlGetNtGlobalFlags() & 0x400) == 0 )
    v10 = -1073741790;
  if ( a2 )
  {
    if ( a2 != 1 && a2 != 2 && (unsigned int)(a2 - 3) >= 2 )
      v10 = -1073741822;
  }
  else if ( (unsigned int)Length < 0x7C )
  {
    v10 = -1073741789;
  }
  if ( v10 >= 0 )
  {
    ProbeForWrite(a4, (unsigned int)Length, 1u);
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( (unsigned int)(v12 - 1) >= 2 )
            return (unsigned int)-1073741822;
        }
      }
    }
    else
    {
      if ( a3 == -2147483646 )
        v13 = v8 & 0xFFFFFFFC;
      else
        v13 = a3;
      v14 = 0LL;
      while ( 1 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(v9 + 8) + 32LL))(
                *(_QWORD *)(v9 + 8),
                v14,
                &v17);
        v14 = v15;
        if ( !v15 )
          break;
        if ( v13 == (*(_DWORD *)(v17 + 8) & 0xFFFFFFFE) )
          v10 = -1073741822;
      }
    }
  }
  return (unsigned int)v10;
}
