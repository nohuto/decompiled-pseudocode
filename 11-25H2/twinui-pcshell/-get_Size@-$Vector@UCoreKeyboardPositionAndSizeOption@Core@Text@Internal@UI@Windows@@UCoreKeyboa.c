/*
 * XREFs of ?get_Size@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x180179A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rbx
  RTL_SRWLOCK *v3; // rdi

  *a2 = 0;
  v2 = (_DWORD *)(a1 + 80);
  v3 = (RTL_SRWLOCK *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    if ( SLODWORD(v3->Ptr) >= 0 )
      ++LODWORD(v3->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v3);
  }
  *a2 = *(_DWORD *)(a1 + 48);
  if ( v2 )
  {
    if ( *v2 == 1 )
      --LODWORD(v3->Ptr);
    else
      ReleaseSRWLockShared(v3);
  }
  return 0LL;
}
