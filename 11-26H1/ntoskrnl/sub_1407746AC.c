/*
 * XREFs of sub_1407746AC @ 0x1407746AC
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407746AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rax
  __int64 i; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rbp
  int v13; // esi
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 Pool2; // rax
  int v18; // esi
  __int64 v19; // r9
  _DWORD *v20; // rdx
  unsigned int j; // ecx
  unsigned int v22; // eax
  __int64 v23; // r10
  unsigned int v24; // eax
  unsigned __int64 v25; // r8
  unsigned int k; // ecx
  unsigned int v27; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v8 = *v4;
    v9 = (unsigned __int64)(v4 + 1);
    if ( (unsigned int)i >= 3 )
      break;
    if ( v9 < (unsigned __int64)v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)(v9 + v8);
    if ( v9 + v8 < v9 )
      return (unsigned int)-1073741675;
  }
  if ( v9 < (unsigned __int64)v4 )
    return (unsigned int)-1073741675;
  v10 = 0LL;
  if ( (_DWORD)v8 )
    v10 = (__int64 *)v9;
  if ( (_DWORD)v8 != 8 )
    return (unsigned int)-1073741789;
  v12 = *v10;
  if ( !*(_QWORD *)&ExpPlatformBinaryLock.SchedulerApc.Type )
    return (unsigned int)-1073741637;
  v13 = guard_dispatch_icall_no_overrides(v9, i);
  v11 = v13;
  if ( v13 >= 0 )
  {
    v14 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
    {
      v15 = *(_DWORD *)(a2 + 16) + 52;
      if ( v15 >= *(_DWORD *)(a2 + 16) + 48 )
      {
        v16 = v15 + v14;
        v11 = v15 + v14 < v15 ? 0xC0000095 : 0;
        if ( v16 < v15 )
          return v11;
        if ( a4 )
        {
          *(_DWORD *)(a4 + 4) = 20;
          Pool2 = ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = Pool2;
          v18 = v13 | 0x10000000;
          *(_DWORD *)a4 = 0;
          v19 = Pool2;
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
            if ( (unsigned __int64)(v20 + 2) > v19 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *v20 = 4;
            v20[1] = v18;
            ++*(_DWORD *)a4;
            v23 = *(_QWORD *)(a4 + 8);
            if ( v23 )
            {
              v25 = *(_QWORD *)(a4 + 8);
              for ( k = 0; k < *(_DWORD *)a4; ++k )
              {
                v27 = *(_DWORD *)v25 + 4;
                if ( *(_DWORD *)v25 >= 0xFFFFFFFC || v25 + v27 < v25 )
                  return (unsigned int)-1073741675;
                v25 += v27;
              }
              if ( v25 + 4 >= v25 )
              {
                v11 = 0;
                if ( v25 + 12 <= v23 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v25 = 8;
                  *(_QWORD *)(v25 + 4) = v12;
                  ++*(_DWORD *)a4;
                  return v11;
                }
                return (unsigned int)-1073741789;
              }
            }
            else
            {
              v24 = *(_DWORD *)(a4 + 4);
              if ( v24 + 12 >= v24 )
              {
                *(_DWORD *)(a4 + 4) = v24 + 12;
                ++*(_DWORD *)a4;
                return 0;
              }
              *(_DWORD *)(a4 + 4) = -1;
            }
          }
          return (unsigned int)-1073741675;
        }
        return (unsigned int)-1073741811;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v11;
}
