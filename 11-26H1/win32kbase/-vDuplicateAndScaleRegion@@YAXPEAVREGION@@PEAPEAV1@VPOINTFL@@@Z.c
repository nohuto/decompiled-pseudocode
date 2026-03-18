/*
 * XREFs of ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x140038094
 * Callers:
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x140015370 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140038140 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x140038B40 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall vDuplicateAndScaleRegion(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v6 = *a2;
  v7 = a1;
  if ( a1 )
  {
    if ( !v3 )
    {
      v6 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v6, 0x70u);
      if ( !v6 )
        return;
      *a2 = v6;
    }
    if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v6, (struct RGNOBJ *)&v7) )
    {
      RGNOBJ::vScale(&v6, a3);
      *a2 = v6;
      return;
    }
LABEL_9:
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
    *a2 = 0LL;
    return;
  }
  if ( v3 )
    goto LABEL_9;
}
