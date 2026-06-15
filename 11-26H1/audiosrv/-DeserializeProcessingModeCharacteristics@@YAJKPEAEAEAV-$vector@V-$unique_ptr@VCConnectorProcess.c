/*
 * XREFs of ?DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18003261C
 * Callers:
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180032564 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180032964 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180032B04 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$emplace_back@PEAVCConnectorProcessingModeCharacteristics@@@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@1@$$QEAPEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18016027C (--$emplace_back@PEAVCConnectorProcessingModeCharacteristics@@@-$vector@V-$unique_ptr@VCConnector.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeserializeProcessingModeCharacteristics(unsigned int a1, _DWORD *a2, __int64 a3)
{
  unsigned int v4; // r12d
  _DWORD *v5; // rax
  unsigned int v6; // esi
  _DWORD *v7; // rbx
  unsigned int v8; // r15d
  _DWORD *v9; // r14
  __int128 v10; // xmm6
  _QWORD *v11; // rax
  CConnectorProcessingModeCharacteristics **v12; // r13
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rcx
  const char *v16; // r9
  __int64 result; // rax
  _DWORD *v18; // [rsp+40h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  _QWORD *v23; // [rsp+C8h] [rbp+20h] BYREF

  try
  {
    v20 = 0LL;
    v4 = 0;
    v21 = 0LL;
    if ( a1 < 8 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)0x80070490LL);
      std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
      result = 2147943568LL;
    }
    else
    {
      v5 = a2;
      if ( *a2 == 10 )
      {
        v6 = a1 - 8;
        v7 = a2 + 2;
        v8 = 0;
LABEL_5:
        if ( v8 >= v5[1] )
        {
          if ( (__int128 *)a3 != &v20 )
          {
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(a3);
            *(_OWORD *)a3 = v20;
            *(_QWORD *)(a3 + 16) = v21;
            v20 = 0LL;
            v21 = 0LL;
          }
          std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
          result = 0LL;
        }
        else
        {
          v9 = v7;
          v18 = v7;
          if ( v6 < 0x14 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xBB,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              (const char *)0x80070490LL);
            std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
            result = 2147943568LL;
          }
          else
          {
            v10 = *(_OWORD *)v7;
            v11 = operator new[](0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
            v23 = v11;
            if ( v11 )
            {
              *(_OWORD *)v11 = v10;
              v11[2] = 0LL;
              v11[3] = 0LL;
              v11[4] = 0LL;
              v11[5] = 0LL;
              v11[6] = 0LL;
              v11[7] = 0LL;
            }
            else
            {
              v11 = 0LL;
            }
            v23 = v11;
            v12 = (CConnectorProcessingModeCharacteristics **)std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::emplace_back<CConnectorProcessingModeCharacteristics *>(
                                                                &v20,
                                                                &v23);
            if ( *v12 )
            {
              v6 -= 20;
              v7 += 5;
              while ( 1 )
              {
                if ( v4 >= v9[4] )
                {
                  ++v8;
                  v5 = a2;
                  v4 = 0;
                  goto LABEL_5;
                }
                if ( v6 < 0x26 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xC7,
                    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                    (const char *)0x80070490LL);
                  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
                  return 2147943568LL;
                }
                if ( v6 < (unsigned __int64)*((unsigned __int16 *)v7 + 18) + 38 )
                  break;
                v13 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                        *v12,
                        (const struct tWAVEFORMATEX *)(v7 + 5),
                        v7[1],
                        *v7,
                        v7[2],
                        v7[3],
                        v7[4]);
                v14 = v13;
                if ( v13 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xCD,
                    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                    (const char *)(unsigned int)v13);
                  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
                  return v14;
                }
                v15 = *((unsigned __int16 *)v7 + 18);
                v6 += -38 - v15;
                v7 = (_DWORD *)((char *)v7 + v15 + 38);
                ++v4;
                v9 = v18;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xCB,
                (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                (const char *)0x80070490LL);
              std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
              result = 2147943568LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xBF,
                (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                (const char *)0x8007000ELL);
              std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
              result = 2147942414LL;
            }
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB0,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)0x80070490LL);
        std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(&v20);
        result = 2147943568LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD9,
                           (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                           v16);
  }
  return result;
}
