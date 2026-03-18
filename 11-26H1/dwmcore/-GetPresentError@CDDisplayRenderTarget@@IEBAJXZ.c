/*
 * XREFs of ?GetPresentError@CDDisplayRenderTarget@@IEBAJXZ @ 0x1801AC8A0
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetPresentError(CDDisplayRenderTarget *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 904LL);
  switch ( v1 )
  {
    case 32902:
      return 2291663057LL;
    case 4318:
      return 2291663059LL;
    case 4098:
      return 2291663058LL;
  }
  result = 2291663060LL;
  if ( v1 != 1297040209 )
    return 2291663056LL;
  return result;
}
