/*
 * XREFs of PfDeletePartition @ 0x1407C9F70
 * Callers:
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140484BD0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PfpPartitionFromParent @ 0x14049C820 (PfpPartitionFromParent.c)
 *     PfpPartitionRemoveFromGlobals @ 0x140602DA8 (PfpPartitionRemoveFromGlobals.c)
 *     PfpTraceLogPfPartitionId @ 0x140602E4C (PfpTraceLogPfPartitionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PfpPartitionCleanup @ 0x1407CA108 (PfpPartitionCleanup.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall PfDeletePartition(__int64 a1)
{
  __int64 *v2; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v3; // rbx
  int v4; // esi
  int v6; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+38h] [rbp-38h] BYREF
  int *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]

  v2 = (__int64 *)PfpPartitionFromParent(a1);
  v3 = (PEX_RUNDOWN_REF_CACHE_AWARE *)v2;
  if ( v2 )
  {
    v4 = PfpTraceLogPfPartitionId(v2);
    if ( (unsigned int)dword_140E07398 > 4 && tlgKeywordOn((__int64)&dword_140E07398, 1LL) )
    {
      v6 = v4;
      v8 = &v6;
      v9 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)byte_140049AA9, 0LL, 0LL, 3u, v7);
    }
    ExWaitForRundownProtectionReleaseCacheAware(v3[2]);
    PfpPartitionRemoveFromGlobals((__int64)v3);
    PfpPartitionCleanup(v3);
    ExFreePoolWithTag(v3, 0x74506650u);
    LOBYTE(v2) = (_BYTE)MmBadPointer;
    *(_QWORD *)(a1 + 32) = MmBadPointer;
    if ( (unsigned int)dword_140E07398 > 4 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E07398, 1LL);
      if ( (_BYTE)v2 )
      {
        v6 = v4;
        v8 = &v6;
        v9 = 4LL;
        LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E07398,
                       (unsigned __int8 *)&dword_140049BDC,
                       0LL,
                       0LL,
                       3u,
                       v7);
      }
    }
  }
  return (char)v2;
}
