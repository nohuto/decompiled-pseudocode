/*
 * XREFs of ?FindDCompTargetIdForPoint@GestureServices@@AEAA?AV?$tuple@V?$optional@UtagCOMPOSITION_TARGET_ID@@@std@@PEBG@std@@UtagPOINT@@IPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801451A0
 * Callers:
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x1801452E0 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180052670 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x180070498 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ??$make_tuple@AEBUnullopt_t@std@@AEAY00$$CBG@std@@YA?AV?$tuple@Unullopt_t@std@@PEBG@0@AEBUnullopt_t@0@AEAY00$$CBG@Z @ 0x180144888 (--$make_tuple@AEBUnullopt_t@std@@AEAY00$$CBG@std@@YA-AV-$tuple@Unullopt_t@std@@PEBG@0@AEBUnullop.c)
 */

__int64 __fastcall GestureServices::FindDCompTargetIdForPoint(
        __int64 a1,
        __int64 a2,
        POINT a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v7; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  int v15; // edx
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // xmm0_8
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = a2;
  if ( !a4 )
    goto LABEL_20;
  gsl::details::extent_type<-1>::extent_type<-1>(v20, a4);
  if ( v20[0] == -1LL || !a5 && v20[0] )
  {
    _o_terminate(v9);
    __debugbreak();
LABEL_20:
    *(_QWORD *)v7 = *(_QWORD *)std::make_tuple<std::nullopt_t const &,unsigned short const (&)[1]>(v20, a2);
    *(_BYTE *)(v7 + 36) = 0;
    return v7;
  }
  v10 = *(_QWORD *)(a1 + 112);
  v11 = *(_QWORD *)(a1 + 120);
  while ( v10 != v11 )
  {
    if ( PtInRect((const RECT *)v10, a3) )
    {
      a2 = a5;
      v12 = a5 + 28LL * v20[0];
      while ( a2 != v12 )
      {
        if ( (*(_BYTE *)(v10 + 16) & 2) != 0
          && operator==((_DWORD *)(v10 + 36), (_DWORD *)a2)
          && *(_DWORD *)(v10 + 44) == *(_DWORD *)(a2 + 20) )
        {
          v13 = *(_OWORD *)a2;
          v14 = *(_QWORD *)(a2 + 16);
          v15 = *(_DWORD *)(a2 + 24);
          *(_QWORD *)v7 = v10 + 48;
          *(_OWORD *)(v7 + 8) = v13;
          *(_QWORD *)(v7 + 24) = v14;
          *(_DWORD *)(v7 + 32) = v15;
          goto LABEL_16;
        }
        a2 += 28LL;
      }
    }
    v10 += 200LL;
  }
  if ( a4 != 1 )
    goto LABEL_20;
  v16 = *(_OWORD *)a5;
  v17 = *(_DWORD *)(a5 + 24);
  v18 = *(_QWORD *)(a5 + 16);
  *(_QWORD *)v7 = &WindowName;
  *(_OWORD *)(v7 + 8) = v16;
  *(_QWORD *)(v7 + 24) = v18;
  *(_DWORD *)(v7 + 32) = v17;
LABEL_16:
  *(_BYTE *)(v7 + 36) = 1;
  return v7;
}
