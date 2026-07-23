/*
 * XREFs of PfpPartitionFindOrCreate @ 0x1407CA138
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PfpPartitionFromParent @ 0x14049C820 (PfpPartitionFromParent.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x1404AB540 (PfpPartitionRundownProtectionAcquire.c)
 *     PfpPartitionCreate @ 0x140602B1C (PfpPartitionCreate.c)
 *     PfpTraceLogPartitionId @ 0x140602E30 (PfpTraceLogPartitionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PfpPartitionFindOrCreate(PEX_RUNDOWN_REF_CACHE_AWARE **a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  PEX_RUNDOWN_REF_CACHE_AWARE *v7; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v8; // rbx
  int v9; // ebx
  int v11; // [rsp+30h] [rbp-19h] BYREF
  PEX_RUNDOWN_REF_CACHE_AWARE *v12; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+40h] [rbp-9h] BYREF
  int *v14; // [rsp+60h] [rbp+17h]
  __int64 v15; // [rsp+68h] [rbp+1Fh]
  PEX_RUNDOWN_REF_CACHE_AWARE **v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]

  if ( (unsigned int)dword_140E07398 > 4 && tlgKeywordOn((__int64)&dword_140E07398, 1LL) )
  {
    v11 = PfpTraceLogPartitionId(v6);
    v15 = 4LL;
    v14 = &v11;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)&dword_140049B0C, 0LL, 0LL, 3u, v13);
  }
  v7 = (PEX_RUNDOWN_REF_CACHE_AWARE *)PfpPartitionFromParent(a3);
  v12 = v7;
  v8 = v7;
  if ( v7 )
  {
    PfpPartitionRundownProtectionAcquire((__int64)v7);
    *a1 = v8;
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  v9 = PfpPartitionCreate(&v12, a2, a3);
  if ( v9 >= 0 )
  {
    *a1 = v12;
    goto LABEL_8;
  }
LABEL_9:
  if ( (unsigned int)dword_140E07398 > 4 && tlgKeywordOn((__int64)&dword_140E07398, 1LL) )
  {
    v11 = PfpTraceLogPartitionId(a3);
    v15 = 4LL;
    v14 = &v11;
    LODWORD(v12) = v9;
    v16 = &v12;
    v17 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)byte_140049B73, 0LL, 0LL, 4u, v13);
  }
  return (unsigned int)v9;
}
