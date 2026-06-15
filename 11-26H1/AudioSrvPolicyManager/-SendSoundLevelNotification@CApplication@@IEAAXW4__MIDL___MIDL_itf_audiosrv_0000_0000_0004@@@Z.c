/*
 * XREFs of ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180012250
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180012C70 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18001EA10 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002469C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180039FA4 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     McTemplateU0zq_EventWriteTransfer @ 0x18003B164 (McTemplateU0zq_EventWriteTransfer.c)
 */

void __fastcall CApplication::SendSoundLevelNotification(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 Next; // rax
  __int64 v7; // rdi
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // r8
  int v12; // r9d
  int v13; // ecx
  _QWORD v14[5]; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v16 = *(_QWORD *)(a1 + 72);
  while ( v16 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v5, &v16);
    v7 = *(_QWORD *)Next;
    if ( (*(_BYTE *)(*(_QWORD *)Next + 448LL) & 1) != 0 && !*(_DWORD *)(v7 + 416) )
    {
      v8 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      v11 = v8;
      if ( *(_DWORD *)v8 > 4u && (unsigned __int8)tlgKeywordOn(v8, 0x20000LL) )
      {
        v13 = *(_DWORD *)(v7 + 160);
        v14[0] = *(_QWORD *)(a1 + 24);
        v15 = v13;
        v17 = *(_QWORD *)(a1 + 696);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (_DWORD)v11,
          (unsigned int)&unk_18005A2B9,
          (_DWORD)v11,
          v12,
          (__int64)v14,
          (__int64)&v17,
          (__int64)&v15);
      }
      if ( Microsoft_Windows_AudioEnableBits < 0 )
        McTemplateU0zq_EventWriteTransfer(v10, v9, *(_QWORD *)(a1 + 24), a2);
      CProcess::SendPBMNotification(v7, 0LL, v11);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
