/*
 * XREFs of ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x140336B94
 * Callers:
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140347AD0 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::apalColorSet(XEPALOBJ *this, struct PALETTE *a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  struct Gre::Base::SESSION_GLOBALS *v5; // rsi
  __int64 v6; // rdx

  v4 = Gre::Base::Globals(this);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v6 != *(_QWORD *)this )
    DEC_SHARE_REF_CNT(v4, v6);
  INC_SHARE_REF_CNT(v5, a2);
  *(_DWORD *)(*(_QWORD *)this + 28LL) = *((_DWORD *)a2 + 7);
  *(_QWORD *)(*(_QWORD *)this + 112LL) = *((_QWORD *)a2 + 14);
  *(_QWORD *)(*(_QWORD *)this + 120LL) = a2;
}
