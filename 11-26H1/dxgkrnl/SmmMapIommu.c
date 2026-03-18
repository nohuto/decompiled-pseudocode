/*
 * XREFs of SmmMapIommu @ 0x140062F34
 * Callers:
 *     SmmMapPagesToIommuInternal @ 0x14006A87C (SmmMapPagesToIommuInternal.c)
 *     SmmIommuMapStagingArray @ 0x14009BED4 (SmmIommuMapStagingArray.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmMapIommu(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v7[1] = a3;
  v7[0] = 2LL;
  v7[2] = a4;
  if ( !a2 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *))qword_140169628)(v4, 3LL, v7);
  v6 = a2;
  v8 = 0LL;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64 *, _QWORD, _QWORD, __int64 *))qword_140169618)(
           v4,
           3LL,
           v7,
           &v6,
           0LL,
           0LL,
           &v8);
}
