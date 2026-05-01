/*
 * XREFs of ?GetTitle@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAPEAG@Z @ 0x1802C606C
 * Callers:
 *     ?GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180231E30 (-GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?GetTitleInternal@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1802FDAB0 (-GetTitleInternal@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetTitle(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned __int16 **a2)
{
  __int64 result; // rax

  *a2 = 0LL;
  result = 2147943568LL;
  if ( *((_QWORD *)this + 21) )
    return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 168LL))(**((_QWORD **)this + 20));
  return result;
}
