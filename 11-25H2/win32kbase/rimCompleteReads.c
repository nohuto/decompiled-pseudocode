/*
 * XREFs of rimCompleteReads @ 0x1400357E4
 * Callers:
 *     RIMReadInput @ 0x140034A90 (RIMReadInput.c)
 * Callees:
 *     RimInputTypeToDeviceType @ 0x1400357C0 (RimInputTypeToDeviceType.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x140036768 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140183228 (rimProcessAnyQueuedCompleteFrames.c)
 */

__int64 __fastcall rimCompleteReads(struct RawInputManagerObject *a1)
{
  int v2; // esi
  int v3; // eax
  int v4; // r15d
  __int64 i; // rbx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  __int64 j; // rbx
  int v11; // eax

  if ( *((_DWORD *)a1 + 21) )
  {
    rimFindPausedDeviceAndCompleteRead(a1);
    v2 = 0;
    while ( 1 )
    {
      if ( v2 )
      {
        if ( v2 == 1 )
          v3 = 2;
        else
          v3 = (unsigned int)(v2 - 2) > 1 ? 0 : 60;
      }
      else
      {
        v3 = 1;
      }
      v4 = v3 & *((_DWORD *)a1 + 21);
      if ( v4 )
        break;
LABEL_9:
      if ( (unsigned int)++v2 > 2 )
        return 0LL;
    }
    for ( i = *((_QWORD *)a1 + 53); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_9;
      if ( v2 != 2 )
      {
        if ( *(_DWORD *)(i + 48) != (unsigned int)RimInputTypeToDeviceType(v4) )
          continue;
        goto LABEL_19;
      }
      if ( !__CFSHR__(*(_DWORD *)(i + 184), 8) )
        break;
      v9 = *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL);
      if ( v9 == 7 )
      {
        v7 = 8;
        goto LABEL_17;
      }
      if ( (unsigned int)(v9 - 5) > 1 )
      {
        if ( (unsigned int)(v9 - 1) <= 3 )
        {
          v7 = 16;
          goto LABEL_17;
        }
        goto LABEL_30;
      }
      v7 = 4;
LABEL_17:
      if ( (v7 & *((_DWORD *)a1 + 21)) == 0 )
        continue;
      if ( __CFSHR__(*(_DWORD *)(i + 184), 8) )
      {
        rimProcessAnyQueuedCompleteFrames(a1);
        continue;
      }
LABEL_19:
      v8 = *(_DWORD *)(i + 168);
      if ( (v8 & 0x400) == 0 && (v8 & 0x200) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)i);
    }
    if ( *(_DWORD *)(i + 48) != 3 )
    {
      v7 = 32;
      goto LABEL_17;
    }
LABEL_30:
    v7 = 0;
    goto LABEL_17;
  }
  for ( j = *((_QWORD *)a1 + 53); j; j = *(_QWORD *)(j + 40) )
  {
    if ( (*(_DWORD *)(j + 184) & 0x80u) == 0 )
    {
      v11 = *(_DWORD *)(j + 168);
      if ( (v11 & 0x400) == 0 && (v11 & 0x200) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)j);
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames(a1);
    }
  }
  return 0LL;
}
