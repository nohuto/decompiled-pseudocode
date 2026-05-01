/*
 * XREFs of ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800B875C
 * Callers:
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1800B88D0 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024B8F8 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x1801A4A1C (-GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int pvAttribute; // [rsp+60h] [rbp+40h] BYREF
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
          v10 = 5728LL;
          goto LABEL_16;
        }
        hwnd = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 24LL))(v13, &hwnd);
        if ( v9 < 0 )
        {
          v10 = 5730LL;
          goto LABEL_16;
        }
        pvAttribute = TouchKeyboardExperienceManager::GetBorderColor((TouchKeyboardExperienceManager *)this, *Ptr);
        v9 = DwmSetWindowAttribute(hwnd, 0x22u, &pvAttribute, 4u);
        if ( v9 < 0 )
        {
          v10 = 5732LL;
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
