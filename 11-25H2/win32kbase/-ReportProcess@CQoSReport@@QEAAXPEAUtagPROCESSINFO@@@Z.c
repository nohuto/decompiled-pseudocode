/*
 * XREFs of ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A875C
 * Callers:
 *     ?ReportProcess@QualityOfService@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A8850 (-ReportProcess@QualityOfService@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14000274C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall CQoSReport::ReportProcess(CQoSReport *this, struct tagPROCESSINFO *a2)
{
  _QWORD *v3; // rax
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]
  char v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_BYTE *)this )
  {
    v3 = (_QWORD *)((char *)a2 + 1112);
    if ( (_QWORD *)*v3 == v3 )
    {
      v4 = (char *)this + 8;
      v5 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
        __fastfail(3u);
      *v3 = v5;
      v3[1] = v4;
      *(_QWORD *)(v5 + 8) = v3;
      *(_QWORD *)v4 = v3;
    }
  }
  else
  {
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x200000000004LL) )
    {
      v12 = dword_14026E178[*((int *)a2 + 285)];
      v13 = *((_DWORD *)a2 + 14);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v6,
        (__int64)&unk_140277D43,
        v7,
        v8,
        (__int64)&v13,
        (__int64)&v12);
    }
    v9 = *(_QWORD *)a2;
    v10 = dword_14026E178[*((int *)a2 + 285)];
    v11 = 0;
    PsSetProcessesWindowState(1LL, &v9);
  }
}
