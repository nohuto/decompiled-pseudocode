/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CImmersiveApp@@UEAA_NXZ @ 0x1801EE4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::GetShouldShowTitleBarBackButton(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 43) )
    return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 42) + 104LL))(**((_QWORD **)this + 42));
  return result;
}
