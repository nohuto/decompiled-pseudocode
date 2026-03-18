/*
 * XREFs of McGenControlCallbackV2 @ 0x14005AA90
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x14005ABCC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
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
  unsigned int v7; // esi
  unsigned int v10; // r8d
  unsigned __int8 v11; // r9
  __int64 v12; // rdx
  bool v13; // r11
  int v14; // edx
  int *v15; // r9
  int v16; // eax
  int v17; // eax
  int v18; // eax

  v7 = Level;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        v10 = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = v7;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v10 < *((unsigned __int16 *)CallbackContext + 21); ++v10 )
        {
          v11 = *((_BYTE *)CallbackContext + 40);
          v12 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v10);
          v13 = (*(_BYTE *)(v10 + *((_QWORD *)CallbackContext + 8)) <= v11 || !v11)
             && (!v12
              || (v12 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v12 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
          v14 = 1 << v10;
          v15 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v10 >> 5));
          v16 = *v15;
          if ( v13 )
            v17 = v14 | v16;
          else
            v17 = ~v14 & v16;
          *v15 = v17;
        }
      }
    }
    else
    {
      v18 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v18 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v18 - 1) / 32 + 1));
    }
    DxgkEtwEnableCallback(ControlCode, v7, MatchAnyKeyword);
  }
}
