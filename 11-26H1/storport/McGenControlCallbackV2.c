/*
 * XREFs of McGenControlCallbackV2 @ 0x140038920
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwEnableCallback @ 0x140038A60 (StorEtwEnableCallback.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
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
  int v7; // edi
  unsigned __int8 v9; // r9
  __int64 v10; // rdx
  bool v11; // r11
  int v12; // edx
  int *v13; // r9
  int v14; // eax
  int v15; // eax
  int v16; // eax

  v7 = MatchAnyKeyword;
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
            v9 = *((_BYTE *)CallbackContext + 40);
            v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
            v11 = (*(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9)
               && (!v10
                || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
                && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
            v12 = 1 << Level;
            SourceId = (LPCGUID)((unsigned __int64)Level >> 5);
            v13 = (int *)(*((_QWORD *)CallbackContext + 6) + 4LL * (_QWORD)SourceId);
            v14 = *v13;
            if ( v11 )
              v15 = v12 | v14;
            else
              v15 = ~v12 & v14;
            *v13 = v15;
            *(_DWORD *)&Level = Level + 1;
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
    }
    else
    {
      v16 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v16 )
        memset_0(*((void **)CallbackContext + 6), 0, 4LL * ((v16 - 1) / 32 + 1));
    }
    StorEtwEnableCallback((_DWORD)SourceId, ControlCode, Level, v7);
  }
}
