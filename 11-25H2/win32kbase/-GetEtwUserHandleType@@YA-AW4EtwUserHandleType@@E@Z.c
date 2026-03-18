/*
 * XREFs of ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x14003AEB0
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x14003ACDC (HMChangeOwnerPheProcessWorker.c)
 *     HMCreateHandleForObject @ 0x14003B950 (HMCreateHandleForObject.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 *     HMChangeOwnerThreadWorker @ 0x1401A5428 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetEtwUserHandleType(unsigned __int8 a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 != 16 )
  {
    if ( a1 == 255 )
    {
      return 255LL;
    }
    else
    {
      switch ( a1 )
      {
        case 0u:
          result = 0LL;
          break;
        case 1u:
          result = 1LL;
          break;
        case 2u:
          result = 2LL;
          break;
        case 3u:
          result = 3LL;
          break;
        case 4u:
          result = 4LL;
          break;
        case 5u:
          result = 5LL;
          break;
        case 6u:
          result = 6LL;
          break;
        case 7u:
          result = 7LL;
          break;
        case 8u:
          result = 8LL;
          break;
        case 9u:
          result = 9LL;
          break;
        case 0xAu:
          result = 10LL;
          break;
        case 0xBu:
          result = 11LL;
          break;
        case 0xCu:
          result = 12LL;
          break;
        case 0xDu:
          result = 13LL;
          break;
        case 0xEu:
          result = 14LL;
          break;
        case 0xFu:
          result = 15LL;
          break;
        case 0x11u:
          result = 17LL;
          break;
        case 0x12u:
          result = 18LL;
          break;
        case 0x13u:
          result = 19LL;
          break;
        case 0x14u:
          result = 20LL;
          break;
        case 0x15u:
          result = 21LL;
          break;
        case 0x16u:
          result = 22LL;
          break;
        case 0x17u:
          result = 23LL;
          break;
        case 0x18u:
          result = 24LL;
          break;
        default:
          result = 0xFFFFFFFFLL;
          break;
      }
    }
  }
  return result;
}
