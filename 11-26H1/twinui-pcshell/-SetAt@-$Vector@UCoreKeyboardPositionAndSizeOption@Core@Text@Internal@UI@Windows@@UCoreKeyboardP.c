/*
 * XREFs of ?SetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1804888B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x1800A44D4 (-RaiseEvent@-$HashMapOptions@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Inter.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800A4500 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800EC350 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memmove_s @ 0x180420EC4 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  RTL_SRWLOCK *v12; // rcx
  _BYTE v14[4]; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+34h] [rbp-64h] BYREF
  RTL_SRWLOCK *v16; // [rsp+38h] [rbp-60h] BYREF
  _OWORD Destination[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+70h] [rbp-28h]

  v3 = a2;
  v15 = 0;
  XWinRT::SerializingLockPolicy::Write(&v16, (RTL_SRWLOCK *)(a1 + 80), &v15);
  v6 = v15;
  if ( v15 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 48) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v14);
      v7 = *(_QWORD *)(a1 + 64);
      v8 = 56 * v3;
      memset(Destination, 0, sizeof(Destination));
      v6 = 0;
      v18 = 0LL;
      if ( memmove_s(Destination, 0x38uLL, (const void *const)(56 * v3 + v7), 0x38uLL) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 64);
        v10 = *(_OWORD *)(a3 + 16);
        *(_OWORD *)(v8 + v9) = *(_OWORD *)a3;
        v11 = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(v8 + v9 + 16) = v10;
        *(_QWORD *)&v10 = *(_QWORD *)(a3 + 48);
        *(_OWORD *)(v8 + v9 + 32) = v11;
        *(_QWORD *)(v8 + v9 + 48) = v10;
        ++*(_DWORD *)(a1 + 96);
      }
    }
  }
  if ( v16 )
  {
    v12 = v16 + 1;
    if ( LODWORD(v16->Ptr) == 1 )
      LODWORD(v12->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v12);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>::RaiseEvent();
  return (unsigned int)v6;
}
