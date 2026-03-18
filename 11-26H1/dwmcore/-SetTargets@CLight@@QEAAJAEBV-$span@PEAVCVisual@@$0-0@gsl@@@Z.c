/*
 * XREFs of ?SetTargets@CLight@@QEAAJAEBV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180264CC8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x180260E88 (-RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z.c)
 *     ?AppendTargets@CLight@@QEAAJAEBV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180264440 (-AppendTargets@CLight@@QEAAJAEBV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CLight::SetTargets(__int64 *a1, _QWORD *a2)
{
  _QWORD **v2; // rsi
  _QWORD **i; // rdi
  __int64 v6; // rax
  int appended; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD **)a1[24];
  for ( i = (_QWORD **)a1[23]; i != v2; ++i )
    CVisual::RemoveLight(*i, (__int64)a1, 0);
  v6 = a1[23];
  if ( v6 != a1[24] )
    a1[24] = v6;
  appended = CLight::AppendTargets(a1, a2);
  v8 = appended;
  if ( appended >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\light.cpp",
    (const char *)(unsigned int)appended);
  return v8;
}
