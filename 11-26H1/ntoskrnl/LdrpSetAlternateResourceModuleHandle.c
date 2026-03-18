/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x1404A7338
 * Callers:
 *     LdrpGetRcConfig @ 0x1403DC6CC (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DCBD0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x140B03754 (LdrResGetRCConfig.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1403DD0B0 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     LdrpInitMuiCrits @ 0x1403DD614 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x140AE2510 (MmUnmapViewInSystemSpace.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        _DWORD *a1,
        PVOID *a2,
        HANDLE *a3,
        __int64 a4,
        __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  HANDLE v11; // rdi
  char v12; // r15
  unsigned int v13; // ebx
  __int16 v14; // r13
  unsigned __int64 v15; // rax
  $353D57E818BB6F967B4B818D974CF463 v16; // rsi
  unsigned int v17; // edx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  _DWORD *v22; // r8
  int v23; // ecx
  int v24; // r9d
  unsigned int SystemCallNumber; // r8d
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  PVOID v28; // rax
  $353D57E818BB6F967B4B818D974CF463 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  void *Pool2; // rax
  __int16 v33; // ax
  unsigned __int64 v35; // [rsp+70h] [rbp+8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+20h]

  v36 = a4;
  v35 = (unsigned __int64)a1;
  v11 = 0LL;
  if ( !a1 )
    return 0;
  v12 = a6;
  if ( (a6 & 0xFFFFFFCC) != 0 || (a6 & 2) != 0 && (a6 & 1) != 0 )
    return 0;
  if ( (a6 & 1) != 0 && !a2 )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&NormalizationListLock.FirstArgument, Executive, 0, 0, 0LL);
  v13 = 0;
  v14 = a5;
  while ( v13 < NormalizationListLock.SystemCallNumber )
  {
    v15 = (unsigned __int64)v13 << 6;
    if ( *(_DWORD **)(v15 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 8) == a1 )
    {
      if ( (v12 & 2) != 0 && *(_QWORD *)(v15 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 16) )
        goto LABEL_65;
      if ( (v12 & 1) != 0
        && *(_QWORD *)(v15 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 32)
        && a5
        && *(_WORD *)(v15 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4)) == a5 )
      {
        if ( *a2 != (PVOID)-1LL )
        {
          MmUnmapViewInSystemSpace(*a2);
          if ( a3 )
            ZwClose(*a3);
        }
        v30 = (unsigned __int64)v13 << 6;
        v31 = *(__int64 *)((char *)&NormalizationListLock.116 + 4);
        *a2 = *(PVOID *)(v30 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 32);
        if ( a3 )
          *a3 = *(HANDLE *)(v30 + v31 + 40);
        goto LABEL_65;
      }
    }
    ++v13;
  }
  if ( (v12 & 0x10) != 0 )
    goto LABEL_65;
  v16.0 = *($3C37BCD2CC8A9A13CF8DF3DA08EBA37B *)((char *)&NormalizationListLock.116 + 4);
  if ( *($353D57E818BB6F967B4B818D974CF463 *)((char *)&NormalizationListLock.116 + 4) )
  {
    if ( NormalizationListLock.SystemCallNumber >= *(_DWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v16.0 = ($3C37BCD2CC8A9A13CF8DF3DA08EBA37B)Pool2;
      if ( !Pool2 )
        goto LABEL_65;
      memmove(
        Pool2,
        *(const void **)((char *)&NormalizationListLock.116 + 4),
        (unsigned __int64)*(unsigned int *)&NormalizationListLock.WaitRegister.Flags << 6);
      ExFreePoolWithTag(*(PVOID *)((char *)&NormalizationListLock.116 + 4), 0);
      *($353D57E818BB6F967B4B818D974CF463 *)((char *)&NormalizationListLock.116 + 4) = v16;
      *(_DWORD *)&NormalizationListLock.WaitRegister.Flags += 32;
    }
  }
  else
  {
    v29.0 = ($3C37BCD2CC8A9A13CF8DF3DA08EBA37B)ExAllocatePool2(0x100uLL);
    v16.0 = v29.0;
    if ( !*(_QWORD *)&v29.0 )
      goto LABEL_65;
    *($353D57E818BB6F967B4B818D974CF463 *)((char *)&NormalizationListLock.116 + 4) = v29;
    *(_DWORD *)&NormalizationListLock.WaitRegister.Flags = 32;
  }
  v17 = 0;
  v18 = v35;
  while ( v17 < NormalizationListLock.SystemCallNumber )
  {
    v19 = (unsigned __int64)v17 << 6;
    if ( *(_QWORD *)(v19 + *(_QWORD *)&v16.0 + 8) == v35 )
    {
      if ( (v12 & 2) != 0 && !*(_QWORD *)(v19 + *(_QWORD *)&v16.0 + 16) )
      {
        *(_QWORD *)(v19 + *(_QWORD *)&v16.0 + 16) = v36;
        *(_DWORD *)(v19 + *(_QWORD *)&v16.0 + 56) = a7;
        goto LABEL_65;
      }
      if ( (v12 & 1) != 0 && !*(_QWORD *)(v19 + *(_QWORD *)&v16.0 + 32) )
      {
        v33 = *(_WORD *)(v19 + *(_QWORD *)&v16.0);
        if ( v33 == v14 || !v33 )
        {
          *(_QWORD *)(v19 + *(_QWORD *)&v16.0 + 32) = *a2;
          if ( a3 )
            v11 = *a3;
          *(_QWORD *)(((unsigned __int64)v17 << 6) + *(_QWORD *)&v16.0 + 40) = v11;
          *(_WORD *)(((unsigned __int64)v17 << 6) + *(_QWORD *)&v16.0) = v14;
          *(_DWORD *)(((unsigned __int64)v17 << 6) + *(_QWORD *)&v16.0 + 56) = a7;
          *(_QWORD *)(((unsigned __int64)v17 << 6) + *(_QWORD *)&v16.0 + 48) = a8;
          goto LABEL_65;
        }
      }
    }
    ++v17;
  }
  v20 = v35 & 0xFFFFFFFFFFFFFFFCuLL;
  v21 = 0LL;
  v22 = 0LL;
  v35 = 0LL;
  if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(_WORD *)v20 != 23117 )
      goto LABEL_26;
    v21 = (_DWORD *)(v20 + *(unsigned int *)(v20 + 60));
    if ( (unsigned __int64)v21 < v20
      || v20 < 0x7FFFFFFF0000LL && ((unsigned __int64)(v21 + 66) > 0x7FFFFFFF0000LL || v21 + 66 <= v21) )
    {
      goto LABEL_26;
    }
    if ( *v21 != 17744 )
      goto LABEL_26;
    v23 = 0;
  }
  else
  {
    v23 = -1073741811;
  }
  if ( v23 >= 0 )
    v22 = v21;
  v35 = (unsigned __int64)v22;
LABEL_26:
  if ( v22 )
  {
    v24 = v22[22];
    SystemCallNumber = NormalizationListLock.SystemCallNumber;
    v26 = (unsigned __int64)NormalizationListLock.SystemCallNumber << 6;
    v27 = *(__int64 *)((char *)&NormalizationListLock.116 + 4);
    *(_QWORD *)(v26 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 8) = v18;
    *(_QWORD *)(v26 + v27 + 16) = v36;
    if ( (v12 & 1) != 0 )
    {
      if ( a2 )
        v28 = *a2;
      else
        v28 = 0LL;
      *(_QWORD *)(v26 + v27 + 32) = v28;
      if ( a3 )
        v11 = *a3;
      *(_QWORD *)(v26 + v27 + 40) = v11;
      *(_QWORD *)(v26 + v27 + 48) = a8;
    }
    else
    {
      *(_QWORD *)(v26 + v27 + 32) = 0LL;
      *(_QWORD *)(v26 + v27 + 40) = 0LL;
      *(_QWORD *)(v26 + v27 + 48) = 0LL;
    }
    *(_WORD *)(v26 + v27) = v14;
    *(_DWORD *)(v26 + v27 + 24) = v24;
    *(_DWORD *)(v26 + v27 + 56) = a7;
    NormalizationListLock.SystemCallNumber = SystemCallNumber + 1;
  }
LABEL_65:
  KeReleaseMutantEx((struct _KTHREAD *)&NormalizationListLock.FirstArgument, 1LL, 4LL, (LONG *)&v35);
  return 1;
}
