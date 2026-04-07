/*
 * XREFs of ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18008998C
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x1800174A8 (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  __int64 v1; // r9

  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)(v1 + 184) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)v1 = &CTopLevelWindow3D::`vftable'{for `CContainerVisual'};
  *(_WORD *)(v1 + 194) = 0;
  *(_BYTE *)(v1 + 196) = 0;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_BYTE *)(v1 + 336) = 0;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_WORD *)(v1 + 424) = 0;
  *(_OWORD *)(v1 + 428) = 0LL;
  *(_DWORD *)(v1 + 444) = 0;
  *(_BYTE *)(v1 + 464) = 0;
  *(_QWORD *)(v1 + 232) = 0LL;
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  return (CTopLevelWindow3D *)v1;
}
