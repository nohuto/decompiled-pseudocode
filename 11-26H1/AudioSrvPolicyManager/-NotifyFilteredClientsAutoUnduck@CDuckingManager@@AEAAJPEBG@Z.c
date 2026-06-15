/*
 * XREFs of ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18003FE28
 * Callers:
 *     _lambda_642215a69899d380996b25cb8587b28c_::operator() @ 0x18002AC1C (_lambda_642215a69899d380996b25cb8587b28c_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180001718 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?IsListEmpty@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ @ 0x18002D564 (-IsListEmpty@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E0AC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18003F8EC (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker.c)
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck(CDuckingManager *this, unsigned __int16 *a2)
{
  int v3; // esi
  char *v4; // r13
  const struct _tlgProvider_t *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  int v11; // r12d
  LPVOID v12; // rax
  void (__fastcall **v13)(_QWORD, CDuckingNotification *); // rdi
  ATL::CAtlException *v15; // rbx
  ATL::CAtlException *v16; // [rsp+30h] [rbp-58h] BYREF
  void (__fastcall **v17[3])(_QWORD, CDuckingNotification *); // [rsp+38h] [rbp-50h] BYREF
  __int16 v18; // [rsp+50h] [rbp-38h]
  void *v19; // [rsp+90h] [rbp+8h] BYREF
  void (__fastcall **v20)(_QWORD, CDuckingNotification *); // [rsp+A0h] [rbp+18h]

  v3 = 0;
  v4 = (char *)this + 72;
  if ( !CLockedList_UniqueValuesOnly<CDuckingNotification,0>::IsListEmpty((LPCRITICAL_SECTION)((char *)this + 72)) )
  {
    v5 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v5 > 4u && tlgKeywordOn((__int64)v5, 0x40000LL) )
    {
      v19 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v6,
        (__int64)&unk_18005AEA9,
        v7,
        v8,
        &v19);
    }
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = 2 * v9 + 2;
    v11 = 2 * v9 + 74;
    v12 = operator new(2 * v9 + 74);
    v13 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v12;
    v20 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v12;
    if ( v12 )
    {
      *(_DWORD *)v12 = v11;
      *((_DWORD *)v12 + 1) = 512;
      *((_DWORD *)v12 + 6) = v10;
      *((_BYTE *)v12 + 60) = 0;
      *((_DWORD *)v12 + 14) = 0;
      StringCbCopyW((char *)v12 + 72, v10, (char *)a2);
      try
      {
        v17[0] = (void (__fastcall **)(_QWORD, CDuckingNotification *))&CGenerateDuckingNotification::`vftable';
        v17[1] = v13;
        v17[2] = 0LL;
        v18 = 256;
        CLockedList_UniqueValuesOnly<CDuckingNotification,0>::ForEachEntry((__int64)v4, v17);
      }
      catch ( ATL::CAtlException *v16 )
      {
        v15 = v16;
        if ( *(_DWORD *)v16 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v19) = *(_DWORD *)v15;
        v3 = (int)v19;
        v13 = v20;
      }
    }
    operator delete(v13);
    if ( v3 < 0 )
      AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoUnduck", 719, v3);
  }
  return 0LL;
}
