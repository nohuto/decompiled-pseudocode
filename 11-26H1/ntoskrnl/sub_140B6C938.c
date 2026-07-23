/*
 * XREFs of sub_140B6C938 @ 0x140B6C938
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14047D11C (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140B6C938(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  unsigned int *v13; // rax
  bool v14; // cc
  __int64 v15; // r12
  unsigned int j; // r9d
  unsigned __int64 v17; // r8
  unsigned int *v18; // rdx
  const wchar_t *v19; // rbx
  __int64 v20; // r11
  size_t v21; // r14
  void *Pool2; // rax
  void *v23; // rbp
  unsigned int *v24; // rax
  unsigned int k; // edx
  __int64 v26; // r8
  unsigned int *v27; // rcx
  __int64 v28; // rdx
  int v29; // r15d
  int v30; // ecx
  unsigned int v31; // edx
  __int64 v32; // rax
  int v33; // r15d
  __int64 v34; // r10
  _DWORD *v35; // rdx
  unsigned int m; // ecx
  unsigned int v37; // eax
  __int64 v38; // r9
  unsigned int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned int n; // ecx
  unsigned int v42; // eax
  __int64 v43; // r8
  unsigned int v44; // eax
  unsigned __int64 v45; // rdx
  unsigned int ii; // ecx
  unsigned int v47; // eax
  size_t pcbLength; // [rsp+30h] [rbp-48h] BYREF
  __int128 v50; // [rsp+38h] [rbp-40h]

  v50 = 0LL;
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
          v14 = *(_DWORD *)a1 <= 4u;
          v15 = *(_QWORD *)v13;
          pcbLength = 0LL;
          if ( !v14 )
          {
            for ( j = 0; ; ++j )
            {
              v17 = *v8;
              v18 = v8 + 1;
              if ( j >= 4 )
                break;
              if ( v18 < v8 )
                return (unsigned int)-1073741675;
              v8 = (unsigned int *)((char *)v18 + v17);
              if ( (unsigned int *)((char *)v18 + v17) < v18 )
                return (unsigned int)-1073741675;
            }
            if ( v18 >= v8 )
            {
              if ( !(_DWORD)v17 )
                return (unsigned int)-1073741762;
              v19 = (const wchar_t *)(v8 + 1);
              if ( (v17 & 1) != 0
                || *((_WORD *)v18 + (v17 >> 1) - 1)
                || StringCbLengthW(v19, *v8, &pcbLength) < 0
                || pcbLength + 2 != v20
                || 2 * (unsigned int)(pcbLength >> 1) == -2 )
              {
                return (unsigned int)-1073741762;
              }
              v21 = 2 * (unsigned int)(pcbLength >> 1) + 2;
              Pool2 = (void *)ExAllocatePool2(0x100uLL);
              v23 = Pool2;
              if ( !Pool2 )
                return (unsigned int)-1073741801;
              memmove(Pool2, v19, v21);
              v24 = *(unsigned int **)(a1 + 8);
              if ( !v24 || *(_DWORD *)a1 <= 5u )
              {
                v7 = -1073741811;
                goto LABEL_85;
              }
              for ( k = 0; ; ++k )
              {
                v26 = *v24;
                v27 = v24 + 1;
                if ( k >= 5 )
                  break;
                if ( v27 < v24 )
                  goto LABEL_83;
                v24 = (unsigned int *)((char *)v27 + v26);
                if ( (unsigned int *)((char *)v27 + v26) < v27 )
                  goto LABEL_83;
              }
              if ( v27 < v24 )
                goto LABEL_83;
              v28 = 0LL;
              if ( (_DWORD)v26 )
                v28 = (__int64)(v24 + 1);
              v29 = *(_QWORD *)&ExpPlatformBinaryLock.SchedulerApcFill5[80]
                  ? guard_dispatch_icall_no_overrides((__int64)v23, v28)
                  : -1073700223;
              v30 = *(_DWORD *)(a2 + 32);
              if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC0
                || (v31 = *(_DWORD *)(a2 + 16) + 68, v31 < *(_DWORD *)(a2 + 16) + 64) )
              {
LABEL_83:
                v7 = -1073741675;
              }
              else
              {
                v7 = v31 + v30 < v31 ? 0xC0000095 : 0;
                if ( v31 + v30 < v31 )
                  goto LABEL_84;
                *(_DWORD *)(a4 + 4) = 40;
                v32 = ExAllocatePool2(0x100uLL);
                if ( !v32 )
                {
                  v7 = -1073741801;
                  goto LABEL_84;
                }
                *(_QWORD *)(a4 + 8) = v32;
                v33 = v29 | 0x10000000;
                *(_DWORD *)a4 = 0;
                v34 = v32;
                v35 = (_DWORD *)v32;
                for ( m = 0; m < *(_DWORD *)a4; ++m )
                {
                  v37 = *v35 + 4;
                  if ( *v35 >= 0xFFFFFFFC || (_DWORD *)((char *)v35 + v37) < v35 )
                    goto LABEL_63;
                  v35 = (_DWORD *)((char *)v35 + v37);
                }
                if ( v35 + 1 < v35 )
                  goto LABEL_63;
                if ( (unsigned __int64)(v35 + 2) > v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
LABEL_58:
                  v7 = -1073741789;
                  goto LABEL_84;
                }
                *v35 = 4;
                v35[1] = v33;
                ++*(_DWORD *)a4;
                v38 = *(_QWORD *)(a4 + 8);
                if ( v38 )
                {
                  v40 = *(_QWORD *)(a4 + 8);
                  for ( n = 0; n < *(_DWORD *)a4; ++n )
                  {
                    v42 = *(_DWORD *)v40 + 4;
                    if ( *(_DWORD *)v40 >= 0xFFFFFFFC || v40 + v42 < v40 )
                      goto LABEL_63;
                    v40 += v42;
                  }
                  if ( v40 + 4 < v40 )
                    goto LABEL_63;
                  if ( v40 + 12 > v38 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_58;
                  *(_DWORD *)v40 = 8;
                  *(_QWORD *)(v40 + 4) = v15;
                }
                else
                {
                  v39 = *(_DWORD *)(a4 + 4);
                  if ( v39 + 12 < v39 )
                  {
LABEL_62:
                    *(_DWORD *)(a4 + 4) = -1;
LABEL_63:
                    v7 = -1073741675;
                    goto LABEL_84;
                  }
                  *(_DWORD *)(a4 + 4) = v39 + 12;
                }
                ++*(_DWORD *)a4;
                v43 = *(_QWORD *)(a4 + 8);
                if ( !v43 )
                {
                  v44 = *(_DWORD *)(a4 + 4);
                  if ( v44 + 20 >= v44 )
                  {
                    *(_DWORD *)(a4 + 4) = v44 + 20;
                    ++*(_DWORD *)a4;
                    v7 = 0;
                    goto LABEL_84;
                  }
                  goto LABEL_62;
                }
                v45 = *(_QWORD *)(a4 + 8);
                for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
                {
                  v47 = *(_DWORD *)v45 + 4;
                  if ( *(_DWORD *)v45 >= 0xFFFFFFFC || v45 + v47 < v45 )
                    goto LABEL_63;
                  v45 += v47;
                }
                if ( v45 + 4 < v45 )
                  goto LABEL_63;
                v7 = 0;
                if ( v45 + 20 > v43 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_58;
                *(_DWORD *)v45 = 16;
                *(_OWORD *)(v45 + 4) = v50;
                ++*(_DWORD *)a4;
              }
LABEL_84:
              if ( !v23 )
                return v7;
LABEL_85:
              ExFreePoolWithTag(v23, 0);
              return v7;
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
