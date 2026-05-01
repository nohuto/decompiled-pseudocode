/*
 * XREFs of ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18005FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x18006005C (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$?0VCApplicationFrameWrapper@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCApplicationFrameWrapper@@@12@PEAPEAX@Z @ 0x1801F8D48 (--$-0VCApplicationFrameWrapper@@@-$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV-$Co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::GetFrame(
        CApplicationFrameService *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct IApplicationFrameProxy **a4)
{
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdi
  struct IApplicationFrameProxy *v12; // rax
  unsigned __int64 i; // rbx
  struct IApplicationFrameProxy *v15; // rcx
  struct IApplicationFrameProxy *v16; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = -2147023728;
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    if ( *((_QWORD *)this + 9) )
    {
      v9 = **((_QWORD **)this + 8);
      v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             v9 + 144,
             a2,
             -1LL);
      if ( v8 >= 0 )
      {
        *(_DWORD *)(v9 + 168) = a3;
        SetPropW(*(HWND *)(v9 + 80), L"LastSetGlomIdForReconstitution", (HANDLE)a3);
        v10 = **((_QWORD **)this + 8);
        if ( v10 )
          v10 += 8LL;
        v16 = (struct IApplicationFrameProxy *)v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)((char *)this - 40), 0LL);
        if ( v8 >= 0 )
        {
          v12 = (struct IApplicationFrameProxy *)v10;
          v10 = 0LL;
          *a4 = v12;
        }
        else
        {
          v11 = **((_QWORD **)this + 8);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v11 + 144);
          *(_DWORD *)(v11 + 168) = 0;
          RemovePropW(*(HWND *)(v11 + 80), L"LastSetGlomIdForReconstitution");
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  else
  {
    for ( i = 0LL; i < *((_QWORD *)this + 9); ++i )
    {
      if ( CompareStringOrdinal(*(LPCWCH *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * i) + 144LL), -1, a2, -1, 1) == 2
        && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * i) + 168LL) == a3 )
      {
        Microsoft::WRL::ComPtr<IApplicationFrameProxy>::ComPtr<IApplicationFrameProxy>(&v16);
        v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)((char *)this - 40), i);
        if ( v8 >= 0 )
        {
          v15 = v16;
          v16 = 0LL;
          *a4 = v15;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        return (unsigned int)v8;
      }
    }
  }
  return (unsigned int)v8;
}
