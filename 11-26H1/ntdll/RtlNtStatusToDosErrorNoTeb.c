/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x180019AA0
 * Callers:
 *     RtlSetUserValueHeap @ 0x1800145D0 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180014940 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x180014CCC (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x1800156C0 (RtlValidateHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004FFD4 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     TppSetTimer @ 0x180069440 (TppSetTimer.c)
 *     RtlDebugWalkHeap @ 0x180074344 (RtlDebugWalkHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180097930 (RtlpHpTagAllocateHeap.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x1800BEB60 (RtlQueryUnbiasedInterruptTime.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800C67B0 (LdrpRedirectDelayloadFailure.c)
 *     RtlGetUserInfoHeap @ 0x1800DC3A0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800DC6E4 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FF818 (RtlDebugFreeHeap.c)
 *     RtlCompactHeap @ 0x180104800 (RtlCompactHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106C68 (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108A0C (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108B90 (RtlSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010DBB0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugCompactHeap @ 0x1801214DC (RtlDebugCompactHeap.c)
 *     RtlAllocateHeapFast @ 0x18013FD70 (RtlAllocateHeapFast.c)
 *     RtlAllocateHeapFull @ 0x18013FEB0 (RtlAllocateHeapFull.c)
 *     RtlFreeHeapFast @ 0x1801400E0 (RtlFreeHeapFast.c)
 *     RtlFreeHeapFull @ 0x1801401A0 (RtlFreeHeapFull.c)
 *     RtlDebugCreateTagHeap @ 0x180146E14 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 */

__int64 __fastcall RtlNtStatusToDosErrorNoTeb(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // r10d
  unsigned int v4; // r8d
  __int64 v5; // r9
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax

  if ( !a1 )
    return 0LL;
  if ( a1 == 259 )
    return 997LL;
  result = a1;
  if ( (a1 & 0x20000000) == 0 )
  {
    if ( (a1 & 0xFF0000) == 0x70000 && (HIBYTE(a1) == 192 || HIBYTE(a1) == 128) )
    {
      return (unsigned __int16)a1;
    }
    else
    {
      v2 = a1 & 0xCFFFFFFF;
      v3 = 341;
      if ( (a1 & 0xF0000000) != 0xD0000000 )
        v2 = a1;
      v4 = 0;
      do
      {
        v5 = (v4 + v3) >> 1;
        v6 = RtlpRunTable[2 * v5];
        v7 = v2 - v6;
        if ( v2 < v6 )
        {
          v3 = v5 - 1;
        }
        else
        {
          if ( v7 < (unsigned __int8)byte_18018DD84[8 * v5] )
          {
            v8 = (unsigned __int16)word_18018DD86[4 * v5];
            if ( byte_18018DD85[8 * v5] == 1 )
              return (unsigned __int16)RtlpStatusTable[v7 + v8];
            else
              return (unsigned __int16)RtlpStatusTable[2 * v7 + v8] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v8] << 16);
          }
          v4 = v5 + 1;
        }
      }
      while ( v4 <= v3 );
      if ( (v2 & 0xFFFF0000) == 0xC0010000 )
      {
        return (unsigned __int16)v2;
      }
      else
      {
        DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v2);
        DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
        DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
        return 317LL;
      }
    }
  }
  return result;
}
