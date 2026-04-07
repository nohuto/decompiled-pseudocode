/*
 * XREFs of ?CloneVisualTree@CPrimitiveGroupVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180027660
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CPrimitiveGroupVisual@@SAJPEAPEAV1@@Z @ 0x180027730 (-Create@CPrimitiveGroupVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CPrimitiveGroupVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180083114 (-InitializeVisualTreeClone@CPrimitiveGroupVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPrimitiveGroupVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
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
  v6 = CPrimitiveGroupVisual::Create(&v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
      (const char *)(unsigned int)v6,
      v12);
    if ( v14 )
      CBaseObject::Release(v14);
    return v7;
  }
  else
  {
    v8 = v14;
    v9 = CPrimitiveGroupVisual::InitializeVisualTreeClone(a1, v14, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
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
