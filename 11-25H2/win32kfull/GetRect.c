/*
 * XREFs of GetRect @ 0x140052B80
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     InternalGetRealClientRect @ 0x1400431B4 (InternalGetRealClientRect.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 *     UT_GetParentDCClipBox @ 0x140053AE4 (UT_GetParentDCClipBox.c)
 *     ParkIcon @ 0x1401EA1E8 (ParkIcon.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x14021B954 (GetWndScrollBarInfoCrossProcess.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1402273BC (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1402405D0 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxDrawWindowFrame @ 0x14025CE6C (xxxDrawWindowFrame.c)
 *     CalcSBStuff @ 0x14025FAB8 (CalcSBStuff.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x140065D0C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x140065E14 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetRect(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int128 *v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int *v12; // rdx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 40);
  if ( (a3 & 2) != 0 )
    v18 = *(_OWORD *)(v6 + 88);
  else
    v17 = *(_OWORD *)(v6 + 104);
  v7 = &v17;
  if ( (a3 & 2) != 0 )
    v7 = &v18;
  *(_OWORD *)a2 = *v7;
  v8 = *(_QWORD *)(a1 + 40);
  result = *(_WORD *)(v8 + 42) & 0x2FFF;
  if ( (_DWORD)result != 669 )
  {
    result = a3 & 0x70;
    switch ( (_DWORD)result )
    {
      case 0x10:
        v12 = (unsigned int *)(v8 + 104);
        break;
      case 0x20:
        v12 = (unsigned int *)(v8 + 88);
        break;
      case 0x40:
        v10 = *(_QWORD *)(a1 + 104);
        v11 = *(_QWORD *)(v10 + 40);
        result = *(_WORD *)(v11 + 42) & 0x2FFF;
        if ( (_DWORD)result == 669 )
          return result;
        v12 = (unsigned int *)(v11 + 104);
        if ( (((unsigned __int16)(*(_DWORD *)(v8 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v11 + 288) >> 8)) & 0x1FF) != 0 )
        {
          v16 = *(_QWORD *)(a1 + 104);
          v17 = *(_OWORD *)v12;
          LogicalToPhysicalInPlaceRectWithSubpixel(v16, &v17, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(a1, &v17, 0LL);
          v12 = (unsigned int *)&v17;
        }
        if ( (((a3 & 2) != 0) & (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 26LL) >> 6)) != 0
          && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
        {
          v14 = v12[1];
          v15 = v12[2];
          *(_DWORD *)(a2 + 12) -= v14;
          *(_DWORD *)(a2 + 4) -= v14;
          result = v15 - *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 8) = v15 - *(_DWORD *)a2;
          *(_DWORD *)a2 = result;
          return result;
        }
        break;
      default:
        return result;
    }
    v13 = v12[1];
    result = *v12;
    *(_DWORD *)a2 -= result;
    *(_DWORD *)(a2 + 8) -= result;
    *(_DWORD *)(a2 + 12) -= v13;
    *(_DWORD *)(a2 + 4) -= v13;
  }
  return result;
}
