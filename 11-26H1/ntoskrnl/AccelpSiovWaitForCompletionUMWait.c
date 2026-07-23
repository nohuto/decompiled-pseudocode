/*
 * XREFs of AccelpSiovWaitForCompletionUMWait @ 0x1404ADFF0
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccelpSiovWaitForCompletionUMWait(int a1, _BYTE *a2)
{
  bool v3; // r11
  unsigned __int64 i; // r9
  char v6; // al
  char v7; // al

  _EDI = 1;
  v3 = 1;
  _R8 = a2;
  for ( i = __rdtsc() + 5000000; ; v3 = __CFSHR__(i, 32) )
  {
    if ( a1 == 1 || a1 == 2 )
    {
      v6 = *a2 & 0x3F;
    }
    else
    {
      if ( a1 != 3 )
        goto LABEL_5;
      v6 = a2[6] != 1;
    }
    if ( v6 )
      return 0LL;
LABEL_5:
    if ( !v3 )
      i = __rdtsc() + 5000000;
    __asm { umonitor r8 }
    if ( a1 == 1 || a1 == 2 )
    {
      v7 = *a2 & 0x3F;
      goto LABEL_9;
    }
    if ( a1 == 3 )
      break;
LABEL_10:
    __asm { umwait  edi }
  }
  v7 = a2[6] != 1;
LABEL_9:
  if ( !v7 )
    goto LABEL_10;
  return 0LL;
}
