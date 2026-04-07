/*
 * XREFs of ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180014014
 * Callers:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D20 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18004B728 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x18009BDC0 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA?AVDirtyFlags@@XZ @ 0x1800166EC (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetRTLMirror(CVisual *this, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rax
  __int64 v4; // r9
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)a2 != (*((_BYTE *)this + 36) & 1) )
  {
    LOBYTE(a3) = a2 | *((_BYTE *)this + 36) & 0xFE;
    *((_BYTE *)this + 36) = a3;
    v3 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__03_00__YA_AVDirtyFlags__XZ(
                           &v5,
                           a2,
                           a3,
                           this);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *v3);
  }
}
