/*
 * XREFs of SPCallServerHandleWaitForDisplayWindow @ 0x140B25F64
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SPCallServerHandleWaitForDisplayWindow(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v6; // rax
  unsigned int i; // edx
  __int64 v8; // r8
  unsigned int *v9; // rcx
  unsigned int v10; // edx
  unsigned int *v12; // rax
  __int64 v13; // rbp
  int v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // esi
  NTSTATUS v17; // eax
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 Pool2; // rax
  int v22; // esi
  __int64 v23; // r10
  _DWORD *v24; // rdx
  unsigned int j; // ecx
  unsigned int v26; // eax
  __int64 v27; // r8
  unsigned int v28; // eax
  unsigned __int64 v29; // rdx
  unsigned int k; // ecx
  unsigned int v31; // eax
  __int64 v32; // r9
  int v33; // r11d
  unsigned int v34; // eax
  _DWORD *v35; // r8
  unsigned int m; // ecx
  unsigned int v37; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  int v39; // [rsp+80h] [rbp+18h] BYREF

  v39 = a3;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( !v6 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  for ( i = 0; ; ++i )
  {
    v8 = *v6;
    v9 = v6 + 1;
    if ( i >= 3 )
      break;
    if ( v9 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v9 + v8);
    if ( (unsigned int *)((char *)v9 + v8) < v9 )
      return (unsigned int)-1073741675;
  }
  if ( v9 < v6 )
    return (unsigned int)-1073741675;
  v12 = 0LL;
  if ( (_DWORD)v8 )
    v12 = v9;
  if ( (_DWORD)v8 != 8 )
    return (unsigned int)-1073741789;
  v13 = *(_QWORD *)v12;
  v39 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Security-SPP-GenuineLocalStatus");
  v14 = guard_dispatch_icall_no_overrides((__int64)&DestinationString, (__int64)&v39);
  v10 = v14;
  if ( v14 == -1073741772 || v14 >= 0 )
  {
    HIDWORD(ExpPlatformBinaryLock.WaitStatus) = 1;
    do
    {
      v15 = KeWaitForSingleObject(&stru_140EF4D40, UserRequest, 1, 1u, 0LL);
      v16 = v15;
    }
    while ( v15 == 257 );
    if ( v15 >= 0 && v15 != 192 )
    {
      do
      {
        v17 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, 0LL);
        v16 = v17;
      }
      while ( v17 == 257 );
      if ( v17 >= 0 && v17 != 192 && v17 != 258 )
        KeReleaseMutex(&Mutex, 0);
    }
    v18 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFC8 )
    {
      v19 = *(_DWORD *)(a2 + 16) + 60;
      if ( v19 >= *(_DWORD *)(a2 + 16) + 56 )
      {
        v20 = v19 + v18;
        v10 = v19 + v18 < v19 ? 0xC0000095 : 0;
        if ( v20 < v19 )
          return v10;
        *(_DWORD *)(a4 + 4) = 28;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = Pool2;
        v22 = v16 | 0x10000000;
        *(_DWORD *)a4 = 0;
        v23 = Pool2;
        v24 = (_DWORD *)Pool2;
        for ( j = 0; j < *(_DWORD *)a4; ++j )
        {
          v26 = *v24 + 4;
          if ( *v24 >= 0xFFFFFFFC || (_DWORD *)((char *)v24 + v26) < v24 )
            return (unsigned int)-1073741675;
          v24 = (_DWORD *)((char *)v24 + v26);
        }
        if ( v24 + 1 < v24 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v24 + 2) > v23 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v24 = 4;
        v24[1] = v22;
        ++*(_DWORD *)a4;
        v27 = *(_QWORD *)(a4 + 8);
        if ( !v27 )
        {
          v28 = *(_DWORD *)(a4 + 4);
          if ( v28 + 12 < v28 )
          {
LABEL_41:
            *(_DWORD *)(a4 + 4) = -1;
            return (unsigned int)-1073741675;
          }
          *(_DWORD *)(a4 + 4) = v28 + 12;
          goto LABEL_56;
        }
        v29 = *(_QWORD *)(a4 + 8);
        for ( k = 0; k < *(_DWORD *)a4; ++k )
        {
          v31 = *(_DWORD *)v29 + 4;
          if ( *(_DWORD *)v29 >= 0xFFFFFFFC || v29 + v31 < v29 )
            return (unsigned int)-1073741675;
          v29 += v31;
        }
        if ( v29 + 4 < v29 )
          return (unsigned int)-1073741675;
        if ( v29 + 12 <= v27 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v29 = 8;
          *(_QWORD *)(v29 + 4) = v13;
LABEL_56:
          ++*(_DWORD *)a4;
          v32 = *(_QWORD *)(a4 + 8);
          v33 = dword_140FD6058;
          if ( !v32 )
          {
            v34 = *(_DWORD *)(a4 + 4);
            if ( v34 + 8 >= v34 )
            {
              *(_DWORD *)(a4 + 4) = v34 + 8;
              ++*(_DWORD *)a4;
              return 0;
            }
            goto LABEL_41;
          }
          v35 = *(_DWORD **)(a4 + 8);
          for ( m = 0; m < *(_DWORD *)a4; ++m )
          {
            v37 = *v35 + 4;
            if ( *v35 >= 0xFFFFFFFC || (_DWORD *)((char *)v35 + v37) < v35 )
              return (unsigned int)-1073741675;
            v35 = (_DWORD *)((char *)v35 + v37);
          }
          if ( v35 + 1 < v35 )
            return (unsigned int)-1073741675;
          v10 = 0;
          if ( (unsigned __int64)(v35 + 2) <= v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v35 = 4;
            v35[1] = v33;
            ++*(_DWORD *)a4;
            return v10;
          }
        }
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v10;
}
