/*
 * XREFs of ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x14022206C
 * Callers:
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1402215B0 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x140225A6C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1402266D4 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
        IVRootDeliver::Keyboard::Detail *this,
        struct CIVGenericSerializer *a2,
        int a3)
{
  void **v3; // rdi
  __int64 UserSessionState; // rax
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  void **v14; // rdi
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax

  v3 = (void **)*((_QWORD *)this + 2);
  UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3);
  result = CIVSerializer::Serialize(this, v3, (void *const)(UserSessionState + 14392), 0x40uLL, 1);
  if ( (int)result >= 0 )
  {
    v10 = W32GetUserSessionState(v8, v7, v9);
    result = CIVSerializer::Serialize(this, v3 + 1, (void *const)(v10 + 14328), 0x40uLL, 1);
    if ( (int)result >= 0 )
    {
      result = CIVSerializer::ExtendByMeasuredExtra(this);
      if ( (int)result >= 0 )
      {
        v14 = (void **)*((_QWORD *)this + 2);
        v15 = W32GetUserSessionState(v12, v11, v13);
        result = CIVSerializer::Serialize(this, v14, (void *const)(v15 + 14392), 0x40uLL, 0);
        if ( (int)result >= 0 )
        {
          v19 = W32GetUserSessionState(v17, v16, v18);
          return CIVSerializer::Serialize(this, v14 + 1, (void *const)(v19 + 14328), 0x40uLL, 0);
        }
      }
    }
  }
  return result;
}
