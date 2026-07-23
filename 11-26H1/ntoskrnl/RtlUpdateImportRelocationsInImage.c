/*
 * XREFs of RtlUpdateImportRelocationsInImage @ 0x14072558C
 * Callers:
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140D008A8 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140D00AEC (MiApplyImportOptimizationToBootDriver.c)
 * Callees:
 *     RtlCaptureRetpolineImportRvas @ 0x140429D68 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140504DE0 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x14052CEF4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlApplyImportRelocationToImage @ 0x1407253B4 (RtlApplyImportRelocationToImage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlUpdateImportRelocationsInImage(
        char *BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        char a7,
        char a8)
{
  __int64 v8; // r13
  void *v10; // rsi
  int v13; // ebx
  int v14; // eax
  char *v15; // rbx
  char *v16; // rcx
  __int64 v17; // rax
  char *v18; // rbx
  char *v19; // r12
  unsigned __int64 v20; // r15
  unsigned int *v21; // r14
  int v23; // [rsp+38h] [rbp-49h]
  int v24; // [rsp+48h] [rbp-39h] BYREF
  char *v25; // [rsp+50h] [rbp-31h] BYREF
  void *Pool2; // [rsp+58h] [rbp-29h]
  __int64 v27[2]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v28; // [rsp+70h] [rbp-11h]
  __int128 v29; // [rsp+80h] [rbp-1h]
  __int64 v30; // [rsp+90h] [rbp+Fh]

  v8 = a3;
  v30 = 0LL;
  LODWORD(v25) = 0;
  v10 = 0LL;
  Pool2 = 0LL;
  v24 = 0;
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v13 = RtlpCaptureRetpolineBinaryInfoForImage((unsigned __int64)BaseOfImage, a2, a3, a5, a6, (__int64)v27);
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( a7 )
  {
    if ( !HIDWORD(v27[0]) )
      return 0;
    *(_QWORD *)&v29 = a2;
    *((_QWORD *)&v28 + 1) = &BaseOfImage[HIDWORD(v27[0])];
    *((_QWORD *)&v29 + 1) = a4;
  }
  else
  {
    v14 = RtlCaptureRetpolineImportRvas(BaseOfImage, a2, v8, a4, 0LL, &v24);
    v13 = v14;
    if ( v14 >= 0 )
      return (unsigned int)-1073741637;
    if ( v14 != -1073741789 )
      return (unsigned int)v13;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v10 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v13 = RtlCaptureRetpolineImportRvas(BaseOfImage, a2, v8, a4, (__int64)Pool2, &v24);
    if ( v13 < 0 )
    {
LABEL_28:
      ExFreePoolWithTag(v10, 0);
      return (unsigned int)v13;
    }
    *(_QWORD *)&v28 = v10;
  }
  v13 = RtlpCaptureDynamicRelocationTableRva(BaseOfImage, (unsigned int)v8, (int *)&v25);
  if ( v13 >= 0 )
  {
    v15 = &BaseOfImage[(unsigned int)v25 + 8];
    v16 = &v15[*(unsigned int *)&BaseOfImage[(unsigned int)v25 + 4]];
    if ( *(_DWORD *)&BaseOfImage[(unsigned int)v25] == 1 )
    {
      while ( v15 < v16 )
      {
        v17 = *((unsigned int *)v15 + 2);
        if ( *(_QWORD *)v15 == 3LL )
        {
          v18 = v15 + 12;
          v19 = &v18[v17];
          v25 = &v18[v17];
          if ( v18 < &v18[v17] )
          {
            do
            {
              v20 = (unsigned __int64)&v18[*((unsigned int *)v18 + 1)];
              v21 = (unsigned int *)(v18 + 8);
              if ( (unsigned __int64)(v18 + 8) < v20 )
              {
                do
                {
                  if ( (*v21 & 0xFFF) == 0 && v21 != (unsigned int *)(v18 + 8) )
                    break;
                  RtlApplyImportRelocationToImage(
                    (unsigned __int64)BaseOfImage,
                    a3,
                    (__int64)v27,
                    (__int64)a6,
                    *(_DWORD *)v18,
                    v21++,
                    v23,
                    a8);
                }
                while ( (unsigned __int64)v21 < v20 );
                v19 = v25;
              }
              v18 += *((unsigned int *)v18 + 1);
            }
            while ( v18 < v19 );
            v10 = Pool2;
          }
          v13 = 0;
          goto LABEL_27;
        }
        v15 += v17 + 12;
      }
    }
    v13 = -1073741637;
  }
LABEL_27:
  if ( v10 )
    goto LABEL_28;
  return (unsigned int)v13;
}
