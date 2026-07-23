/*
 * XREFs of sub_140A22C00 @ 0x140A22C00
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     FsRtlKernelFsControlFile @ 0x140A23830 (FsRtlKernelFsControlFile.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A22C00(__int64 a1, void *a2, int a3, __int64 a4)
{
  unsigned int *v6; // rcx
  unsigned int *v7; // rax
  unsigned int i; // r9d
  __int64 v9; // r10
  unsigned int *v10; // rdx
  int v11; // ebx
  unsigned int *v13; // rax
  __int64 v14; // r12
  void **v15; // rax
  unsigned int j; // r9d
  __int64 v17; // r10
  void **v18; // rdx
  void **v19; // rax
  void *v20; // r10
  unsigned int k; // r8d
  __int64 v22; // r9
  unsigned int *v23; // rdx
  _DWORD *v24; // rax
  NTSTATUS v25; // eax
  struct _FILE_OBJECT *v26; // r14
  __int64 *Pool2; // rsi
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r10
  unsigned __int64 v32; // rdx
  unsigned int m; // ecx
  unsigned int v34; // eax
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned int n; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int128 v40; // [rsp+40h] [rbp-10h]
  PVOID Object; // [rsp+88h] [rbp+38h] BYREF
  __int64 v42; // [rsp+90h] [rbp+40h] BYREF

  LODWORD(v42) = a3;
  Object = a2;
  v40 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( !v6 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = v6;
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
  v13 = 0LL;
  if ( (_DWORD)v9 )
    v13 = v10;
  if ( (_DWORD)v9 != 8 )
    return (unsigned int)-1073741789;
  v14 = *(_QWORD *)v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v15 = (void **)v6;
  for ( j = 0; ; ++j )
  {
    v17 = *(unsigned int *)v15;
    v18 = (void **)((char *)v15 + 4);
    if ( j >= 4 )
      break;
    if ( v18 < v15 )
      return (unsigned int)-1073741675;
    v15 = (void **)((char *)v18 + v17);
    if ( (void **)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v15 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = v18;
  if ( (_DWORD)v17 != 8 )
    return (unsigned int)-1073741762;
  v20 = *v19;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v22 = *v6;
    v23 = v6 + 1;
    if ( k >= 5 )
      break;
    if ( v23 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v23 + v22);
    if ( (unsigned int *)((char *)v23 + v22) < v23 )
      return (unsigned int)-1073741675;
  }
  if ( v23 < v6 )
    return (unsigned int)-1073741675;
  v24 = 0LL;
  if ( (_DWORD)v22 )
    v24 = v6 + 1;
  if ( (_DWORD)v22 != 4 )
    return (unsigned int)-1073741789;
  if ( *v24 != 16 )
    return (unsigned int)-1073741762;
  if ( !v20 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v25 = ObReferenceObjectByHandle(v20, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  v26 = (struct _FILE_OBJECT *)Object;
  v11 = v25;
  if ( v25 < 0 )
    goto LABEL_48;
  LODWORD(v42) = 0;
  Pool2 = (__int64 *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v11 = FsRtlKernelFsControlFile(v26, Pool2, 0x248u, (__int64)&v42);
    if ( v11 >= 0 )
    {
      if ( (unsigned int)v42 < 0x40 )
        goto LABEL_77;
      v28 = *Pool2;
      if ( v26->WriteAccess )
      {
        v11 = FsRtlKernelFsControlFile(v26, Pool2, 0x248u, (__int64)&v42);
        if ( v11 < 0 )
          goto LABEL_47;
        if ( (unsigned int)v42 >= 8 )
        {
          v29 = *Pool2;
          goto LABEL_46;
        }
LABEL_77:
        v11 = -1073741762;
        goto LABEL_47;
      }
      v11 = FsRtlKernelFsControlFile(v26, Pool2, 0x248u, (__int64)&v42);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)v42 >= 0x40 )
        {
          v29 = Pool2[3];
LABEL_46:
          *(_QWORD *)&v40 = v28;
          *((_QWORD *)&v40 + 1) = v29;
          goto LABEL_47;
        }
        goto LABEL_77;
      }
    }
LABEL_47:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_48;
  }
  v11 = -1073741801;
LABEL_48:
  if ( v26 )
    ObfDereferenceObject(v26);
  if ( v11 >= 0 )
  {
    *(_DWORD *)(a4 + 4) = 32;
    v30 = ExAllocatePool2(0x100uLL);
    if ( !v30 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v30;
    *(_DWORD *)a4 = 0;
    v31 = v30;
    v32 = v30;
    for ( m = 0; m < *(_DWORD *)a4; ++m )
    {
      v34 = *(_DWORD *)v32 + 4;
      if ( *(_DWORD *)v32 >= 0xFFFFFFFC || v32 + v34 < v32 )
        return (unsigned int)-1073741675;
      v32 += v34;
    }
    if ( v32 + 4 >= v32 )
    {
      if ( v32 + 12 > v31 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *(_DWORD *)v32 = 8;
      *(_QWORD *)(v32 + 4) = v14;
      ++*(_DWORD *)a4;
      v35 = *(_QWORD *)(a4 + 8);
      if ( v35 )
      {
        v36 = *(_QWORD *)(a4 + 8);
        for ( n = 0; n < *(_DWORD *)a4; ++n )
        {
          v38 = *(_DWORD *)v36 + 4;
          if ( *(_DWORD *)v36 >= 0xFFFFFFFC || v36 + v38 < v36 )
            return (unsigned int)-1073741675;
          v36 += v38;
        }
        if ( v36 + 4 >= v36 )
        {
          v11 = 0;
          if ( v36 + 20 <= v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v36 = 16;
            *(_OWORD *)(v36 + 4) = v40;
            ++*(_DWORD *)a4;
            return (unsigned int)v11;
          }
          return (unsigned int)-1073741789;
        }
      }
      else
      {
        v39 = *(_DWORD *)(a4 + 4);
        if ( v39 + 20 >= v39 )
        {
          *(_DWORD *)(a4 + 4) = v39 + 20;
          ++*(_DWORD *)a4;
          return 0;
        }
        *(_DWORD *)(a4 + 4) = -1;
      }
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v11;
}
