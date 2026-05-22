/*
 * XREFs of ?OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180199BDC
 * Callers:
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180199CB0 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x18000132C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::PenEvents::OnPenEventsKernelMessage(const struct _MIT_PEN_EVENT_MESSAGE *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r10
  const char *v4; // rax
  const char *v5; // rcx
  int v6; // ecx
  int v7; // ecx
  const char *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && tlgKeywordOn((__int64)v2, 512LL) )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        v6 = *((_DWORD *)a1 + 1);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
              v4 = "TailLongPress";
            else
              v4 = "UnknownButtonAction";
          }
          else
          {
            v4 = "TailDoubleClick";
          }
        }
        else
        {
          v4 = "TailClick";
        }
        goto LABEL_19;
      case 1:
        v5 = "Undocked";
        v4 = "Docked";
        break;
      case 2:
        v5 = "DisabledTailButton";
        v4 = "EnabledTailButton";
        break;
      default:
        v4 = "UNKNOWN";
LABEL_19:
        v8 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v3,
          (__int64)&unk_18022917C,
          0LL,
          0LL,
          (const unsigned __int16 **)&v8);
        return;
    }
    if ( !*((_DWORD *)a1 + 1) )
      v4 = v5;
    goto LABEL_19;
  }
}
