/*
 * XREFs of ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801C5900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180088B04 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x180088EE8 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA-AV-$ComPtr@V-$CRefCo.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18008984C (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z @ 0x1801C5A0C (-s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LightweightPropertySet::s_PropEnumCallback(
        HWND a1,
        const unsigned __int16 *a2,
        HANDLE a3,
        _QWORD *a4)
{
  int v5; // ebp
  _DWORD *v8; // rbx
  void *v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rdx
  __int64 *v13; // r8
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v5 = (int)a3;
  if ( (unsigned __int64)a2 >= 0xC000 && LightweightPropertySet::s_IsMangledName(a2) )
  {
    CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(&v15);
    v8 = (_DWORD *)v15;
    if ( v15 && (int)Windows::Internal::String::_InitializeHelper((HSTRING *)(v15 + 8), a2) >= 0 )
    {
      v8[4] = v5;
      v14[0] = (__int64)v8;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
      v10 = 0;
      v11 = a4[1];
      if ( v11 == a4[3] )
        v10 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                (__int64)a4,
                v11 + 1,
                v9);
      v12 = v8;
      if ( v10 >= 0 )
      {
        v13 = (__int64 *)(*a4 + 8 * a4[1]++);
        if ( v13 )
        {
          *v13 = 0LL;
          if ( v13 != v14 )
          {
            *v13 = (__int64)v8;
            v12 = 0LL;
          }
        }
      }
      if ( v12 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 1LL;
}
