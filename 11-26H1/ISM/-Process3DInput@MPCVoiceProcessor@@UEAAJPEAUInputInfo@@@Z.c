/*
 * XREFs of ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BE6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800B8618 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C5F34 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCVoiceProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  bool v4; // al
  MPCHolographicInputManager *Instance; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  struct MPCHolographicInputManager *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  struct IMPCTarget *v12; // rcx
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v16; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 10 )
  {
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **(_DWORD **)(this + 24),
      *(_DWORD *)(*(_QWORD *)(this + 24) + 4LL),
      *((_QWORD *)a2 + 2),
      0,
      0x20u);
  }
  else
  {
    if ( !MPCInputProviderBase::IsPrimary(this) )
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    v4 = (*(_DWORD *)a2 & 0x662600) != 0 && (*((_DWORD *)a2 + 16) == 7 || *((_DWORD *)a2 + 16) == 1);
    *(_BYTE *)(this + 3640) = v4;
    v16 = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    v6 = MPCHolographicInputManager::Process3DInput(
           Instance,
           a2,
           (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
           &v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      return v7;
    }
    v9 = MPCHolographicInputManager::GetInstance();
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 411) + 48LL))(*((_QWORD *)v9 + 411));
    v11 = v10;
    if ( v10 && *(_BYTE *)(this + 3548) )
      (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v10 + 24LL))(v10, a2);
    v12 = v16;
    if ( v16 )
    {
      *((_BYTE *)a2 + 3002) = 1;
      v13 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *, __int64))(*(_QWORD *)v12 + 24LL))(
              v12,
              a2,
              v11);
      if ( v13 != -2147417853 && v13 != -2147417828 && v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x55,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
          (const char *)(unsigned int)v13,
          v14);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  }
  return 0LL;
}
