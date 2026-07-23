/*
 * XREFs of sub_140B701DC @ 0x140B701DC
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14047D11C (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140B701DC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  const wchar_t *v19; // rbp
  __int64 v20; // r11
  size_t v21; // r14
  void *Pool2; // rax
  void *v23; // rdi
  unsigned int *v24; // rcx
  unsigned int v25; // r9d
  unsigned int *v26; // rax
  unsigned int k; // r8d
  __int64 v28; // rbx
  unsigned int *v29; // rdx
  __int64 v30; // r11
  unsigned int m; // r8d
  __int64 v32; // rax
  unsigned int *v33; // rdx
  int v34; // r14d
  int v35; // ecx
  unsigned int v36; // edx
  _DWORD *v37; // rax
  int v38; // r14d
  __int64 v39; // r8
  unsigned int v40; // eax
  unsigned __int64 v41; // rdx
  unsigned int n; // ecx
  unsigned int v43; // eax
  size_t pcbLength; // [rsp+68h] [rbp+10h] BYREF

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
              if ( !v24 || (v25 = *(_DWORD *)a1, *(_DWORD *)a1 <= 5u) )
              {
                v7 = -1073741811;
                goto LABEL_62;
              }
              v26 = *(unsigned int **)(a1 + 8);
              for ( k = 0; ; ++k )
              {
                v28 = *v26;
                v29 = v26 + 1;
                if ( k >= 5 )
                  break;
                if ( v29 < v26 )
                  goto LABEL_60;
                v26 = (unsigned int *)((char *)v29 + v28);
                if ( (unsigned int *)((char *)v29 + v28) < v29 )
                  goto LABEL_60;
              }
              if ( v29 < v26 )
                goto LABEL_60;
              v30 = 0LL;
              if ( (_DWORD)v28 )
                v30 = (__int64)(v26 + 1);
              if ( v25 <= 6 )
              {
                v7 = -1073741811;
                goto LABEL_61;
              }
              for ( m = 0; ; ++m )
              {
                v32 = *v24;
                v33 = v24 + 1;
                if ( m >= 6 )
                  break;
                if ( v33 < v24 )
                  goto LABEL_60;
                v24 = (unsigned int *)((char *)v33 + v32);
                if ( (unsigned int *)((char *)v33 + v32) < v33 )
                  goto LABEL_60;
              }
              if ( v33 < v24 )
                goto LABEL_60;
              if ( ExpPlatformBinaryLock.SuspendEvent.Header.WaitListHead.Flink )
              {
                v34 = guard_dispatch_icall_no_overrides((__int64)v23, v30);
                v7 = v34;
                if ( v34 < 0 )
                  goto LABEL_61;
                v35 = *(_DWORD *)(a2 + 32);
                if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
                  goto LABEL_60;
                v36 = *(_DWORD *)(a2 + 16) + 52;
                if ( v36 < *(_DWORD *)(a2 + 16) + 48 )
                  goto LABEL_60;
                v7 = v36 + v35 < v36 ? 0xC0000095 : 0;
                if ( v36 + v35 < v36 )
                  goto LABEL_61;
                *(_DWORD *)(a4 + 4) = 20;
                v37 = (_DWORD *)ExAllocatePool2(0x100uLL);
                if ( !v37 )
                {
                  v7 = -1073741801;
                  goto LABEL_61;
                }
                *(_QWORD *)(a4 + 8) = v37;
                v38 = v34 | 0x10000000;
                *(_DWORD *)a4 = 0;
                if ( v37 + 1 < v37 )
                  goto LABEL_60;
                if ( v37 + 2 > (_DWORD *)((char *)v37 + *(unsigned int *)(a4 + 4)) )
                {
LABEL_65:
                  v7 = -1073741789;
                  goto LABEL_61;
                }
                *v37 = 4;
                v37[1] = v38;
                ++*(_DWORD *)a4;
                v39 = *(_QWORD *)(a4 + 8);
                if ( !v39 )
                {
                  v40 = *(_DWORD *)(a4 + 4);
                  if ( v40 + 12 >= v40 )
                  {
                    *(_DWORD *)(a4 + 4) = v40 + 12;
                    v7 = 0;
                    ++*(_DWORD *)a4;
                    goto LABEL_61;
                  }
                  *(_DWORD *)(a4 + 4) = -1;
LABEL_60:
                  v7 = -1073741675;
                  goto LABEL_61;
                }
                v41 = *(_QWORD *)(a4 + 8);
                for ( n = 0; n < *(_DWORD *)a4; ++n )
                {
                  v43 = *(_DWORD *)v41 + 4;
                  if ( *(_DWORD *)v41 >= 0xFFFFFFFC || v41 + v43 < v41 )
                    goto LABEL_60;
                  v41 += v43;
                }
                if ( v41 + 4 < v41 )
                  goto LABEL_60;
                v7 = 0;
                if ( v41 + 12 > v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_65;
                *(_DWORD *)v41 = 8;
                *(_QWORD *)(v41 + 4) = v15;
                ++*(_DWORD *)a4;
              }
              else
              {
                v7 = -1073741637;
              }
LABEL_61:
              if ( !v23 )
                return v7;
LABEL_62:
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
