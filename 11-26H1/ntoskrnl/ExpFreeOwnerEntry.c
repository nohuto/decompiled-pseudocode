/*
 * XREFs of ExpFreeOwnerEntry @ 0x140304B10
 * Callers:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x140304020 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpFreeOwnerEntry(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  signed __int64 v5; // rbp
  bool v6; // cc
  signed __int64 BugCheckParameter4; // rbp
  unsigned int v8; // [rsp+50h] [rbp+8h]

  result = *(unsigned int *)(a1 + 8);
  v3 = result;
  v8 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  if ( (result & 2) != 0 )
  {
    v4 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v4 & 3) != 0 )
  {
    goto LABEL_16;
  }
  if ( v4 )
  {
    if ( (result & 1) != 0 )
    {
      PsBoostThreadIo((LegacyAutoBoost *)v4);
      v3 &= ~1u;
      v8 = v3;
    }
    if ( (v3 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 1508));
      v3 &= ~4u;
      v8 = v3;
    }
    if ( (v3 & 2) != 0 )
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo(v4 - 48, -1, 0x746C6644u);
      v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v6 = v5 <= 1;
      BugCheckParameter4 = v5 - 1;
      if ( v6 )
      {
        if ( *(_QWORD *)(v4 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v4 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v4 - 48) >> 8)],
            v4,
            3uLL,
            *(_QWORD *)(v4 - 40));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v4, 4uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v4 - 48);
      }
      v8 = v3 & 0xFFFFFFFD;
    }
    result = v8;
    *(_DWORD *)(a1 + 8) = v8;
  }
LABEL_16:
  *(_QWORD *)a1 = 0LL;
  return result;
}
