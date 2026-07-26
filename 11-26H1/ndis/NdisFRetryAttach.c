/*
 * XREFs of NdisFRetryAttach @ 0x14013ACC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _lambda_6b9a11642f9024760fce603cfec52f9a_::operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__) @ 0x14009BE18 (_lambda_6b9a11642f9024760fce603cfec52f9a_--operator_void_(__cdecl_)(NDIS_BIND_LINK_BASE__).c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015C000 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14015C390 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 */

void __fastcall NdisFRetryAttach(__int64 a1, ULONG_PTR BugCheckParameter3)
{
  char v2; // bl
  void (*v4)(struct NDIS_BIND_LINK_BASE *); // rax
  int v5; // edx

  v2 = BugCheckParameter3;
  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 )
    ndisBugCheckEx(0x2DuLL, 1uLL, (unsigned int)BugCheckParameter3, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(BugCheckParameter3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      BugCheckParameter3,
      6,
      127,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      a1);
  }
  _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
  v4 = (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_6b9a11642f9024760fce603cfec52f9a_::operator_void____cdecl___NDIS_BIND_LINK_BASE___();
  NDIS_BIND_DRIVER_BASE::ForEachLink(*(NDIS_BIND_DRIVER_BASE **)(a1 + 336), v4);
  if ( (v2 & 1) == 0 )
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      *(NDIS_BIND_DRIVER_BASE **)(a1 + 336),
      (void (*)(struct NDIS_BIND_LINK_BASE *))lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_);
  Ndis::BindEngine::EndBindOperation();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      6,
      129,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      a1);
  }
}
