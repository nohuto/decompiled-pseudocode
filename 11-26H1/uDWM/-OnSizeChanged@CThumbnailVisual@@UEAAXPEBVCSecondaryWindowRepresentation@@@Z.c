/*
 * XREFs of ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800593E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E00 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA-AVDirtyFlags@.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CThumbnailVisual::OnSizeChanged(
        CThumbnailVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0M__00__YA_AVDirtyFlags__XZ(&v6);
  CThumbnailVisual::SetDirtyFlags((char *)this - 344, (unsigned int)*v3);
  v4 = *((_QWORD *)this + 1);
  if ( v4 && *(_BYTE *)(v4 + 33) && *((_QWORD *)this + 2) )
  {
    v5 = *(_QWORD *)(v4 + 16);
    if ( v5 )
      PostMessageW(*(HWND *)(v5 + 40), 0x327u, *(unsigned int *)(v4 + 8), 0LL);
  }
}
