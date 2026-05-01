/*
 * XREFs of ?KeyDown@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804B4C10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801B9298 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x1804B4DB8 (-MapToChildNavDir@ElementHelpers@@YAII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSwitchItemGrid::KeyDown(_QWORD *a1, int a2, char a3)
{
  char v4; // si
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // edx
  __int64 (__fastcall *v8)(_QWORD *, __int64 *, _QWORD, _QWORD, _DWORD); // rbx
  unsigned int v9; // eax
  char *v10; // rax
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( a2 == 9 || (unsigned int)(a2 - 37) <= 3 )
  {
    v6 = 0;
    v7 = a2 - 9;
    if ( v7 )
    {
      v7 -= 28;
      if ( v7 )
      {
        if ( --v7 )
        {
          if ( --v7 )
          {
            if ( v7 == 1 )
              v6 = 2;
          }
          else
          {
            v6 = 4;
          }
        }
        else
        {
          v6 = 1;
        }
      }
      else
      {
        v6 = 3;
      }
    }
    else
    {
      v6 = ((a3 & 4) != 0) + 5;
    }
    if ( !a1[21] )
      v6 = ElementHelpers::MapToChildNavDir((ElementHelpers *)v6, v7);
    (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, _QWORD, _DWORD))(*a1 + 272LL))(a1, &v13, a1[21], v6, 0);
    if ( v13
      || (v8 = *(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, _QWORD, _DWORD))(*a1 + 272LL),
          v9 = ElementHelpers::MapToChildNavDir((ElementHelpers *)v6, 0),
          v10 = (char *)v8(a1, v12, 0LL, v9, 0),
          Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v13, v10),
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12),
          v13) )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 288LL))(a1);
    }
    v4 = 1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  else
  {
    v5 = a1[21];
    if ( v5 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 240LL))(v5);
  }
  return v4;
}
