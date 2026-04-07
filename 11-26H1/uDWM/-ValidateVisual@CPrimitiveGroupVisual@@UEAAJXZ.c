/*
 * XREFs of ?ValidateVisual@CPrimitiveGroupVisual@@UEAAJXZ @ 0x18005A5F0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Rebuild@CPrimitiveGroupVisual@@IEAAJXZ @ 0x18005A67C (-Rebuild@CPrimitiveGroupVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CPrimitiveGroupVisual::ValidateVisual(
        CPrimitiveGroupVisual *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // edi
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v5 = CVisual::ValidateVisual(this, a2, a3, a4);
  if ( v5 < 0 )
  {
    v7 = 12LL;
  }
  else
  {
    if ( (*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v10) & *((_DWORD *)this + 8)) == 0
      && *((_QWORD *)this + 29) )
    {
      return 0LL;
    }
    v5 = CPrimitiveGroupVisual::Rebuild(this);
    if ( v5 >= 0 )
    {
      *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v10);
      return 0LL;
    }
    v7 = 16LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return (unsigned int)v5;
}
