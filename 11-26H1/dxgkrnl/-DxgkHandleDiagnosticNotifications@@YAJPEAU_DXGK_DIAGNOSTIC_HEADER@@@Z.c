/*
 * XREFs of ?DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x140079E20
 * Callers:
 *     DxgkCbReportDiagnostic @ 0x14007A530 (DxgkCbReportDiagnostic.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x140002AF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@44444444@Z @ 0x140002BA0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlg.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

__int64 __fastcall DxgkHandleDiagnosticNotifications(struct _DXGK_DIAGNOSTIC_HEADER *a1)
{
  struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3 Value; // ecx
  __int64 v3; // rax
  const wchar_t *v4; // r9
  __int64 v5; // r14
  struct _DXGK_DIAGNOSTIC_HEADER::$09C6252679EB7C7BF0B7CC5E744C86DA::$FF47BB92492B9E237D26C816A8818E09 v6; // edx
  __int64 v7; // rbx
  struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D v8; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rdx
  D3DDDI_VIDEO_PRESENT_TARGET_ID *p_TargetId; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r9d
  bool v20; // al
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // r9d
  bool v27; // al
  __int64 v28; // r9
  bool v29; // [rsp+80h] [rbp+17h] BYREF
  char v30; // [rsp+81h] [rbp+18h] BYREF
  char v31; // [rsp+82h] [rbp+19h] BYREF
  char v32; // [rsp+83h] [rbp+1Ah] BYREF
  _BYTE v33[4]; // [rsp+84h] [rbp+1Bh] BYREF
  D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId; // [rsp+88h] [rbp+1Fh] BYREF
  UINT SequenceNumber; // [rsp+8Ch] [rbp+23h] BYREF
  _DWORD v36[12]; // [rsp+90h] [rbp+27h] BYREF
  bool v37; // [rsp+D0h] [rbp+67h] BYREF
  bool v38; // [rsp+D8h] [rbp+6Fh] BYREF
  D3DDDI_VIDEO_PRESENT_TARGET_ID v39; // [rsp+E0h] [rbp+77h] BYREF
  UINT v40; // [rsp+E8h] [rbp+7Fh] BYREF

  Value = (struct _DXGK_DIAGTYPE_NOTIFICATIONS::$EE9FAAAC0299860A305CE449C3A398B9::$A67C43EDC5653656E5CF08E8C2BCA5A3)a1->Type.Notifications.Value;
  if ( *(unsigned int *)&Value >= 4 )
  {
    WdLogSingleEntry2(2LL, *(unsigned int *)&Value, 0LL);
    v3 = a1->Type.Notifications.Value;
    v4 = L"Notifications category diagnostic reported with undefined diagnostic type 0x%I64x. (%d)";
    v5 = 0LL;
    WdLogGlobalForLineNumber = 518;
LABEL_7:
    v7 = 0LL;
    goto LABEL_8;
  }
  v5 = 24LL;
  v6 = (struct _DXGK_DIAGNOSTIC_HEADER::$09C6252679EB7C7BF0B7CC5E744C86DA::$FF47BB92492B9E237D26C816A8818E09)a1->Value;
  if ( *(_WORD *)&v6 < 0x18u )
  {
    v7 = 1LL;
    WdLogSingleEntry3(2LL, *(_WORD *)&v6, 24LL, 1LL);
    v4 = L"PanelSelfRefresh diagnostic reported with incorrect size 0x%I64x, should be at least 0x%I64x. (%d)";
    v3 = (unsigned __int16)*(_DWORD *)&a1->0;
    WdLogGlobalForLineNumber = 525;
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, v5, v7, 0LL, 0LL);
    return 3221225485LL;
  }
  v8 = (struct _DXGK_DIAGNOSTIC_CATEGORIES::$66BD7D665E6B20B64D6FF65996E7A2AF::$8585F49736945AD9D0351326F33D234D)a1[1].Category.Value;
  if ( *(unsigned int *)&v8 >= 0x80 )
  {
    WdLogSingleEntry2(2LL, (unsigned __int64)*(unsigned int *)&v8 >> 7, 2LL);
    v4 = L"PanelSelfRefresh diagnostic reported with non-zero reserved bits 0x%I64x (%d)";
    v3 = (unsigned __int64)a1[1].Category.Value >> 7;
    v5 = 2LL;
    WdLogGlobalForLineNumber = 535;
    goto LABEL_7;
  }
  if ( (*(_BYTE *)&Value & 1) != 0 )
  {
    if ( v8 )
    {
      if ( (unsigned int)dword_140166580 > 4
        && tlgKeywordOn((__int64)&dword_140166580, 1LL)
        && tlgKeywordOn((__int64)&dword_140166580, v16) )
      {
        v32 = 1;
        v33[0] = 1;
        v37 = (v19 & 4) != 0;
        v36[0] = 1;
        v38 = (v19 & 0x20) != 0;
        LOBYTE(v39) = v19 & 1;
        LOBYTE(v40) = (v19 & 0x40) != 0;
        v29 = (v19 & 2) != 0;
        v20 = (v19 & 8) != 0;
        v21 = v19 >> 4;
        v30 = v20;
        LOBYTE(v21) = v21 & 1;
        TargetId = a1->TargetId;
        SequenceNumber = a1->SequenceNumber;
        v31 = v21;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v17,
          (__int64)&unk_140142569,
          v18,
          v21,
          (__int64)v36,
          (__int64)&SequenceNumber,
          (__int64)&TargetId,
          (__int64)v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37);
      }
      return 0LL;
    }
    if ( (unsigned int)dword_140166580 > 4
      && tlgKeywordOn((__int64)&dword_140166580, 1LL)
      && tlgKeywordOn((__int64)&dword_140166580, v10) )
    {
      v14 = &unk_140142521;
      v39 = a1->TargetId;
      v40 = a1->SequenceNumber;
      p_TargetId = &TargetId;
      v38 = 1;
      TargetId = 1;
LABEL_24:
      v37 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v11,
        (__int64)v14,
        v12,
        v13,
        (__int64)p_TargetId,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37);
    }
  }
  else
  {
    if ( v8 )
    {
      if ( (unsigned int)dword_140166580 > 4
        && tlgKeywordOn((__int64)&dword_140166580, 2LL)
        && tlgKeywordOn((__int64)&dword_140166580, v23) )
      {
        v30 = 1;
        v29 = 0;
        v37 = (v26 & 4) != 0;
        TargetId = 1;
        v38 = (v26 & 0x20) != 0;
        LOBYTE(v39) = v26 & 1;
        LOBYTE(v40) = (v26 & 0x40) != 0;
        v33[0] = (v26 & 2) != 0;
        v27 = (v26 & 8) != 0;
        v28 = v26 >> 4;
        v32 = v27;
        LOBYTE(v28) = v28 & 1;
        v36[0] = a1->TargetId;
        SequenceNumber = a1->SequenceNumber;
        v31 = v28;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v24,
          (__int64)&unk_14014246C,
          v25,
          v28,
          (__int64)&TargetId,
          (__int64)&SequenceNumber,
          (__int64)v36,
          (__int64)&v29,
          (__int64)&v30,
          (__int64)&v31,
          (__int64)&v32,
          (__int64)v33,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37);
      }
      return 0LL;
    }
    if ( (unsigned int)dword_140166580 > 4
      && tlgKeywordOn((__int64)&dword_140166580, 2LL)
      && tlgKeywordOn((__int64)&dword_140166580, v22) )
    {
      v14 = &unk_140142424;
      v39 = a1->TargetId;
      v40 = a1->SequenceNumber;
      p_TargetId = v36;
      v38 = v13;
      v36[0] = 1;
      goto LABEL_24;
    }
  }
  return 0LL;
}
