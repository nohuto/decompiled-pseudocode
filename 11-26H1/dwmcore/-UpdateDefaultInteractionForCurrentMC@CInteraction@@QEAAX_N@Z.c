/*
 * XREFs of ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1800A8838
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1800A8910 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180227190 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800A8690 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1800A874C (-Add@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteract.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800A95F4 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 */

void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this)
{
  bool IsDefaultInteractionStateLocked; // al
  __int64 v3; // rcx
  char v4; // r9
  char v5; // r8
  _BYTE *v6; // rbx
  char v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rcx
  CInteraction *v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h]

  IsDefaultInteractionStateLocked = CInteraction::IsDefaultInteractionStateLocked(this);
  v5 = 0;
  if ( !IsDefaultInteractionStateLocked )
  {
    v6 = (_BYTE *)(v3 + 200);
    if ( !v4 )
      v5 = *v6 >> 4;
    v7 = (*v6 ^ (32 * v5)) & 0x20;
    v10 = this;
    *v6 ^= v7;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(v3, &v10);
    if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
    {
      v8 = (unsigned __int8)*v6;
      LODWORD(v10) = (v8 >> 4) & 1;
      v9 = (v8 >> 5) & 1;
      v11 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        (__int64)&unk_1803B2E10);
    }
  }
}
