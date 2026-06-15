/*
 * XREFs of _lambda_2a34e4181bb0fe573315be9c90b0dac4_::operator() @ 0x1800C03EC
 * Callers:
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18006C738 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_2a34e4181bb0fe573315be9c90b0dac4_::operator()(__int128 **a1, __int64 *a2)
{
  char v4; // si
  int (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF

  v4 = 0;
  v13 = 0LL;
  v12 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, (__int64 *)&v13) >= 0 )
  {
    v5 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
    if ( v13 )
    {
      v6 = **v13;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
      if ( v6(v5, &GUID_cf7140b3_9165_4973_a232_739191a0735a, &v12) >= 0 )
      {
        v11 = **a1;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 24LL))(v12, &v11) )
        {
          v7 = (__int64 *)a1[1];
          v8 = v12;
          v9 = *v7;
          *v7 = v12;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          v4 = 1;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
  return v4;
}
