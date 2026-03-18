/*
 * XREFs of ??1CCD_BTL@@MEAA@XZ @ 0x140269BD8
 * Callers:
 *     ??_ECCD_BTL@@MEAAPEAXI@Z @ 0x140098150 (--_ECCD_BTL@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x140192610 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(CCD_BTL *this)
{
  *(_QWORD *)this = &CCD_BTL_FULL::`vftable';
  CDS_JOURNAL::Purge((CCD_BTL *)((char *)this + 112));
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_BTL *)((char *)this + 8));
}
