/*
 * XREFs of RtlpHpLfhBucketCleanup @ 0x14063C62C
 * Callers:
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhBucketGetSlotInfo @ 0x140459290 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpLfhOwnerCleanup @ 0x14063CA5C (RtlpHpLfhOwnerCleanup.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhBucketCleanup(__int64 a1, unsigned __int8 *a2)
{
  unsigned int SlotInfo; // eax
  unsigned __int16 *v5; // rdi
  __int64 v6; // rsi
  _WORD v8[128]; // [rsp+20h] [rbp-128h] BYREF

  SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, a2, v8);
  if ( SlotInfo )
  {
    v5 = v8;
    v6 = SlotInfo;
    do
    {
      RtlpHpLfhOwnerCleanup(a1, a1 + ((unsigned __int64)*v5 << 6));
      v5 += 2;
      --v6;
    }
    while ( v6 );
  }
  return RtlpHpLfhOwnerCleanup(a1, a2);
}
