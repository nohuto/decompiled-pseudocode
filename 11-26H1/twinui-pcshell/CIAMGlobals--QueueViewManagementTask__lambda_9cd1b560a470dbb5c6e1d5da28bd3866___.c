/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___ @ 0x18027E710
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x180095128 (CClassicWindowManager--ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800955FC (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180095A68 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x18027D9E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1d6a067dbe26ab9e29e40b777c6860e1___ @ 0x18027EBC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_1d6a067dbe26ab9e29e40b777c6860e1___.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___(
        __int64 a1,
        __int64 a2)
{
  PSRWLOCK v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 Ptr_low; // r8
  unsigned int v8; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v10 = 0LL;
  if ( &v10 != (__int64 *)a2 )
  {
    v10 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  Ptr_low = LODWORD(v2[15].Ptr);
  v11 = *(_DWORD *)(a2 + 8);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_1d6a067dbe26ab9e29e40b777c6860e1___(v6, v5, Ptr_low, &Ptr);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&Ptr);
  return v8;
}
