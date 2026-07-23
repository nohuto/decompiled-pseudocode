/*
 * XREFs of SmStoreDecompressBuffer @ 0x140392390
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140391FE0 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140641BA8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024D000 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     RtlDecompressBufferLz4 @ 0x1403924A0 (RtlDecompressBufferLz4.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x14043C534 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     RtlDecompressBufferEx @ 0x140463B30 (RtlDecompressBufferEx.c)
 *     ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x140481954 (-SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z.c)
 *     SmHwAcceleratorIssueRequest @ 0x140643658 (SmHwAcceleratorIssueRequest.c)
 *     SmHwAcceleratorWaitForRequest @ 0x140643C40 (SmHwAcceleratorWaitForRequest.c)
 */

__int64 __fastcall SmStoreDecompressBuffer(
        __int64 a1,
        UCHAR *a2,
        unsigned int a3,
        __int64 a4,
        ULONG a5,
        PVOID WorkSpace,
        PSLIST_ENTRY *a7)
{
  UCHAR *v8; // r12
  ULONG v9; // r15d
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // r14
  int v13; // edi
  unsigned int v14; // ecx
  PSLIST_ENTRY Descriptor; // rsi
  unsigned int v17; // r14d
  char v18; // di
  ULONG v19; // eax
  PVOID v20; // r9
  unsigned __int64 i; // rcx
  int v22; // r8d
  NTSTATUS v23; // edx
  UCHAR *v24; // r11
  ULONG v25; // r9d
  unsigned int v26; // r15d
  ULONG CompressedBufferSize; // r8d
  int v28; // r9d
  __int64 v29; // rax
  int v30; // r10d
  int v31; // r9d
  __int64 v32; // rax
  ULONG v33; // [rsp+40h] [rbp-A8h] BYREF
  ULONG v34; // [rsp+44h] [rbp-A4h]
  int v35; // [rsp+48h] [rbp-A0h]
  ULONG v36; // [rsp+4Ch] [rbp-9Ch]
  int v37; // [rsp+50h] [rbp-98h]
  int v38; // [rsp+54h] [rbp-94h]
  int v39; // [rsp+58h] [rbp-90h] BYREF
  ULONG FinalUncompressedSize; // [rsp+5Ch] [rbp-8Ch] BYREF
  unsigned int v41; // [rsp+60h] [rbp-88h]
  __int128 v42; // [rsp+68h] [rbp-80h]
  __int128 v43; // [rsp+78h] [rbp-70h]
  __int128 v44; // [rsp+88h] [rbp-60h]
  UCHAR *v45; // [rsp+98h] [rbp-50h]
  __int64 v46; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v47; // [rsp+A8h] [rbp-40h]
  __int64 v48; // [rsp+B0h] [rbp-38h]
  ULONG v49; // [rsp+F0h] [rbp+8h] BYREF
  unsigned int v50; // [rsp+100h] [rbp+18h] BYREF

  v50 = a3;
  v8 = a2;
  v9 = a5;
  v10 = 0;
  v39 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 3200) + 2136LL);
  v48 = v11;
  *(_QWORD *)&v42 = v11;
  v12 = *(int *)(a1 + 2176);
  DWORD2(v44) = v12;
  if ( !(_DWORD)v12 )
  {
    v13 = RtlDecompressBufferLz4((_DWORD)a2, 4096, a4, a5, 0, (__int64)&v39);
    if ( v13 >= 0 && v39 != 4096 )
      v13 = -1073741566;
    v14 = DWORD1(v44);
    v50 = DWORD1(v44);
    Descriptor = (PSLIST_ENTRY)*((_QWORD *)&v42 + 1);
    goto LABEL_6;
  }
  if ( *a7 == (PSLIST_ENTRY)2 )
  {
    Descriptor = (PSLIST_ENTRY)*((_QWORD *)&v42 + 1);
  }
  else
  {
    v18 = 3;
    if ( *a7 != (PSLIST_ENTRY)1 )
      v18 = 1;
    Descriptor = SmHwAcceleratorPartitionMgrGetDescriptor(
                   v11,
                   v18,
                   KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]);
    *((_QWORD *)&v42 + 1) = Descriptor;
    if ( !Descriptor && (v18 & 2) != 0 )
    {
      v13 = -1073741420;
      v14 = DWORD1(v44);
      v50 = DWORD1(v44);
      goto LABEL_6;
    }
  }
  v19 = 4096;
  if ( (_DWORD)v12 == 2 )
    v19 = 2048;
  v49 = v19;
  LODWORD(v44) = v19;
  *(_QWORD *)&v43 = v8;
  v20 = WorkSpace;
  *((_QWORD *)&v43 + 1) = WorkSpace;
  if ( Descriptor )
  {
    for ( i = a4 & 0xFFFFFFFFFFFFF000uLL; ; i += 4096LL )
    {
      v47 = i;
      if ( i >= (a4 & 0xFFFFFFFFFFFFF000uLL) + (((a4 & 0xFFF) + v9 + 4095) & 0xFFFFF000) )
        break;
    }
    v19 = v49;
  }
  v22 = 0;
  v23 = HIDWORD(v44);
  v14 = DWORD1(v44);
  v50 = DWORD1(v44);
  if ( (_DWORD)v12 == 2 )
  {
    v24 = (UCHAR *)(a4 + 2);
    v45 = (UCHAR *)(a4 + 2);
    v25 = v9 - 2;
    v34 = v9 - 2;
    v35 = 0;
    v26 = 0;
    v41 = 0;
    while ( 1 )
    {
      if ( v26 >= 2 )
        goto LABEL_60;
      if ( v26 == 1 )
      {
        CompressedBufferSize = v25;
        v33 = v25;
      }
      else
      {
        CompressedBufferSize = *(unsigned __int16 *)(a4 + 2LL * v26);
        v33 = CompressedBufferSize;
        v19 = v49;
      }
      if ( !v25 || CompressedBufferSize > v25 )
      {
        v35 = -1073741566;
        goto LABEL_59;
      }
      FinalUncompressedSize = 0;
      if ( Descriptor )
      {
        v23 = SmHwAcceleratorIssueRequest(
                (_DWORD)Descriptor,
                v26,
                1,
                (_DWORD)v8,
                v19,
                (__int64)v24,
                CompressedBufferSize);
        HIDWORD(v44) = v23;
        v28 = v23;
        v14 = v50;
        if ( v23 < 0 )
          goto LABEL_39;
        v14 = v50 + 1;
        v50 = v14;
        DWORD1(v44) = v14;
        v29 = v49;
      }
      else
      {
        v23 = RtlDecompressBufferEx(
                word_140017648[v12],
                v8,
                v19,
                v24,
                CompressedBufferSize,
                &FinalUncompressedSize,
                WorkSpace);
        HIDWORD(v44) = v23;
        v28 = v23;
        if ( v23 < 0 )
          goto LABEL_38;
        v29 = v49;
        if ( FinalUncompressedSize != v49 )
        {
          v23 = -1073741566;
          HIDWORD(v44) = -1073741566;
          v28 = -1073741566;
LABEL_38:
          v14 = v50;
          goto LABEL_39;
        }
        v14 = v50;
      }
      v8 += v29;
      *(_QWORD *)&v43 = v8;
LABEL_39:
      v22 = v23;
      v35 = v23;
      if ( v28 < 0 )
        goto LABEL_60;
      v24 = &v45[v33];
      v45 = v24;
      v25 = v34 - v33;
      v34 -= v33;
      v41 = ++v26;
      v19 = v49;
    }
  }
  v37 = 0;
  v46 = a4;
  v36 = v9;
  v38 = 0;
  v30 = 0;
  while ( 1 )
  {
    v37 = v30;
    if ( v30 )
      break;
    if ( !v9 )
    {
      v38 = -1073741566;
LABEL_59:
      v22 = -1073741566;
      break;
    }
    v33 = 0;
    if ( Descriptor )
    {
      v23 = SmHwAcceleratorIssueRequest((_DWORD)Descriptor, 0, 1, (_DWORD)v8, v19, a4, v9);
      HIDWORD(v44) = v23;
      v31 = v23;
      v14 = v50;
      if ( v23 < 0 )
        goto LABEL_54;
      v14 = v50 + 1;
      v50 = v14;
      DWORD1(v44) = v14;
      v32 = v49;
    }
    else
    {
      v23 = RtlDecompressBufferEx(word_140017648[v12], v8, v19, (PUCHAR)a4, v9, &v33, v20);
      HIDWORD(v44) = v23;
      v31 = v23;
      if ( v23 < 0 )
        goto LABEL_53;
      v32 = v49;
      if ( v33 != v49 )
      {
        v23 = -1073741566;
        HIDWORD(v44) = -1073741566;
        v31 = -1073741566;
LABEL_53:
        v14 = v50;
        goto LABEL_54;
      }
      v14 = v50;
    }
    v8 += v32;
    *(_QWORD *)&v43 = v8;
LABEL_54:
    v22 = v23;
    v38 = v23;
    if ( v31 < 0 )
      break;
    a4 += v9;
    v46 = a4;
    v9 = 0;
    v36 = 0;
    v30 = v37 + 1;
    v19 = v49;
    v20 = WorkSpace;
  }
LABEL_60:
  v13 = v22;
  if ( v22 >= 0 )
  {
    v13 = v23;
    if ( v23 == 259 )
    {
      *a7 = Descriptor;
      Descriptor = 0LL;
      v14 = 0;
      v50 = 0;
    }
  }
LABEL_6:
  if ( Descriptor )
  {
    if ( v14 )
    {
      v17 = v50;
      do
        SmHwAcceleratorWaitForRequest((_DWORD)Descriptor, v10++, 0, (unsigned int)&v49, (__int64)&v50);
      while ( v10 < v17 );
    }
    SmHwAcceleratorPartitionMgrFreeDescriptor(v48, Descriptor);
  }
  return (unsigned int)v13;
}
