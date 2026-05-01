/*
 * XREFs of ?HandleDestruction@CImmersiveWindowManager@@UEAA?AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveApplicationInternal@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800A91C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800A7BF8 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800A8B0C (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveWindowManager::HandleDestruction(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD),
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // r15d
  void (__fastcall *v11)(_QWORD, GUID *, _QWORD); // rbx
  __int64 v12; // r8
  void (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-49h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v16[80]; // [rsp+30h] [rbp-39h] BYREF

  *a4 = 0LL;
  v8 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*a2)[35])(a2) & 2;
  memset_0(v16, 0, sizeof(v16));
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD), _BYTE *))(*a2)[43])(a2, v16);
  v9 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *))(*a2)[10])(a2, a3, a4);
  v10 = v9;
  if ( v9 == 2 || v9 == 4 )
  {
    *(_BYTE *)(a1 + 88) = 0;
  }
  else if ( v9 == 5 )
  {
    v15 = 0LL;
    v14 = 0LL;
    v11 = **a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    v11(a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v14);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
      a1 + 48,
      &v14,
      v12,
      &v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    v14 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))a2;
    if ( a2 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*a2)[1])(a2);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
      (_QWORD *)(a1 + 48),
      (__int64 *)&v14,
      v15);
    if ( (_DWORD)v8 )
      *(_BYTE *)(a1 + 88) = 0;
    if ( a2 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*a2)[2])(a2);
  }
  return v10;
}
