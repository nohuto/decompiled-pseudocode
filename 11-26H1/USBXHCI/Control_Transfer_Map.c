/*
 * XREFs of Control_Transfer_Map @ 0x14000EFE0
 * Callers:
 *     Control_MapTransfer @ 0x14000E500 (Control_MapTransfer.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     Control_Transfer_MapIntoRing @ 0x14000F2D0 (Control_Transfer_MapIntoRing.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     TR_EnsureInputBufferForTrbs @ 0x140018A08 (TR_EnsureInputBufferForTrbs.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x14001ABCC (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Control_Transfer_Map(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // esi
  char v3; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  __int16 v7; // dx
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r15
  int v13; // edi
  bool v14; // zf
  int v15; // r8d
  __int64 v16; // rax
  int v17; // r9d
  int v18; // edx
  bool v19; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 360);
  v2 = 0;
  v3 = 0;
  v5 = *(_QWORD *)(v1 + 48);
  if ( *(_WORD *)(v5 + 2) == 50 && *(_DWORD *)(v5 + 56) )
  {
    *(_DWORD *)(v1 + 116) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 352),
      -10000LL * *(unsigned int *)(v5 + 56));
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
  if ( *(_DWORD *)(v6 + 24) <= 1u || (v9 = *(unsigned int *)(v5 + 64), (unsigned int)v9 >= *(_DWORD *)(v6 + 48)) )
    v7 = 0;
  else
    v7 = *(_WORD *)(*(_QWORD *)(v6 + 56) + 2 * v9);
  *(_WORD *)(a1 + 112) = v7;
  if ( *(_BYTE *)(a1 + 288) )
  {
    v2 = TR_EnsureInputBufferForTrbs(a1, (unsigned int)(*(_DWORD *)(a1 + 196) + 1));
    if ( v2 < 0 )
      return 3221225626LL;
  }
  if ( *(_DWORD *)(v1 + 64) != 3 )
  {
LABEL_6:
    Control_Transfer_MapIntoRing(a1);
    return (unsigned int)v2;
  }
  if ( *(_BYTE *)(a1 + 288) )
  {
    v14 = (*(_DWORD *)(a1 + 304))++ == -1;
    v15 = *(_DWORD *)(a1 + 304);
    if ( v14 )
    {
      *(_DWORD *)(a1 + 304) = 1;
      v15 = 1;
    }
    v16 = *(_QWORD *)(v1 + 96);
    v17 = *(_DWORD *)(v1 + 104);
    *(_DWORD *)(v1 + 200) = v15;
    v2 = SecureDmaEnabler_PrepareMemoryForDma(
           *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
           *(_QWORD *)(v1 + 72),
           v15,
           v17,
           v15,
           v1 + 168,
           v16);
    if ( v2 >= 0 )
    {
      Debug_FreAssertMsg(
        (__int64)"ScatterGatherList->NumberOfElements must be 1",
        **(_DWORD **)(v1 + 96) == 1,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
        2631);
      goto LABEL_6;
    }
    *(_DWORD *)(v1 + 200) = 0;
    Debug_FreAssertMsg(
      (__int64)"SecureDmaEnabler_PrepareMemoryForDma has failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
      2638);
    return (unsigned int)v2;
  }
  else
  {
    v10 = *(_QWORD **)(a1 + 40);
    v11 = *(_QWORD *)(v10[12] + 24LL);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(WdfDriverGlobals, *v10);
    if ( KeGetCurrentIrql() != 2 )
      v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v19 = (*(_BYTE *)(v5 + 32) & 1) == 0;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(), __int64, bool))(*(_QWORD *)(v11 + 8) + 88LL))(
            v11,
            v12,
            *(_QWORD *)(v1 + 72),
            *(_QWORD *)(*(_QWORD *)(v1 + 72) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 72) + 44LL),
            *(_DWORD *)(v1 + 104),
            Control_EvtDmaCallback,
            a1,
            v19);
    if ( v3 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD *)(a1 + 40));
    if ( v13 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v18,
        14,
        37,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        v13);
    }
    return (unsigned int)v13;
  }
}
