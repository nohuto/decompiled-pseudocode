/*
 * XREFs of EtwpInitializeCompression @ 0x1404F3290
 * Callers:
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 * Callees:
 *     EtwpFreePlaceholderList @ 0x1404305BC (EtwpFreePlaceholderList.c)
 *     RtlCompressWorkSpaceSizeXpressLz @ 0x1404F3410 (RtlCompressWorkSpaceSizeXpressLz.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // ebp
  ULONG_PTR v6; // rcx
  __int64 Pool2; // rax
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 1436) = 5;
  *(_DWORD *)(a1 + 1440) = 3;
  *(_QWORD *)(a1 + 1384) = EtwpCompressionProc;
  *(_QWORD *)(a1 + 1368) = 0LL;
  *(_QWORD *)(a1 + 1392) = a1;
  v8 = 0;
  v9 = 0;
  result = RtlCompressWorkSpaceSizeXpressLz(0LL, &v8, &v9);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( !v8 || (v4 = ExAllocatePool2(0x40uLL), (*(_QWORD *)(a1 + 1424) = v4) != 0LL) )
    {
      if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
      {
        *(_QWORD *)(a1 + 1408) = 0LL;
        *(_QWORD *)(a1 + 1480) = EtwpCompressionDpc;
        *(_DWORD *)(a1 + 1456) = 275;
        v5 = 0;
        *(_QWORD *)(a1 + 1488) = a1;
        *(_QWORD *)(a1 + 1512) = 0LL;
        *(_QWORD *)(a1 + 1472) = 0LL;
        *(_QWORD *)(a1 + 1448) = 0LL;
        while ( v5 < *(_DWORD *)(a1 + 1436) )
        {
          v6 = 256LL;
          if ( *(_DWORD *)(a1 + 300) != 1 )
            v6 = 64LL;
          Pool2 = ExAllocatePool2(v6);
          if ( !Pool2 )
          {
            v3 = -1073741801;
            ExFreePoolWithTag(*(PVOID *)(a1 + 1424), 0);
            EtwpFreePlaceholderList(a1);
            return v3;
          }
          *(_DWORD *)(Pool2 + 44) = 6;
          ++v5;
          *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 1448);
          *(_QWORD *)(a1 + 1448) = Pool2 + 32;
        }
        _InterlockedExchange((volatile __int32 *)(a1 + 1432), 1);
      }
      return v3;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
