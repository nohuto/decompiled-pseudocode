/*
 * XREFs of EtwpTiFillVadEventWrite @ 0x14048BBC8
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x140A88B10 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpTiFillZeroVad @ 0x14048BC90 (EtwpTiFillZeroVad.c)
 *     EtwpTiFillVad @ 0x14048BCF8 (EtwpTiFillVad.c)
 */

NTSTATUS __fastcall EtwpTiFillVadEventWrite(
        PEVENT_DATA_DESCRIPTOR UserData,
        __int64 UserDataCount,
        char a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        PCEVENT_DESCRIPTOR EventDescriptor)
{
  unsigned int v7; // ebx
  ULONG i; // r11d
  int v13; // eax
  int v14; // r11d

  v7 = 0;
  for ( i = UserDataCount; v7 < a6; ++v7 )
  {
    if ( a3 && _bittest(&a5, v7) )
      v13 = EtwpTiFillVad(&UserData[i], a4 + ((unsigned __int64)v7 << 6));
    else
      v13 = EtwpTiFillZeroVad(&UserData[i], UserDataCount);
    i = v13 + v14;
  }
  return EtwWriteEx(EtwThreatIntProvRegHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, i, UserData);
}
