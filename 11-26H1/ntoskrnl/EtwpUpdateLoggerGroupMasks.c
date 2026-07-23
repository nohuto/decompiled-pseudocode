/*
 * XREFs of EtwpUpdateLoggerGroupMasks @ 0x140AB0CE0
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     EtwpUpdateSelectedGroupMasks @ 0x1404C6488 (EtwpUpdateSelectedGroupMasks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpGetFlagExtension @ 0x140AB1FF0 (EtwpGetFlagExtension.c)
 */

__int64 __fastcall EtwpUpdateLoggerGroupMasks(int *a1, __int64 a2)
{
  int *v3; // r8
  __int64 v4; // r9
  _WORD *FlagExtension; // rax
  __int64 v7; // r11
  unsigned __int16 v8; // cx
  _DWORD v9[6]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h]
  _OWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( a2 )
  {
    FlagExtension = (_WORD *)EtwpGetFlagExtension(a2, 1LL);
    if ( FlagExtension )
    {
      v8 = 4 * *FlagExtension - 4;
      if ( v8 > 0x20u )
        return 3221225485LL;
      memmove(v11, FlagExtension + 2, v8);
    }
    else if ( *(int *)(v7 + 72) >= 0 )
    {
      LODWORD(v11[0]) = *(_DWORD *)(v7 + 72);
    }
  }
  v9[1] = 0x3FFFFFFF;
  v9[0] = 0x1FFFFFFF;
  v3 = EtwpEnableFlagMap;
  v9[2] = 1610612735;
  v4 = 8LL;
  v9[3] = 0x7FFFFFFF;
  v9[4] = -1610612737;
  v9[5] = -1073741825;
  v10 = -536870913LL;
  do
  {
    if ( (*v3 & *((_DWORD *)v11 + ((unsigned __int64)(unsigned int)*v3 >> 29)) & 0x1FFFFFFF) != 0 )
      *((_DWORD *)v11 + ((unsigned __int64)(unsigned int)v3[1] >> 29)) |= v3[1] & 0x1FFFFFFF;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  return EtwpUpdateSelectedGroupMasks(a1, v9, v11, 0LL);
}
