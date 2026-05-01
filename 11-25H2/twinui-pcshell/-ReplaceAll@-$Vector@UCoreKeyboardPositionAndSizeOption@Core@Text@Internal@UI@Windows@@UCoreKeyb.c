/*
 * XREFs of ?ReplaceAll@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180478620
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180082A60 (-RaiseEvent@-$HashMapOptions@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Inter.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180082A80 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800EA410 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v3; // ebx
  __int64 v4; // r14
  int v5; // ebp
  char *v8; // rax
  void *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // xmm0_8
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  void *v15; // rax
  RTL_SRWLOCK *v16; // rcx
  RTL_SRWLOCK *v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = 0;
  v19 = 0;
  if ( a2 )
  {
    v8 = (char *)malloc(56LL * a2);
    v9 = v8;
    if ( v8 )
    {
      v5 = v4;
      v10 = a3 - (_QWORD)v8;
      v11 = v4;
      do
      {
        v12 = *(_QWORD *)&v8[v10 + 48];
        v13 = *(_OWORD *)&v8[v10 + 16];
        v14 = *(_OWORD *)&v8[v10 + 32];
        *(_OWORD *)v8 = *(_OWORD *)&v8[v10];
        *((_OWORD *)v8 + 1) = v13;
        *((_OWORD *)v8 + 2) = v14;
        *((_QWORD *)v8 + 6) = v12;
        v8 += 56;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      v3 = -2147024882;
      LODWORD(v4) = 0;
      v19 = -2147024882;
    }
  }
  else
  {
    LODWORD(v4) = 0;
    v9 = 0LL;
  }
  if ( v3 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v18, (RTL_SRWLOCK *)(a1 + 80), &v19);
    v3 = v19;
    if ( v19 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
      *(_DWORD *)(a1 + 48) = v4;
      v3 = 0;
      *(_DWORD *)(a1 + 52) = v5;
      v15 = *(void **)(a1 + 64);
      *(_QWORD *)(a1 + 64) = v9;
      v9 = v15;
      ++*(_DWORD *)(a1 + 96);
    }
    if ( v18 )
    {
      v16 = v18 + 1;
      if ( LODWORD(v18->Ptr) == 1 )
        LODWORD(v16->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v16);
    }
  }
  if ( v9 )
    free(v9);
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>::RaiseEvent();
  return (unsigned int)v3;
}
