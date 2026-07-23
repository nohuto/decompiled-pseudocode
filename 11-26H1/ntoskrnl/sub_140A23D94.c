/*
 * XREFs of sub_140A23D94 @ 0x140A23D94
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     FsRtlKernelFsControlFile @ 0x140A23830 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A23B80 (FsRtlQueryKernelEaFile.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A23D94(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v6; // rcx
  unsigned int *v7; // rax
  unsigned int i; // r9d
  __int64 v9; // r10
  unsigned int *v10; // rdx
  unsigned int v11; // ebx
  unsigned int *v13; // rax
  bool v14; // cc
  __int64 v15; // r12
  unsigned int j; // r8d
  __int64 v17; // r9
  unsigned int *v18; // rdx
  void **v19; // rax
  void *v20; // rcx
  void *v21; // r15
  __int64 v22; // r14
  NTSTATUS v23; // eax
  struct _FILE_OBJECT *v24; // rbx
  int v25; // esi
  __int64 Pool2; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  _QWORD *v30; // r13
  __int64 *v31; // r12
  int v32; // ebx
  int v33; // ebx
  unsigned __int64 v34; // rax
  __int64 v35; // r9
  _DWORD *v36; // rdx
  unsigned int k; // ecx
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // [rsp+50h] [rbp-30h]
  __int64 v42; // [rsp+58h] [rbp-28h]
  __int64 Source2; // [rsp+60h] [rbp-20h] BYREF
  __int64 v44; // [rsp+68h] [rbp-18h]
  __int64 v45; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v47; // [rsp+C8h] [rbp+48h] BYREF
  int v48; // [rsp+D0h] [rbp+50h]

  v47 = a2;
  v48 = 0;
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
  v14 = *(_DWORD *)a1 <= 4u;
  v15 = *(_QWORD *)v13;
  v45 = *(_QWORD *)v13;
  if ( v14 )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v17 = *v6;
    v18 = v6 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v6 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = (void **)(v6 + 1);
  if ( (_DWORD)v17 != 8 )
    return (unsigned int)-1073741762;
  v20 = *v19;
  v21 = 0LL;
  LODWORD(v47) = 0;
  v22 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  Source2 = 0LL;
  if ( !v20 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v23 = ObReferenceObjectByHandle(v20, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  v24 = (struct _FILE_OBJECT *)Object;
  v25 = v23;
  if ( v23 >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v21 = (void *)Pool2;
    if ( !Pool2 )
      goto LABEL_72;
    *(_QWORD *)(Pool2 + 5) = 0LL;
    *(_QWORD *)(Pool2 + 13) = 0LL;
    *(_QWORD *)(Pool2 + 21) = 0LL;
    *(_BYTE *)(Pool2 + 30) = 0;
    *(_BYTE *)(Pool2 + 4) = 25;
    *(_DWORD *)Pool2 = 0;
    strcpy((char *)(Pool2 + 5), "$Kernel.Purge.AppxFICach");
    v27 = ExAllocatePool2(0x100uLL);
    v22 = v27;
    if ( !v27 )
    {
LABEL_72:
      v25 = -1073741801;
      goto LABEL_48;
    }
    *(_OWORD *)v27 = 0LL;
    *(_OWORD *)(v27 + 16) = 0LL;
    *(_OWORD *)(v27 + 32) = 0LL;
    *(_QWORD *)(v27 + 48) = 0LL;
    *(_WORD *)(v27 + 56) = 0;
    v28 = FsRtlQueryKernelEaFile(v24, v27, 58, 1, (__int64)v21, 31, 0LL, 1, &v47);
    v25 = v28;
    if ( v28 != -1073741275 )
    {
      if ( v28 < 0 )
        goto LABEL_48;
      v29 = *(unsigned __int16 *)(v22 + 6);
      v30 = (_QWORD *)(v22 + *(unsigned __int8 *)(v22 + 5) + 9LL);
      if ( (unsigned __int64)v30 + v29 > v22 + (unsigned __int64)(unsigned int)v47 )
      {
LABEL_73:
        v25 = -1073741762;
        goto LABEL_48;
      }
      if ( (_WORD)v29 )
      {
        if ( (_DWORD)v29 == 24 && RtlCompareMemory(v30 + 2, &Source2, 8uLL) == 8 )
        {
          v48 = 2;
          LODWORD(v47) = 0;
          v31 = (__int64 *)ExAllocatePool2(0x100uLL);
          if ( !v31 )
          {
LABEL_47:
            v15 = v45;
            goto LABEL_48;
          }
          v32 = FsRtlKernelFsControlFile(v24, 590068, 0LL, 0, v31, 0x248u, (ULONG *)&v47);
          if ( v32 >= 0 )
          {
            if ( (unsigned int)v47 < 0x40 )
              goto LABEL_75;
            v44 = *v31;
            v32 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590059, 0LL, 0, v31, 0x248u, (ULONG *)&v47);
            if ( v32 >= 0 )
            {
              if ( (unsigned int)v47 >= 0x40 )
              {
                v41 = v44;
                v42 = v31[3];
                goto LABEL_42;
              }
LABEL_75:
              v32 = -1073741762;
            }
          }
LABEL_42:
          ExFreePoolWithTag(v31, 0);
          if ( v32 >= 0 && v41 == *v30 )
          {
            v33 = v48;
            if ( v42 == v30[1] )
              v33 = 3;
            v48 = v33;
          }
          goto LABEL_47;
        }
        goto LABEL_73;
      }
    }
    v48 = 0;
    v25 = 0;
  }
LABEL_48:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v22 )
    ExFreePoolWithTag((PVOID)v22, 0);
  v11 = v25;
  if ( v25 >= 0 )
  {
    *(_DWORD *)(a4 + 4) = 20;
    v34 = ExAllocatePool2(0x100uLL);
    if ( !v34 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v34;
    *(_DWORD *)a4 = 0;
    if ( v34 + 4 >= v34 )
    {
      if ( v34 + 12 > v34 + *(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *(_DWORD *)v34 = 8;
      *(_QWORD *)(v34 + 4) = v15;
      ++*(_DWORD *)a4;
      v35 = *(_QWORD *)(a4 + 8);
      if ( v35 )
      {
        v36 = *(_DWORD **)(a4 + 8);
        for ( k = 0; k < *(_DWORD *)a4; ++k )
        {
          v38 = *v36 + 4;
          if ( *v36 >= 0xFFFFFFFC || (_DWORD *)((char *)v36 + v38) < v36 )
            return (unsigned int)-1073741675;
          v36 = (_DWORD *)((char *)v36 + v38);
        }
        if ( v36 + 1 >= v36 )
        {
          v11 = 0;
          if ( (unsigned __int64)(v36 + 2) <= v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v39 = v48;
            *v36 = 4;
            v36[1] = v39;
            ++*(_DWORD *)a4;
            return v11;
          }
          return (unsigned int)-1073741789;
        }
      }
      else
      {
        v40 = *(_DWORD *)(a4 + 4);
        if ( v40 + 8 >= v40 )
        {
          *(_DWORD *)(a4 + 4) = v40 + 8;
          v11 = 0;
          ++*(_DWORD *)a4;
          return v11;
        }
        *(_DWORD *)(a4 + 4) = -1;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v11;
}
