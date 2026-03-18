/*
 * XREFs of ?NotifyLogon@@YAHK@Z @ 0x1402294F8
 * Callers:
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14025D994 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1402DF8D4 (-EndShutdown@@YAXJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NotifyLogon(unsigned int a1)
{
  unsigned int v1; // ebx

  if ( (a1 & 0x10000) != 0 )
  {
    return 0;
  }
  else
  {
    v1 = 1;
    PostWinlogonMessage(1LL, a1);
  }
  return v1;
}
