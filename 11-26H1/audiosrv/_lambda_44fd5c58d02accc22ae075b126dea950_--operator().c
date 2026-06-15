/*
 * XREFs of _lambda_44fd5c58d02accc22ae075b126dea950_::operator() @ 0x180100D74
 * Callers:
 *     ?GetExclusiveSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180101D20 (-GetExclusiveSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007DE04 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180100A44 (--$_Emplace_reallocate@AEBV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISaDev.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_44fd5c58d02accc22ae075b126dea950_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rdx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, (__int64 *)&v7) >= 0 && v7 )
  {
    v6 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v7, &v6) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6) )
    {
      v3 = *a1;
      v4 = (__int64 *)v3[1];
      if ( v4 == (__int64 *)v3[2] )
      {
        std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ISaDeviceProxy> const &>(
          v3,
          (__int64)v4,
          &v6);
      }
      else
      {
        *v4 = v6;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v4);
        v3[1] += 8LL;
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
  }
  return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v7);
}
