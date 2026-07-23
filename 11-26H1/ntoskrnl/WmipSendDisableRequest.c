/*
 * XREFs of WmipSendDisableRequest @ 0x140A0A2CC
 * Callers:
 *     WmipDisableCollectOrEvent @ 0x140A0CFF8 (WmipDisableCollectOrEvent.c)
 * Callees:
 *     WmipDoDisableRequest @ 0x140A0A320 (WmipDoDisableRequest.c)
 */

__int64 __fastcall WmipSendDisableRequest(_DWORD *a1, char a2)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  unsigned int v7; // edx
  __int64 v8; // rdx

  result = 0LL;
  if ( a2 )
  {
    v4 = a1[22];
    v5 = 2;
    if ( !v4 )
      return result;
    v6 = v4 - 1;
    a1[22] = v6;
  }
  else
  {
    --a1[23];
    v5 = 4;
    v6 = a1[23];
  }
  if ( !v6 )
  {
    v7 = a1[4];
    if ( (v7 & v5) == 0 )
    {
      v8 = v5 | v7;
      a1[4] = v8;
      LOBYTE(v8) = a2;
      return WmipDoDisableRequest(a1, v8);
    }
  }
  return result;
}
