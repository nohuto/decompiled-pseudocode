/*
 * XREFs of ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x1806C7480
 * Callers:
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x1806C7AE4 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1806C81D8 (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1806C8250 (-_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::VerifyLayout(RTL_SRWLOCK *this)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // r13
  PVOID Ptr; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  char *v8; // rbx
  unsigned __int64 v9; // r15
  __int64 (__fastcall ****v10)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  RTL_SRWLOCK *v22; // [rsp+28h] [rbp-38h] BYREF
  __int128 v23; // [rsp+30h] [rbp-30h] BYREF
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v22, this + 2);
  v2 = 0;
  v3 = this - 5;
  Ptr = this[9].Ptr;
  if ( Ptr )
  {
    v5 = 1LL;
    v6 = 0LL;
    do
    {
      v7 = v5;
      if ( v2 < 0 )
        goto LABEL_40;
      *(_QWORD *)&v24 = 0LL;
      v8 = (char *)this[8].Ptr;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      v2 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int128 *))&v8[v6])(
             *(_QWORD *)&v8[v6],
             &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
             &v24);
      if ( v2 >= 0 )
      {
        v9 = v5;
        if ( v5 < (unsigned __int64)Ptr )
        {
          do
          {
            if ( v2 < 0 )
              break;
            v21 = 0LL;
            v10 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[8].Ptr;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
            v2 = (**v10[v9])(v10[v9], &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v21);
            if ( v2 >= 0 && (*(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v24 + 96LL))(v24, v21) )
              v2 = -2147319767;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
            ++v9;
          }
          while ( v9 < (unsigned __int64)Ptr );
          v7 = v5;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      v6 += 8LL;
      ++v5;
    }
    while ( v7 < (unsigned __int64)Ptr );
    if ( v2 < 0 )
      goto LABEL_40;
    v3 = this - 5;
  }
  v11 = (unsigned int)this[3].Ptr;
  LODWORD(v21) = CAppLayout::_GetItemCountOfType(v3, 2LL);
  v12 = 0LL;
  if ( Ptr )
  {
    while ( 1 )
    {
      if ( v2 < 0 )
        goto LABEL_40;
      v23 = 0LL;
      v13 = *((_QWORD *)this[8].Ptr + v12);
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v13 + 56LL))(v13, 0LL, &v23);
      if ( (_QWORD)v23 != __PAIR64__(HIDWORD(this[3].Ptr), v11) )
        goto LABEL_31;
      if ( HIDWORD(v23) != HIDWORD(this[4].Ptr) )
        goto LABEL_31;
      if ( SDWORD2(v23) > SLODWORD(this[4].Ptr) )
        goto LABEL_31;
      v14 = *((_QWORD *)this[8].Ptr + v12);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) == 1 )
      {
        v24 = 0LL;
        v15 = *((_QWORD *)this[8].Ptr + v12);
        (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v15 + 56LL))(v15, 1LL, &v24);
        if ( (int)v24 < (int)v23
          || SDWORD1(v24) < SDWORD1(v23)
          || SDWORD2(v24) > SDWORD2(v23)
          || SHIDWORD(v24) > SHIDWORD(v23) )
        {
          goto LABEL_31;
        }
      }
      v16 = *((_QWORD *)this[8].Ptr + v12);
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
      if ( (_DWORD)v21 )
      {
        if ( (v17 == 1 || v17 == 4) && (v12 & 1) != 0 )
          goto LABEL_31;
      }
      if ( v17 != 2 )
      {
        if ( v17 == 4 )
        {
          v24 = 0LL;
          v19 = *((_QWORD *)this[8].Ptr + v12);
          (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v19 + 56LL))(v19, 0LL, &v24);
        }
        goto LABEL_32;
      }
      if ( (v12 & 1) == 0 )
LABEL_31:
        v2 = -2147319767;
LABEL_32:
      v11 = DWORD2(v23);
      if ( ++v12 >= (unsigned __int64)Ptr )
      {
        if ( v2 < 0 )
          goto LABEL_40;
        v23 = 0LL;
        v18 = *((_QWORD *)this[8].Ptr + (_QWORD)Ptr - 1);
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v18 + 56LL))(v18, 0LL, &v23);
        if ( DWORD2(v23) != LODWORD(this[4].Ptr) )
        {
          v2 = -2147319767;
          goto LABEL_40;
        }
        break;
      }
    }
  }
  if ( (unsigned int)CAppLayout::_GetItemCountWithFlags(v3, 2LL) > 1 )
    v2 = -2147319767;
LABEL_40:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v22);
  return (unsigned int)v2;
}
