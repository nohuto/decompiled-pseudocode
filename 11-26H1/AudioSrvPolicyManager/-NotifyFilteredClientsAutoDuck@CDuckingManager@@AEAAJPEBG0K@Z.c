/*
 * XREFs of ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18003FC94
 * Callers:
 *     _lambda_4b31922d8a1cd873a528cca5d3f4e6eb_::operator() @ 0x18003F204 (_lambda_4b31922d8a1cd873a528cca5d3f4e6eb_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180001718 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002CA68 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     ?IsListEmpty@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ @ 0x18002D564 (-IsListEmpty@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E0AC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoDuck(
        CDuckingManager *this,
        unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  int v8; // ebx
  const struct _tlgProvider_t *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  int v16; // r14d
  _DWORD *v17; // rax
  _QWORD *v18; // rdx
  _DWORD *v19; // [rsp+30h] [rbp-39h] BYREF
  void *v20; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v21[7]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+Fh]

  v8 = 0;
  if ( CLockedList_UniqueValuesOnly<CDuckingNotification,0>::IsListEmpty((LPCRITICAL_SECTION)((char *)this + 72)) )
    return 0LL;
  v10 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v10 > 4u && tlgKeywordOn((__int64)v10, 0x40000LL) )
  {
    v20 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v11,
      (__int64)&unk_18005AEE1,
      v12,
      v13,
      &v20);
  }
  v14 = -1LL;
  do
    ++v14;
  while ( a2[v14] );
  v15 = 2 * v14 + 2;
  v16 = 2 * v14 + 74;
  v17 = operator new(2 * v14 + 74);
  v19 = v17;
  if ( v17 )
  {
    *v17 = v16;
    v19[1] = 512;
    v19[6] = v15;
    *((_BYTE *)v19 + 60) = 1;
    v19[14] = a4;
    StringCbCopyW((char *)v19 + 72, v15, (char *)a2);
    v21[0] = off_180053670;
    v21[1] = this;
    v21[2] = &v19;
    v22 = v21;
    v8 = CDuckingManager::ForEachDuckableSession((__int64)this, (__int64)a3, (__int64)v21);
    if ( v22 )
    {
      v18 = v21;
      LOBYTE(v18) = v22 != v21;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v22 + 32LL))(v22, v18);
    }
    v17 = v19;
  }
  operator delete(v17);
  v19 = 0LL;
  if ( v8 < 0 )
    AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoDuck", 653, v8);
  return (unsigned int)v8;
}
