/*
 * XREFs of ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x1800C95A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0N@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E8C (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0N@$00@@YA-AVDirtyFlags@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CThumbnailVisual::EndTransition(CThumbnailVisual *this, __int64 a2, __int64 a3)
{
  struct tagPOINT *v4; // rcx
  _DWORD *v5; // rax
  LONG v6; // r8d
  LONG v7; // edx
  __int64 v8; // r8
  __int64 v9; // rax
  int *v10; // rax
  CBaseObject *v11; // rcx
  int *v12; // rax
  struct tagPOINT v13; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 417) )
  {
    v4 = (struct tagPOINT *)*((_QWORD *)this + 44);
    if ( v4 )
    {
      v13 = v4[5];
      CVisual::SetOffset((struct tagPOINT *)this, &v13, a3);
      v5 = (_DWORD *)*((_QWORD *)this + 44);
      v6 = 0;
      if ( v5[13] - v5[11] >= 0 )
        v6 = v5[13] - v5[11];
      v7 = 0;
      if ( v5[12] - v5[10] >= 0 )
        v7 = v5[12] - v5[10];
      CVisual::SetSize(this, v7, v6);
      if ( !*((_BYTE *)this + 340) )
      {
        v9 = *((_QWORD *)this + 44);
        if ( (*(_BYTE *)(v9 + 36) & 4) != 0 )
          CVisual::SetOpacity(this, (double)*(unsigned __int8 *)(v9 + 72) / 255.0, v8);
      }
      v10 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v13);
      CThumbnailVisual::SetDirtyFlags(this, *v10);
    }
  }
  v11 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 51) = 0LL;
  }
  v12 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0N__00__YA_AVDirtyFlags__XZ(&v13);
  CThumbnailVisual::SetDirtyFlags(this, *v12);
  *((_BYTE *)this + 417) = 0;
}
