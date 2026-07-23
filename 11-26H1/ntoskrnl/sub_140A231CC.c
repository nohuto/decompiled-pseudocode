/*
 * XREFs of sub_140A231CC @ 0x140A231CC
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetCachedSigningLevel @ 0x14072B2E0 (ZwSetCachedSigningLevel.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     FsRtlSetKernelEaFile @ 0x140A23020 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A23830 (FsRtlKernelFsControlFile.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A231CC(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v6; // rcx
  void **v7; // rax
  unsigned int i; // r9d
  __int64 v9; // r10
  void **v10; // r8
  int v11; // ebx
  void **v13; // rax
  void *v14; // r11
  unsigned int *v15; // rax
  unsigned int j; // r9d
  __int64 v17; // r10
  unsigned int *v18; // r8
  unsigned int *v19; // rax
  unsigned int *v20; // rax
  unsigned int k; // r9d
  __int64 v22; // r10
  unsigned int *v23; // r8
  int *v24; // rsi
  int v25; // esi
  unsigned int m; // r8d
  __int64 v27; // rax
  unsigned int *v28; // rdx
  _QWORD *v29; // r15
  __int64 v30; // r12
  __int64 v31; // r13
  void *Pool2; // rax
  PVOID v33; // rcx
  int v34; // esi
  SE_SIGNING_LEVEL v35; // dl
  __int64 *v36; // rsi
  __int64 v37; // r15
  char *v38; // rax
  void *v39; // rsi
  __int64 v40; // r8
  _DWORD *v41; // rdx
  unsigned int n; // ecx
  unsigned int v43; // eax
  _DWORD *v44; // rax
  unsigned int v45; // eax
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h]
  HANDLE TargetFile; // [rsp+50h] [rbp-20h] BYREF
  __int64 v49; // [rsp+58h] [rbp-18h]
  __int128 v50; // [rsp+60h] [rbp-10h]
  unsigned int v51; // [rsp+B8h] [rbp+48h]
  __int64 v52; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v52) = a3;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( !v6 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = (void **)v6;
  for ( i = 0; ; ++i )
  {
    v9 = *(unsigned int *)v7;
    v10 = (void **)((char *)v7 + 4);
    if ( i >= 3 )
      break;
    if ( v10 < v7 )
      return (unsigned int)-1073741675;
    v7 = (void **)((char *)v10 + v9);
    if ( (void **)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  if ( v10 < v7 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( (_DWORD)v9 )
    v13 = v10;
  if ( (_DWORD)v9 != 8 )
    return (unsigned int)-1073741762;
  v14 = *v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v15 = v6;
  for ( j = 0; ; ++j )
  {
    v17 = *v15;
    v18 = v15 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v15 )
      return (unsigned int)-1073741675;
    v15 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v15 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = v18;
  if ( (_DWORD)v17 != 4 )
    return (unsigned int)-1073741789;
  v51 = *v19;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v20 = v6;
  for ( k = 0; ; ++k )
  {
    v22 = *v20;
    v23 = v20 + 1;
    if ( k >= 5 )
      break;
    if ( v23 < v20 )
      return (unsigned int)-1073741675;
    v20 = (unsigned int *)((char *)v23 + v22);
    if ( (unsigned int *)((char *)v23 + v22) < v23 )
      return (unsigned int)-1073741675;
  }
  if ( v23 < v20 )
    return (unsigned int)-1073741675;
  v24 = 0LL;
  if ( (_DWORD)v22 )
    v24 = (int *)(v20 + 1);
  if ( (_DWORD)v22 != 4 )
    return (unsigned int)-1073741789;
  v25 = *v24;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v27 = *v6;
    v28 = v6 + 1;
    if ( m >= 6 )
      break;
    if ( v28 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      return (unsigned int)-1073741675;
  }
  if ( v28 < v6 )
    return (unsigned int)-1073741675;
  v29 = 0LL;
  if ( (_DWORD)v27 )
    v29 = v6 + 1;
  if ( (_DWORD)v27 != 16 )
    return (unsigned int)-1073741811;
  v30 = 0LL;
  v50 = 0uLL;
  v31 = 0LL;
  TargetFile = 0LL;
  if ( !v14 || !v29 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(v14, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_107;
  LODWORD(v52) = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  P = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741801;
LABEL_107:
    v39 = 0LL;
    goto LABEL_75;
  }
  v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, Pool2, 0x248u, (__int64)&v52);
  if ( v11 < 0 )
    goto LABEL_90;
  if ( (unsigned int)v52 < 0x40 )
  {
    v11 = -1073741762;
    goto LABEL_90;
  }
  v49 = *(_QWORD *)P;
  v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, P, 0x248u, (__int64)&v52);
  if ( v11 < 0 )
  {
LABEL_90:
    v33 = P;
    goto LABEL_55;
  }
  v33 = P;
  if ( (unsigned int)v52 < 0x40 )
  {
    v11 = -1073741762;
  }
  else
  {
    v30 = v49;
    v31 = *((_QWORD *)P + 3);
    *(_QWORD *)&v50 = v49;
    *((_QWORD *)&v50 + 1) = v31;
  }
LABEL_55:
  ExFreePoolWithTag(v33, 0);
  if ( v11 < 0 )
    goto LABEL_110;
  if ( v30 != *v29 || v31 != v29[1] )
  {
    v11 = -1073741762;
    goto LABEL_110;
  }
  if ( v51 )
  {
    *(_QWORD *)&v50 = -1LL;
    *((_QWORD *)&v50 + 1) = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_73;
  }
  if ( ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &TargetFile) >= 0 )
  {
    if ( v25 && (v34 = v25 - 1) != 0 && (unsigned int)(v34 - 1) <= 1 )
      v35 = 6;
    else
      v35 = 0;
    ZwSetCachedSigningLevel(2u, v35, &TargetFile, 1u, TargetFile);
  }
  LODWORD(v52) = 0;
  v36 = (__int64 *)ExAllocatePool2(0x100uLL);
  if ( !v36 )
  {
LABEL_111:
    v11 = -1073741801;
    goto LABEL_110;
  }
  v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, v36, 0x248u, (__int64)&v52);
  if ( v11 >= 0 )
  {
    if ( (unsigned int)v52 < 0x40 )
      goto LABEL_103;
    v37 = *v36;
    v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, v36, 0x248u, (__int64)&v52);
    if ( v11 < 0 )
      goto LABEL_72;
    if ( (unsigned int)v52 < 0x40 )
    {
LABEL_103:
      v11 = -1073741762;
    }
    else
    {
      *((_QWORD *)&v50 + 1) = v36[3];
      *(_QWORD *)&v50 = v37;
    }
  }
LABEL_72:
  ExFreePoolWithTag(v36, 0);
  if ( v11 >= 0 )
  {
LABEL_73:
    v38 = (char *)ExAllocatePool2(0x100uLL);
    if ( v38 )
    {
      *(_OWORD *)v38 = 0LL;
      *((_OWORD *)v38 + 1) = 0LL;
      *((_OWORD *)v38 + 2) = 0LL;
      *((_QWORD *)v38 + 6) = 0LL;
      *((_WORD *)v38 + 28) = 0;
      *((_WORD *)v38 + 3) = 24;
      v38[5] = 25;
      qmemcpy(v38 + 8, "$Kernel.Purge.AppxFICache", 25);
      *(_OWORD *)(v38 + 34) = v50;
      *(_QWORD *)(v38 + 50) = 0LL;
      v39 = v38;
      v11 = FsRtlSetKernelEaFile((PFILE_OBJECT)Object, v38, 58);
      goto LABEL_75;
    }
    goto LABEL_111;
  }
LABEL_110:
  v39 = 0LL;
LABEL_75:
  if ( TargetFile )
    ZwClose(TargetFile);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
  if ( v11 >= 0 )
  {
    v40 = *(_QWORD *)(a4 + 8);
    if ( v40 )
    {
      v41 = *(_DWORD **)(a4 + 8);
      for ( n = 0; n < *(_DWORD *)a4; ++n )
      {
        v43 = *v41 + 4;
        if ( *v41 >= 0xFFFFFFFC || (_DWORD *)((char *)v41 + v43) < v41 )
          return (unsigned int)-1073741675;
        v41 = (_DWORD *)((char *)v41 + v43);
      }
      if ( v41 + 1 < v41 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v41 + 2) > v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v41 = 4;
      v41[1] = 0;
    }
    else
    {
      v45 = *(_DWORD *)(a4 + 4);
      if ( v45 + 8 < v45 )
      {
        *(_DWORD *)(a4 + 4) = -1;
        return (unsigned int)-1073741675;
      }
      *(_DWORD *)(a4 + 4) = v45 + 8;
    }
    ++*(_DWORD *)a4;
    if ( !*(_DWORD *)(a4 + 4) )
      return (unsigned int)-1073741762;
    v44 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( !v44 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v44;
    *(_DWORD *)a4 = 0;
    if ( v44 + 1 >= v44 )
    {
      v11 = 0;
      if ( v44 + 2 <= (_DWORD *)((char *)v44 + *(unsigned int *)(a4 + 4)) )
      {
        *v44 = 4;
        v44[1] = 0;
        ++*(_DWORD *)a4;
        return (unsigned int)v11;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v11;
}
