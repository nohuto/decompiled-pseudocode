/*
 * XREFs of ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800163C0
 * Callers:
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x1800162D0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180016EA0 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 */

__int64 __fastcall CVisual::UpdateLayout(CVisual *this)
{
  const struct tagSIZE *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  struct tagSIZE v7; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v7 = 0LL;
    v8 = 0LL;
    if ( CVisual::DoCanvasLayout(
           v2 + 8,
           (const struct _MARGINS *)((char *)this + 72),
           (const struct tagSIZE *)this + 8,
           &v8,
           &v7) )
    {
      CVisual::SetSize(this, &v7, v3, v4);
      CVisual::SetOffset((struct tagPOINT *)this, &v8, v5);
    }
  }
  return 0LL;
}
