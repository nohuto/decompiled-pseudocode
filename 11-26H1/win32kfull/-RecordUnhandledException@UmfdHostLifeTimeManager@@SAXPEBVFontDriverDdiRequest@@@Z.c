/*
 * XREFs of ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x14034D860
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x1401C4878 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapSz@G@@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapSz@G@@644@Z @ 0x1400049A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U2@.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ?CaptureLiveDumpWithFontFiles@UmfdHostLifeTimeManager@@SAXPEAUExtendedContext@1@@Z @ 0x14034D61C (-CaptureLiveDumpWithFontFiles@UmfdHostLifeTimeManager@@SAXPEAUExtendedContext@1@@Z.c)
 *     ?SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z @ 0x14034E208 (-SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14034F3F0 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall UmfdHostLifeTimeManager::RecordUnhandledException(const struct FontDriverDdiRequest *a1)
{
  __int64 (__fastcall **v2)(const struct FontDriverDdiRequest *); // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  const wchar_t *v10; // rbx
  wchar_t *v11; // rax
  wchar_t *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+80h] [rbp-19h] BYREF
  int v17; // [rsp+88h] [rbp-11h]
  unsigned int v18; // [rsp+8Ch] [rbp-Dh] BYREF
  const wchar_t *v19; // [rsp+90h] [rbp-9h]
  const wchar_t *v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+A0h] [rbp+7h]
  int v22; // [rsp+A4h] [rbp+Bh]
  int v23; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 v24; // [rsp+ACh] [rbp+13h]
  unsigned int v25; // [rsp+B0h] [rbp+17h] BYREF
  int v26; // [rsp+B4h] [rbp+1Bh] BYREF
  const wchar_t *v27; // [rsp+B8h] [rbp+1Fh] BYREF
  const wchar_t *v28; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v30; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v31[3]; // [rsp+D8h] [rbp+3Fh] BYREF
  char v32; // [rsp+100h] [rbp+67h] BYREF
  int v33; // [rsp+108h] [rbp+6Fh] BYREF
  int v34; // [rsp+110h] [rbp+77h] BYREF
  int v35; // [rsp+118h] [rbp+7Fh] BYREF

  if ( !a1 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("pRequest is null");
    return;
  }
  v16 = 0LL;
  v19 = &pszFormat;
  v20 = &pszFormat;
  v2 = *(__int64 (__fastcall ***)(const struct FontDriverDdiRequest *))a1;
  v17 = 0;
  v21 = 0;
  if ( ((unsigned __int8 (__fastcall *)(const struct FontDriverDdiRequest *, unsigned int *))v2[3])(a1, &v18) )
    UmfdReliabilityManager::SetFontAsUnreliable(v18);
  v5 = *(_QWORD *)(W32GetSessionState(v4, v3) + 96);
  ++*(_DWORD *)(v5 + 24268);
  if ( *(_DWORD *)(v5 + 24264) && !*(_BYTE *)(v5 + 24275) && *(_DWORD *)(v5 + 24268) >= *(_DWORD *)(v5 + 24264) )
    *(_BYTE *)(v5 + 24275) = 1;
  v23 = (**(__int64 (__fastcall ***)(const struct FontDriverDdiRequest *))a1)(a1);
  v22 = *((_DWORD *)a1 + 2);
  v6 = (*(__int64 (__fastcall **)(const struct FontDriverDdiRequest *))(*(_QWORD *)a1 + 8LL))(a1);
  if ( v6 && (v7 = *(_QWORD *)(v6 + 8)) != 0 )
  {
    v19 = (const wchar_t *)(*(_QWORD *)(*(_QWORD *)(v7 + 224) + 32LL)
                          + *(int *)(*(_QWORD *)(*(_QWORD *)(v7 + 224) + 32LL) + 8LL));
    v21 = *(_DWORD *)(v7 + 144);
    v8 = *(_QWORD *)(v7 + 208);
    v16 = v8;
    v9 = *(_DWORD *)(v7 + 36);
  }
  else
  {
    if ( v22 != 4 )
    {
      v8 = v16;
      goto LABEL_16;
    }
    v8 = *((_QWORD *)a1 + 6);
    v9 = *((_DWORD *)a1 + 10);
    v16 = v8;
  }
  v17 = v9;
LABEL_16:
  if ( v8 )
  {
    v10 = *(const wchar_t **)(*(_QWORD *)v8 + 80LL);
    v11 = wcsrchr(v10, 0x5Cu);
    v12 = v11 + 1;
    if ( !v11 )
      v12 = (wchar_t *)v10;
    v20 = v12;
    v24 = *(_BYTE *)(*(_QWORD *)v16 + 45LL);
    UmfdHostLifeTimeManager::CaptureLiveDumpWithFontFiles((struct UmfdHostLifeTimeManager::ExtendedContext *)&v16);
  }
  if ( (unsigned int)dword_1403AAA30 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AAA30, 0x400000000000LL) )
    {
      v33 = v24;
      v34 = v21;
      v27 = v20;
      v28 = v19;
      v32 = v23;
      v25 = v18;
      v26 = *(unsigned __int8 *)(v5 + 24275);
      v29 = *(unsigned int *)(v5 + 24264);
      v30 = *(unsigned int *)(v5 + 24268);
      v35 = v15;
      v31[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        (__int64)&unk_14037AEC2,
        v14,
        v15,
        (__int64)v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v32,
        (__int64)&v35,
        &v28,
        &v27,
        (__int64)&v34,
        (__int64)&v33);
    }
  }
}
