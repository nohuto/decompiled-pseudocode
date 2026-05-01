/*
 * XREFs of ?InsertAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@_N@Z @ 0x1800A42B0
 * Callers:
 *     ?InsertAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180488220 (-InsertAt@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboa.c)
 * Callees:
 *     ?RaiseEvent@?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x1800A44D4 (-RaiseEvent@-$HashMapOptions@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Inter.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1800A4500 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     memmove_s @ 0x180420EC4 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  bool v4; // zf
  RTL_SRWLOCK *v7; // rbx
  RTL_SRWLOCK *v9; // rcx
  unsigned int v11; // eax
  int v12; // ebp
  unsigned int v13; // r9d
  int v14; // r15d
  __int64 v15; // rcx
  unsigned int v16; // r15d
  void *v17; // rax
  unsigned int v18; // eax
  __int128 v19; // xmm1
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v22; // xmm0
  RTL_SRWLOCK *v23; // rcx
  unsigned __int8 v25; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_DWORD *)(a1 + 80) == 1;
  v7 = (RTL_SRWLOCK *)(a1 + 80);
  v9 = (RTL_SRWLOCK *)(a1 + 88);
  if ( v4 )
  {
    if ( !LODWORD(v9->Ptr) )
      LODWORD(v9->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v9);
  }
  if ( a4 )
  {
    a2 = *(_DWORD *)(a1 + 48);
    v11 = a2;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 48);
    if ( a2 > v11 )
    {
      v12 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      goto LABEL_16;
    }
  }
  if ( v11 >= 0x7FFFFFFF )
  {
    v12 = -2147024882;
    goto LABEL_16;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v25, *(unsigned __int8 *)(a1 + 101), a1 + 104);
  v12 = 0;
  v13 = *(_DWORD *)(a1 + 52);
  if ( *(_DWORD *)(a1 + 48) + 1 > v13 )
  {
    v14 = 1;
    v15 = *(_QWORD *)(a1 + 64);
    if ( v13 + 1 <= (v13 >> 1) + v13 )
      v14 = v13 >> 1;
    v16 = v13 + v14;
    if ( v15 )
      v17 = (void *)_o_realloc(v15, 56LL * v16);
    else
      v17 = malloc(56LL * v16);
    if ( !v17 )
    {
      v12 = -2147024882;
      goto LABEL_16;
    }
    *(_QWORD *)(a1 + 64) = v17;
    *(_DWORD *)(a1 + 52) = v16;
  }
  v18 = *(_DWORD *)(a1 + 48);
  if ( a2 < v18
    && memmove_s(
         (void *const)(*(_QWORD *)(a1 + 64) + 56LL * (a2 + 1)),
         56LL * (*(_DWORD *)(a1 + 52) - a2 - 1),
         (const void *const)(*(_QWORD *)(a1 + 64) + 56LL * a2),
         56LL * (v18 - a2)) )
  {
    v12 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  else
  {
    v19 = *(_OWORD *)(a3 + 16);
    v20 = 56LL * a2;
    v21 = *(_QWORD *)(a1 + 64);
    *(_OWORD *)(v20 + v21) = *(_OWORD *)a3;
    v22 = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v20 + v21 + 16) = v19;
    *(_QWORD *)&v19 = *(_QWORD *)(a3 + 48);
    *(_OWORD *)(v20 + v21 + 32) = v22;
    *(_QWORD *)(v20 + v21 + 48) = v19;
    ++*(_DWORD *)(a1 + 48);
    ++*(_DWORD *)(a1 + 96);
  }
LABEL_16:
  if ( v7 )
  {
    v23 = v7 + 1;
    if ( LODWORD(v7->Ptr) == 1 )
      LODWORD(v23->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v23);
  }
  if ( v12 < 0 )
    return (unsigned int)v12;
  else
    return Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>::RaiseEvent(
             v25,
             *(unsigned __int8 *)(a1 + 100),
             a1,
             1LL,
             a2);
}
