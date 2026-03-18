/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x1401518AC
 * Callers:
 *     ApplyPathsModality @ 0x1401F498C (ApplyPathsModality.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140151A54 (DrvUpdateDisplayDriverParameters.c)
 */

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  char *v6; // rsi
  __int64 result; // rax
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  int updated; // ebp
  struct _devicemodeW *v15; // r14
  unsigned int j; // edx
  __int64 k; // rcx

  v6 = (char *)PALLOCMEM(220LL, 1936876615LL, a3, a4);
  if ( v6 )
  {
    v8 = 0;
    v10 = *(_QWORD *)(W32GetSessionState(v5) + 88);
    for ( i = *(_QWORD *)(v10 + 1184); i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
      {
        v15 = (struct _devicemodeW *)v6;
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 20); ++j )
        {
          v10 = 296LL * j;
          if ( *(_QWORD *)(v10 + a1 + 304)
            && !_bittest64((const signed __int64 *)(v10 + a1 + 56), 0x24u)
            && *(_DWORD *)(i + 240) == *(_DWORD *)(v10 + a1 + 72)
            && *(_DWORD *)(i + 244) == *(_DWORD *)(v10 + a1 + 76)
            && *(_DWORD *)(i + 248) == *(_DWORD *)(v10 + a1 + 80) )
          {
            v15 = *(struct _devicemodeW **)(v10 + a1 + 304);
            break;
          }
        }
        for ( k = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v10) + 88) + 1184LL); ; k = *(_QWORD *)(k + 128) )
        {
          if ( !k )
          {
            updated = -1073741811;
            goto LABEL_21;
          }
          if ( k == i )
            break;
        }
        updated = DrvUpdateDisplayDriverParameters(
                    (struct tagGRAPHICS_DEVICE *)k,
                    v15,
                    v15 == (struct _devicemodeW *)v6);
        if ( updated >= 0 )
          continue;
LABEL_21:
        WdLogSingleEntry4(2LL, i, a1, v15, v15 == (struct _devicemodeW *)v6);
        WdLogGlobalForLineNumber = 12270;
        v8 = updated;
      }
    }
    GreDeleteFastMutex(v6, v9, v11, v12);
    return v8;
  }
  else
  {
    WdLogSingleEntry2(6LL, 220LL, a1);
    result = 3221225626LL;
    WdLogGlobalForLineNumber = 12233;
  }
  return result;
}
