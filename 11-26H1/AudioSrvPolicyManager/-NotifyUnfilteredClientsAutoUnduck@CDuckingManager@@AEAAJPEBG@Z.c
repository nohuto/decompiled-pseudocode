/*
 * XREFs of ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002D43C
 * Callers:
 *     _lambda_642215a69899d380996b25cb8587b28c_::operator() @ 0x18002AC1C (_lambda_642215a69899d380996b25cb8587b28c_--operator().c)
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

__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoUnduck(CDuckingManager *this, unsigned __int16 *a2)
{
  char *v3; // r14
  const struct _tlgProvider_t *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  int v10; // r15d
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rbx
  ATL::CAtlException *v14; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-40h] BYREF
  __int16 v16; // [rsp+50h] [rbp-28h]
  unsigned __int16 *v17; // [rsp+80h] [rbp+8h] BYREF

  v3 = (char *)this + 72;
  if ( !(unsigned int)CLockedList_UniqueValuesOnly<CDuckingNotification,0>::IsListEmpty((LPCRITICAL_SECTION)((char *)this + 72)) )
  {
    v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 0x40000LL) )
    {
      v17 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v5,
        (__int64)&unk_18005AE37,
        v6,
        v7,
        (void **)&v17);
    }
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    v9 = 2 * v8 + 2;
    v10 = 2 * v8 + 74;
    v11 = (unsigned __int16 *)operator new(2 * v8 + 74);
    v12 = v11;
    v17 = v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = v10;
      *((_DWORD *)v11 + 1) = 512;
      *((_DWORD *)v11 + 6) = v9;
      *((_BYTE *)v11 + 60) = 0;
      *((_DWORD *)v11 + 14) = 0;
      StringCbCopyW(v11 + 36, v9, a2);
      try
      {
        v15[0] = &CGenerateDuckingNotification::`vftable';
        v15[1] = v12;
        v15[2] = 0LL;
        v16 = 0;
        CLockedList_UniqueValuesOnly<CDuckingNotification,0>::ForEachEntry(v3, v15);
      }
      catch ( ATL::CAtlException *v14 )
      {
        if ( *(_DWORD *)v14 == -1073741571 )
          _o__resetstkoflw();
        v12 = v17;
      }
    }
    operator delete(v12);
  }
  return 0LL;
}
