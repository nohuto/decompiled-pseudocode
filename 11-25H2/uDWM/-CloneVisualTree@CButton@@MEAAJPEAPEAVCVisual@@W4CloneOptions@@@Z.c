/*
 * XREFs of ?CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800125E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x180011E64 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800132B8 (-InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CButton::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CBaseObject *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v14; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v6 = CButton::Create(&v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v6,
      v12);
    if ( v14 )
      CBaseObject::Release(v14);
    return v7;
  }
  else
  {
    v8 = v14;
    v9 = CButton::InitializeVisualTreeClone(a1, v14, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
        (const char *)(unsigned int)v9,
        v12);
      if ( v8 )
        CBaseObject::Release(v8);
      return v10;
    }
    else
    {
      *a2 = v8;
      return 0LL;
    }
  }
}
