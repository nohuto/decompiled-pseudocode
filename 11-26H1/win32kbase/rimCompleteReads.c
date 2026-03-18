/*
 * XREFs of rimCompleteReads @ 0x1400987C0
 * Callers:
 *     RIMReadInput @ 0x1400979E0 (RIMReadInput.c)
 * Callees:
 *     rimProcessAnyQueuedCompleteFrames @ 0x140097328 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1400977A8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 */

__int64 __fastcall rimCompleteReads(struct RawInputManagerObject *a1, __int64 a2, int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebp
  __int64 i; // rbx
  int v9; // r8d
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 j; // rbx
  int v16; // eax

  if ( *((_DWORD *)a1 + 21) )
  {
    rimFindPausedDeviceAndCompleteRead(a1);
    v4 = 0;
    while ( 1 )
    {
      if ( v4 )
      {
        if ( v4 == 1 )
          v5 = 2;
        else
          v5 = (unsigned int)(v4 - 2) > 1 ? 0 : 60;
      }
      else
      {
        v5 = 1;
      }
      v6 = v5 & *((_DWORD *)a1 + 21);
      if ( v6 )
        break;
LABEL_9:
      if ( (unsigned int)++v4 > 2 )
        return 0LL;
    }
    for ( i = *((_QWORD *)a1 + 53); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_9;
      if ( v4 == 2 )
        break;
      if ( v6 == 1 )
      {
        v12 = 0;
      }
      else if ( v6 == 2 )
      {
        v12 = 1;
      }
      else
      {
        v12 = (v6 & 0x3C) != 0 ? 2 : 0;
      }
      if ( *(_DWORD *)(i + 48) == v12 )
        goto LABEL_19;
LABEL_20:
      ;
    }
    v9 = -__CFSHR__(*(_DWORD *)(i + 184), 8);
    if ( __CFSHR__(*(_DWORD *)(i + 184), 8) )
    {
      v13 = *(_QWORD *)(i + 456);
      v14 = *(_DWORD *)(v13 + 24);
      if ( v14 == 7 )
      {
        v10 = 8;
        goto LABEL_17;
      }
      if ( (unsigned int)(v14 - 5) <= 1 )
      {
        v10 = 4;
LABEL_17:
        if ( (v10 & *((_DWORD *)a1 + 21)) == 0 )
          goto LABEL_20;
        if ( v9 )
        {
          rimProcessAnyQueuedCompleteFrames((__int64)a1, i, v9);
          goto LABEL_20;
        }
LABEL_19:
        v11 = *(_DWORD *)(i + 168);
        if ( (v11 & 0x400) == 0 && (v11 & 0x200) != 0 )
          rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)i);
        goto LABEL_20;
      }
      if ( (unsigned int)RIMIsTouchPointerDevice(v13) )
      {
        v10 = 16;
        goto LABEL_17;
      }
    }
    else if ( *(_DWORD *)(i + 48) != 3 )
    {
      v10 = 32;
      goto LABEL_17;
    }
    v10 = 0;
    goto LABEL_17;
  }
  for ( j = *((_QWORD *)a1 + 53); j; j = *(_QWORD *)(j + 40) )
  {
    if ( (*(_DWORD *)(j + 184) & 0x80u) == 0 )
    {
      v16 = *(_DWORD *)(j + 168);
      if ( (v16 & 0x400) == 0 && (v16 & 0x200) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)j);
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames((__int64)a1, j, a3);
    }
  }
  return 0LL;
}
