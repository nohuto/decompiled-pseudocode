/*
 * XREFs of VrpDereferenceDiffHiveEntryWithLock @ 0x140B060EC
 * Callers:
 *     VrpDereferenceDiffHiveEntry @ 0x14093BCC0 (VrpDereferenceDiffHiveEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDereferenceDiffHiveEntryWithLock(volatile signed __int64 *P)
{
  __int64 v2; // rax
  volatile signed __int64 *i; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h]

  v2 = _InterlockedDecrement64(P + 2);
  if ( v2 <= 0 )
  {
    if ( v2 )
      __fastfail(0xEu);
    v4 = P[1] & (-1LL << (BYTE4(gLoadedDiffHivesLock.Header.WaitListHead.Blink) & 0x1F));
    for ( i = (volatile signed __int64 *)((char *)gLoadedDiffHivesLock.SListFaultAddress
                                        + 8
                                        * (((HIDWORD(gLoadedDiffHivesLock.Header.WaitListHead.Blink) >> 5) - 1) & (HIBYTE(v4) + 37 * (BYTE6(v4) + 37 * (BYTE5(v4) + 37 * (BYTE4(v4) + 37 * (BYTE3(v4) + 374026047 + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * (unsigned __int8)v4)))))))));
          (*i & 1) == 0;
          i = (volatile signed __int64 *)*i )
    {
      if ( *(volatile signed __int64 **)i == P )
      {
        *i = *P;
        --LODWORD(gLoadedDiffHivesLock.Header.WaitListHead.Blink);
        *P |= 0x8000000000000002uLL;
        break;
      }
    }
    ExFreePoolWithTag((PVOID)P, 0x67655256u);
  }
}
