/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1402E4B4C
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402E2810 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001D25C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a2,
        struct CRefCountedBuffer **a3)
{
  UINT DriverPrivateDataSize; // eax
  unsigned __int64 v7; // rcx
  _DWORD *v8; // rbx
  UINT v9; // eax

  *a3 = 0LL;
  if ( *((int *)a1 + 694) < 0x2000 && !*((_BYTE *)a1 + 3076) )
    return 0LL;
  DriverPrivateDataSize = a2->DriverPrivateDataSize;
  if ( !DriverPrivateDataSize )
    return 0LL;
  v7 = DriverPrivateDataSize + 16;
  if ( (unsigned int)v7 < DriverPrivateDataSize )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 401;
    v8 = 0LL;
  }
  else
  {
    v8 = (_DWORD *)operator new[](v7, 0x4B677844u, 66LL);
  }
  if ( v8 )
  {
    v9 = a2->DriverPrivateDataSize;
    *(_QWORD *)v8 = 0LL;
    v8[2] = v9;
    v8[3] = 1;
    RtlCopyFromUser(v8 + 4, a2->pDriverPrivateData, a2->DriverPrivateDataSize);
    *a3 = (struct CRefCountedBuffer *)v8;
    return 0LL;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1342;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate memory for present private driver data",
    1342LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
