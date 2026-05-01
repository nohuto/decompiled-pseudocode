/*
 * XREFs of ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x18010B828
 * Callers:
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18010B618 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180238378 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x180367A5C (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010B950 (-QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<CActionCenterExperienceManager>(
        CActionCenterExperienceManager *a1,
        __int64 *a2)
{
  int v3; // ebx
  void *v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  void *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = CActionCenterExperienceManager::QueryInterface(a1, &GUID_00000038_0000_0000_c000_000000000046, &v11);
  if ( v3 >= 0 )
  {
    v10 = 0LL;
    v5 = v11;
    v6 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
    if ( v6 >= 0 )
    {
      v7 = v10;
      v8 = v10;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v7 = v10;
      }
      v9 = *a2;
      *a2 = v8;
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v7 = v10;
      }
      if ( v7 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      if ( v5 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
      return 0LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      if ( v5 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
      return (unsigned int)v6;
    }
  }
  else
  {
    if ( v11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    return (unsigned int)v3;
  }
}
