/*
 * XREFs of McGenControlCallbackV2 @ 0x140043980
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x140124758 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned __int8 v7; // r9
  __int64 v8; // rdx
  bool v9; // r11
  ULONG *v10; // r9
  ULONG v11; // eax
  ULONG v12; // eax
  int v13; // eax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        *(_QWORD *)&Level = 0LL;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_DWORD *)CallbackContext + 9) = 1;
        if ( *((_WORD *)CallbackContext + 21) )
        {
          do
          {
            v7 = *((_BYTE *)CallbackContext + 40);
            v8 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
            v9 = (*(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v7 || !v7)
              && (!v8
               || (v8 & *((_QWORD *)CallbackContext + 2)) != 0
               && (v8 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
            ControlCode = 1 << Level;
            SourceId = (LPCGUID)((unsigned __int64)Level >> 5);
            v10 = (ULONG *)(*((_QWORD *)CallbackContext + 6) + 4LL * (_QWORD)SourceId);
            v11 = *v10;
            if ( v9 )
            {
              v12 = ControlCode | v11;
            }
            else
            {
              ControlCode = ~ControlCode;
              v12 = ControlCode & v11;
            }
            *v10 = v12;
            *(_QWORD *)&Level = (unsigned int)(Level + 1);
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
    }
    else
    {
      v13 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v13 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v13 - 1) / 32 + 1));
    }
    DxgkEtwEnableCallback((unsigned int)SourceId, ControlCode, Level);
  }
}
