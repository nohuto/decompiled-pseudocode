/*
 * XREFs of ?InvokeCharms@CImmersiveApp@@UEAAJXZ @ 0x180302B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::InvokeCharms(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *((_BYTE *)this + 655) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 240LL))(*((_QWORD *)this + 43));
  return result;
}
