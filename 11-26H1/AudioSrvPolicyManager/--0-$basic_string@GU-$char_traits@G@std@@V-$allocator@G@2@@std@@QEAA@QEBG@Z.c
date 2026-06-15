/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180005ACC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180005F0C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x18000E770 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180014080 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x180015C20 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 *     _lambda_642215a69899d380996b25cb8587b28c_::operator() @ 0x18002AC1C (_lambda_642215a69899d380996b25cb8587b28c_--operator().c)
 *     _lambda_4b31922d8a1cd873a528cca5d3f4e6eb_::operator() @ 0x18003F204 (_lambda_4b31922d8a1cd873a528cca5d3f4e6eb_--operator().c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180040094 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800487B0 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180048B60 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E70C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, _WORD *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  SIZE_T v6; // rbp
  char *v7; // rax
  char *v8; // rbp
  size_t v9; // rbx
  size_t v11; // rbx
  HANDLE ProcessHeap; // rax

  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 0x7FFFFFFFFFFFFFFELL;
  if ( v4 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  if ( v4 <= 7 )
  {
    a1[2] = v4;
    v11 = 2 * v4;
    a1[3] = 7LL;
    memcpy_0(a1, a2, v11);
    *(_WORD *)((char *)a1 + v11) = 0;
    return a1;
  }
  if ( (v4 | 7) > 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = -2LL;
LABEL_10:
    if ( v6 < 0x1000 )
    {
      ProcessHeap = GetProcessHeap();
      v7 = (char *)HeapAlloc(ProcessHeap, 0, v6);
    }
    else
    {
      v7 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v6);
    }
    v8 = v7;
    goto LABEL_13;
  }
  v5 = v4 | 7;
  if ( (v4 | 7) < 0xA )
    v5 = 10LL;
  if ( (unsigned __int64)(v5 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v6 = 2 * (v5 + 1);
  if ( v6 )
    goto LABEL_10;
  v8 = 0LL;
LABEL_13:
  a1[2] = v4;
  v9 = 2 * v4;
  *a1 = v8;
  a1[3] = v5;
  memcpy_0(v8, a2, v9);
  *(_WORD *)&v8[v9] = 0;
  return a1;
}
