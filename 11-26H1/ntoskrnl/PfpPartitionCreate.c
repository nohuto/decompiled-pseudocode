/*
 * XREFs of PfpPartitionCreate @ 0x14060006C
 * Callers:
 *     PfpPartitionFindOrCreate @ 0x1407C70D8 (PfpPartitionFindOrCreate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402F0540 (ExAcquireRundownProtectionCacheAware.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     PfpPartitionInsertToGlobals @ 0x140600218 (PfpPartitionInsertToGlobals.c)
 *     PfpTraceLogPartitionId @ 0x140600380 (PfpTraceLogPartitionId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PfpPartitionAllocateState @ 0x1407C7064 (PfpPartitionAllocateState.c)
 *     PfpPartitionCleanup @ 0x1407C70A8 (PfpPartitionCleanup.c)
 *     PfpPartitionInitialize @ 0x1407C726C (PfpPartitionInitialize.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPartitionCreate(PEX_RUNDOWN_REF_CACHE_AWARE **a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 Pool2; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v8; // rdi
  int State; // ebx
  int v11; // [rsp+30h] [rbp-19h] BYREF
  int v12; // [rsp+34h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+40h] [rbp-9h] BYREF
  int *v14; // [rsp+60h] [rbp+17h]
  __int64 v15; // [rsp+68h] [rbp+1Fh]
  int *v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]

  if ( (unsigned int)dword_140E07398 > 4 && tlgKeywordOn((__int64)&dword_140E07398, 1LL) )
  {
    v11 = PfpTraceLogPartitionId(v6);
    v15 = 4LL;
    v14 = &v11;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)word_140049512, 0LL, 0LL, 3u, v13);
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = (PEX_RUNDOWN_REF_CACHE_AWARE *)Pool2;
  if ( Pool2 )
  {
    PfpPartitionInitialize(Pool2, a3, a2);
    State = PfpPartitionAllocateState(v8);
    if ( State < 0 || (State = PfpPartitionInsertToGlobals(v8), State < 0) )
    {
      PfpPartitionCleanup(v8);
      ExFreePoolWithTag(v8, 0x74506650u);
    }
    else
    {
      ExAcquireRundownProtectionCacheAware(v8[2]);
      State = 0;
      *a1 = v8;
    }
  }
  else
  {
    State = -1073741670;
  }
  if ( (unsigned int)dword_140E07398 > 4 && tlgKeywordOn((__int64)&dword_140E07398, 1LL) )
  {
    v11 = PfpTraceLogPartitionId(a3);
    v15 = 4LL;
    v14 = &v11;
    v12 = State;
    v16 = &v12;
    v17 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)word_1400495F2, 0LL, 0LL, 4u, v13);
  }
  return (unsigned int)State;
}
