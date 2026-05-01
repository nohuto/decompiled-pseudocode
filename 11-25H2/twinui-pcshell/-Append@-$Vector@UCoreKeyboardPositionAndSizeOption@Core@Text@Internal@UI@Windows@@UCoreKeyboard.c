/*
 * XREFs of ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180082630
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180082A60 (-RaiseEvent@-$HashMapOptions@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Inter.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180082A80 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     memmove_s @ 0x180416100 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Append(
        __int64 a1,
        __int64 a2)
{
  bool v2; // zf
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  unsigned int *v7; // rsi
  unsigned int v8; // ebp
  int v9; // r14d
  unsigned int v10; // r8d
  _DWORD *v11; // r12
  int v12; // r12d
  __int64 v13; // rcx
  unsigned int v14; // r12d
  void *v15; // rax
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm0
  RTL_SRWLOCK *v20; // rcx
  unsigned __int8 v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 80) == 1;
  v4 = (RTL_SRWLOCK *)(a1 + 80);
  v5 = (RTL_SRWLOCK *)(a1 + 88);
  if ( v2 )
  {
    if ( !LODWORD(v5->Ptr) )
      LODWORD(v5->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v5);
  }
  v7 = (unsigned int *)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 48);
  if ( v8 >= 0x7FFFFFFF )
  {
    v9 = -2147024882;
    goto LABEL_14;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v22, *(unsigned __int8 *)(a1 + 101), a1 + 104);
  v9 = 0;
  v10 = *(_DWORD *)(a1 + 52);
  v11 = (_DWORD *)(a1 + 48);
  if ( *v7 + 1 > v10 )
  {
    v12 = 1;
    v13 = *(_QWORD *)(a1 + 64);
    if ( v10 + 1 <= (v10 >> 1) + v10 )
      v12 = v10 >> 1;
    v14 = v10 + v12;
    if ( v13 )
      v15 = (void *)_o_realloc(v13, 56LL * v14);
    else
      v15 = malloc(56LL * v14);
    if ( !v15 )
    {
      v9 = -2147024882;
      goto LABEL_14;
    }
    *(_DWORD *)(a1 + 52) = v14;
    v11 = (_DWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 64) = v15;
  }
  if ( v8 < *v7
    && memmove_s(
         (void *const)(*(_QWORD *)(a1 + 64) + 56LL * (v8 + 1)),
         56LL * (*(_DWORD *)(a1 + 52) - v8 - 1),
         (const void *const)(*(_QWORD *)(a1 + 64) + 56LL * v8),
         56LL * (*v7 - v8)) )
  {
    v9 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  else
  {
    v16 = *(_OWORD *)(a2 + 16);
    v17 = 56LL * v8;
    v18 = *(_QWORD *)(a1 + 64);
    *(_OWORD *)(v17 + v18) = *(_OWORD *)a2;
    v19 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v17 + v18 + 16) = v16;
    *(_QWORD *)&v16 = *(_QWORD *)(a2 + 48);
    *(_OWORD *)(v17 + v18 + 32) = v19;
    *(_QWORD *)(v17 + v18 + 48) = v16;
    ++*v11;
    ++*(_DWORD *)(a1 + 96);
  }
LABEL_14:
  if ( v4 )
  {
    v20 = v4 + 1;
    if ( LODWORD(v4->Ptr) == 1 )
      LODWORD(v20->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v20);
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  else
    return Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>::RaiseEvent(
             v22,
             *(unsigned __int8 *)(a1 + 100),
             a1,
             1LL,
             v8);
}
