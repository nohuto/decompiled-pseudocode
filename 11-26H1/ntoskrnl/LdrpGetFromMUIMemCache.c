/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1403E0000
 * Callers:
 *     LdrpGetRcConfig @ 0x1403DF8BC (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x140B05364 (LdrResGetRCConfig.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1403E02A0 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     LdrpInitMuiCrits @ 0x1403E0804 (LdrpInitMuiCrits.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404ABC54 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // r14
  char v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  _DWORD *v12; // rax
  int v13; // edx
  __int64 v14; // rax
  ULONG v15; // edx

  v4 = a4;
  v8 = 0LL;
  v9 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v10 = DllHandle & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (DllHandle & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    v11 = 0LL;
    if ( *(_WORD *)v10 == 23117 )
    {
      v12 = (_DWORD *)(v10 + *(unsigned int *)(v10 + 60));
      if ( (unsigned __int64)v12 >= v10
        && (v10 >= 0x7FFFFFFF0000LL || (unsigned __int64)(v12 + 66) <= 0x7FFFFFFF0000LL && v12 + 66 > v12)
        && *v12 == 17744 )
      {
        v11 = v10 + *(unsigned int *)(v10 + 60);
      }
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&NormalizationListLock.FirstArgument, Executive, 0, 0, 0LL);
  v13 = LODWORD(NormalizationListLock.WaitBlockList) - 1;
  while ( v13 >= 0 )
  {
    v14 = (__int64)v13 << 6;
    if ( *(_QWORD *)(v14 + NormalizationListLock.WaitStatus + 8) != DllHandle )
      goto LABEL_16;
    if ( *(_DWORD *)(v14 + NormalizationListLock.WaitStatus + 24) != *(_DWORD *)(v11 + 88) )
    {
      v9 = 1;
      break;
    }
    if ( (v4 & 8) != 0 )
    {
      if ( *(_QWORD *)(v14 + NormalizationListLock.WaitStatus + 16) )
      {
        _mm_lfence();
        v8 = *(_DWORD **)(v14 + NormalizationListLock.WaitStatus + 16);
        if ( v8 != (_DWORD *)-1LL && v8 && *v8 != -20054323 )
        {
          v9 = 1;
          v8 = 0LL;
        }
        break;
      }
LABEL_16:
      --v13;
    }
    else
    {
      if ( (v4 & 4) == 0 )
        goto LABEL_16;
      if ( a2 && *(_WORD *)(v14 + NormalizationListLock.WaitStatus) == a2 )
      {
        v8 = *(_DWORD **)(v14 + NormalizationListLock.WaitStatus + 32);
        if ( a3 )
          *a3 = *(_QWORD *)(v14 + NormalizationListLock.WaitStatus + 48);
        break;
      }
      --v13;
    }
  }
  KeReleaseMutantEx((struct _KTHREAD *)&NormalizationListLock.FirstArgument);
  if ( v9 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, v15);
  return v8;
}
