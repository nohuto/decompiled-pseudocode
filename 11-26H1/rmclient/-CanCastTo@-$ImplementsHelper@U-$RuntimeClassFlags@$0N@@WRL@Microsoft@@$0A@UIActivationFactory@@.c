/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000A370
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18000A210 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000C650 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int Data1; // edx
  __int64 v5; // rdx
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r10
  unsigned int v9; // r11d
  __int64 result; // rax
  bool v11; // zf
  _QWORD *v12; // r8
  __int64 v13; // r10

  Data1 = a2->Data1;
  if ( Data1 == 53
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_16;
  }
  a1 += 8LL;
  if ( Data1 == -1796592748 )
  {
    if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
LABEL_16:
      *a3 = a1;
      return 0LL;
    }
  }
  else if ( Data1 == 3
         && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
         && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
         && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  v5 = a1 + 32;
  if ( a2->Data1 == 1550591900
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_5c6c279c_d7ca_4779_9188_4057219ce64c.Data4[4]
    || (v5 = a1 + 40, a2->Data1 == 1861104927)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4] )
  {
    result = 0LL;
    *a3 = v5;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
    {
      *v7 = v8;
      result = 0LL;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
    {
      *v12 = v13 + 8;
      result = 0LL;
    }
    else
    {
      result = v9;
    }
    v11 = (_DWORD)result == v9;
    if ( (_DWORD)result == v9 )
    {
      result = v9;
      v11 = 1;
    }
    if ( v11 )
      return v9;
  }
  return result;
}
