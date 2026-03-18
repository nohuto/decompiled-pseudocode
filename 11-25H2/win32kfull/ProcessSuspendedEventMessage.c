/*
 * XREFs of ProcessSuspendedEventMessage @ 0x14019D9D8
 * Callers:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 * Callees:
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x14019DAD4 (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 */

__int64 __fastcall ProcessSuspendedEventMessage(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r11
  int v11; // eax

  if ( a2 == 9 && a4 < 0x400 )
  {
    v8 = ((unsigned __int16)MessageTable[a4] >> 10) & 7;
    if ( !v8 )
      return 0LL;
    if ( v8 >= 2 )
    {
      if ( a3 )
        v9 = *a3;
      else
        v9 = 0LL;
      v10 = 0LL;
      while ( 1 )
      {
        if ( !v10 )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 32LL);
          goto LABEL_15;
        }
        do
        {
          v10 = *(_QWORD *)(v10 + 8);
LABEL_15:
          if ( !v10 )
            break;
          v11 = *(_DWORD *)(v10 + 96);
        }
        while ( v11 && v11 != 9 || *(_DWORD *)(v10 + 24) != a4 || *(_QWORD *)(v10 + 16) != v9 );
        if ( !v10 )
          break;
        if ( *(_DWORD *)(v10 + 96) == 9
          && *(_QWORD *)(v10 + 104) == a1
          && !(unsigned int)ProcessComplexCoalescence(
                              v8,
                              a4,
                              a5,
                              a6,
                              (unsigned __int64 *)(v10 + 32),
                              (__int64 *)(v10 + 40)) )
        {
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
