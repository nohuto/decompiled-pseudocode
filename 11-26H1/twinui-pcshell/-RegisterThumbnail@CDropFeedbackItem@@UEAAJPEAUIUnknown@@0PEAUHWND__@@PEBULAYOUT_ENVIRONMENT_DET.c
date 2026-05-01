/*
 * XREFs of ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805471A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18016DB4C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackItem::RegisterThumbnail(
        CDropFeedbackItem *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        HWND a4,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a5)
{
  char *v5; // r12
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  struct IApplicationView *v10; // rdx
  int v11; // ebx
  _QWORD *v12; // r14
  HRESULT (__stdcall *v13)(IUnknown *, const IID *const, void **); // rbx
  char *v14; // rdi
  _QWORD *v15; // r15
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rdi
  _QWORD *v20; // r15
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, __int64, GUID *, char *); // rbx
  __int64 v22; // rdx
  unsigned int Color; // eax
  __int64 v24; // rdi
  unsigned int v25; // ebp
  __int64 (__fastcall *v26)(__int64, _QWORD, _QWORD, const struct LAYOUT_ENVIRONMENT_DETAILS *, GUID *, char *); // rbx
  __int64 v27; // rdx
  __int64 WindowForView; // rbp
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, char *); // rbx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v32; // [rsp+90h] [rbp+28h]

  v5 = (char *)this + 48;
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)a5;
  *(_OWORD *)((char *)this + 216) = *((_OWORD *)a5 + 1);
  *((_QWORD *)this + 29) = *((_QWORD *)a5 + 4);
  *((_QWORD *)this + 24) = a4;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
          a2,
          &GUID_3bb2b41c_a03f_4e91_87af_46a21b23a806,
          v5);
  if ( v11 >= 0 )
  {
    v12 = (_QWORD *)((char *)this + 56);
    if ( a3 )
    {
      v13 = a3->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
      v14 = (char *)this + 48;
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))v13)(
              a3,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              (char *)this + 56);
      v15 = (_QWORD *)((char *)this + 56);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    else
    {
      v15 = (_QWORD *)((char *)this + 56);
      v14 = v5;
    }
    v16 = *((_DWORD *)this + 17);
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 )
          {
            v19 = *(_QWORD *)v5;
            v20 = (_QWORD *)((char *)this + 184);
            v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v5 + 104LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
            v11 = v21(v19, *v12, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 184);
            if ( v11 >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v20 + 56LL))(*v20, 1LL);
              (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v20 + 32LL))(*v20, v22, 0LL, 0LL);
            }
          }
          else
          {
            return (unsigned int)-2147467259;
          }
        }
        else
        {
          Color = CImmersiveColor::GetColor(0x498u);
          v24 = *(_QWORD *)v5;
          v25 = Color;
          v26 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const struct LAYOUT_ENVIRONMENT_DETAILS *, GUID *, char *))(**(_QWORD **)v5 + 104LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
          LODWORD(v32) = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
          HIDWORD(v32) = *((_DWORD *)this + 34) - *((_DWORD *)this + 32);
          v11 = v26(v24, *v12, v25, v32, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 184);
          if ( v11 >= 0 )
            return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 23)
                                                                                            + 32LL))(
                                   *((_QWORD *)this + 23),
                                   v27,
                                   0LL,
                                   0LL);
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      v11 = -2147467259;
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))this + 5),
                        v10);
      if ( WindowForView )
      {
        v29 = *(_QWORD *)v14;
        v30 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v29 + 64LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
        v11 = v30(
                v29,
                *v15,
                WindowForView,
                0LL,
                0LL,
                0LL,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                (char *)this + 184);
        if ( v11 >= 0 )
        {
          if ( *((_BYTE *)this + 156) )
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 56LL))(*((_QWORD *)this + 23), 1LL);
        }
      }
    }
  }
  return (unsigned int)v11;
}
