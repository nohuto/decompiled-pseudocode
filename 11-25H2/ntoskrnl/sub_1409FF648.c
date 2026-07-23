/*
 * XREFs of sub_1409FF648 @ 0x1409FF648
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetCachedSigningLevel @ 0x14069E440 (ZwSetCachedSigningLevel.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     FsRtlSetKernelEaFile @ 0x140A00480 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409FF648(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v6; // rcx
  unsigned int *v7; // rax
  unsigned int i; // r9d
  __int64 v9; // r11
  unsigned int *v10; // r8
  NTSTATUS v11; // ebx
  void **v13; // r10
  void *v14; // r10
  unsigned int *v15; // rax
  unsigned int j; // r9d
  __int64 v17; // r11
  unsigned int *v18; // r8
  unsigned int *v19; // rax
  bool v20; // cc
  unsigned int v21; // ebx
  unsigned int *v22; // rax
  unsigned int k; // r9d
  __int64 v24; // r11
  unsigned int *v25; // r8
  int *v26; // rsi
  int v27; // esi
  unsigned int m; // r8d
  __int64 v29; // rax
  unsigned int *v30; // rdx
  _QWORD *v31; // r15
  __int128 v32; // xmm6
  void *v33; // r12
  __int64 *Pool2; // r13
  unsigned __int64 v35; // r12
  int v36; // esi
  SE_SIGNING_LEVEL v37; // dl
  __int64 *v38; // rsi
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // r8
  _DWORD *v42; // rdx
  unsigned int n; // ecx
  unsigned int v44; // eax
  __int64 v45; // rax
  _DWORD *v46; // rdx
  unsigned int ii; // ecx
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // [rsp+48h] [rbp-38h]
  HANDLE TargetFile; // [rsp+50h] [rbp-30h] BYREF
  __int128 v53; // [rsp+58h] [rbp-28h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v55; // [rsp+C8h] [rbp+48h]
  __int64 v56; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v56) = a3;
  v55 = a2;
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
    v13 = (void **)(v7 + 1);
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
  v20 = *(_DWORD *)a1 <= 5u;
  v21 = *v19;
  LODWORD(v55) = *v19;
  if ( v20 )
    return (unsigned int)-1073741811;
  v22 = v6;
  for ( k = 0; ; ++k )
  {
    v24 = *v22;
    v25 = v22 + 1;
    if ( k >= 5 )
      break;
    if ( v25 < v22 )
      return (unsigned int)-1073741675;
    v22 = (unsigned int *)((char *)v25 + v24);
    LODWORD(v55) = v21;
    if ( (unsigned int *)((char *)v25 + v24) < v25 )
      return (unsigned int)-1073741675;
  }
  if ( v25 < v22 )
    return (unsigned int)-1073741675;
  v26 = 0LL;
  if ( (_DWORD)v24 )
    v26 = (int *)(v22 + 1);
  if ( (_DWORD)v24 != 4 )
    return (unsigned int)-1073741789;
  v27 = *v26;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v29 = *v6;
    v30 = v6 + 1;
    if ( m >= 6 )
      break;
    if ( v30 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v30 + v29);
    LODWORD(v55) = v21;
    if ( (unsigned int *)((char *)v30 + v29) < v30 )
      return (unsigned int)-1073741675;
  }
  if ( v30 < v6 )
    return (unsigned int)-1073741675;
  v31 = 0LL;
  if ( (_DWORD)v29 )
    v31 = v6 + 1;
  if ( (_DWORD)v29 != 16 )
    return (unsigned int)-1073741811;
  TargetFile = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v53 = 0LL;
  if ( !v14 || !v31 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(v14, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  if ( v11 >= 0 )
  {
    LODWORD(v56) = 0;
    Pool2 = (__int64 *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v11 = -1073741801;
      goto LABEL_77;
    }
    v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, Pool2, 0x248u, (__int64)&v56);
    if ( v11 < 0 )
      goto LABEL_56;
    if ( (unsigned int)v56 >= 0x40 )
    {
      v51 = *Pool2;
      v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, Pool2, 0x248u, (__int64)&v56);
      if ( v11 < 0 )
      {
LABEL_56:
        v51 = 0LL;
        v35 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
LABEL_57:
        ExFreePoolWithTag(Pool2, 0);
        if ( v11 >= 0 )
        {
          if ( v51 == *v31 && v35 == v31[1] )
          {
            if ( (_DWORD)v55 )
            {
              *(_QWORD *)&v53 = -1LL;
              *((_QWORD *)&v53 + 1) = 0x7FFFFFFFFFFFFFFFLL;
              v32 = v53;
            }
            else
            {
              if ( ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &TargetFile) >= 0 )
              {
                if ( v27 && (v36 = v27 - 1) != 0 && (unsigned int)(v36 - 1) <= 1 )
                  v37 = 6;
                else
                  v37 = 0;
                ZwSetCachedSigningLevel(2u, v37, &TargetFile, 1u, TargetFile);
              }
              LODWORD(v56) = 0;
              v38 = (__int64 *)ExAllocatePool2(0x100uLL);
              if ( !v38 )
              {
LABEL_117:
                v11 = -1073741801;
                goto LABEL_116;
              }
              v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, v38, 0x248u, (__int64)&v56);
              if ( v11 >= 0 )
              {
                if ( (unsigned int)v56 < 0x40 )
                {
                  v11 = -1073741762;
                }
                else
                {
                  v39 = *v38;
                  v11 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, v38, 0x248u, (__int64)&v56);
                  if ( v11 >= 0 )
                  {
                    if ( (unsigned int)v56 < 0x40 )
                    {
                      v11 = -1073741762;
                    }
                    else
                    {
                      *((_QWORD *)&v53 + 1) = v38[3];
                      *(_QWORD *)&v53 = v39;
                      v32 = v53;
                    }
                  }
                }
              }
              ExFreePoolWithTag(v38, 0);
              if ( v11 < 0 )
                goto LABEL_116;
            }
            v40 = ExAllocatePool2(0x100uLL);
            if ( v40 )
            {
              *(_OWORD *)v40 = 0LL;
              *(_OWORD *)(v40 + 16) = 0LL;
              *(_OWORD *)(v40 + 32) = 0LL;
              *(_QWORD *)(v40 + 48) = 0LL;
              *(_WORD *)(v40 + 56) = 0;
              *(_WORD *)(v40 + 6) = 24;
              *(_BYTE *)(v40 + 5) = 25;
              qmemcpy((void *)(v40 + 8), "$Kernel.Purge.AppxFICache", 25);
              *(_OWORD *)(v40 + 34) = v32;
              *(_QWORD *)(v40 + 50) = 0LL;
              v33 = (void *)v40;
              v11 = FsRtlSetKernelEaFile((PFILE_OBJECT)Object);
              goto LABEL_77;
            }
            goto LABEL_117;
          }
          v11 = -1073741762;
        }
LABEL_116:
        v33 = 0LL;
        goto LABEL_77;
      }
      if ( (unsigned int)v56 >= 0x40 )
      {
        v35 = Pool2[3];
        *(_QWORD *)&v53 = v51;
        *((_QWORD *)&v53 + 1) = v35;
        v32 = v53;
        goto LABEL_57;
      }
    }
    v11 = -1073741762;
    goto LABEL_56;
  }
LABEL_77:
  if ( TargetFile )
    ZwClose(TargetFile);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v11 >= 0 )
  {
    v41 = *(_QWORD *)(a4 + 8);
    if ( v41 )
    {
      v42 = *(_DWORD **)(a4 + 8);
      for ( n = 0; n < *(_DWORD *)a4; ++n )
      {
        v44 = *v42 + 4;
        if ( *v42 >= 0xFFFFFFFC || (_DWORD *)((char *)v42 + v44) < v42 )
          return (unsigned int)-1073741675;
        v42 = (_DWORD *)((char *)v42 + v44);
      }
      if ( v42 + 1 < v42 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v42 + 2) > v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v42 = 4;
      v42[1] = 0;
    }
    else
    {
      v49 = *(_DWORD *)(a4 + 4);
      if ( v49 + 8 < v49 )
        goto LABEL_107;
      *(_DWORD *)(a4 + 4) = v49 + 8;
    }
    ++*(_DWORD *)a4;
    if ( !*(_DWORD *)(a4 + 4) )
      return (unsigned int)-1073741762;
    v45 = ExAllocatePool2(0x100uLL);
    if ( !v45 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v45;
    *(_DWORD *)a4 = 0;
    v46 = *(_DWORD **)(a4 + 8);
    if ( v46 )
    {
      for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
      {
        v48 = *v46 + 4;
        if ( *v46 >= 0xFFFFFFFC || (_DWORD *)((char *)v46 + v48) < v46 )
          return (unsigned int)-1073741675;
        v46 = (_DWORD *)((char *)v46 + v48);
      }
      if ( v46 + 1 >= v46 )
      {
        v11 = 0;
        if ( (unsigned __int64)(v46 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v46 = 4;
          v46[1] = 0;
          ++*(_DWORD *)a4;
          return (unsigned int)v11;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741675;
    }
    v50 = *(_DWORD *)(a4 + 4);
    if ( v50 + 8 >= v50 )
    {
      *(_DWORD *)(a4 + 4) = v50 + 8;
      v11 = 0;
      ++*(_DWORD *)a4;
      return (unsigned int)v11;
    }
LABEL_107:
    *(_DWORD *)(a4 + 4) = -1;
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v11;
}
