/*
 * XREFs of NdisRegisterPoll @ 0x140145F10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisMiniportGetVerifierContext@@YAPEAXPEAX@Z @ 0x1400C8F00 (-ndisMiniportGetVerifierContext@@YAPEAXPEAX@Z.c)
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x140145EC0 (--_GNdisPoll@@QEAAPEAXI@Z.c)
 *     ??0NdisPoll@@QEAA@PEAX00P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x140146230 (--0NdisPoll@@QEAA@PEAX00P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x140146360 (-Initialize@NdisPoll@@QEAAJXZ.c)
 */

__int64 __fastcall NdisRegisterPoll(_QWORD *a1, void *a2, ULONG_PTR BugCheckParameter4, NdisPoll **a4)
{
  KIRQL CurrentIrql; // al
  int v9; // edx
  void *VerifierContext; // rbp
  NdisPoll *PoolWithTag; // rax
  int v12; // edx
  NdisPoll *v13; // rax
  NdisPoll *v14; // rbp
  int v15; // eax
  unsigned int v16; // ebx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    ndisBugCheckEx(0x2EuLL, 1uLL, CurrentIrql, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      10,
      (struct _GUID *)&WPP_6e9ab13774253042015e4c400df4b426_Traceguids,
      (char)a1);
  }
  *a4 = 0LL;
  if ( *(_BYTE *)BugCheckParameter4 != 0x80
    || *(_BYTE *)(BugCheckParameter4 + 1) != 1
    || *(_WORD *)(BugCheckParameter4 + 2) < 0x18u
    || !*(_QWORD *)(BugCheckParameter4 + 8)
    || !*(_QWORD *)(BugCheckParameter4 + 16) )
  {
    ndisBugCheckEx(0x34uLL, 1uLL, 3uLL, BugCheckParameter4);
  }
  if ( *(_BYTE *)a1 != 17 )
    ndisBugCheckEx(0x34uLL, 1uLL, 1uLL, (ULONG_PTR)a1);
  VerifierContext = ndisMiniportGetVerifierContext(a1);
  PoolWithTag = (NdisPoll *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x288uLL, 0x78744345u);
  if ( PoolWithTag
    && (v13 = NdisPoll::NdisPoll(
                PoolWithTag,
                a1,
                a2,
                VerifierContext,
                *(void (**)(void *, struct _NDIS_POLL_NOTIFICATION *))(BugCheckParameter4 + 8),
                *(void (**)(void *, struct _NDIS_POLL_DATA *))(BugCheckParameter4 + 16)),
        (v14 = v13) != 0LL) )
  {
    v15 = NdisPoll::Initialize(v13);
    if ( v15 )
    {
      v16 = NdisConvertNtStatusToNdisStatus(v15);
      NdisPoll::`scalar deleting destructor'(v14, 1);
      return v16;
    }
    else
    {
      *a4 = v14;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_6e9ab13774253042015e4c400df4b426_Traceguids,
          (char)a1,
          v14);
      return 0LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        1,
        11,
        (struct _GUID *)&WPP_6e9ab13774253042015e4c400df4b426_Traceguids);
    }
    return 3221225626LL;
  }
}
