/*
 * XREFs of ndisIfQueryLoopbackObject @ 0x14015CB20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x14003E370 (WPP_RECORDER_SF_DqL.c)
 */

__int64 __fastcall ndisIfQueryLoopbackObject(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v9; // [rsp+20h] [rbp-28h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, 0x15u, v9);
  if ( !a1 )
    return 3221225485LL;
  switch ( v6 )
  {
    case 0x10285u:
      if ( *a3 < 8u )
        return 3221291030LL;
LABEL_15:
      *a3 = 8;
      *(_QWORD *)a4 = 0x40000000LL;
      break;
    case 0x10283u:
      if ( *a3 < 4u )
        return 3221291030LL;
      *a3 = 4;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 1112);
      break;
    case 0x10288u:
      if ( *a3 < 4u )
        return 3221291030LL;
      *a3 = 4;
      *(_DWORD *)a4 = *(_DWORD *)(a1 + 1192);
      break;
    default:
      if ( v6 > 0x10280 )
      {
        if ( v6 <= 0x20106 )
        {
          if ( v6 != 131334 )
          {
            a2 = 0x140000000uLL;
            switch ( v6 )
            {
              case 0x10281u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = *(_QWORD *)(a1 + 1352);
                break;
              case 0x10282u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = *(_QWORD *)(a1 + 1360);
                break;
              case 0x10284u:
                if ( *a3 >= 8u )
                  goto LABEL_15;
                return 3221291030LL;
              case 0x10287u:
                if ( *a3 < 0xD8u )
                  return 3221291030LL;
                *a3 = 216;
                *(_DWORD *)a4 = *(_DWORD *)(a1 + 1112);
                *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 1116);
                *(_DWORD *)(a4 + 8) = 1;
                *(_DWORD *)(a4 + 12) = 2;
                *(_QWORD *)(a4 + 24) = 0x40000000LL;
                *(_QWORD *)(a4 + 32) = 0x40000000LL;
                *(_OWORD *)(a4 + 64) = 0LL;
                *(_OWORD *)(a4 + 80) = 0LL;
                *(_OWORD *)(a4 + 96) = 0LL;
                *(_OWORD *)(a4 + 112) = 0LL;
                *(_OWORD *)(a4 + 128) = 0LL;
                *(_OWORD *)(a4 + 144) = 0LL;
                *(_OWORD *)(a4 + 160) = 0LL;
                *(_OWORD *)(a4 + 176) = 0LL;
                *(_OWORD *)(a4 + 192) = 0LL;
                *(_DWORD *)(a4 + 16) = *(_DWORD *)(a1 + 1120);
                *(_BYTE *)(a4 + 20) = *(_BYTE *)(a1 + 1216);
                *(_BYTE *)(a4 + 21) = *(_BYTE *)(a1 + 1217);
                *(_QWORD *)(a4 + 40) = *(_QWORD *)(a1 + 1352);
                *(_QWORD *)(a4 + 48) = *(_QWORD *)(a1 + 1360);
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_DWORD *)(a4 + 208) = *(_DWORD *)(a1 + 576);
                *(_DWORD *)(a4 + 212) = *(_DWORD *)(a1 + 1416);
                break;
              case 0x1028Au:
                if ( *a3 < 4u )
                  return 3221291030LL;
                *a3 = 4;
                *(_DWORD *)a4 = 1;
                break;
              case 0x1028Cu:
                if ( *a3 < 4u )
                  return 3221291030LL;
                *a3 = 4;
                *(_DWORD *)a4 = 2;
                break;
              default:
                goto LABEL_42;
            }
            break;
          }
          if ( *a3 >= 0x90u )
          {
            *a3 = 144;
            *(_OWORD *)a4 = 0LL;
            *(_OWORD *)(a4 + 16) = 0LL;
            *(_OWORD *)(a4 + 32) = 0LL;
            *(_OWORD *)(a4 + 48) = 0LL;
            *(_OWORD *)(a4 + 64) = 0LL;
            *(_OWORD *)(a4 + 80) = 0LL;
            *(_OWORD *)(a4 + 96) = 0LL;
            *(_OWORD *)(a4 + 112) = 0LL;
            *(_OWORD *)(a4 + 128) = 0LL;
            break;
          }
          return 3221291030LL;
        }
LABEL_42:
        if ( *a3 >= 8u )
        {
          *a3 = 8;
          *(_QWORD *)a4 = 0LL;
          break;
        }
        return 3221291030LL;
      }
      if ( v6 == 66176 )
      {
        if ( !*a3 )
          return 3221291030LL;
        *a3 = 1;
        *(_BYTE *)a4 = *(_BYTE *)(a1 + 1216);
      }
      else
      {
        if ( v6 != 65798 )
          goto LABEL_42;
        if ( *a3 < 4u )
          return 3221291030LL;
        *a3 = 4;
        *(_DWORD *)a4 = *(_DWORD *)(a1 + 1120);
      }
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, 0x16u, v9);
  return 0LL;
}
