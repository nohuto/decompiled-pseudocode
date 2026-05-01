/*
 * XREFs of ?GetState@CPinnedList@@UEAAJPEAUIShellItemArray@@HPEAK@Z @ 0x180692320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18069A0AC (-_ShouldAddMenu@CPinnedList@@IEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::GetState(
        __int64 (__fastcall ***this)(char *, GUID *, __int64 *),
        struct IShellItemArray *a2,
        __int64 a3,
        unsigned int *a4)
{
  int ShouldAddMenu; // ebx
  HRESULT (__stdcall *BindToHandler)(IShellItemArray *, IBindCtx *, const GUID *const, const IID *const, void **); // rbx
  __int64 v9; // rbp
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h] BYREF

  ShouldAddMenu = 0;
  *a4 = 1;
  if ( a2 )
  {
    v13 = 0LL;
    BindToHandler = a2->lpVtbl->BindToHandler;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    ShouldAddMenu = ((__int64 (__fastcall *)(struct IShellItemArray *, _QWORD, const GUID *, GUID *, __int64 *))BindToHandler)(
                      a2,
                      0LL,
                      &BHID_DataObject,
                      &GUID_0000010e_0000_0000_c000_000000000046,
                      &v13);
    if ( ShouldAddMenu >= 0 )
    {
      v9 = v13;
      v12 = 0LL;
      ShouldAddMenu = (**(this - 5))((char *)this - 40, &GUID_000214e8_0000_0000_c000_000000000046, &v12);
      if ( ShouldAddMenu >= 0 )
      {
        ShouldAddMenu = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v12 + 24LL))(
                          v12,
                          0LL,
                          v9,
                          0LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( ShouldAddMenu >= 0 )
      {
        ShouldAddMenu = CPinnedList::_ShouldAddMenu((CPinnedList *)(this - 5), 0x100u);
        if ( ShouldAddMenu )
        {
          if ( ShouldAddMenu == 1 )
            ShouldAddMenu = 0;
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(char *, __int64 (__fastcall **)(char *, GUID *, __int64 *)))(*(this - 3))[9])(
                  (char *)this - 24,
                  this[8]);
          ShouldAddMenu = v10;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              *((_DWORD *)this + 14) = 0;
              *a4 = 4;
              ShouldAddMenu = 0;
            }
          }
          else
          {
            *((_DWORD *)this + 14) = 1;
            *a4 = 12;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  return (unsigned int)ShouldAddMenu;
}
