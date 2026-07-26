/*
 * XREFs of McGenControlCallbackV2 @ 0x1400976B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisEtwEventControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140098D78 (-ndisEtwEventControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned __int8 v8; // r9
  __int64 v9; // rdx
  bool v10; // r10
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // [rsp+20h] [rbp-28h]
  struct _EVENT_FILTER_DESCRIPTOR *v16; // [rsp+28h] [rbp-20h]

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        *(_DWORD *)&Level = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_DWORD *)CallbackContext + 9) = 1;
        if ( *((_WORD *)CallbackContext + 21) )
        {
          do
          {
            v8 = *((_BYTE *)CallbackContext + 40);
            v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
            v10 = (*(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v8 || !v8)
               && (!v9
                || (v9 & *((_QWORD *)CallbackContext + 2)) != 0
                && (v9 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
            v11 = 1 << Level;
            SourceId = (LPCGUID)((unsigned __int64)Level >> 5);
            MatchAnyKeyword = *((_QWORD *)CallbackContext + 6) + 4LL * (_QWORD)SourceId;
            v12 = *(_DWORD *)MatchAnyKeyword;
            if ( v10 )
              v13 = v11 | v12;
            else
              v13 = ~v11 & v12;
            *(_DWORD *)MatchAnyKeyword = v13;
            *(_DWORD *)&Level = Level + 1;
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
    }
    else
    {
      v14 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v14 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v14 - 1) / 32 + 1));
    }
    ndisEtwEventControlCallback(SourceId, ControlCode, Level, MatchAnyKeyword, v15, v16, CallbackContext);
  }
}
