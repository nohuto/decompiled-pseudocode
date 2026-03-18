/*
 * XREFs of ?GetSizeOfPresentToken@@YAIPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403356D0
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403358AC (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall GetSizeOfPresentToken(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  UINT PlaneIndex; // eax
  __int64 result; // rax
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax

  if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    PlaneIndex = a1->Token.Flip.PlaneIndex;
    if ( PlaneIndex > 0x10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 63;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 63LL, 0LL, 0LL, 0LL, 0LL);
      return 0LL;
    }
    else
    {
      return (16 * PlaneIndex + 823) & 0xFFFFFFF8;
    }
  }
  else
  {
    switch ( a1->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a1->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 53;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 53LL, 0LL, 0LL, 0LL, 0LL);
          return 0LL;
        }
        result = (16 * FlipInterval + 67) & 0xFFFFFFF8;
        break;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a1->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 73;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 73LL, 0LL, 0LL, 0LL, 0LL);
          return 0LL;
        }
        result = (16 * VidPnSourceId + 51) & 0xFFFFFFF8;
        break;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
      case D3DKMT_PM_SURFACECOMPLETE:
        result = 24LL;
        break;
      case D3DKMT_PM_FLIPMANAGER:
        result = 40LL;
        break;
      default:
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 96;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Unknown type for present history token is found in queue.",
          96LL,
          0LL,
          0LL,
          0LL,
          0LL);
        result = 0LL;
        break;
    }
  }
  return result;
}
