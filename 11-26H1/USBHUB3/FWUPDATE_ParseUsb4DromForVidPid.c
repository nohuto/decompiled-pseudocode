/*
 * XREFs of FWUPDATE_ParseUsb4DromForVidPid @ 0x14004272C
 * Callers:
 *     HUBHSM_CheckingIfAllUsb4DromDataRead @ 0x140008A00 (HUBHSM_CheckingIfAllUsb4DromDataRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E2D8 (WPP_RECORDER_SF_DDDD.c)
 */

void __fastcall FWUPDATE_ParseUsb4DromForVidPid(__int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // rcx
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v5; // rdx
  char v6; // al
  int v7; // r9d

  v1 = *(unsigned int *)(a1 + 2700);
  v3 = *(_QWORD *)(a1 + 2704);
  if ( *(_BYTE *)(v3 + 13) != 1 )
    return;
  v4 = (unsigned __int8 *)(v3 + 22);
  while ( 1 )
  {
    v5 = (unsigned __int8 *)*v4;
    if ( !(_BYTE)v5 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v7 = 44;
      goto LABEL_17;
    }
    v5 = &v5[(_QWORD)v4];
    if ( (unsigned __int64)v5 > v3 + v1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v7 = 45;
      goto LABEL_17;
    }
    v6 = v4[1];
    if ( v6 >= 0 && (v6 & 0x3F) == 9 )
      break;
    v4 = v5;
    if ( (unsigned __int64)v5 >= v3 + v1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v7 = 47;
LABEL_17:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1 + 2536),
        (_DWORD)v5,
        3,
        v7,
        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
      return;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(a1 + 2536),
      4u,
      3u,
      0x2Eu,
      (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
      *((unsigned __int16 *)v4 + 2),
      *((unsigned __int16 *)v4 + 3),
      *((unsigned __int16 *)v4 + 4),
      v4[14]);
  *(_WORD *)(a1 + 2736) = *((_WORD *)v4 + 2);
  *(_WORD *)(a1 + 2738) = *((_WORD *)v4 + 3);
  *(_WORD *)(a1 + 2740) = *((_WORD *)v4 + 4);
  *(_WORD *)(a1 + 2742) = v4[14];
  *(_BYTE *)(a1 + 2744) = 1;
}
