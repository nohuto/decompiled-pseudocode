/*
 * XREFs of McGenControlCallbackV2 @ 0x1401135C0
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x140113720 (W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 *     memset @ 0x140243000 (memset.c)
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
  ULONG v8; // ebx
  unsigned __int8 v10; // r9
  __int64 v11; // rdx
  bool v12; // r9
  int v13; // edx
  ULONG *v14; // r11
  ULONG v15; // eax
  int v16; // eax
  LPCGUID v17; // [rsp+20h] [rbp-28h] BYREF
  ULONG v18; // [rsp+28h] [rbp-20h]
  ULONGLONG v19; // [rsp+30h] [rbp-18h]

  v8 = ControlCode;
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
            v10 = *((_BYTE *)CallbackContext + 40);
            v11 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
            v12 = (*(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v10 || !v10)
               && (!v11
                || (v11 & *((_QWORD *)CallbackContext + 2)) != 0
                && (v11 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
            v13 = 1 << (Level & 0x1F);
            v14 = (ULONG *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)Level >> 5));
            v15 = *v14;
            if ( v12 )
              *(_QWORD *)&ControlCode = v15 | v13;
            else
              *(_QWORD *)&ControlCode = v15 & ~v13;
            *v14 = ControlCode;
            *(_QWORD *)&Level = (unsigned int)(Level + 1);
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
      else if ( ControlCode > 2 )
      {
        return;
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
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v16 - 1) / 32 + 1));
    }
    v17 = SourceId;
    v18 = v8;
    v19 = MatchAnyKeyword;
    W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(&v17, *(_QWORD *)&ControlCode, Level);
  }
}
