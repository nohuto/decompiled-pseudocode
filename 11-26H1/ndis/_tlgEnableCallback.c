/*
 * XREFs of _tlgEnableCallback @ 0x1401671F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall tlgEnableCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _QWORD *CallbackContext)
{
  int v8; // ecx

  if ( CallbackContext )
  {
    if ( (_DWORD)ControlCode )
    {
      if ( (_DWORD)ControlCode == 1 )
      {
        if ( (_BYTE)Level )
          v8 = (unsigned __int8)Level + 1;
        else
          v8 = 256;
        *(_DWORD *)CallbackContext = v8;
        CallbackContext[2] = MatchAnyKeyword;
        CallbackContext[3] = MatchAllKeyword;
      }
    }
    else
    {
      *(_DWORD *)CallbackContext = 0;
    }
    if ( CallbackContext[5] )
      ((void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))CallbackContext[5])(
        SourceId,
        ControlCode,
        Level,
        MatchAnyKeyword,
        MatchAllKeyword,
        FilterData,
        CallbackContext[6]);
  }
}
