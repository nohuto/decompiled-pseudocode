/*
 * XREFs of ?CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x1800706C0
 * Callers:
 *     ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070230 (-CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PE.c)
 *     ?UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z @ 0x180100300 (-UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800037B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapper.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?IsLooseMatch@@YA_NQEAG0@Z @ 0x1800FE640 (-IsLooseMatch@@YA_NQEAG0@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CompareAECProcessingModeParameters(
        CSharedStreamGroupProxy *this,
        const struct CProcessingModeParameters *a2,
        enum PMP_MATCH_TYPE *a3)
{
  unsigned __int16 *v3; // rsi
  int v4; // eax
  unsigned __int16 *v5; // rbx
  char v9; // r15
  char v10; // r12
  _DWORD *v11; // rcx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // r9
  const wchar_t *v16; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-8h] BYREF
  char v18; // [rsp+A0h] [rbp+40h] BYREF
  char v19; // [rsp+A8h] [rbp+48h] BYREF
  int v20; // [rsp+B0h] [rbp+50h] BYREF
  const wchar_t *v21; // [rsp+B8h] [rbp+58h] BYREF

  v3 = (unsigned __int16 *)*((_QWORD *)this + 40);
  v4 = 1;
  v5 = (unsigned __int16 *)*((_QWORD *)a2 + 3);
  *(_DWORD *)a3 = 1;
  if ( v3 )
  {
    if ( v5 && !(unsigned int)_o__wcsicmp(v3, v5) )
    {
      v4 = *(_DWORD *)a3;
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  if ( v5 )
  {
LABEL_3:
    v4 = 2 * IsLooseMatch(v3, v5);
    *(_DWORD *)a3 = v4;
  }
LABEL_4:
  v9 = *((_BYTE *)this + 328);
  v10 = *((_BYTE *)a2 + 32);
  if ( v4 && v9 != v10 )
    *(_DWORD *)a3 = 0;
  v11 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v11 > 4u && tlgKeywordOn((__int64)v11, 512LL) )
  {
    v20 = *(_DWORD *)a3;
    v18 = v10;
    v19 = v9;
    v21 = v5;
    v16 = v3;
    v17 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v12,
      (int)&unk_1801A67FD,
      v13,
      v14,
      (__int64)&v17,
      &v16,
      &v21,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v20);
  }
  return 0LL;
}
