/*
 * XREFs of sub_140B557F0 @ 0x140B557F0
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B557F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v25; // r10
  _DWORD *v26; // rdx
  unsigned int k; // ecx
  unsigned int v28; // eax
  __int64 v29; // r9
  unsigned int v30; // eax
  unsigned __int64 v31; // rdx
  unsigned int m; // ecx
  unsigned int v33; // eax
  __int64 v34; // r10
  unsigned int v35; // eax
  _DWORD *v36; // r9
  unsigned int n; // ecx
  unsigned int v38; // eax
  _OWORD *v39; // r8
  __int64 v40; // rcx
  char *v41; // rax
  __int128 v42; // xmm1
  char v44; // [rsp+30h] [rbp-118h] BYREF

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
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
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
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
  if ( v17 < v8 )
    return (unsigned int)-1073741675;
  v18 = 0LL;
  if ( (_DWORD)v16 )
    v18 = (__int64)v17;
  if ( !ExpPlatformBinaryLock.SuspendEvent.Header.WaitListHead.Blink )
    return (unsigned int)-1073741637;
  v19 = guard_dispatch_icall_no_overrides(v18, (unsigned int)v16);
  v7 = v19;
  if ( v19 >= 0 )
  {
    v20 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFED0 )
    {
      v21 = *(_DWORD *)(a2 + 16) + 308;
      if ( v21 >= *(_DWORD *)(a2 + 16) + 304 )
      {
        v22 = v21 + v20;
        v7 = v21 + v20 < v21 ? 0xC0000095 : 0;
        if ( v22 < v21 )
          return v7;
        *(_DWORD *)(a4 + 4) = 280;
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
        if ( v26 + 1 < v26 )
          return (unsigned int)-1073741675;
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
          if ( v31 + 4 < v31 )
            return (unsigned int)-1073741675;
          if ( v31 + 12 > v29 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *(_DWORD *)v31 = 8;
          *(_QWORD *)(v31 + 4) = v14;
        }
        else
        {
          v30 = *(_DWORD *)(a4 + 4);
          if ( v30 + 12 < v30 )
          {
LABEL_43:
            *(_DWORD *)(a4 + 4) = -1;
            return (unsigned int)-1073741675;
          }
          *(_DWORD *)(a4 + 4) = v30 + 12;
        }
        ++*(_DWORD *)a4;
        v34 = *(_QWORD *)(a4 + 8);
        if ( !v34 )
        {
          v35 = *(_DWORD *)(a4 + 4);
          if ( v35 + 260 >= v35 )
          {
            *(_DWORD *)(a4 + 4) = v35 + 260;
            ++*(_DWORD *)a4;
            return 0;
          }
          goto LABEL_43;
        }
        v36 = *(_DWORD **)(a4 + 8);
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v38 = *v36 + 4;
          if ( *v36 >= 0xFFFFFFFC || (_DWORD *)((char *)v36 + v38) < v36 )
            return (unsigned int)-1073741675;
          v36 = (_DWORD *)((char *)v36 + v38);
        }
        v39 = v36 + 1;
        if ( v36 + 1 < v36 )
          return (unsigned int)-1073741675;
        v7 = 0;
        if ( (unsigned __int64)(v36 + 65) <= v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v40 = 2LL;
          *v36 = 256;
          v41 = &v44;
          do
          {
            *v39 = *(_OWORD *)v41;
            v39[1] = *((_OWORD *)v41 + 1);
            v39[2] = *((_OWORD *)v41 + 2);
            v39[3] = *((_OWORD *)v41 + 3);
            v39[4] = *((_OWORD *)v41 + 4);
            v39[5] = *((_OWORD *)v41 + 5);
            v39[6] = *((_OWORD *)v41 + 6);
            v39 += 8;
            v42 = *((_OWORD *)v41 + 7);
            v41 += 128;
            *(v39 - 1) = v42;
            --v40;
          }
          while ( v40 );
          ++*(_DWORD *)a4;
          return v7;
        }
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v7;
}
