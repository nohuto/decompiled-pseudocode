/*
 * XREFs of ?RuntimeClassInitialize@CDropFeedbackItem@@QEAAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180547510
 * Callers:
 *     ??$MakeAndInitialize@VCDropFeedbackItem@@V1@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@AEAPEBU5@AEANAEAW4DROP_FEEDBACK_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedbackItem@@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@5AEANAEAW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180546548 (--$MakeAndInitialize@VCDropFeedbackItem@@V1@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationVi.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        RECT *lprcSrc,
        RECT *a7,
        __int64 a8,
        int a9)
{
  __int128 v10; // xmm0
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+24h] [rbp-14h]
  int v14; // [rsp+2Ch] [rbp-Ch]

  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 64) = a3;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 40), a4);
  *(_DWORD *)(a1 + 68) = a5;
  *(_DWORD *)(a1 + 72) = a9;
  *(_QWORD *)(a1 + 168) = a8;
  if ( lprcSrc )
  {
    CopyRect((LPRECT)(a1 + 76), lprcSrc);
    v10 = *(_OWORD *)(a1 + 76);
    *(_OWORD *)(a1 + 108) = v10;
    *(_OWORD *)(a1 + 124) = v10;
  }
  if ( a7 )
    CopyRect((LPRECT)(a1 + 92), a7);
  pvParam = 16;
  v13 = 0LL;
  v14 = 0;
  SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0);
  *(_BYTE *)(a1 + 156) = v13 & 1;
  return 0LL;
}
