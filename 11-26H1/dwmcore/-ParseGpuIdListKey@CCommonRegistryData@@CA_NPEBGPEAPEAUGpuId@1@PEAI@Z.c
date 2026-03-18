/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x1801E425C
 * Callers:
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x180133B94 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1801B2F34 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UGpuId@CCommonRegistryData@@$0A@@@QEAAJPEFBUGpuId@CCommonRegistryData@@I@Z @ 0x18028C75C (-AddMultipleAndSet@-$DynArray@UGpuId@CCommonRegistryData@@$0A@@@QEAAJPEFBUGpuId@CCommonRegistryD.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        const unsigned __int16 *a1,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  char *v5; // rbx
  unsigned int v6; // eax
  __int16 v7; // bx
  __int16 v8; // ax
  char v9; // dl
  __int16 v10; // ax
  char *EndPtr; // [rsp+40h] [rbp-30h] BYREF
  char *pvData; // [rsp+48h] [rbp-28h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  unsigned int v16; // [rsp+68h] [rbp-8h]
  DWORD pcbData; // [rsp+90h] [rbp+20h] BYREF
  int v18; // [rsp+94h] [rbp+24h]
  __int16 v19; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v20; // [rsp+AAh] [rbp+3Ah]
  __int16 v21; // [rsp+ACh] [rbp+3Ch]

  v18 = HIDWORD(a1);
  pcbData = 0;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\Dwm",
         L"ShaderLinkingGPUBlacklist",
         2u,
         0LL,
         0LL,
         &pcbData) )
  {
    return 0;
  }
  pvData = (char *)MIDL_user_allocate(++pcbData);
  v5 = pvData;
  if ( !pvData
    || RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\Dwm",
         L"ShaderLinkingGPUBlacklist",
         2u,
         0LL,
         pvData,
         &pcbData) )
  {
LABEL_15:
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&pvData);
    return 0;
  }
  v15 = 0LL;
  v14 = 0LL;
  v16 = 0;
  EndPtr = pvData;
  while ( *v5 )
  {
    v6 = strtoul(v5, &EndPtr, 16);
    v7 = v6;
    if ( v6 - 1 > 0xFFFE || *EndPtr != 58 )
      goto LABEL_14;
    v8 = strtoul(EndPtr + 1, &EndPtr, 16);
    v9 = 0;
    if ( *EndPtr == 42 )
    {
      v8 *= 16;
      v9 = 1;
      ++EndPtr;
    }
    v20 = v8;
    v10 = -16;
    v19 = v7;
    if ( !v9 )
      v10 = -1;
    v21 = v10;
    if ( (int)DynArray<CCommonRegistryData::GpuId,0>::AddMultipleAndSet(&v14, &v19) < 0 )
    {
LABEL_14:
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v14);
      goto LABEL_15;
    }
    v5 = EndPtr;
  }
  *a3 = v16;
  DynArrayImpl<0>::DetachData((__int64)&v14, 6u, a2);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v14);
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&pvData);
  return 1;
}
