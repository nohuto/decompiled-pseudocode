/*
 * XREFs of ?GetGutterWidth@CTransitionVisualController@@QEAAJHPEAH@Z @ 0x1800CF5FC
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C5700 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransitionVisualController::GetGutterWidth(CTransitionVisualController *this, int a2, int *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)this + 23);
  *a3 = 0;
  result = 2147500035LL;
  if ( v3 )
  {
    *a3 = MulDiv(*(_DWORD *)(v3 + 128), a2, *(_DWORD *)(v3 + 132));
    return 0LL;
  }
  return result;
}
