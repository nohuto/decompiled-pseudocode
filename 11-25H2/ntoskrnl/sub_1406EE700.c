/*
 * XREFs of sub_1406EE700 @ 0x1406EE700
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     KeQueryTimeIncrement @ 0x140443620 (KeQueryTimeIncrement.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406EE700(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r8
  unsigned int *v10; // rcx
  __int64 *v11; // rbp
  __int64 v12; // rbp
  NTSTATUS v13; // eax
  __int64 v14; // rbx
  ULONG TimeIncrement; // eax
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 Pool2; // rax
  _DWORD *v20; // rdx
  unsigned int j; // ecx
  unsigned int v22; // eax
  unsigned __int64 v23; // r8
  unsigned int v24; // ecx
  int v25; // edx
  unsigned int v26; // eax
  unsigned int k; // ecx
  unsigned int v28; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  for ( i = 0; ; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( i >= 3 )
      break;
    if ( v10 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  if ( v10 < v7 )
    return (unsigned int)-1073741675;
  v11 = 0LL;
  if ( (_DWORD)v9 )
    v11 = (__int64 *)(v7 + 1);
  if ( (_DWORD)v9 != 8 )
    return (unsigned int)-1073741789;
  v12 = *v11;
  Timeout.QuadPart = -270000000LL;
  v13 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 0, &Timeout);
  if ( v13 >= 0 && v13 != 192 && v13 != 258 )
  {
    if ( stru_140EF0700.Header.SignalState || !dword_140FD711C )
    {
      v14 = MEMORY[0xFFFFF78000000320];
      TimeIncrement = KeQueryTimeIncrement();
      dword_140FD711C = 1;
      qword_140FD7120 = v14 * TimeIncrement / 10000;
      KeResetEvent(&stru_140EF0700);
    }
    KeReleaseMutex(&Mutex, 0);
  }
  v16 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v17 = *(_DWORD *)(a2 + 16) + 52;
  if ( v17 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v18 = v17 + v16;
  v6 = v17 + v16 < v17 ? 0xC0000095 : 0;
  if ( v18 >= v17 )
  {
    *(_DWORD *)(a4 + 4) = 20;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = Pool2;
    *(_DWORD *)a4 = 0;
    v20 = (_DWORD *)Pool2;
    for ( j = 0; j < *(_DWORD *)a4; ++j )
    {
      v22 = *v20 + 4;
      if ( *v20 >= 0xFFFFFFFC || (_DWORD *)((char *)v20 + v22) < v20 )
        return (unsigned int)-1073741675;
      v20 = (_DWORD *)((char *)v20 + v22);
    }
    if ( v20 + 1 >= v20 )
    {
      if ( (unsigned __int64)(v20 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v20 = 4;
      v20[1] = 0x10000000;
      ++*(_DWORD *)a4;
      v23 = *(_QWORD *)(a4 + 8);
      if ( !v23 )
      {
        v24 = *(_DWORD *)(a4 + 4);
        v25 = -1;
        v26 = v24 + 12;
        if ( v24 + 12 >= v24 )
          v25 = v24 + 12;
        *(_DWORD *)(a4 + 4) = v25;
        v6 = v26 < v24 ? 0xC0000095 : 0;
        if ( v26 >= v24 )
        {
          ++*(_DWORD *)a4;
          return 0;
        }
        return v6;
      }
      for ( k = 0; k < *(_DWORD *)a4; ++k )
      {
        v28 = *(_DWORD *)v23 + 4;
        if ( *(_DWORD *)v23 >= 0xFFFFFFFC || v23 + v28 < v23 )
          return (unsigned int)-1073741675;
        v23 += v28;
      }
      if ( v23 + 4 >= v23 )
      {
        v6 = 0;
        if ( v23 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v23 = 8;
          *(_QWORD *)(v23 + 4) = v12;
          ++*(_DWORD *)a4;
          return v6;
        }
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v6;
}
