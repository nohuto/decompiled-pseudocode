/*
 * XREFs of TR_AddTRBRangeToSecureTransferRing @ 0x140027E60
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x14000F2D0 (Control_Transfer_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x14001A0D0 (Bulk_Stage_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001B410 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qiD @ 0x14004C0F0 (WPP_RECORDER_SF_qiD.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall TR_AddTRBRangeToSecureTransferRing(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _OWORD *a6)
{
  int v6; // edi
  _QWORD *v8; // rbp
  unsigned int v11; // edx
  __int64 v12; // r13
  _QWORD *v13; // r15
  _QWORD *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  _QWORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  int v28[4]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+8h]

  v6 = 0;
  v8 = a3;
  v28[0] = 0;
  if ( *(_BYTE *)(a1 + 288) )
  {
    v11 = 0;
    v12 = *(_QWORD *)(a1 + 312);
    v29 = 0;
    if ( !a2 || (v13 = (_QWORD *)*a2, (_QWORD *)*a2 == a2) )
      v13 = a3;
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(a1 + 296);
    *(_DWORD *)(v12 + 32) = 44;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 32) + 24LL))(a1, v12);
      v11 = 0;
    }
    *(_QWORD *)(v12 + 72) = v13[3];
    *(_DWORD *)(v12 + 80) = a4;
    *(_OWORD *)(v12 + 40) = *a6;
    *(_OWORD *)(v12 + 56) = a6[1];
    if ( a2 )
    {
      v19 = (_QWORD *)*a2;
      if ( a2 != (_QWORD *)*a2 )
      {
        do
        {
          do
          {
            if ( a4 > *(_DWORD *)(a1 + 196) )
              break;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_qiD(
                *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
                v11,
                (_DWORD)a3,
                25,
                v24,
                v19[2],
                v19[3],
                a4);
              v11 = v29;
            }
            v20 = a4++;
            v21 = v19[2] + 16 * v20;
            v22 = v11++;
            v29 = v11;
            *(_OWORD *)(v12 + 16 * v22 + 88) = *(_OWORD *)v21;
            if ( v11 == *(_DWORD *)(a1 + 320) )
              break;
          }
          while ( (*(_DWORD *)(v21 + 12) & 0xFC00) != 0x1800 );
          v19 = (_QWORD *)*v19;
          a4 = 0;
        }
        while ( a2 != v19 );
        v8 = a3;
      }
    }
LABEL_8:
    v14 = v8 + 3;
    while ( a4 != a5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qiD(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL), v11, (_DWORD)a3, 26, v24, v8[2], *v14, a4);
        v11 = v29;
      }
      v15 = a4++;
      v16 = v8[2] + 16 * v15;
      v17 = v11++;
      v29 = v11;
      *(_OWORD *)(v12 + 16 * v17 + 88) = *(_OWORD *)v16;
      if ( v11 == *(_DWORD *)(a1 + 320) )
      {
        if ( a4 != a5 )
        {
          Debug_FreAssertMsg(
            (__int64)"BUGBUG: Current TRB Index does not match expected value",
            0,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
            2319);
          return;
        }
        break;
      }
      if ( (*(_DWORD *)(v16 + 12) & 0xFC00) != 0x1800 )
        goto LABEL_8;
      if ( *(_QWORD *)v16 != *v14 )
      {
        Debug_FreAssertMsg(
          (__int64)"BUGBUG: Link TRB in last segment does not point back to itself",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
          2300);
        return;
      }
      a4 = 0;
    }
    *(_DWORD *)(v12 + 84) = v11;
    v18 = 16 * v11;
    if ( v18 + 88 >= v18 )
      v6 = v18 + 88;
    if ( (int)SecureChannel_SendRequestSynchronously(
                *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
                (GUID *)v12,
                v6,
                (__int64)v28,
                4) >= 0
      && v28[0] < 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = *(_QWORD *)(a1 + 56);
      LODWORD(v27) = v28[0];
      LODWORD(v26) = *(_DWORD *)(v23 + 152);
      LODWORD(v25) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v23 + 80),
        2u,
        0xEu,
        0x1Bu,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        v25,
        v26,
        v27);
    }
  }
}
