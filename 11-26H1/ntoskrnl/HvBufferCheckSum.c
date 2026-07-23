/*
 * XREFs of HvBufferCheckSum @ 0x1408B3F10
 * Callers:
 *     CmpVerifyLogRecord @ 0x140864BDC (CmpVerifyLogRecord.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmLogTmRmAction @ 0x1408B5494 (CmLogTmRmAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvBufferCheckSum(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  __int64 v3; // rax
  unsigned int v4; // edx
  int v5; // r9d
  unsigned __int8 *v6; // r11
  _DWORD *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r8d

  v2 = 0;
  v3 = a2 >> 2;
  v4 = a2 & 3;
  v5 = 0;
  v6 = (unsigned __int8 *)(a1 + 4 * v3);
  if ( (unsigned int)v3 > 1 )
  {
    v7 = (_DWORD *)(a1 + 4);
    v8 = (unsigned int)(v3 - 1);
    do
    {
      v5 ^= *v7++;
      --v8;
    }
    while ( v8 );
  }
  if ( v4 )
  {
    v9 = v4;
    do
    {
      v10 = *v6++;
      v2 = v10 + (v2 << 8);
      --v9;
    }
    while ( v9 );
  }
  v11 = v5 ^ v2;
  if ( v11 == -1 )
  {
    return (unsigned int)-2;
  }
  else if ( !v11 )
  {
    return 1;
  }
  return v11;
}
