/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x140031BF4
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140031C3C (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiCheckYieldExitCondition(__int64 a1, unsigned __int64 a2, char *a3)
{
  char v3; // r9
  __int64 v5; // r8

  v3 = 0;
  if ( *(_BYTE *)(a1 + 2144) )
  {
    v5 = *(_QWORD *)(a1 + 2120);
    if ( v5 )
    {
      if ( a2 > *(_QWORD *)(a1 + 2128) + v5 )
      {
        VidSchiStopNodeYield((struct _VIDSCH_NODE *)a1);
        v3 = 1;
      }
    }
  }
  *a3 = v3;
}
