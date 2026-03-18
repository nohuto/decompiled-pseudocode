/*
 * XREFs of ??$CreateWindowProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAJPEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1401F2D4C
 * Callers:
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x14004ED4C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall CWindowProp::CreateWindowProp<WindowMargins::CWindowMarginProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi

  v2 = 0;
  v3 = (_QWORD *)Win32AllocPoolZInit(64LL, 1668118357LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x40uLL);
    *a1 = v4;
    *v4 = &WindowMargins::CWindowMarginProp::`vftable';
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
