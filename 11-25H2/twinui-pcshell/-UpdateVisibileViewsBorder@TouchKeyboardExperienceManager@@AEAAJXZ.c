/*
 * XREFs of ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801C1490
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C0F18 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1801C13E0 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x180097730 (-GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::UpdateVisibileViewsBorder(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  const struct KBViewInfo **Ptr; // r14
  const struct KBViewInfo **v4; // r12
  const struct KBViewInfo *v6; // rdi
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  HRESULT v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  DWORD pvAttribute; // [rsp+60h] [rbp+40h] BYREF
  __int64 v13; // [rsp+68h] [rbp+48h] BYREF
  HWND hwnd; // [rsp+70h] [rbp+50h] BYREF
  RTL_SRWLOCK *v15; // [rsp+78h] [rbp+58h]

  v2 = this + 53;
  AcquireSRWLockShared(this + 53);
  v15 = v2;
  Ptr = (const struct KBViewInfo **)this[54].Ptr;
  v4 = (const struct KBViewInfo **)this[55].Ptr;
  while ( Ptr != v4 )
  {
    if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)*Ptr + 34) )
    {
      v6 = *Ptr;
      if ( *((_DWORD *)*Ptr + 40) == 1 )
      {
        v13 = 0LL;
        v7 = *((_QWORD *)v6 + 1);
        v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
        v9 = v8(v7, &v13);
        if ( v9 < 0 )
        {
          v10 = 5795LL;
          goto LABEL_16;
        }
        hwnd = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 24LL))(v13, &hwnd);
        if ( v9 < 0 )
        {
          v10 = 5797LL;
          goto LABEL_16;
        }
        pvAttribute = TouchKeyboardExperienceManager::GetBorderColor((TouchKeyboardExperienceManager *)this, *Ptr);
        v9 = DwmSetWindowAttribute(hwnd, 0x22u, &pvAttribute, 4u);
        if ( v9 < 0 )
        {
          v10 = 5799LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v9);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
          if ( v2 )
            ReleaseSRWLockShared(v2);
          return (unsigned int)v9;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      }
    }
    Ptr += 2;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
