/*
 * XREFs of ?GetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1800DDC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rax
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int64 v12; // xmm0_8
  int v13; // ebp

  v3 = a2;
  *(_OWORD *)a3 = 0LL;
  v4 = a1 + 80;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v7 = *(_DWORD *)(a1 + 88);
    if ( v7 >= 0 )
      *(_DWORD *)(a1 + 88) = v7 + 1;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 88));
  }
  v8 = 0;
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 48) )
  {
    v13 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 64);
    v10 = *(_OWORD *)(56 * v3 + v9 + 16);
    v11 = *(_OWORD *)(56 * v3 + v9 + 32);
    v12 = *(_QWORD *)(56 * v3 + v9 + 48);
    *(_OWORD *)a3 = *(_OWORD *)(56 * v3 + v9);
    *(_OWORD *)(a3 + 16) = v10;
    *(_OWORD *)(a3 + 32) = v11;
    *(_QWORD *)(a3 + 48) = v12;
    v13 = 0;
  }
  if ( v4 )
  {
    if ( *(_DWORD *)v4 == 1 )
      --*(_DWORD *)(v4 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v4 + 8));
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  return v8;
}
