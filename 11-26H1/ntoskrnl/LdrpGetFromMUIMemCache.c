/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1403DCE10
 * Callers:
 *     LdrpGetRcConfig @ 0x1403DC6CC (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DCBD0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x140B03754 (LdrResGetRCConfig.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1403DD0B0 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     LdrpInitMuiCrits @ 0x1403DD614 (LdrpInitMuiCrits.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404B2744 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // r14
  char v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  _DWORD *v12; // rax
  signed int v13; // edx
  __int64 v14; // rax

  v4 = a4;
  v8 = 0LL;
  v9 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
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
  v13 = NormalizationListLock.SystemCallNumber - 1;
  while ( v13 >= 0 )
  {
    v14 = (__int64)v13 << 6;
    if ( *(_QWORD *)(v14 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 8) != a1 )
      goto LABEL_16;
    if ( *(_DWORD *)(v14 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 24) != *(_DWORD *)(v11 + 88) )
    {
      v9 = 1;
      break;
    }
    if ( (v4 & 8) != 0 )
    {
      if ( *(_QWORD *)(v14 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 16) )
      {
        _mm_lfence();
        v8 = *(_DWORD **)(v14 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 16);
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
      if ( a2 && *(_WORD *)(v14 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4)) == a2 )
      {
        v8 = *(_DWORD **)(v14 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 32);
        if ( a3 )
          *a3 = *(_QWORD *)(v14 + *(_QWORD *)((char *)&NormalizationListLock.116 + 4) + 48);
        break;
      }
      --v13;
    }
  }
  KeReleaseMutantEx((struct _KTHREAD *)&NormalizationListLock.FirstArgument);
  if ( v9 )
    LdrUnloadAlternateResourceModuleEx(a1);
  return v8;
}
