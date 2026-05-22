/*
 * XREFs of ?SetDockRoutingPolicy@PenEvents@InputTraceLogging@@SAXW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x18019A3F8
 * Callers:
 *     ?SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x18019A460 (-SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4Rout.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x18000132C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180199F0C (-PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z.c)
 */

char __fastcall InputTraceLogging::PenEvents::SetDockRoutingPolicy(int a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r10
  const char *v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 512LL);
    if ( (_BYTE)v2 )
    {
      v5 = InputTraceLogging::PenPolicyToString(a1);
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                     v3,
                     (__int64)&unk_1802291ED,
                     0LL,
                     0LL,
                     (const unsigned __int16 **)&v5);
    }
  }
  return (char)v2;
}
