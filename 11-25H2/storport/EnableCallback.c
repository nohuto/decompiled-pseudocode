/*
 * XREFs of EnableCallback @ 0x1400328B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400329EC @ 0x1400329EC (sub_1400329EC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall EnableCallback(
        unsigned __int64 SourceId,
        ULONG ControlCode,
        unsigned int Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        unsigned __int16 *CallbackContext)
{
  int v7; // edi
  unsigned __int8 v9; // r9
  __int64 v10; // rdx
  bool v11; // r9
  int v12; // edx
  int *v13; // r11
  int v14; // eax
  int v15; // edx
  int v16; // eax

  v7 = MatchAnyKeyword;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        Level = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; Level < CallbackContext[21]; ++Level )
        {
          v9 = *((_BYTE *)CallbackContext + 40);
          v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
          v11 = (*(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9)
             && (!v10
              || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
          v12 = 1 << (Level & 0x1F);
          SourceId = (unsigned __int64)Level >> 5;
          v13 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * SourceId);
          v14 = *v13;
          if ( v11 )
            v15 = v14 | v12;
          else
            v15 = v14 & ~v12;
          *v13 = v15;
        }
      }
    }
    else
    {
      v16 = CallbackContext[21];
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v16 )
        memset_0(*((void **)CallbackContext + 6), 0, 4LL * ((v16 - 1) / 32 + 1));
    }
    sub_1400329EC(SourceId, ControlCode, Level, v7);
  }
}
