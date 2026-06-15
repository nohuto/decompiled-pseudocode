/*
 * XREFs of ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009368
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800906DC (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800095A0 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180009F80 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x18000FCE4 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPolicy::GetAECInsertionPolicy(
        struct EffectPack *a1,
        struct IPropertyStore *a2,
        struct SystemEffectDescriptor *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  int v9; // eax
  int v10; // ebx
  int v11; // esi
  const WCHAR *v12; // r8
  LSTATUS ValueW; // eax
  struct _AEC_POLICY_RESULTS *v14; // rdi
  enum INBOX_AEC_INSERTION_POLICY *v15; // rbx
  int v16; // ecx
  int IsAPOModeSupported; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // edx
  __int64 v22; // rax
  LPDWORD pdwType; // [rsp+20h] [rbp-40h]
  int pdwTypea; // [rsp+20h] [rbp-40h]
  int pdwTypeb; // [rsp+20h] [rbp-40h]
  PVOID pvData; // [rsp+28h] [rbp-38h]
  DWORD pcbData[4]; // [rsp+40h] [rbp-20h] BYREF
  void *Block[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IPropertyStore *v30; // [rsp+98h] [rbp+38h] BYREF

  v30 = a2;
  v9 = memcmp_0(a4, &GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7, 0x10uLL);
  v10 = v9 == 0;
  LODWORD(v30) = 0;
  v11 = 4;
  pcbData[0] = 4;
  v12 = L"InboxAECPolicyCommsTmp";
  if ( v9 )
    v12 = L"InboxAECPolicy";
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             v12,
             0x18u,
             0LL,
             &v30,
             pcbData);
  v14 = a6;
  if ( !ValueW && (unsigned int)v30 < 4 )
  {
    v10 = (int)v30;
    *((_DWORD *)a6 + 1) = (_DWORD)v30;
  }
  if ( v10 == 1 )
  {
    v15 = a5;
    *(_DWORD *)a5 = 0;
LABEL_10:
    *((_DWORD *)v14 + 16) = 0;
LABEL_27:
    *((_DWORD *)v14 + 15) = *(_DWORD *)v15;
    return 0LL;
  }
  if ( v10 == 3 )
  {
    v15 = a5;
    *(_DWORD *)a5 = 1;
    goto LABEL_10;
  }
  v16 = *(_DWORD *)(*((_QWORD *)a1 + 198) + 64LL);
  *((_DWORD *)v14 + 2) = v16 == 3;
  if ( v16 == 3 )
  {
    v15 = a5;
    *(_DWORD *)a5 = 1;
    *((_DWORD *)v14 + 16) = 1;
    goto LABEL_27;
  }
  *(struct _GUID *)Block = *a4;
  *((_DWORD *)v14 + 3) = EffectPack::IsConnectorModeSupported(
                           a1,
                           *((unsigned int *)a3 + 12),
                           0LL,
                           Block,
                           pdwType,
                           pvData);
  *(struct _GUID *)Block = *a4;
  IsAPOModeSupported = EffectPack::IsAPOModeSupported(a1, 0LL, Block, *((unsigned int *)a3 + 12));
  *((_DWORD *)v14 + 4) = IsAPOModeSupported;
  if ( !*((_DWORD *)v14 + 3) && !IsAPOModeSupported )
  {
    v15 = a5;
    *(_DWORD *)a5 = 2;
    *((_DWORD *)v14 + 16) = 3;
    goto LABEL_27;
  }
  Block[0] = 0LL;
  Block[1] = 0LL;
  v18 = 0;
  if ( !*((_QWORD *)a3 + 2) )
  {
LABEL_24:
    if ( !v18 )
    {
      *((_DWORD *)v14 + 9) = 0;
      v11 = 2;
    }
    v15 = a5;
    *(_DWORD *)a5 = v11;
    *((_DWORD *)v14 + 16) = v11;
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
    goto LABEL_27;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(Block);
  v19 = *((_QWORD *)a3 + 2);
  v20 = *(_DWORD *)(v19 + 8);
  if ( LODWORD(Block[1]) == v20 )
  {
    v22 = 48LL;
    if ( v20 <= 0 )
      v22 = 64LL;
    v18 = *(_DWORD *)(v22 + v19);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBA,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    pdwTypea);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFB,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
    (const char *)0x8007000ELL,
    pdwTypeb);
  if ( Block[0] )
    free(Block[0]);
  return 2147942414LL;
}
