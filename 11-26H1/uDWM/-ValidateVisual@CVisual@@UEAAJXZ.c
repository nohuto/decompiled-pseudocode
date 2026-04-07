/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180008940 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?ValidateVisual@CRectangleVisual@@UEAAJXZ @ 0x18000A2F0 (-ValidateVisual@CRectangleVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800452B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CPrimitiveGroupVisual@@UEAAJXZ @ 0x18005A5F0 (-ValidateVisual@CPrimitiveGroupVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18005DD70 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800634B0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ @ 0x180064910 (-ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CWindowBorder@@UEAAJXZ @ 0x18006F900 (-ValidateVisual@CWindowBorder@@UEAAJXZ.c)
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x180070B30 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccentAcrylicBlurBehind@@UEAAJXZ @ 0x180078890 (-ValidateVisual@CAccentAcrylicBlurBehind@@UEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800B9460 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800BECD0 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@01$00@@YA?AVDirtyFlags@@XZ @ 0x180016468 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@01$00@@YA-AVDirtyFla.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA?AVDirtyFlags@@XZ @ 0x18001647C (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA-AVDirtyFla.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@04$00@@YA?AVDirtyFlags@@XZ @ 0x1800164EC (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@04$00@@YA-AVDirtyFlags@@XZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@05$00@@YA?AVDirtyFlags@@XZ @ 0x1800166C4 (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@05$00@@YA-AVDirtyFlags@@XZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@06$00@@YA?AVDirtyFlags@@XZ @ 0x1800166D8 (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@06$00@@YA-AVDirtyFlags@@XZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA?AVDirtyFlags@@XZ @ 0x1800166EC (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?UpdateSize@CVisual@@IEAAJXZ @ 0x180017574 (-UpdateSize@CVisual@@IEAAJXZ.c)
 *     ?SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003C7BC (-SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180060AFC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?SetBorderMode@CVisualProxy@@QEAAJW4Enum@MilBitmapBorderMode@@@Z @ 0x180071E38 (-SetBorderMode@CVisualProxy@@QEAAJW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD *v28; // rax
  int v29; // edx
  __int64 v31; // rdx
  int updated; // edi
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  char v55; // [rsp+30h] [rbp+10h] BYREF

  v5 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(
                   &v55,
                   *((unsigned int *)this + 8),
                   a3,
                   a4);
  if ( ((unsigned int)v6 & *v5) != 0 )
  {
    updated = (*(__int64 (__fastcall **)(CVisual *, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL);
    if ( updated < 0 )
    {
      v46 = 114LL;
      goto LABEL_20;
    }
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(
                                           &v55,
                                           v31,
                                           v33,
                                           v34);
    v6 = *((unsigned int *)this + 8);
  }
  v8 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__02_00__YA_AVDirtyFlags__XZ(
                   &v55,
                   v6,
                   v7);
  if ( ((unsigned int)v9 & *v8) != 0 )
  {
    updated = CVisual::UpdateSize(this);
    if ( updated < 0 )
    {
      v46 = 121LL;
      goto LABEL_20;
    }
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__02_00__YA_AVDirtyFlags__XZ(
                                           &v55,
                                           v38,
                                           v39);
    v9 = *((unsigned int *)this + 8);
  }
  v12 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__01_00__YA_AVDirtyFlags__XZ(
                    &v55,
                    v9,
                    v10,
                    v11);
  if ( ((unsigned int)v13 & *v12) != 0 )
  {
    updated = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 144LL))(this);
    if ( updated < 0 )
    {
      v46 = 128LL;
      goto LABEL_20;
    }
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__01_00__YA_AVDirtyFlags__XZ(
                                           &v55,
                                           v35,
                                           v36,
                                           v37);
    v13 = *((unsigned int *)this + 8);
  }
  v16 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__03_00__YA_AVDirtyFlags__XZ(
                    &v55,
                    v13,
                    v14,
                    v15);
  if ( ((unsigned int)v17 & *v16) != 0 )
  {
    updated = CVisual::UpdateTransform(this);
    if ( updated < 0 )
    {
      v46 = 135LL;
      goto LABEL_20;
    }
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__03_00__YA_AVDirtyFlags__XZ(
                                           &v55,
                                           v50,
                                           v51,
                                           v52);
    v17 = *((unsigned int *)this + 8);
  }
  v20 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__04_00__YA_AVDirtyFlags__XZ(
                    &v55,
                    v17,
                    v18,
                    v19);
  if ( ((unsigned int)v21 & *v20) != 0 )
  {
    updated = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 128LL))(this);
    if ( updated < 0 )
    {
      v46 = 142LL;
      goto LABEL_20;
    }
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__04_00__YA_AVDirtyFlags__XZ(
                                           &v55,
                                           v40,
                                           v41,
                                           v42);
    v21 = *((unsigned int *)this + 8);
  }
  v24 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__06_00__YA_AVDirtyFlags__XZ(
                    &v55,
                    v21,
                    v22,
                    v23);
  if ( ((unsigned int)v25 & *v24) != 0 )
  {
    updated = CVisualProxy::SetBorderMode(*((_QWORD *)this + 2), *((unsigned int *)this + 32));
    if ( updated < 0 )
    {
      v46 = 149LL;
      goto LABEL_20;
    }
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__06_00__YA_AVDirtyFlags__XZ(
                                           &v55,
                                           v47,
                                           v48,
                                           v49);
    v25 = *((unsigned int *)this + 8);
  }
  v28 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__05_00__YA_AVDirtyFlags__XZ(
                    &v55,
                    v25,
                    v26,
                    v27);
  if ( (v29 & *v28) == 0 )
    return 0LL;
  updated = CVisualProxy::SetInterpolationMode(*((_QWORD *)this + 2), *((unsigned int *)this + 31));
  if ( updated >= 0 )
  {
    *((_DWORD *)this + 8) &= ~*(_DWORD *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__05_00__YA_AVDirtyFlags__XZ(
                                           &v55,
                                           v43,
                                           v44,
                                           v45);
    return 0LL;
  }
  v46 = 156LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v46,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)updated,
    savedregs);
  return (unsigned int)updated;
}
