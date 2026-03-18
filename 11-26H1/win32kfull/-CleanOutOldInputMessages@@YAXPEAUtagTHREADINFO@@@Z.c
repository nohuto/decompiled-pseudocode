/*
 * XREFs of ?CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140094328
 * Callers:
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x140053CD4 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 * Callees:
 *     ?DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z @ 0x1400942DC (-DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 */

void __fastcall CleanOutOldInputMessages(struct tagTHREADINFO *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  __int64 *i; // rdi
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  char *v9; // rbx

  EnterCrit(1LL, 0LL);
  v3 = (_QWORD *)*((_QWORD *)a1 + 58);
  v4 = v3 + 3;
  for ( i = (__int64 *)v3[3]; i; i = v6 )
  {
    if ( *((int *)a1 + 296) <= 0 )
      goto LABEL_11;
    v6 = (__int64 *)*i;
    if ( *((_DWORD *)i + 6) == 255 )
    {
      if ( !DeleteHidDataIfAlreadyHandledByGRIB(a1, i[5]) )
      {
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 58) + 456LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_11;
      }
      *((_DWORD *)a1 + 150) = *((_DWORD *)i + 12);
      if ( (__int64 *)v3[11] == i )
        v3[11] = 0LL;
      DelQEntry(v3 + 3, i, 1LL);
    }
  }
  i = (__int64 *)v3[4];
  if ( !i )
    goto LABEL_15;
LABEL_11:
  while ( 1 )
  {
    v2 = i[1];
    if ( !v2 )
      break;
    v7 = i;
    v8 = i;
    i = (__int64 *)i[1];
    if ( *((_DWORD *)v7 + 24) == 4 && *(_DWORD *)(v2 + 96) == 4 )
    {
      v9 = (char *)v7[4];
      CoalesceUpdateKeyStateEventMsg(v2, v9, v9 + 64);
      Win32FreePool(v9);
      DelQEntry(v4, v8, 1LL);
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v2);
}
