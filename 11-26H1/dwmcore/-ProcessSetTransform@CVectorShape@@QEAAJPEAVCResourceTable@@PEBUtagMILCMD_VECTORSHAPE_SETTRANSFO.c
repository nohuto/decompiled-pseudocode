/*
 * XREFs of ?ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFORM@@@Z @ 0x1801B16D0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransform@CVectorShape@@QEAAXPEAVCComponentTransform2D@@@Z @ 0x1801B1770 (-SetTransform@CVectorShape@@QEAAXPEAVCComponentTransform2D@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVectorShape::ProcessSetTransform(
        CVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VECTORSHAPE_SETTRANSFORM *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct CComponentTransform2D *v8; // rbx
  struct CComponentTransform2D *v10; // rcx

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  if ( v3 && v3 < *((_DWORD *)a2 + 7) && (v6 = *((_DWORD *)a2 + 6) * v3, v7 = *((_QWORD *)a2 + 5), *(_DWORD *)(v6 + v7)) )
  {
    v10 = *(struct CComponentTransform2D **)(v6 + v7 + 8);
    v8 = v10;
    if ( v10
      && !(*(unsigned __int8 (__fastcall **)(struct CComponentTransform2D *, __int64))(*(_QWORD *)v10 + 64LL))(
            v10,
            24LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x3Au, 0LL);
      return v4;
    }
  }
  else
  {
    v8 = 0LL;
  }
  CVectorShape::SetTransform(this, v8);
  return v4;
}
