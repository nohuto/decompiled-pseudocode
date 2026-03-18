/*
 * XREFs of NtGdiMakeObjectXferable @ 0x1400D6FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400D79B4 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400D7AB4 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1401FFD54 (-bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z.c)
 */

__int64 __fastcall NtGdiMakeObjectXferable(HDC a1, unsigned int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  SEMOBJ<20>::SEMOBJ<20>(&v7);
  if ( (BYTE2(a1) & 0x1F) == 1 && (unsigned int)XFERDCOBJ::bPrepareDCForXfer(a1, a2) )
  {
    LOBYTE(v4) = BYTE2(a1) & 0x1F;
    v5 = HmgMarkXferable(a1, v4);
    if ( v7 )
      GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
    return v5;
  }
  else
  {
    if ( v7 )
      GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
    return 0LL;
  }
}
