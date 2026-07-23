/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x1404A09C8
 * Callers:
 *     LdrpGetRcConfig @ 0x1403DF8BC (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x140B05364 (LdrResGetRCConfig.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1403E02A0 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     LdrpInitMuiCrits @ 0x1403E0804 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x140ADFA00 (MmUnmapViewInSystemSpace.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  volatile __int64 v16; // rsi
  unsigned int v17; // edx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  _DWORD *v22; // r8
  int v23; // ecx
  int v24; // r9d
  int WaitBlockList; // r8d
  unsigned __int64 v26; // rcx
  volatile __int64 v27; // rdx
  PVOID v28; // rax
  volatile __int64 v29; // rax
  unsigned __int64 v30; // rcx
  volatile __int64 WaitStatus; // rdx
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
  while ( v13 < LODWORD(NormalizationListLock.WaitBlockList) )
  {
    v15 = (unsigned __int64)v13 << 6;
    if ( *(_DWORD **)(v15 + NormalizationListLock.WaitStatus + 8) == a1 )
    {
      if ( (v12 & 2) != 0 && *(_QWORD *)(v15 + NormalizationListLock.WaitStatus + 16) )
        goto LABEL_65;
      if ( (v12 & 1) != 0
        && *(_QWORD *)(v15 + NormalizationListLock.WaitStatus + 32)
        && a5
        && *(_WORD *)(v15 + NormalizationListLock.WaitStatus) == a5 )
      {
        if ( *a2 != (PVOID)-1LL )
        {
          MmUnmapViewInSystemSpace(*a2);
          if ( a3 )
            ZwClose(*a3);
        }
        v30 = (unsigned __int64)v13 << 6;
        WaitStatus = NormalizationListLock.WaitStatus;
        *a2 = *(PVOID *)(v30 + NormalizationListLock.WaitStatus + 32);
        if ( a3 )
          *a3 = *(HANDLE *)(v30 + WaitStatus + 40);
        goto LABEL_65;
      }
    }
    ++v13;
  }
  if ( (v12 & 0x10) != 0 )
    goto LABEL_65;
  v16 = NormalizationListLock.WaitStatus;
  if ( NormalizationListLock.WaitStatus )
  {
    if ( LODWORD(NormalizationListLock.WaitBlockList) >= *(_DWORD *)&NormalizationListLock.ApcStateFill[40] )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v16 = (volatile __int64)Pool2;
      if ( !Pool2 )
        goto LABEL_65;
      memmove(
        Pool2,
        (const void *)NormalizationListLock.WaitStatus,
        (unsigned __int64)*(unsigned int *)&NormalizationListLock.ApcStateFill[40] << 6);
      ExFreePoolWithTag((PVOID)NormalizationListLock.WaitStatus, 0);
      NormalizationListLock.WaitStatus = v16;
      *(_DWORD *)&NormalizationListLock.ApcStateFill[40] += 32;
    }
  }
  else
  {
    v29 = ExAllocatePool2(0x100uLL);
    v16 = v29;
    if ( !v29 )
      goto LABEL_65;
    NormalizationListLock.WaitStatus = v29;
    *(_DWORD *)&NormalizationListLock.ApcStateFill[40] = 32;
  }
  v17 = 0;
  v18 = v35;
  while ( v17 < LODWORD(NormalizationListLock.WaitBlockList) )
  {
    v19 = (unsigned __int64)v17 << 6;
    if ( *(_QWORD *)(v19 + v16 + 8) == v35 )
    {
      if ( (v12 & 2) != 0 && !*(_QWORD *)(v19 + v16 + 16) )
      {
        *(_QWORD *)(v19 + v16 + 16) = v36;
        *(_DWORD *)(v19 + v16 + 56) = a7;
        goto LABEL_65;
      }
      if ( (v12 & 1) != 0 && !*(_QWORD *)(v19 + v16 + 32) )
      {
        v33 = *(_WORD *)(v19 + v16);
        if ( v33 == v14 || !v33 )
        {
          *(_QWORD *)(v19 + v16 + 32) = *a2;
          if ( a3 )
            v11 = *a3;
          *(_QWORD *)(((unsigned __int64)v17 << 6) + v16 + 40) = v11;
          *(_WORD *)(((unsigned __int64)v17 << 6) + v16) = v14;
          *(_DWORD *)(((unsigned __int64)v17 << 6) + v16 + 56) = a7;
          *(_QWORD *)(((unsigned __int64)v17 << 6) + v16 + 48) = a8;
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
    WaitBlockList = (int)NormalizationListLock.WaitBlockList;
    v26 = (unsigned __int64)LODWORD(NormalizationListLock.WaitBlockList) << 6;
    v27 = NormalizationListLock.WaitStatus;
    *(_QWORD *)(v26 + NormalizationListLock.WaitStatus + 8) = v18;
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
    LODWORD(NormalizationListLock.WaitBlockList) = WaitBlockList + 1;
  }
LABEL_65:
  KeReleaseMutantEx((struct _KTHREAD *)&NormalizationListLock.FirstArgument, 1LL, 4LL, (LONG *)&v35);
  return 1;
}
