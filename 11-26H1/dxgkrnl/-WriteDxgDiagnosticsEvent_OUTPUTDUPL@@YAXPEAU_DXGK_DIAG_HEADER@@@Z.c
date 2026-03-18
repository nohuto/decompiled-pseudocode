/*
 * XREFs of ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140049A7C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000B688 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1400490C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_OUTPUTDUPL(struct _DXGK_DIAG_HEADER *a1)
{
  struct _DXGK_DIAG_HEADER *v1; // r9
  __int64 v2; // r8
  int v3; // ecx
  __int64 v4; // rcx
  void *v5; // rdx
  struct _DXGK_DIAG_HEADER *v6; // [rsp+40h] [rbp-10h] BYREF
  __int16 v7; // [rsp+48h] [rbp-8h]
  int v8; // [rsp+68h] [rbp+18h] BYREF
  int v9; // [rsp+70h] [rbp+20h] BYREF

  v1 = a1;
  if ( (unsigned int)dword_1401665F0 > 4 && (qword_140166600 & 0x200000000200LL) != 0 )
  {
    v2 = qword_140166608;
    if ( (qword_140166608 & 0x200000000200LL) == qword_140166608 )
    {
      v3 = *((_DWORD *)a1 + 12);
      if ( v3 )
      {
        v4 = (unsigned int)(v3 - 1);
        if ( (_DWORD)v4 )
        {
          if ( (_DWORD)v4 == 10 && (qword_140166608 & 0x200000000200LL) == qword_140166608 )
          {
            v5 = &unk_140142AF2;
LABEL_10:
            v7 = *((_WORD *)v1 + 2);
            v8 = *((_DWORD *)v1 + 10);
            v6 = v1;
            v9 = 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
              v4,
              (__int64)v5,
              v2,
              (__int64)v1,
              (__int64)&v9,
              (__int64)&v8,
              (__int64 *)&v6);
          }
        }
        else if ( (unsigned __int8)tlgKeywordOn(&dword_1401665F0, 0x200000000200LL) )
        {
          v5 = &unk_140142A41;
          goto LABEL_10;
        }
      }
      else if ( (unsigned __int8)tlgKeywordOn(&dword_1401665F0, 0x200000000200LL) )
      {
        v5 = &unk_140142AB7;
        goto LABEL_10;
      }
    }
  }
}
