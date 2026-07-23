/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x180004B80
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18003A554 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     RtlSetUserValueHeap @ 0x18005FD00 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x1800603FC (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     TppSetTimer @ 0x180089890 (TppSetTimer.c)
 *     RtlDebugWalkHeap @ 0x180094934 (RtlDebugWalkHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180096A80 (RtlpHpTagAllocateHeap.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x1800BC5C0 (RtlQueryUnbiasedInterruptTime.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800C3F70 (LdrpRedirectDelayloadFailure.c)
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800D9654 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     RtlCompactHeap @ 0x180103B80 (RtlCompactHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106668 (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801083AC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108530 (RtlSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010D700 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugCompactHeap @ 0x180121278 (RtlDebugCompactHeap.c)
 *     RtlAllocateHeapFast @ 0x18013FC70 (RtlAllocateHeapFast.c)
 *     RtlAllocateHeapFull @ 0x18013FDB0 (RtlAllocateHeapFull.c)
 *     RtlFreeHeapFast @ 0x18013FFE0 (RtlFreeHeapFast.c)
 *     RtlFreeHeapFull @ 0x1801400A0 (RtlFreeHeapFull.c)
 *     RtlDebugCreateTagHeap @ 0x180146CC4 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 */

ULONG __cdecl RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  ULONG result; // eax
  unsigned __int32 v2; // edx
  unsigned int v3; // r10d
  unsigned int v4; // r8d
  __int64 v5; // r9
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax

  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) == 0x70000 && (HIBYTE(Status) == 192 || HIBYTE(Status) == 128) )
    {
      return (unsigned __int16)Status;
    }
    else
    {
      v2 = Status & 0xCFFFFFFF;
      v3 = 342;
      if ( (Status & 0xF0000000) != 0xD0000000 )
        v2 = Status;
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
          if ( v7 < (unsigned __int8)byte_18018CD74[8 * v5] )
          {
            v8 = (unsigned __int16)word_18018CD76[4 * v5];
            if ( byte_18018CD75[8 * v5] == 1 )
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
        return 317;
      }
    }
  }
  return result;
}
