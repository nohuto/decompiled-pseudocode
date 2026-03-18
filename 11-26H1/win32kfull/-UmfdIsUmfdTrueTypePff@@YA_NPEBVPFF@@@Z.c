/*
 * XREFs of ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x140101D70
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140101934 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140104F04 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x140241C64 (-GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x140310798 (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall UmfdIsUmfdTrueTypePff(const struct PFF *a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  char v5; // dl

  SessionState = W32GetSessionState(a1, a2, a3);
  v5 = 0;
  if ( *((_QWORD *)a1 + 12) == *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 24136LL) )
    return *(_DWORD *)(*((_QWORD *)a1 + 11) + 20LL) == 0;
  return v5;
}
