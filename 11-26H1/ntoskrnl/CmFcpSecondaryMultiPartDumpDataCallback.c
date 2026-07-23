/*
 * XREFs of CmFcpSecondaryMultiPartDumpDataCallback @ 0x1406E75D0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpCountFeatureDescriptors @ 0x1406E7390 (CmFcpCountFeatureDescriptors.c)
 *     CmFcpFindNextProviderWithDescriptors @ 0x1406E7420 (CmFcpFindNextProviderWithDescriptors.c)
 *     CmFcpPopulateModuleFeatures @ 0x1406E74B8 (CmFcpPopulateModuleFeatures.c)
 */

void __fastcall CmFcpSecondaryMultiPartDumpDataCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  _KWAIT_BLOCK **p_WaitBlockList; // rsi
  bool v6; // zf
  _DWORD *v7; // rcx
  int v8; // edx
  __int64 *i; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 *NextProviderWithDescriptors; // rax
  __int64 **v13; // r14
  __int64 *v14; // rdi
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // eax
  int v19; // [rsp+40h] [rbp+18h] BYREF

  p_WaitBlockList = (_KWAIT_BLOCK **)ReasonSpecificData[6];
  v19 = 0;
  *((_DWORD *)ReasonSpecificData + 10) = 0;
  *((_OWORD *)ReasonSpecificData + 1) = xmmword_14003C9D0;
  if ( !p_WaitBlockList )
  {
    p_WaitBlockList = &stru_140E62450.WaitBlockList;
    *(_OWORD *)&stru_140E62450.WaitBlockList = 0LL;
    ReasonSpecificData[6] = &stru_140E62450.WaitBlockList;
  }
  if ( *(_BYTE *)p_WaitBlockList )
  {
    v13 = (__int64 **)(p_WaitBlockList + 1);
    v14 = (__int64 *)p_WaitBlockList[1];
    if ( !v14 )
      goto LABEL_20;
    v15 = CmFcpCountFeatureDescriptors((_QWORD *)v14[14], v14[15], &v19);
    v16 = 16 * v15 + 24;
    v6 = *((_DWORD *)ReasonSpecificData + 2) == 0;
    *((_DWORD *)ReasonSpecificData + 10) = v16;
    if ( !v6 && v16 <= *((_DWORD *)ReasonSpecificData + 3) )
    {
      v17 = *ReasonSpecificData;
      *(_DWORD *)v17 = v16;
      *(_DWORD *)(v17 + 4) = 1;
      *(_QWORD *)(v17 + 8) = v14[10];
      *(_DWORD *)(v17 + 16) = v19;
      *(_DWORD *)(v17 + 20) = v15;
      CmFcpPopulateModuleFeatures(v14[14], v14[15], v17 + 24, v15);
      *((_DWORD *)ReasonSpecificData + 2) = *((_DWORD *)ReasonSpecificData + 10);
      ReasonSpecificData[4] = *ReasonSpecificData;
    }
    NextProviderWithDescriptors = CmFcpFindNextProviderWithDescriptors((__int64 *)*v14);
  }
  else
  {
    v6 = *((_DWORD *)ReasonSpecificData + 2) == 0;
    *((_DWORD *)ReasonSpecificData + 10) = 16;
    if ( !v6 )
    {
      v7 = (_DWORD *)*ReasonSpecificData;
      v8 = 0;
      *v7 = 16;
      v7[1] = 1;
      v7[2] = HIDWORD(stru_140E3EAA8.WriteTransferCount);
      for ( i = (__int64 *)qword_140EFBE68; i != &qword_140EFBE68; i = (__int64 *)*i )
      {
        v10 = i[14];
        if ( v10 )
        {
          v11 = i[15];
          if ( v11 )
          {
            if ( v11 > v10 )
              ++v8;
          }
        }
      }
      v7[3] = v8;
      *((_DWORD *)ReasonSpecificData + 2) = *((_DWORD *)ReasonSpecificData + 10);
      ReasonSpecificData[4] = *ReasonSpecificData;
    }
    *(_BYTE *)p_WaitBlockList = 1;
    NextProviderWithDescriptors = CmFcpFindNextProviderWithDescriptors((__int64 *)qword_140EFBE68);
    v13 = (__int64 **)(p_WaitBlockList + 1);
  }
  *v13 = NextProviderWithDescriptors;
  v14 = NextProviderWithDescriptors;
LABEL_20:
  v18 = *((_DWORD *)ReasonSpecificData + 14);
  if ( v14 )
  {
    *((_DWORD *)ReasonSpecificData + 14) = v18 | 1;
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 14) = v18 & 0xFFFFFFFE;
    *v13 = 0LL;
    *(_BYTE *)p_WaitBlockList = 0;
  }
}
