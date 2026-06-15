/*
 * XREFs of ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180032964
 * Callers:
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180031F7C (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18003261C (-DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV-$vector@V-$unique_ptr@VCConnectorProcess.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x1800333A0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18013DEF8 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??1?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@QEAA@XZ @ 0x18005E7A8 (--1-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCConnectorFormatCharacteris.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$emplace_back@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@1@$$QEAV21@@Z @ 0x1801602B8 (--$emplace_back@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete@UCConnectorFor.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  _QWORD *v11; // rax
  _DWORD *v12; // rbx
  __int64 result; // rax
  int v14; // eax
  int v15; // edi
  void *v16; // rcx
  const char *v17; // r9
  void *v18; // rbx
  void *v19; // rcx
  void *v20; // [rsp+20h] [rbp-28h] BYREF
  void **v21; // [rsp+28h] [rbp-20h]
  struct tWAVEFORMATEX *v22; // [rsp+30h] [rbp-18h] BYREF
  char v23; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v11[1] = 0LL;
    v11[2] = 0LL;
    v11[3] = 0LL;
    *v11 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v20 = v12;
  if ( v12 )
  {
    v21 = (void **)v12;
    v22 = 0LL;
    v23 = 1;
    v14 = CloneWaveFormat(a2, &v22);
    v15 = v14;
    if ( v23 )
    {
      v16 = *v21;
      *v21 = v22;
      if ( v16 )
        CoTaskMemFree(v16);
    }
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v15);
      std::unique_ptr<CConnectorFormatCharacteristics>::~unique_ptr<CConnectorFormatCharacteristics>(&v20);
      return (unsigned int)v15;
    }
    else
    {
      try
      {
        v12[3] = a3;
        v12[2] = a4;
        v12[4] = a5;
        v12[5] = a6;
        v12[6] = a7;
        std::vector<std::unique_ptr<CConnectorFormatCharacteristics>>::emplace_back<std::unique_ptr<CConnectorFormatCharacteristics>>(
          (char *)this + 16,
          &v20);
        v18 = v20;
        if ( v20 )
        {
          v19 = *(void **)v20;
          *(_QWORD *)v20 = 0LL;
          if ( v19 )
            CoTaskMemFree(v19);
          operator delete(v18, (const struct std::nothrow_t *)0x20);
        }
        result = 0LL;
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0xF7,
                               (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                               v17);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
