/*
 * XREFs of ??R?$default_delete@VCChainingHelper@@@std@@QEBAXPEAVCChainingHelper@@@Z @ 0x1801527A4
 * Callers:
 *     ??1?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@QEAA@XZ @ 0x18015185C (--1-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$unique_ptr@VCCha.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801518B4 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV?$vector@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@V?$allocator@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@@2@@std@@@Z @ 0x18028E2F4 (-ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV-$vector@U-$pair@PEAVCManipulation@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CChainingHelper>::operator()(__int64 a1, __int64 *a2)
{
  if ( a2 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a2 + 5);
    operator delete(a2, 0x30uLL);
  }
}
