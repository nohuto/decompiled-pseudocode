/*
 * XREFs of VmpFillGpnRanges @ 0x140494F58
 * Callers:
 *     VmpPrefetchVirtualAddresses @ 0x140494D38 (VmpPrefetchVirtualAddresses.c)
 * Callees:
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1402536A0 (VmpConvertPortionVpnRangeToGpnRange.c)
 */

_UNKNOWN **__fastcall VmpFillGpnRanges(
        _QWORD *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6)
{
  _UNKNOWN **result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r11
  __int64 v15; // r9
  __int128 v16; // xmm0
  __int128 v17; // [rsp+40h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v19; // [rsp+68h] [rbp+10h] BYREF

  result = &retaddr;
  v19 = 0;
  v17 = 0LL;
  while ( a2[1] )
  {
    result = (_UNKNOWN **)VmpConvertPortionVpnRangeToGpnRange(a1, a2, 0xFFFFFFFFFFFFFFFFuLL, a6, &v17, &v19, 0);
    v11 = *((_QWORD *)&v17 + 1);
    if ( !*((_QWORD *)&v17 + 1) )
      break;
    v12 = *a4;
    v13 = 2 * *a4;
    if ( *a4 )
    {
      v14 = *(_QWORD *)(a3 + 16 * *a4 - 16);
      v15 = *(_QWORD *)(a3 + 16 * *a4 - 8);
      if ( v15 + v14 == (_QWORD)v17 )
      {
        result = (_UNKNOWN **)(v15 + *((_QWORD *)&v17 + 1));
        *(_QWORD *)(a3 + 16 * *a4 - 8) = v15 + *((_QWORD *)&v17 + 1);
      }
      else
      {
        if ( v14 != (_QWORD)v17 + *((_QWORD *)&v17 + 1) )
          goto LABEL_9;
        result = (_UNKNOWN **)(v15 + *((_QWORD *)&v17 + 1));
        *(_QWORD *)(a3 + 16 * *a4 - 16) = v17;
        *(_QWORD *)(a3 + 8 * v13 - 8) = v15 + v11;
      }
    }
    else
    {
LABEL_9:
      v16 = v17;
      result = (_UNKNOWN **)(v12 + 1);
      *a4 = v12 + 1;
      *(_OWORD *)(a3 + 8 * v13) = v16;
      if ( v12 + 1 == a5 )
        return result;
    }
  }
  return result;
}
