/*
 * XREFs of VmpUnpinMemoryRanges @ 0x140823DB8
 * Callers:
 *     VmpRemoveMemoryRange @ 0x14050AC9C (VmpRemoveMemoryRange.c)
 *     VmUnpinMemoryRanges @ 0x140823890 (VmUnpinMemoryRanges.c)
 * Callees:
 *     VmpUnpinMemoryRangeHelper @ 0x1406C644C (VmpUnpinMemoryRangeHelper.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SddlpFreeUuidString @ 0x14081E8B4 (SddlpFreeUuidString.c)
 *     VmpPinRangesContextStart @ 0x140823A80 (VmpPinRangesContextStart.c)
 *     VmpUnpinRangeSinglePages @ 0x140823F6C (VmpUnpinRangeSinglePages.c)
 */

__int64 __fastcall VmpUnpinMemoryRanges(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v11; // ebx
  unsigned __int64 *v12; // r13
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _BYTE v22[296]; // [rsp+88h] [rbp-78h] BYREF

  memset_0(v22, 0, 0x120uLL);
  v16 = 0LL;
  v17 = 0LL;
  v11 = 0;
  v12 = &a2[2 * a4];
  *a7 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  while ( a2 < v12 )
  {
    SddlpFreeUuidString((void **)&v18);
    v21 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v11 = VmpPinRangesContextStart((__int64)&v18, (__int64)SpinLock, a2, a3, a4, 0, a5, 0);
    if ( v11 < 0 )
      goto LABEL_4;
    v13 = VmpUnpinMemoryRangeHelper(SpinLock, (__int64)&v18, a6, &v17, &v16);
    v14 = v17;
    v11 = v13;
    a2 += 2 * v17;
    *a7 += v16;
    a3 += v14;
    if ( v13 == -1073741267 )
    {
      if ( a4 == 1 )
      {
        v11 = VmpUnpinRangeSinglePages(SpinLock, a6, (__int64)&v16);
        a2 += 2;
        ++a3;
        *a7 += v16;
        goto LABEL_8;
      }
LABEL_4:
      a4 = 1LL;
    }
    else
    {
LABEL_8:
      if ( v11 < 0 )
        break;
    }
  }
  SddlpFreeUuidString((void **)&v18);
  return (unsigned int)v11;
}
