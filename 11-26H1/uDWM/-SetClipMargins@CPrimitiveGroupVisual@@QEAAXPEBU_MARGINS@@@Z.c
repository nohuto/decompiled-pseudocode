/*
 * XREFs of ?SetClipMargins@CPrimitiveGroupVisual@@QEAAXPEBU_MARGINS@@@Z @ 0x18006A4F4
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001ED80 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?InitializeVisualTreeClone@CPrimitiveGroupVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180083114 (-InitializeVisualTreeClone@CPrimitiveGroupVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroupVisual::SetClipMargins(CPrimitiveGroupVisual *this, const struct _MARGINS *a2)
{
  char v2; // al
  unsigned int *v3; // rax
  __int64 v4; // r9
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_BYTE *)this + 256);
  if ( a2 )
  {
    if ( !v2
      || a2->cxLeftWidth != *((_DWORD *)this + 60)
      || a2->cxRightWidth != *((_DWORD *)this + 61)
      || a2->cyTopHeight != *((_DWORD *)this + 62)
      || a2->cyBottomHeight != *((_DWORD *)this + 63) )
    {
      *((_BYTE *)this + 256) = 1;
      *((struct _MARGINS *)this + 15) = *a2;
LABEL_8:
      v3 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v5);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *v3);
    }
  }
  else if ( v2 )
  {
    *((_BYTE *)this + 256) = 0;
    goto LABEL_8;
  }
}
