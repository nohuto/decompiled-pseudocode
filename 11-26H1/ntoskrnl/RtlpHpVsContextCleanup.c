/*
 * XREFs of RtlpHpVsContextCleanup @ 0x140354A48
 * Callers:
 *     RtlpHpFixedHeapDestroy @ 0x140356090 (RtlpHpFixedHeapDestroy.c)
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x140354AF4 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x140355D68 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x1403561FC (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall RtlpHpVsContextCleanup(_WORD *a1)
{
  unsigned int SlotInfo; // eax
  unsigned __int16 *v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  _BYTE v7[256]; // [rsp+20h] [rbp-128h] BYREF

  if ( *a1 )
  {
    SlotInfo = RtlpHpVsContextGetSlotInfo(a1, v7);
    if ( SlotInfo )
    {
      v3 = (unsigned __int16 *)v7;
      v4 = SlotInfo;
      do
      {
        v5 = (unsigned __int64)&a1[32 * (unsigned __int64)*v3 + 16];
        while ( *(_QWORD *)v5 )
        {
          RtlpHpVsSubsegmentCleanup(a1, v5 ^ *(_QWORD *)v5);
          RtlpHpVsSubsegmentFree(a1, v6);
        }
        v3 += 2;
        --v4;
      }
      while ( v4 );
    }
  }
}
