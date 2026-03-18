/*
 * XREFs of ?IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z @ 0x140219AF4
 * Callers:
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x14021E928 (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSeriali.c)
 * Callees:
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x140224D78 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall IVSerializeFullKeyboardStates(struct CIVGenericSerializer *this, __int64 a2)
{
  void **v2; // rdi
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v2 = (void **)*((_QWORD *)this + 2);
  UserSessionState = W32GetUserSessionState(this, a2);
  result = CIVSerializer::Serialize(this, v2, (void *const)(UserSessionState + 14400), 0x40uLL, 0);
  if ( (int)result >= 0 )
  {
    v8 = W32GetUserSessionState(v7, v6);
    return CIVSerializer::Serialize(this, v2 + 1, (void *const)(v8 + 14336), 0x40uLL, 0);
  }
  return result;
}
