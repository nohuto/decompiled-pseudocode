/*
 * XREFs of ?UpdateLayout@CPrimitiveGroupVisual@@UEAAJ_N@Z @ 0x1800697C0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180016040 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA?AVDirtyFlags@@XZ @ 0x18001647C (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA-AVDirtyFla.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroupVisual::UpdateLayout(CPrimitiveGroupVisual *this)
{
  int updated; // eax
  unsigned int v3; // ebx
  unsigned int *v4; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+18h] BYREF

  updated = CCanvasVisual::UpdateLayout(this);
  v3 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
      (const char *)(unsigned int)updated,
      v6);
    return v3;
  }
  else
  {
    if ( (*((_DWORD *)this + 8) & *___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__02_00__YA_AVDirtyFlags__XZ(&v8)) != 0 )
    {
      v4 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v8);
      (*(void (__fastcall **)(CPrimitiveGroupVisual *, _QWORD))(*(_QWORD *)this + 24LL))(this, *v4);
    }
    return 0LL;
  }
}
