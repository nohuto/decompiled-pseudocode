/*
 * XREFs of BiVerifyBootPartition @ 0x140B2E8B0
 * Callers:
 *     BiGetNtPartitionPath @ 0x1408987B8 (BiGetNtPartitionPath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10 (BiConvertBootEnvironmentDeviceToNt.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiVerifyBootPartition(int *a1, _QWORD *a2, _QWORD *a3, int **a4, _QWORD *a5, unsigned int *a6)
{
  void *v7; // rcx
  _QWORD *v8; // r11
  _QWORD *v9; // r14
  _DWORD *v10; // rbp
  int v11; // r10d
  unsigned int v12; // r12d
  _DWORD *v13; // r13
  char *v14; // rdi
  int *v15; // rsi
  unsigned int v16; // edx
  int v17; // r8d
  unsigned int v18; // ebx
  __int64 v20; // rdx
  int v21; // edx
  unsigned __int64 v22; // r8
  _DWORD *v23; // r10
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // r15
  __int64 v28; // rax
  size_t v29; // rbx
  unsigned int v30; // r14d
  char *Pool2; // rax
  _DWORD *v32; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v34; // [rsp+98h] [rbp+10h]
  _QWORD *v35; // [rsp+A0h] [rbp+18h]
  int **v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v7 = 0LL;
  v33 = 0;
  v8 = a3;
  v32 = 0LL;
  v9 = a2;
  v10 = 0LL;
  v11 = *a1;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( *a1 == 2 )
  {
    v13 = a1 + 4;
    v15 = a1 + 8;
    goto LABEL_5;
  }
  if ( v11 == 6 )
  {
    v10 = a1 + 4;
LABEL_4:
    v15 = v10 + 4;
LABEL_5:
    v16 = 32;
    goto LABEL_6;
  }
  if ( v11 == 10 )
  {
    v20 = (unsigned int)a1[9];
    if ( *(int *)((char *)a1 + v20 + 16) != 6 )
      return (unsigned int)-1073741811;
    v10 = (int *)((char *)a1 + v20 + 32);
    goto LABEL_4;
  }
  if ( v11 != 8 )
    return (unsigned int)-1073741811;
  v21 = a1[6];
  if ( !v21 )
    return (unsigned int)-1073741811;
  v16 = v21 + 16;
  v15 = (int *)((char *)a1 + v16);
LABEL_6:
  v17 = *v15;
  if ( !*v15 )
  {
LABEL_7:
    v18 = 0;
    if ( v9 )
      *v9 = v10;
    if ( v8 )
      *v8 = v13;
    if ( a4 )
      *a4 = v15;
    if ( a6 )
      *a6 = v12;
    if ( a5 )
    {
      *a5 = v14;
      v14 = 0LL;
    }
    goto LABEL_17;
  }
  if ( v17 != 6 )
  {
    if ( v17 == 7 )
      goto LABEL_7;
    return (unsigned int)-1073741811;
  }
  v22 = (unsigned int)a1[2];
  v12 = v16 + 24;
  v23 = (int *)((char *)a1 + v16 + 24);
  if ( v22 < (unsigned __int64)(v16 + 44) + 16 || (unsigned int)v22 < v12 + v23[2] || *v23 || v23[4] != 5 )
    return (unsigned int)-1073741811;
  v24 = BiConvertBootEnvironmentDeviceToNt((_DWORD)v23, 0, 0, (unsigned int)&v32, (__int64)&v33);
  v7 = v32;
  v18 = v24;
  if ( v24 >= 0 )
  {
    if ( v33 >= 0x2E && *v32 == 3 && (v25 = (unsigned int)v32[5], *(_DWORD *)((char *)v32 + v25) == 2) )
    {
      v26 = -1LL;
      v27 = (char *)v32 + v25;
      v28 = -1LL;
      do
        ++v28;
      while ( *(_WORD *)&v27[2 * v28 + 20] );
      v29 = (unsigned int)(2 * v28);
      do
        ++v26;
      while ( *((_WORD *)v32 + v26 + 12) );
      v30 = 2 * v26 + 2;
      Pool2 = (char *)ExAllocatePool2(0x102uLL);
      v14 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v27 + 20, v29);
        memmove(&v14[v29], v32 + 6, v30);
        v7 = v32;
        a4 = v36;
        v8 = v35;
        v9 = v34;
        goto LABEL_7;
      }
      v7 = v32;
      v18 = -1073741801;
    }
    else
    {
      v18 = -1073741811;
    }
  }
LABEL_17:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x4B444342u);
  return v18;
}
