/*
 * XREFs of ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1400CDA78
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1400CD87C (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     ?inv_cmap@INVCMAP@@QEAAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1400CDAD8 (-inv_cmap@INVCMAP@@QEAAXHPEAURGBX@@HPEAKPEAE@Z.c)
 */

void __fastcall inv_cmap(__int64 a1, struct RGBX *a2, __int64 a3, unsigned int *a4, unsigned __int8 *a5)
{
  int v7; // edi
  __int64 SessionState; // rax
  int v9; // r9d

  v7 = a1;
  SessionState = W32GetSessionState(a1, a2, a3);
  INVCMAP::inv_cmap((INVCMAP *)(*(_QWORD *)(SessionState + 96) + 20136LL), v7, a2, v9, a4, a5);
}
