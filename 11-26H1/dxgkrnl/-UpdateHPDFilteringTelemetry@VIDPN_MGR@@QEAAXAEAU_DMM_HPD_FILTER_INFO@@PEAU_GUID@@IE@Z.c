/*
 * XREFs of ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1403ECB9C
 * Callers:
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1403ECAF8 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5555555544455AEBU?$_tlgWrapperByRef@$0BA@@@44455@Z @ 0x140005580 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

void __fastcall VIDPN_MGR::UpdateHPDFilteringTelemetry(
        DMMVIDEOPRESENTTARGETSET **this,
        struct _DMM_HPD_FILTER_INFO *a2,
        struct _GUID *a3,
        int a4,
        unsigned __int8 a5)
{
  struct DXGADAPTER *ContainingAdapter; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v11; // r10
  __int64 v12; // rbx
  int v13; // eax
  __int128 v14; // xmm0
  char v15; // al
  int v16; // r9d
  __int64 v17; // r9
  __int64 v18; // r10
  unsigned int v19; // ecx
  bool v20; // al
  __int64 v21; // rcx
  bool v22; // [rsp+D8h] [rbp-80h] BYREF
  bool v23; // [rsp+D9h] [rbp-7Fh] BYREF
  bool v24; // [rsp+DAh] [rbp-7Eh] BYREF
  char v25; // [rsp+DBh] [rbp-7Dh] BYREF
  unsigned __int8 v26; // [rsp+DCh] [rbp-7Ch] BYREF
  bool v27; // [rsp+DDh] [rbp-7Bh] BYREF
  char v28; // [rsp+DEh] [rbp-7Ah] BYREF
  char v29; // [rsp+DFh] [rbp-79h] BYREF
  bool v30; // [rsp+E0h] [rbp-78h] BYREF
  bool v31; // [rsp+E1h] [rbp-77h] BYREF
  bool v32; // [rsp+E2h] [rbp-76h] BYREF
  char v33; // [rsp+E3h] [rbp-75h] BYREF
  int v34; // [rsp+E4h] [rbp-74h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-60h] BYREF
  struct _DMM_HPD_FILTER_INFO *v38; // [rsp+100h] [rbp-58h] BYREF
  __int64 v39; // [rsp+108h] [rbp-50h] BYREF
  __int64 v40; // [rsp+110h] [rbp-48h] BYREF
  __int64 v41; // [rsp+118h] [rbp-40h] BYREF
  __int64 v42; // [rsp+120h] [rbp-38h] BYREF
  bool v43; // [rsp+148h] [rbp-10h] BYREF

  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this[15], a4);
  v11 = TargetById;
  if ( !TargetById )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5855;
    return;
  }
  v12 = (__int64)TargetById + 568;
  v13 = *((_DWORD *)a2 + 10);
  if ( (v13 & 0xC0000) == 0 )
    goto LABEL_3;
  *(struct _GUID *)a2 = *a3;
  if ( (_BYTE)v13 == 8 )
    v15 = *(_DWORD *)(*((_QWORD *)v11 + 67) + 168LL);
  else
    v15 = 0;
  *((_BYTE *)a2 + 41) = v15;
  v16 = *((_DWORD *)a2 + 10);
  if ( (v16 & 0x10000) != 0 )
  {
LABEL_12:
    *(_OWORD *)v12 = *(_OWORD *)a2;
    *(_OWORD *)(v12 + 16) = *((_OWORD *)a2 + 1);
    v14 = *((_OWORD *)a2 + 2);
    goto LABEL_4;
  }
  if ( (v16 & 0x20000) != 0 )
    goto LABEL_18;
  if ( (*(_DWORD *)(v12 + 40) & 0x40000) != 0 )
  {
    if ( (__int64)(*((_QWORD *)a2 + 2) - *(_QWORD *)(v12 + 16)) > 100000000 )
    {
      if ( (v16 & 0x40000) != 0 )
        goto LABEL_12;
LABEL_3:
      v14 = 0LL;
      *(_OWORD *)v12 = 0LL;
      *(_OWORD *)(v12 + 16) = 0LL;
LABEL_4:
      *(_OWORD *)(v12 + 32) = v14;
      return;
    }
LABEL_18:
    if ( (unsigned int)dword_140166660 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140166660, 0x400000000080LL) )
      {
        v19 = *(_DWORD *)(v12 + 40);
        v38 = a2;
        v43 = (v17 & 0x80000) != 0;
        v22 = (v17 & 0x40000) != 0;
        v35 = *((_QWORD *)a2 + 4);
        v36 = *((_QWORD *)a2 + 3);
        v37 = *((_QWORD *)a2 + 2);
        v23 = (v19 & 0x80000) != 0;
        v24 = (v19 & 0x40000) != 0;
        v39 = *(_QWORD *)(v12 + 32);
        v40 = *(_QWORD *)(v12 + 24);
        v41 = *(_QWORD *)(v12 + 16);
        v25 = BYTE2(v19) & 1;
        v26 = a5;
        v27 = (_BYTE)v17 == 10;
        v28 = *(_BYTE *)(v12 + 41);
        v29 = HIBYTE(v19) & 1;
        v30 = (v19 & 0x800000) != 0;
        v31 = (v19 & 0x400000) != 0;
        v20 = (v19 & 0x200000) != 0;
        v21 = v19 >> 20;
        v32 = v20;
        LOBYTE(v21) = v21 & 1;
        v42 = *(_QWORD *)((char *)ContainingAdapter + 412);
        v34 = *(_DWORD *)(v18 + 24);
        v33 = v21;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v21,
          (__int64)&unk_1401457A0,
          v12,
          v17,
          (__int64)&v34,
          (__int64)&v42,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v24,
          (__int64)&v23,
          (__int64 *)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v22,
          (__int64)&v43);
      }
    }
    if ( (*((_DWORD *)a2 + 10) & 0x60000) == 0x40000 )
      goto LABEL_12;
    goto LABEL_3;
  }
  if ( (v16 & 0x40000) != 0 )
    goto LABEL_12;
}
