/*
 * XREFs of Control_Initialize @ 0x14007FEA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsSecureDevice @ 0x1400357A8 (Controller_IsSecureDevice.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Control_Initialize(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  unsigned __int16 v4; // ax
  bool v5; // cf
  char v6; // al
  int v7; // edi
  unsigned __int16 v8; // r9
  int v10; // [rsp+30h] [rbp-61h]
  int v11; // [rsp+38h] [rbp-59h]
  int v12; // [rsp+40h] [rbp-51h]
  __int128 v13; // [rsp+48h] [rbp-49h] BYREF
  __int128 v14; // [rsp+58h] [rbp-39h]
  __int128 v15; // [rsp+68h] [rbp-29h]
  __int64 v16; // [rsp+78h] [rbp-19h]
  __int128 v17; // [rsp+80h] [rbp-11h] BYREF
  __int64 v18; // [rsp+90h] [rbp-1h]
  __int128 v19; // [rsp+98h] [rbp+7h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+17h]
  __int128 v21; // [rsp+B0h] [rbp+1Fh] BYREF
  __int128 v22; // [rsp+C0h] [rbp+2Fh]
  __int64 v23; // [rsp+D0h] [rbp+3Fh]

  DWORD1(v13) = 0;
  DWORD1(v19) = 0;
  DWORD1(v21) = 0;
  DWORD1(v17) = 0;
  *(_QWORD *)(a1 + 384) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 376;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x20000LL) != 0
    || ((v2 = *(_QWORD *)(a1 + 56), !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline())
     || *(_WORD *)(v2 + 100)
     || !*(_BYTE *)(v2 + 39)
     || (v3 = *(_DWORD *)(v2 + 128), v3 != 5) && v3 != 1
      ? (v4 = *(_WORD *)(v2 + 100) & 0x7FF)
      : (v4 = *(_WORD *)(v2 + 105)),
        v5 = v4 < 8u,
        v6 = 1,
        v5) )
  {
    v6 = 0;
  }
  *(_BYTE *)(a1 + 328) = v6;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x37 )
      LODWORD(v21) = -1;
    else
      LODWORD(v21) = *(_DWORD *)(WdfStructures + 440);
  }
  else
  {
    LODWORD(v21) = 40;
  }
  LODWORD(v22) = 0;
  *((_QWORD *)&v21 + 1) = Control_WdfEvtTimerForTransferTimeout;
  BYTE4(v22) = 1;
  DWORD2(v22) = 0;
  v16 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v13) = -1;
    else
      LODWORD(v13) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v13) = 56;
  }
  *(_QWORD *)&v15 = *(_QWORD *)(a1 + 72);
  *((_QWORD *)&v14 + 1) = 0x100000001LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
         WdfDriverGlobals,
         &v21,
         &v13,
         a1 + 352);
  if ( v7 >= 0 )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(a1 + 40)) )
    {
      v18 = 0LL;
      v17 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x43 )
          LODWORD(v17) = -1;
        else
          LODWORD(v17) = *(_DWORD *)(WdfStructures + 536);
      }
      else
      {
        LODWORD(v17) = 24;
      }
      LOBYTE(v18) = 1;
      *((_QWORD *)&v17 + 1) = Control_WdfWorkItemForCanceledOnQueueTransferCompletion;
      v16 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x26 )
          LODWORD(v13) = -1;
        else
          LODWORD(v13) = *(_DWORD *)(WdfStructures + 304);
      }
      else
      {
        LODWORD(v13) = 56;
      }
      *(_QWORD *)&v15 = *(_QWORD *)(a1 + 72);
      *((_QWORD *)&v14 + 1) = 0x100000001LL;
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
             WdfDriverGlobals,
             &v17,
             &v13,
             a1 + 344);
      if ( v7 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v7;
      v8 = 11;
    }
    else
    {
      v20 = 0LL;
      v19 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x17 )
          LODWORD(v19) = -1;
        else
          LODWORD(v19) = *(_DWORD *)(WdfStructures + 184);
      }
      else
      {
        LODWORD(v19) = 24;
      }
      LOBYTE(v20) = 1;
      *((_QWORD *)&v19 + 1) = Control_WdfDpcForCanceledOnQueueTransferCompletion;
      v16 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      if ( WdfClientVersionHigherThanFramework )
      {
        if ( (unsigned int)WdfStructureCount <= 0x26 )
          LODWORD(v13) = -1;
        else
          LODWORD(v13) = *(_DWORD *)(WdfStructures + 304);
      }
      else
      {
        LODWORD(v13) = 56;
      }
      *(_QWORD *)&v15 = *(_QWORD *)(a1 + 72);
      *((_QWORD *)&v14 + 1) = 0x100000001LL;
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 888))(
             WdfDriverGlobals,
             &v19,
             &v13,
             a1 + 336);
      if ( v7 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v7;
      v8 = 12;
    }
    v12 = v7;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
    v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    goto LABEL_52;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 10;
    v12 = v7;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
    v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
LABEL_52:
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      v8,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v10,
      v11,
      v12,
      v13,
      (_QWORD)v14);
  }
  return (unsigned int)v7;
}
