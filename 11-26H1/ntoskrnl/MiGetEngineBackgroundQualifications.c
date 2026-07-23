/*
 * XREFs of MiGetEngineBackgroundQualifications @ 0x1404E32EC
 * Callers:
 *     MiFindOptimalEngineToAddThread @ 0x14052203C (MiFindOptimalEngineToAddThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEngineBackgroundQualifications(__int64 *a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // r11
  __int64 v9; // rdx

  v4 = 504LL * a2;
  LODWORD(a1[7 * a2 + 6]) = 5;
  v5 = *a1;
  v6 = *(_DWORD *)(v4 + *a1 + 236);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v4 + v5 + 244);
    if ( v6 == v7 )
    {
      ++*(_DWORD *)(v4 + v5 + 512);
    }
    else if ( v7 < *(_DWORD *)(v4 + v5 + 240) )
    {
      v8 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v4 + v5 + 368) + 56LL) + qword_140E2D838 + 376);
      v9 = *(_QWORD *)(168LL * a2 + v8 + 144);
      if ( *((_BYTE *)a1 + 176) && (unsigned __int64)(v9 + a1[23]) > *(_QWORD *)(v8 + 576) )
      {
        ++*(_DWORD *)(v4 + v5 + 524);
      }
      else
      {
        if ( !*((_BYTE *)a1 + 177) || (unsigned __int64)(v9 + a1[24]) <= *(_QWORD *)(v8 + 584) || !a2 )
          return 1LL;
        ++*(_DWORD *)(v4 + v5 + 520);
      }
    }
  }
  return 0LL;
}
