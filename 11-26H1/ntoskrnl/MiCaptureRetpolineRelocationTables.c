/*
 * XREFs of MiCaptureRetpolineRelocationTables @ 0x140AD69F0
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x14086D520 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiParseImageLoadConfig @ 0x1409CC9F0 (MiParseImageLoadConfig.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     RtlValidateDynamicFixupRelocation @ 0x140473128 (RtlValidateDynamicFixupRelocation.c)
 *     MiIsRetpolineEnabled @ 0x14047FA5C (MiIsRetpolineEnabled.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     MiFreeImageRetpolineContext @ 0x140AD6C1C (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureRetpolineRelocationTables(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        char a6,
        unsigned int *a7)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rsi
  const void *v14; // r14
  __int64 v15; // r13
  unsigned int v16; // eax
  int v17; // ebx
  __int64 *v19; // rbx
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  __int64 v22; // rax
  bool IsRetpolineEnabled; // al
  unsigned __int64 v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-58h] BYREF
  int v26; // [rsp+24h] [rbp-54h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h]
  char v31; // [rsp+A8h] [rbp+30h]

  v9 = a1;
  v25 = 0;
  v31 = 0;
  v10 = RtlImageDirectoryEntryToData(a1, 1, 0xCu, &v26);
  if ( v10 )
  {
    v11 = v10 - v9;
    *a7 = v11;
    if ( v11 > a2 )
    {
LABEL_8:
      v17 = -1073741701;
LABEL_9:
      MiFreeImageRetpolineContext(a7);
      return (unsigned int)v17;
    }
  }
  else
  {
    *a7 = 0;
  }
  if ( *a5 != 1 )
  {
    v17 = -1073741637;
    goto LABEL_9;
  }
  v12 = a4 + a5[1] + 8;
  v13 = (unsigned int)(a4 + 8);
  while ( (unsigned int)v13 < v12 )
  {
    if ( v13 + 12 > (unsigned __int64)v12 )
      goto LABEL_8;
    v14 = (const void *)(v13 + v9);
    v27 = *(_QWORD *)(v13 + v9);
    v15 = *(unsigned int *)(v13 + v9 + 8);
    v16 = v13 + 12;
    if ( (int)v13 + 12 < (unsigned int)v13 )
      goto LABEL_8;
    v13 = v16 + (unsigned int)v15;
    if ( (unsigned int)v13 < v16 || (unsigned int)v13 > v12 )
      goto LABEL_8;
    v19 = 0LL;
    if ( v27 == 3 )
    {
      v19 = (__int64 *)(a7 + 2);
    }
    else
    {
      if ( v27 == 4 )
      {
        IsRetpolineEnabled = MiIsRetpolineEnabled();
        v24 = (unsigned __int64)(a7 + 4);
      }
      else
      {
        if ( v27 != 5 )
          goto LABEL_19;
        IsRetpolineEnabled = MiIsRetpolineEnabled();
        v24 = (unsigned __int64)(a7 + 6);
      }
      v19 = (__int64 *)(v24 & -(__int64)IsRetpolineEnabled);
    }
LABEL_19:
    if ( v19 )
    {
      v31 = 1;
      if ( *v19 )
        goto LABEL_8;
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = (void *)ExAllocatePoolMm(256LL, v15 + 12, 1918003533, CurrentProcessorColor | 0x80000000);
      *v19 = (__int64)PoolMm;
      if ( !PoolMm )
      {
        v17 = -1073741670;
        goto LABEL_9;
      }
      memmove(PoolMm, v14, v15 + 12);
      v22 = *v19;
      *(_QWORD *)v22 = v27;
      *(_DWORD *)(v22 + 8) = v15;
      v17 = RtlValidateDynamicFixupRelocation(*v19, a2, a3, &v25);
      if ( v17 < 0 )
        goto LABEL_9;
      a7[1] += v25;
    }
    v9 = a1;
  }
  if ( !v31 )
  {
    v17 = -1073741637;
    goto LABEL_9;
  }
  return 0;
}
