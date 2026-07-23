/*
 * XREFs of RtlHotPatchSynchronizationRequired @ 0x140725820
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x14087994C (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     RtlGetHotPatchSize @ 0x1407257D0 (RtlGetHotPatchSize.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x140725A0C (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlHotPatchSynchronizationRequired(
        int a1,
        _DWORD *a2,
        int *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        PRTL_BITMAP BitMapHeader,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        _BYTE *a14)
{
  unsigned int HotPatchSize; // esi
  int *v15; // r11
  int v17; // eax
  int v18; // edx
  bool v19; // cl
  int v20; // ebx
  bool v21; // al
  int v22; // edx
  int v23; // edi
  unsigned int v24; // eax
  __int64 v25; // r11
  ULONG v27; // edx
  ULONG ClearBitsAndSet; // eax
  int v29; // ecx

  HotPatchSize = 0;
  v15 = a3;
  *a14 = 0;
  if ( a3 )
    HotPatchSize = RtlGetHotPatchSize(a2);
  while ( v15 )
  {
    v17 = *v15;
    if ( !*v15 )
      break;
    v18 = *v15;
    v19 = 0;
    v20 = *v15++ & 0xFFF;
    v21 = v17 >= 0;
    if ( (v18 & 0xFC000) == 0x1C000 )
      v19 = v21;
    if ( v19 )
    {
      while ( v20 )
      {
        v22 = 0;
        v23 = a1 + *v15;
        if ( HotPatchSize != 2 )
          v22 = (_DWORD)v15 + 8;
        v24 = RtlpCheckFunctionPatchAppliedInOriginalImage(a1 + *v15, v22, (_DWORD)a3, a4, a6);
        LODWORD(a3) = v24;
        if ( v24 == -1 )
          return 3221225595LL;
        if ( v24 == -2 )
        {
          if ( (v23 & 7) == 7 )
            goto LABEL_25;
        }
        else if ( a7 )
        {
          LODWORD(a3) = v24 & 7;
          *((_BYTE *)BitMapHeader->Buffer + ((unsigned __int64)v24 >> 3)) |= 1 << (v24 & 7);
        }
        --v20;
        v15 = (int *)(v25 + 4LL * HotPatchSize);
      }
    }
    else
    {
      v15 += v20 * HotPatchSize;
    }
  }
  if ( a7 )
  {
    v27 = 0;
    while ( 1 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, v27);
      v27 = ClearBitsAndSet;
      if ( ClearBitsAndSet == -1 )
        break;
      v29 = *(_DWORD *)(a7 + 8LL * ClearBitsAndSet);
      if ( v29 && (((_BYTE)a1 + (_BYTE)v29) & 7) == 7 )
      {
LABEL_25:
        *a14 = 1;
        return 0LL;
      }
    }
  }
  return 0LL;
}
