/*
 * XREFs of Isoch_Stage_EstimateRequiredSegments @ 0x140029F00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDqDDD @ 0x14004D688 (WPP_RECORDER_SF_DDqDDD.c)
 */

__int64 __fastcall Isoch_Stage_EstimateRequiredSegments(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r11
  int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // [rsp+20h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 40);
  v5 = (((unsigned __int64)*(unsigned int *)(v2 + 160) + 8190) >> 12) + 1;
  if ( !_bittest64((const signed __int64 *)(v3 + 736), 0x2Fu)
    || (v11 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v11 + 20) != 1)
    || !*(_DWORD *)(v11 + 40) )
  {
    v5 = ((unsigned __int64)*(unsigned int *)(v2 + 160) + 8190) >> 12;
  }
  v6 = v5 + 1;
  if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 2LL) == 56 )
  {
LABEL_4:
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 64) + 40LL) < *(_DWORD *)(a2 + 52) )
      v6 += 2;
  }
  else
  {
    switch ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 2LL) )
    {
      case '9':
      case ':':
        break;
      default:
        goto LABEL_4;
    }
  }
  v7 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 440) = v6;
  v8 = v6 * (*(_DWORD *)(a2 + 44) - *(_DWORD *)(a2 + 40) + 1);
  if ( v8 <= v7 - *(_DWORD *)(a1 + 192) - (v7 - *(_DWORD *)(a1 + 192)) % v6 )
    v9 = 0;
  else
    v9 = (v8 - 1 + -(v7 % v6) - (-*(_DWORD *)(a1 + 192) - (v7 - *(_DWORD *)(a1 + 192)) % v6)) / (v7 - v7 % v6);
  if ( _bittest64((const signed __int64 *)(v3 + 736), 0x2Fu) )
  {
    v12 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v12 + 20) == 1 )
    {
      if ( *(_DWORD *)(v12 + 40) )
        ++v9;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(v2 + 80),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      v6,
      a2,
      v13,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(v2 + 152),
      a2,
      v9,
      v6,
      *(_BYTE *)(a2 + 44) - *(_BYTE *)(a2 + 40) + 1);
  return v9;
}
