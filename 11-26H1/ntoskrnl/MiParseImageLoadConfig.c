/*
 * XREFs of MiParseImageLoadConfig @ 0x1409CC9F0
 * Callers:
 *     MiRelocateMapImage @ 0x1409CBD3C (MiRelocateMapImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1402649C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     MiIsRetpolineEnabled @ 0x14047FA5C (MiIsRetpolineEnabled.c)
 *     MiFreeImageCfgContext @ 0x1404CCCB8 (MiFreeImageCfgContext.c)
 *     MiIsImportOptimizationEnabled @ 0x1404DC3CC (MiIsImportOptimizationEnabled.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiCaptureImageCfgContext @ 0x1409CBDE0 (MiCaptureImageCfgContext.c)
 *     MiLogRelocationRva @ 0x1409CC718 (MiLogRelocationRva.c)
 *     RtlCreateRvaList @ 0x140A17660 (RtlCreateRvaList.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x140A5DE50 (RtlCreateFunctionOverrideFixupInfo.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140AAA2B4 (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x140AAA4CC (MiFreeImageLoadConfig.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140ABB9B4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     RtlInitializeImageSystemOverride @ 0x140AC8D6C (RtlInitializeImageSystemOverride.c)
 *     MiImageLoadConfigSize @ 0x140ACAD2C (MiImageLoadConfigSize.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD69F0 (MiCaptureRetpolineRelocationTables.c)
 *     MiFreeImageRetpolineContext @ 0x140AD6C1C (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiParseImageLoadConfig(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v6; // r12d
  unsigned int v7; // r14d
  char v8; // si
  __int64 v9; // rbx
  int ConfigSize; // ebx
  unsigned int v11; // ecx
  const void *v12; // rdx
  ULONG_PTR v13; // rbx
  int v14; // r8d
  int v15; // ecx
  int v16; // r9d
  char v17; // dl
  __int16 *v18; // rax
  __int16 v19; // r12
  int v20; // r14d
  unsigned int v21; // r9d
  int v22; // eax
  int v23; // eax
  _OWORD *v24; // rdx
  _OWORD *v25; // rax
  __int64 v27; // [rsp+28h] [rbp-4C0h]
  int v28; // [rsp+64h] [rbp-484h]
  int v29; // [rsp+68h] [rbp-480h] BYREF
  unsigned int Size; // [rsp+6Ch] [rbp-47Ch] BYREF
  int Size_4; // [rsp+70h] [rbp-478h] BYREF
  __int64 v32; // [rsp+78h] [rbp-470h]
  __int64 v33; // [rsp+80h] [rbp-468h]
  int v34; // [rsp+88h] [rbp-460h]
  unsigned int v35; // [rsp+90h] [rbp-458h]
  unsigned int v36; // [rsp+A0h] [rbp-448h]
  __int64 v37; // [rsp+A8h] [rbp-440h]
  __int64 v38; // [rsp+B0h] [rbp-438h]
  __int16 *v39; // [rsp+B8h] [rbp-430h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-428h]
  __int64 v41; // [rsp+C8h] [rbp-420h]
  int *v42; // [rsp+D0h] [rbp-418h]
  __int64 v43; // [rsp+D8h] [rbp-410h] BYREF
  ULONG_PTR v44; // [rsp+E0h] [rbp-408h]
  unsigned int *v45; // [rsp+E8h] [rbp-400h]
  _QWORD v46[8]; // [rsp+F0h] [rbp-3F8h] BYREF
  __int64 v47; // [rsp+130h] [rbp-3B8h]
  __int64 v48; // [rsp+138h] [rbp-3B0h]
  _OWORD v49[13]; // [rsp+140h] [rbp-3A8h] BYREF
  int v50; // [rsp+210h] [rbp-2D8h]
  int v51[2]; // [rsp+220h] [rbp-2C8h] BYREF
  ULONG_PTR v52; // [rsp+228h] [rbp-2C0h]
  __int64 v53; // [rsp+230h] [rbp-2B8h]
  unsigned __int64 v54; // [rsp+238h] [rbp-2B0h]
  unsigned int v55; // [rsp+240h] [rbp-2A8h]
  int v56; // [rsp+244h] [rbp-2A4h]
  __int64 v57; // [rsp+248h] [rbp-2A0h]
  _BYTE v58[4]; // [rsp+250h] [rbp-298h] BYREF
  __int16 v59; // [rsp+254h] [rbp-294h]
  unsigned int v60; // [rsp+268h] [rbp-280h]
  _BYTE v61[32]; // [rsp+270h] [rbp-278h] BYREF
  _DWORD Src[8]; // [rsp+290h] [rbp-258h] BYREF
  __int64 (__fastcall *v63)(); // [rsp+2B0h] [rbp-238h]
  __int64 (__fastcall *v64)(); // [rsp+2B8h] [rbp-230h]
  __int64 v65; // [rsp+2D8h] [rbp-210h]
  __int64 v66; // [rsp+2E0h] [rbp-208h]
  _BYTE v67[336]; // [rsp+350h] [rbp-198h] BYREF

  v37 = a3;
  v6 = a2;
  v32 = a2;
  v33 = a1;
  v42 = (int *)a5;
  v46[4] = a1;
  v41 = a1;
  v46[5] = a2;
  v47 = a2;
  v46[6] = a3;
  v48 = a3;
  v35 = a4;
  v36 = a4;
  v46[7] = a5;
  v7 = 328;
  memset_0(v67, 0, 0x148uLL);
  Size = 0;
  v43 = 0LL;
  *(_DWORD *)a5 = 0;
  v8 = 0;
  v29 = 0;
  v44 = 0LL;
  Size_4 = 0;
  v9 = *(_QWORD *)v41;
  v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v41 + 56LL) + 64LL);
  v34 = v28;
  memset_0(v51, 0, 0x130uLL);
  v38 = *(_QWORD *)(v9 + 56);
  v46[1] = v38;
  v40 = *(_QWORD *)v37;
  v46[2] = v40;
  v45 = (unsigned int *)(v37 + 160);
  v46[0] = *(_QWORD *)(v37 + 160);
  v39 = (__int16 *)(v37 + 48);
  ConfigSize = MiImageLoadConfigSize(
                 (unsigned int)&Size,
                 v6,
                 *(_DWORD *)(v37 + 16),
                 (unsigned int)v46,
                 *(_WORD *)(v37 + 48));
  if ( ConfigSize >= 0 && Size )
  {
    if ( *v39 == 523 )
    {
      v11 = 148;
    }
    else
    {
      if ( *v39 != 267 )
        goto LABEL_43;
      v11 = 92;
    }
    if ( Size >= v11 )
    {
      v12 = (const void *)(v32 + *v45);
      if ( Size < 0x148 )
        v7 = Size;
      Size = v7;
      memmove(v67, v12, v7);
      v13 = MiReferenceControlAreaFile(v33);
      v44 = v13;
      MiLogRelocationRva(*v45, v7, v13, v33);
      *(_QWORD *)v51 = v41;
      v52 = v13;
      v53 = v47;
      v54 = v40;
      v55 = v36;
      v56 = 0;
      v57 = v48;
      ConfigSize = MiCaptureImageCfgContext(
                     v33,
                     v13,
                     v32,
                     v40,
                     a4,
                     v37,
                     *(_WORD *)(v38 + 48),
                     (__int64)v67,
                     v7,
                     &Size_4,
                     (__int64)v58);
      if ( ConfigSize >= 0 )
      {
        v15 = *v42 | Size_4;
        *v42 = v15;
        *(_WORD *)(a5 + 4) = v59;
        *(_WORD *)(a5 + 6) = *(_WORD *)(v38 + 48);
        v16 = 0;
        if ( (v15 & 1) != 0 )
        {
          Src[0] = 1;
          v63 = MiImageCfgRvaIteratorFirst;
          v64 = MiImageCfgRvaIteratorNext;
          v16 = 1;
          if ( (v15 & 8) != 0 )
          {
            Src[1] = 4;
            v65 = 0LL;
            v66 = 0LL;
            v16 = 2;
          }
        }
        else
        {
          v63 = 0LL;
          Src[0] = 0;
        }
        Src[4] = v16;
        if ( !v16 || (ConfigSize = RtlCreateRvaList((int)v51, 1, v14, v16, Src, v27, a5 + 8), ConfigSize >= 0) )
        {
          if ( MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled() )
          {
            v8 = 0;
            v18 = v39;
            if ( *v39 == 523 )
              v8 = v17;
          }
          else
          {
            v18 = v39;
          }
          v19 = *v18;
          if ( v8 || v19 == 523 )
          {
            v21 = v7;
            v20 = v32;
            v22 = LdrCaptureDynamicRelocationTableHeader(
                    v32,
                    a4,
                    (unsigned int)v67,
                    v21,
                    v40,
                    v19,
                    (__int64)&v29,
                    (__int64)&v43);
            ConfigSize = v22;
            if ( v22 == -1073741637 )
            {
              ConfigSize = 0;
            }
            else if ( v22 < 0 )
            {
              goto LABEL_43;
            }
          }
          else
          {
            v20 = v32;
          }
          if ( v8 && v29 )
          {
            v23 = MiCaptureRetpolineRelocationTables(v20, a4, v28, v29, (__int64)&v43, v27, (__int64)v61);
            ConfigSize = v23;
            if ( v23 == -1073741637 )
            {
              ConfigSize = 0;
            }
            else
            {
              if ( v23 < 0 )
                goto LABEL_43;
              ConfigSize = MiCreateRetpolineRelocationInformation(v61, v60, a4, a5 + 16);
              if ( ConfigSize < 0 )
                goto LABEL_43;
            }
          }
          if ( v19 == 523 && v29 )
          {
            memset_0(v49, 0, 0xD4uLL);
            v24 = 0LL;
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v41 + 56LL) + 76LL) & 0x40) != 0 )
            {
              v25 = (_OWORD *)RtlInitializeImageSystemOverride(v67, a4, ((unsigned int)*v42 >> 3) & 1);
              v49[0] = *v25;
              v49[1] = v25[1];
              v49[2] = v25[2];
              v49[3] = v25[3];
              v49[4] = v25[4];
              v49[5] = v25[5];
              v49[6] = v25[6];
              v49[7] = v25[7];
              v25 += 8;
              v49[8] = *v25;
              v49[9] = v25[1];
              v49[10] = v25[2];
              v49[11] = v25[3];
              v49[12] = v25[4];
              v50 = *((_DWORD *)v25 + 20);
              v24 = v49;
            }
            ConfigSize = RtlCreateFunctionOverrideFixupInfo(
                           v20,
                           a4,
                           v29,
                           (unsigned int)&v43,
                           v28,
                           (__int64)&stru_140E2D150.WpsFeedback,
                           a5 + 24,
                           (__int64)v24);
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
  if ( v44 )
    MiDereferenceControlAreaFile(v33, v44);
  MiFreeImageCfgContext((__int64)v58);
  MiFreeImageRetpolineContext(v61);
  return (unsigned int)ConfigSize;
}
