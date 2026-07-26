/*
 * XREFs of ?ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AC9F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140071BF0 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostRcvFilterClearFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  _DWORD *v3; // rdi
  int v4; // eax
  int *v5; // rbp
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  KIRQL v8; // dl
  __m128i BugCheckParameter2; // [rsp+40h] [rbp-98h]
  __int64 v10; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  BugCheckParameter2 = *(__m128i *)ndisCaptureIovOidContext(&v10, a1);
  if ( !(unsigned __int8)_mm_cvtsi128_si32(BugCheckParameter2) )
    return;
  v3 = (_DWORD *)((char *)a1 + 40);
  v4 = *((_DWORD *)a1 + 10);
  if ( v4 )
  {
    v5 = (int *)((char *)a1 + 40);
    if ( v4 != 65539 )
    {
LABEL_8:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x18u,
          (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
          BugCheckParameter2.m128i_i8[8],
          *v3);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2.m128i_i64[1], &NewIrql);
      if ( (*(_DWORD *)(v1 + 88) & 0x10000) != 0
        && (*(_DWORD *)(BugCheckParameter2.m128i_i64[1] + 124) & 0x1000000) == 0
        && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2.m128i_i64[1] + 3760) + 26LL) & 1) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          *(_QWORD *)(BugCheckParameter2.m128i_i64[1] + 3856),
          "Miniport has failed OID_RECEIVE_FILTER_CLEAR_FILTER");
        ndisBugCheckEx(0x1CuLL, BugCheckParameter2.m128i_u64[1], *(unsigned int *)(v1 + 32), *v5);
      }
      v8 = NewIrql;
      *(_QWORD *)(BugCheckParameter2.m128i_i64[1] + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2.m128i_i64[1] + 96), v8);
      return;
    }
    _m_prefetchw((const void *)(BugCheckParameter2.m128i_i64[1] + 4424));
    v6 = *(_DWORD *)(BugCheckParameter2.m128i_i64[1] + 4424);
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2.m128i_i64[1] + 4424), v6, v6);
    }
    while ( v7 != v6 );
    if ( (v6 & 0x200) == 0 )
    {
      v5 = (int *)((char *)a1 + 40);
      goto LABEL_8;
    }
  }
  if ( *(_DWORD *)(v1 + 48) >= 0x10u )
  {
    ndisClearReceiveFilter(
      (struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2.m128i_i64[1],
      *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL));
    *v3 = 0;
  }
}
