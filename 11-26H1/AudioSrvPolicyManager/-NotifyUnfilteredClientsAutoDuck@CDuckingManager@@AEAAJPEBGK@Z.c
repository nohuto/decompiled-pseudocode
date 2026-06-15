/*
 * XREFs of ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18003FF6C
 * Callers:
 *     _lambda_4b31922d8a1cd873a528cca5d3f4e6eb_::operator() @ 0x18003F204 (_lambda_4b31922d8a1cd873a528cca5d3f4e6eb_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180001718 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?IsListEmpty@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ @ 0x18002D564 (-IsListEmpty@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E0AC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18003F8EC (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker.c)
 */

__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoDuck(
        CDuckingManager *this,
        unsigned __int16 *a2,
        int a3)
{
  char *v5; // r15
  const struct _tlgProvider_t *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // r14d
  _DWORD *v13; // rax
  void (__fastcall **v14)(_QWORD, CDuckingNotification *); // rbx
  ATL::CAtlException *v16; // [rsp+30h] [rbp-58h] BYREF
  void (__fastcall **v17[3])(_QWORD, CDuckingNotification *); // [rsp+38h] [rbp-50h] BYREF
  __int16 v18; // [rsp+50h] [rbp-38h]
  void (__fastcall **v19)(_QWORD, CDuckingNotification *); // [rsp+90h] [rbp+8h] BYREF

  v5 = (char *)this + 72;
  if ( !CLockedList_UniqueValuesOnly<CDuckingNotification,0>::IsListEmpty((LPCRITICAL_SECTION)((char *)this + 72)) )
  {
    v6 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v6 > 4u && tlgKeywordOn((__int64)v6, 0x40000LL) )
    {
      v19 = (void (__fastcall **)(_QWORD, CDuckingNotification *))a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v7,
        (__int64)&unk_18005AE71,
        v8,
        v9,
        (void **)&v19);
    }
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    v11 = 2 * v10 + 2;
    v12 = 2 * v10 + 74;
    v13 = operator new(2 * v10 + 74);
    v14 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v13;
    v19 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v13;
    if ( v13 )
    {
      *v13 = v12;
      v13[1] = 512;
      v13[6] = v11;
      *((_BYTE *)v13 + 60) = 1;
      v13[14] = a3;
      StringCbCopyW((char *)v13 + 72, v11, (char *)a2);
      try
      {
        v17[0] = (void (__fastcall **)(_QWORD, CDuckingNotification *))&CGenerateDuckingNotification::`vftable';
        v17[1] = v14;
        v17[2] = 0LL;
        v18 = 1;
        CLockedList_UniqueValuesOnly<CDuckingNotification,0>::ForEachEntry((__int64)v5, v17);
      }
      catch ( ATL::CAtlException *v16 )
      {
        if ( *(_DWORD *)v16 == -1073741571 )
          _o__resetstkoflw();
        v14 = v19;
      }
    }
    operator delete(v14);
  }
  return 0LL;
}
