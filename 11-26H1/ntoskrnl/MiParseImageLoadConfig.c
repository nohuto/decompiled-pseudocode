/*
 * XREFs of MiParseImageLoadConfig @ 0x14099D9D0
 * Callers:
 *     MiRelocateMapImage @ 0x14099CD1C (MiRelocateMapImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiIsRetpolineEnabled @ 0x1404793CC (MiIsRetpolineEnabled.c)
 *     MiFreeImageCfgContext @ 0x1404C6458 (MiFreeImageCfgContext.c)
 *     MiIsImportOptimizationEnabled @ 0x1404D5AAC (MiIsImportOptimizationEnabled.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCaptureImageCfgContext @ 0x14099CDC0 (MiCaptureImageCfgContext.c)
 *     MiLogRelocationRva @ 0x14099D6F8 (MiLogRelocationRva.c)
 *     RtlCreateRvaList @ 0x140A20C94 (RtlCreateRvaList.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x140A6AE10 (RtlCreateFunctionOverrideFixupInfo.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140AA7894 (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x140AA7AAC (MiFreeImageLoadConfig.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140ABD6B4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     RtlInitializeImageSystemOverride @ 0x140ACA95C (RtlInitializeImageSystemOverride.c)
 *     MiImageLoadConfigSize @ 0x140ACCE3C (MiImageLoadConfigSize.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD3700 (MiCaptureRetpolineRelocationTables.c)
 *     MiFreeImageRetpolineContext @ 0x140AD392C (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiParseImageLoadConfig(__int64 a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v6; // r12d
  unsigned int v7; // r14d
  char v8; // si
  __int64 v9; // rbx
  int ConfigSize; // ebx
  unsigned int v11; // ecx
  char *v12; // rdx
  ULONG_PTR v13; // rbx
  int v14; // r8d
  int v15; // ecx
  int v16; // r9d
  char v17; // dl
  __int16 *v18; // rax
  __int16 v19; // r12
  int v20; // r14d
  int v21; // eax
  int v22; // eax
  _OWORD *v23; // rdx
  _OWORD *v24; // rax
  __int64 v26; // [rsp+28h] [rbp-4C0h]
  int v27; // [rsp+64h] [rbp-484h]
  int v28; // [rsp+68h] [rbp-480h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-47Ch] BYREF
  int v30; // [rsp+70h] [rbp-478h] BYREF
  PVOID BaseOfImage; // [rsp+78h] [rbp-470h]
  __int64 v32; // [rsp+80h] [rbp-468h]
  int v33; // [rsp+88h] [rbp-460h]
  unsigned int v34; // [rsp+90h] [rbp-458h]
  unsigned int v35; // [rsp+A0h] [rbp-448h]
  __int64 v36; // [rsp+A8h] [rbp-440h]
  __int64 v37; // [rsp+B0h] [rbp-438h]
  __int16 *v38; // [rsp+B8h] [rbp-430h]
  __int64 v39; // [rsp+C0h] [rbp-428h]
  __int64 v40; // [rsp+C8h] [rbp-420h]
  int *v41; // [rsp+D0h] [rbp-418h]
  __int64 v42; // [rsp+D8h] [rbp-410h] BYREF
  ULONG_PTR v43; // [rsp+E0h] [rbp-408h]
  unsigned int *v44; // [rsp+E8h] [rbp-400h]
  _QWORD v45[8]; // [rsp+F0h] [rbp-3F8h] BYREF
  void *v46; // [rsp+130h] [rbp-3B8h]
  __int64 v47; // [rsp+138h] [rbp-3B0h]
  _OWORD v48[13]; // [rsp+140h] [rbp-3A8h] BYREF
  int v49; // [rsp+210h] [rbp-2D8h]
  int v50[2]; // [rsp+220h] [rbp-2C8h] BYREF
  ULONG_PTR v51; // [rsp+228h] [rbp-2C0h]
  void *v52; // [rsp+230h] [rbp-2B8h]
  __int64 v53; // [rsp+238h] [rbp-2B0h]
  unsigned int v54; // [rsp+240h] [rbp-2A8h]
  int v55; // [rsp+244h] [rbp-2A4h]
  __int64 v56; // [rsp+248h] [rbp-2A0h]
  _BYTE v57[4]; // [rsp+250h] [rbp-298h] BYREF
  __int16 v58; // [rsp+254h] [rbp-294h]
  unsigned int v59; // [rsp+268h] [rbp-280h]
  _BYTE v60[32]; // [rsp+270h] [rbp-278h] BYREF
  _DWORD Src[8]; // [rsp+290h] [rbp-258h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+2B0h] [rbp-238h]
  __int64 (__fastcall *v63)(); // [rsp+2B8h] [rbp-230h]
  __int64 v64; // [rsp+2D8h] [rbp-210h]
  __int64 v65; // [rsp+2E0h] [rbp-208h]
  _BYTE v66[336]; // [rsp+350h] [rbp-198h] BYREF

  v36 = a3;
  v6 = (int)a2;
  BaseOfImage = a2;
  v32 = a1;
  v41 = (int *)a5;
  v45[4] = a1;
  v40 = a1;
  v45[5] = a2;
  v46 = a2;
  v45[6] = a3;
  v47 = a3;
  v34 = a4;
  v35 = a4;
  v45[7] = a5;
  v7 = 328;
  memset_0(v66, 0, 0x148uLL);
  v29 = 0;
  v42 = 0LL;
  *(_DWORD *)a5 = 0;
  v8 = 0;
  v28 = 0;
  v43 = 0LL;
  v30 = 0;
  v9 = *(_QWORD *)v40;
  v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 56LL) + 64LL);
  v33 = v27;
  memset_0(v50, 0, 0x130uLL);
  v37 = *(_QWORD *)(v9 + 56);
  v45[1] = v37;
  v39 = *(_QWORD *)v36;
  v45[2] = v39;
  v44 = (unsigned int *)(v36 + 160);
  v45[0] = *(_QWORD *)(v36 + 160);
  v38 = (__int16 *)(v36 + 48);
  ConfigSize = MiImageLoadConfigSize(
                 (unsigned int)&v29,
                 v6,
                 *(_DWORD *)(v36 + 16),
                 (unsigned int)v45,
                 *(_WORD *)(v36 + 48));
  if ( ConfigSize >= 0 && v29 )
  {
    if ( *v38 == 523 )
    {
      v11 = 148;
    }
    else
    {
      if ( *v38 != 267 )
        goto LABEL_43;
      v11 = 92;
    }
    if ( v29 >= v11 )
    {
      v12 = (char *)BaseOfImage + *v44;
      if ( v29 < 0x148 )
        v7 = v29;
      v29 = v7;
      memmove(v66, v12, v7);
      v13 = MiReferenceControlAreaFile(v32);
      v43 = v13;
      MiLogRelocationRva(*v44, v7, v13, v32);
      *(_QWORD *)v50 = v40;
      v51 = v13;
      v52 = v46;
      v53 = v39;
      v54 = v35;
      v55 = 0;
      v56 = v47;
      ConfigSize = MiCaptureImageCfgContext(
                     v32,
                     v13,
                     (__int64)BaseOfImage,
                     v39,
                     a4,
                     v36,
                     *(_WORD *)(v37 + 48),
                     (__int64)v66,
                     v7,
                     &v30,
                     (__int64)v57);
      if ( ConfigSize >= 0 )
      {
        v15 = *v41 | v30;
        *v41 = v15;
        *(_WORD *)(a5 + 4) = v58;
        *(_WORD *)(a5 + 6) = *(_WORD *)(v37 + 48);
        v16 = 0;
        if ( (v15 & 1) != 0 )
        {
          Src[0] = 1;
          v62 = MiImageCfgRvaIteratorFirst;
          v63 = MiImageCfgRvaIteratorNext;
          v16 = 1;
          if ( (v15 & 8) != 0 )
          {
            Src[1] = 4;
            v64 = 0LL;
            v65 = 0LL;
            v16 = 2;
          }
        }
        else
        {
          v62 = 0LL;
          Src[0] = 0;
        }
        Src[4] = v16;
        if ( !v16 || (ConfigSize = RtlCreateRvaList((int)v50, 1, v14, v16, Src, v26, a5 + 8), ConfigSize >= 0) )
        {
          if ( MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled() )
          {
            v8 = 0;
            v18 = v38;
            if ( *v38 == 523 )
              v8 = v17;
          }
          else
          {
            v18 = v38;
          }
          v19 = *v18;
          if ( v8 || v19 == 523 )
          {
            v20 = (int)BaseOfImage;
            v21 = LdrCaptureDynamicRelocationTableHeader(BaseOfImage, a4, v39, v19, (__int64)&v28, (__int64)&v42);
            ConfigSize = v21;
            if ( v21 == -1073741637 )
            {
              ConfigSize = 0;
            }
            else if ( v21 < 0 )
            {
              goto LABEL_43;
            }
          }
          else
          {
            v20 = (int)BaseOfImage;
          }
          if ( v8 && v28 )
          {
            v22 = MiCaptureRetpolineRelocationTables(v20, a4, v27, v28, (__int64)&v42, v26, (__int64)v60);
            ConfigSize = v22;
            if ( v22 == -1073741637 )
            {
              ConfigSize = 0;
            }
            else
            {
              if ( v22 < 0 )
                goto LABEL_43;
              ConfigSize = MiCreateRetpolineRelocationInformation(v60, v59, a4, a5 + 16);
              if ( ConfigSize < 0 )
                goto LABEL_43;
            }
          }
          if ( v19 == 523 && v28 )
          {
            memset_0(v48, 0, 0xD4uLL);
            v23 = 0LL;
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 56LL) + 76LL) & 0x40) != 0 )
            {
              v24 = (_OWORD *)RtlInitializeImageSystemOverride(v66, a4, ((unsigned int)*v41 >> 3) & 1);
              v48[0] = *v24;
              v48[1] = v24[1];
              v48[2] = v24[2];
              v48[3] = v24[3];
              v48[4] = v24[4];
              v48[5] = v24[5];
              v48[6] = v24[6];
              v48[7] = v24[7];
              v24 += 8;
              v48[8] = *v24;
              v48[9] = v24[1];
              v48[10] = v24[2];
              v48[11] = v24[3];
              v48[12] = v24[4];
              v49 = *((_DWORD *)v24 + 20);
              v23 = v48;
            }
            ConfigSize = RtlCreateFunctionOverrideFixupInfo(
                           v20,
                           a4,
                           v28,
                           (unsigned int)&v42,
                           v27,
                           (__int64)&stru_140E2D2D0.WpsFeedback,
                           a5 + 24,
                           (__int64)v23);
          }
          if ( ConfigSize >= 0 )
            ConfigSize = 0;
        }
      }
    }
  }
LABEL_43:
  if ( ConfigSize < 0 )
    MiFreeImageLoadConfig(a5);
  if ( v43 )
    MiDereferenceControlAreaFile(v32, v43);
  MiFreeImageCfgContext((__int64)v57);
  MiFreeImageRetpolineContext(v60);
  return (unsigned int)ConfigSize;
}
