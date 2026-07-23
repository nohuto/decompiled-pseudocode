/*
 * XREFs of sub_14077A08C @ 0x14077A08C
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077A08C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r9d
  __int64 v11; // r10
  unsigned int *v12; // rdx
  unsigned int *v13; // rax
  __int64 v14; // rbp
  unsigned int j; // r8d
  __int64 v16; // rax
  unsigned int *v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 Pool2; // rax
  int v24; // esi
  __int64 v25; // r9
  _DWORD *v26; // rdx
  unsigned int k; // ecx
  unsigned int v28; // eax
  __int64 v29; // r10
  unsigned int v30; // eax
  unsigned __int64 v31; // r8
  unsigned int m; // ecx
  unsigned int v33; // eax

  if ( a2 )
  {
    if ( a4 )
    {
      v8 = *(unsigned int **)(a1 + 8);
      if ( v8 )
      {
        if ( *(_DWORD *)a1 > 3u )
        {
          v9 = v8;
          for ( i = 0; ; ++i )
          {
            v11 = *v9;
            v12 = v9 + 1;
            if ( i >= 3 )
              break;
            if ( v12 < v9 )
              return (unsigned int)-1073741675;
            v9 = (unsigned int *)((char *)v12 + v11);
            if ( (unsigned int *)((char *)v12 + v11) < v12 )
              return (unsigned int)-1073741675;
          }
          if ( v12 < v9 )
            return (unsigned int)-1073741675;
          v13 = 0LL;
          if ( (_DWORD)v11 )
            v13 = v12;
          if ( (_DWORD)v11 != 8 )
            return (unsigned int)-1073741789;
          v14 = *(_QWORD *)v13;
          if ( *(_DWORD *)a1 > 4u )
          {
            for ( j = 0; ; ++j )
            {
              v16 = *v8;
              v17 = v8 + 1;
              if ( j >= 4 )
                break;
              if ( v17 < v8 )
                return (unsigned int)-1073741675;
              v8 = (unsigned int *)((char *)v17 + v16);
              if ( (unsigned int *)((char *)v17 + v16) < v17 )
                return (unsigned int)-1073741675;
            }
            if ( v17 >= v8 )
            {
              v18 = 0LL;
              if ( (_DWORD)v16 )
                v18 = (__int64)v17;
              v19 = ExpPlatformBinaryLock.SavedApcState.Process
                  ? guard_dispatch_icall_no_overrides(v18, (unsigned int)v16)
                  : -1073741637;
              v20 = *(_DWORD *)(a2 + 32);
              if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
              {
                v21 = *(_DWORD *)(a2 + 16) + 52;
                if ( v21 >= *(_DWORD *)(a2 + 16) + 48 )
                {
                  v22 = v21 + v20;
                  v7 = v21 + v20 < v21 ? 0xC0000095 : 0;
                  if ( v22 < v21 )
                    return v7;
                  *(_DWORD *)(a4 + 4) = 20;
                  Pool2 = ExAllocatePool2(0x100uLL);
                  if ( !Pool2 )
                    return (unsigned int)-1073741801;
                  *(_QWORD *)(a4 + 8) = Pool2;
                  v24 = v19 | 0x10000000;
                  *(_DWORD *)a4 = 0;
                  v25 = Pool2;
                  v26 = (_DWORD *)Pool2;
                  for ( k = 0; k < *(_DWORD *)a4; ++k )
                  {
                    v28 = *v26 + 4;
                    if ( *v26 >= 0xFFFFFFFC || (_DWORD *)((char *)v26 + v28) < v26 )
                      return (unsigned int)-1073741675;
                    v26 = (_DWORD *)((char *)v26 + v28);
                  }
                  if ( v26 + 1 >= v26 )
                  {
                    if ( (unsigned __int64)(v26 + 2) > v25 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      return (unsigned int)-1073741789;
                    *v26 = 4;
                    v26[1] = v24;
                    ++*(_DWORD *)a4;
                    v29 = *(_QWORD *)(a4 + 8);
                    if ( v29 )
                    {
                      v31 = *(_QWORD *)(a4 + 8);
                      for ( m = 0; m < *(_DWORD *)a4; ++m )
                      {
                        v33 = *(_DWORD *)v31 + 4;
                        if ( *(_DWORD *)v31 >= 0xFFFFFFFC || v31 + v33 < v31 )
                          return (unsigned int)-1073741675;
                        v31 += v33;
                      }
                      if ( v31 + 4 >= v31 )
                      {
                        v7 = 0;
                        if ( v31 + 12 <= v29 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        {
                          *(_DWORD *)v31 = 8;
                          *(_QWORD *)(v31 + 4) = v14;
                          ++*(_DWORD *)a4;
                          return v7;
                        }
                        return (unsigned int)-1073741789;
                      }
                    }
                    else
                    {
                      v30 = *(_DWORD *)(a4 + 4);
                      if ( v30 + 12 >= v30 )
                      {
                        *(_DWORD *)(a4 + 4) = v30 + 12;
                        ++*(_DWORD *)a4;
                        return 0;
                      }
                      *(_DWORD *)(a4 + 4) = -1;
                    }
                  }
                  return (unsigned int)-1073741675;
                }
              }
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
