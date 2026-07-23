/*
 * XREFs of VmpUnpinRangeSinglePages @ 0x140823F6C
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 *     VmPinMemoryRanges @ 0x1408234A0 (VmPinMemoryRanges.c)
 *     VmpUnpinMemoryRanges @ 0x140823DB8 (VmpUnpinMemoryRanges.c)
 * Callees:
 *     VmpUnpinMemoryRangeHelper @ 0x1406C644C (VmpUnpinMemoryRangeHelper.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SddlpFreeUuidString @ 0x14081E8B4 (SddlpFreeUuidString.c)
 *     VmpPinRangesContextStart @ 0x140823A80 (VmpPinRangesContextStart.c)
 */

__int64 __fastcall VmpUnpinRangeSinglePages(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  int v12; // edi
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v17[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+70h] [rbp-90h] BYREF
  __int128 v19; // [rsp+80h] [rbp-80h]
  __int128 v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  _BYTE v22[296]; // [rsp+A8h] [rbp-58h] BYREF

  v17[0] = 0LL;
  memset_0(v22, 0, 0x120uLL);
  v16 = 0LL;
  v15 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  v10 = *a2;
  v17[1] = 1LL;
  v18 = 0LL;
  v21 = 0LL;
  v14 = a3;
  v11 = a2[1] + v10 - 1;
  v19 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    v17[0] = v10;
    if ( v10 > v11 )
      break;
    SddlpFreeUuidString((void **)&v18);
    v18 = 0LL;
    v21 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    VmpPinRangesContextStart((__int64)&v18, (__int64)SpinLock, v17, &v14, 1uLL, 0, a4, 0);
    v12 = VmpUnpinMemoryRangeHelper(SpinLock, (__int64)&v18, a5, &v16, &v15);
    if ( v12 >= 0 )
    {
      if ( a6 )
        *a6 += v15;
    }
    else if ( a6 )
    {
      goto LABEL_12;
    }
    v10 = v17[0] + 1;
    ++v14;
  }
  v12 = 0;
LABEL_12:
  SddlpFreeUuidString((void **)&v18);
  return (unsigned int)v12;
}
