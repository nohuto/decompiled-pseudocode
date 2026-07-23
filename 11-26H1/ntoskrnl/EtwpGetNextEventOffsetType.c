/*
 * XREFs of EtwpGetNextEventOffsetType @ 0x1404A2B38
 * Callers:
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A2A54 (EtwpInvokeEventCallback.c)
 *     EtwpCompressBuffer @ 0x1406CB9B4 (EtwpCompressBuffer.c)
 *     EtwpSendBufferToDebugger @ 0x14083286C (EtwpSendBufferToDebugger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetNextEventOffsetType(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // r11
  int v6; // r9d
  unsigned int v7; // r8d
  unsigned int v8; // eax
  bool v9; // cf
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // eax

  v3 = *a1;
  *a3 = 0;
  if ( !(_DWORD)v3 || a2 < 0x48 || a2 >= (unsigned __int64)(v3 - 4) )
    return 0LL;
  v6 = *(unsigned int *)((char *)a1 + a2);
  if ( (v6 & 0xFF000000) == 0x90000000 )
  {
    v8 = (unsigned __int16)v6;
    v7 = 15;
    v9 = (unsigned __int16)v6 < 8u;
    goto LABEL_21;
  }
  if ( (v6 & 0xFF000000) != 0xC0000000 )
    return 0LL;
  v7 = BYTE2(v6);
  if ( BYTE2(v6) > 0xDu )
  {
    if ( BYTE2(v6) == 16 || BYTE2(v6) == 17 )
    {
      if ( a2 < (unsigned __int64)(v3 - 8) )
      {
        v8 = *(unsigned __int16 *)((char *)a1 + a2 + 4);
        v9 = v8 < 0x10;
        goto LABEL_21;
      }
      return 0LL;
    }
    if ( BYTE2(v6) != 18 && BYTE2(v6) != 19 )
    {
      v11 = BYTE2(v6) - 20;
      v10 = BYTE2(v6) == 20;
      goto LABEL_18;
    }
LABEL_29:
    v8 = (unsigned __int16)v6;
    v9 = (unsigned __int16)v6 < 0x50u;
    goto LABEL_21;
  }
  switch ( BYTE2(v6) )
  {
    case 0xDu:
      goto LABEL_29;
    case 1u:
    case 2u:
      if ( a2 < (unsigned __int64)(v3 - 8) )
      {
        v8 = *(unsigned __int16 *)((char *)a1 + a2 + 4);
        v9 = v8 < 0x20;
        goto LABEL_21;
      }
      return 0LL;
    case 3u:
    case 4u:
      if ( a2 < (unsigned __int64)(v3 - 8) )
      {
        v8 = *(unsigned __int16 *)((char *)a1 + a2 + 4);
        v9 = v8 < 0x18;
        goto LABEL_21;
      }
      return 0LL;
  }
  v11 = BYTE2(v6) - 10;
  v10 = BYTE2(v6) == 10;
LABEL_18:
  if ( !v10 && v11 != 1 )
    return 0LL;
  v8 = (unsigned __int16)v6;
  v9 = (unsigned __int16)v6 < 0x30u;
LABEL_21:
  if ( v9 )
    return 0LL;
  v12 = (v8 + 7) & 0xFFFFFFF8;
  if ( v12 >= (unsigned int)v3 || v12 + a2 > (unsigned int)v3 )
    return 0LL;
  *a3 = v12;
  return v7;
}
