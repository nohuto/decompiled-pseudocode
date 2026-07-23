/*
 * XREFs of RtlPerformRetpolineRelocationsOnImageEx @ 0x140504A94
 * Callers:
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140D008A8 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyRetpolineToBootDriver @ 0x140D00C48 (MiApplyRetpolineToBootDriver.c)
 * Callees:
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140504DE0 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x14052CEF4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlpIsAddressInIgnoreRegion @ 0x140534D28 (RtlpIsAddressInIgnoreRegion.c)
 *     RtlApplyImportRelocationToImage @ 0x1407253B4 (RtlApplyImportRelocationToImage.c)
 *     RtlApplyIndirectRelocationToImage @ 0x140725454 (RtlApplyIndirectRelocationToImage.c)
 *     RtlApplySwitchJumpRelocationToImage @ 0x1407254F0 (RtlApplySwitchJumpRelocationToImage.c)
 */

__int64 __fastcall RtlPerformRetpolineRelocationsOnImageEx(
        char *BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned int v9; // r12d
  char *v11; // rbx
  char *v12; // rsi
  char *v13; // r14
  __int64 result; // rax
  char *v15; // rcx
  char *v16; // rdx
  unsigned __int64 v17; // r12
  unsigned int *v18; // rbx
  unsigned __int64 v19; // rbp
  unsigned int *v20; // rdi
  unsigned int *v21; // rbx
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rsi
  unsigned int *v24; // rdi
  unsigned __int64 v25; // r15
  unsigned int *v26; // rbx
  unsigned __int64 v27; // rsi
  unsigned int *v28; // rdi
  int v29; // [rsp+30h] [rbp-88h]
  unsigned __int64 i; // [rsp+48h] [rbp-70h]
  unsigned __int64 v31; // [rsp+48h] [rbp-70h]
  unsigned __int64 v32; // [rsp+48h] [rbp-70h]
  _OWORD v33[3]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v34; // [rsp+80h] [rbp-38h]

  v9 = a3;
  memset(v33, 0, sizeof(v33));
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v34 = 0LL;
  result = RtlpCaptureRetpolineBinaryInfoForImage(BaseOfImage, a5, (__int64)v33);
  if ( (int)result >= 0 )
  {
    result = RtlpCaptureDynamicRelocationTableRva(BaseOfImage, v9);
    if ( (int)result >= 0 )
    {
      v15 = BaseOfImage + 8;
      v16 = &BaseOfImage[*((unsigned int *)BaseOfImage + 1) + 8];
      if ( BaseOfImage + 8 >= v16 )
        return 3221225659LL;
      do
      {
        switch ( *(_QWORD *)v15 )
        {
          case 3LL:
            v11 = v15;
            break;
          case 4LL:
            v12 = v15;
            break;
          case 5LL:
            v13 = v15;
            break;
        }
        v15 += *((unsigned int *)v15 + 2) + 12;
      }
      while ( v15 < v16 );
      if ( v11 )
      {
        v17 = (unsigned __int64)&v11[*((unsigned int *)v11 + 2) + 12];
        v18 = (unsigned int *)(v11 + 12);
        for ( i = v17; (unsigned __int64)v18 < v17; v18 = (unsigned int *)((char *)v18 + v18[1]) )
        {
          if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v18, a7, a8, a9) )
          {
            v19 = (unsigned __int64)v18 + v18[1];
            v20 = v18 + 2;
            if ( (unsigned __int64)(v18 + 2) < v19 )
            {
              do
              {
                if ( (*v20 & 0xFFF) != 0 || v20 == v18 + 2 )
                  RtlApplyImportRelocationToImage(
                    (_DWORD)BaseOfImage,
                    a3,
                    (unsigned int)v33,
                    a5,
                    *v18,
                    (__int64)v20,
                    v29,
                    0);
                ++v20;
              }
              while ( (unsigned __int64)v20 < v19 );
              v17 = i;
            }
          }
        }
        if ( !v12 )
          goto LABEL_37;
        v9 = a3;
      }
      else if ( !v12 )
      {
        if ( !v13 )
          return 3221225659LL;
        goto LABEL_39;
      }
      v21 = (unsigned int *)(v12 + 12);
      v22 = (unsigned __int64)&v12[*((unsigned int *)v12 + 2) + 12];
      v31 = v22;
      while ( (unsigned __int64)v21 < v22 )
      {
        if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v21, a7, a8, a9) )
        {
          v23 = (unsigned __int64)v21 + v21[1];
          v24 = v21 + 2;
          if ( (unsigned __int64)(v21 + 2) < v23 )
          {
            do
            {
              if ( (*(_WORD *)v24 & 0xFFF) != 0 || v24 == v21 + 2 )
                RtlApplyIndirectRelocationToImage((_DWORD)BaseOfImage, v9, (unsigned int)v33, a5, *v21, (__int64)v24);
              v24 = (unsigned int *)((char *)v24 + 2);
            }
            while ( (unsigned __int64)v24 < v23 );
            v22 = v31;
          }
        }
        v21 = (unsigned int *)((char *)v21 + v21[1]);
      }
LABEL_37:
      if ( !v13 )
        return 0LL;
      v9 = a3;
LABEL_39:
      v25 = (unsigned __int64)&v13[*((unsigned int *)v13 + 2) + 12];
      v26 = (unsigned int *)(v13 + 12);
      v32 = v25;
      while ( (unsigned __int64)v26 < v25 )
      {
        if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v26, a7, a8, a9) )
        {
          v27 = (unsigned __int64)v26 + v26[1];
          v28 = v26 + 2;
          if ( (unsigned __int64)(v26 + 2) < v27 )
          {
            do
            {
              if ( (*(_WORD *)v28 & 0xFFF) != 0 || v28 == v26 + 2 )
                RtlApplySwitchJumpRelocationToImage((_DWORD)BaseOfImage, v9, (unsigned int)v33, a5, *v26, (__int64)v28);
              v28 = (unsigned int *)((char *)v28 + 2);
            }
            while ( (unsigned __int64)v28 < v27 );
            v25 = v32;
          }
        }
        v26 = (unsigned int *)((char *)v26 + v26[1]);
      }
      return 0LL;
    }
  }
  return result;
}
