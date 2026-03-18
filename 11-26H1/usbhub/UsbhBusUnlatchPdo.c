/*
 * XREFs of UsbhBusUnlatchPdo @ 0x140021BAC
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1400011C0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhPCE_Disable @ 0x140013E18 (UsbhPCE_Disable.c)
 *     UsbhWcCancelEnumeration @ 0x1400212B0 (UsbhWcCancelEnumeration.c)
 *     UsbhRequestPortSuspend @ 0x140021600 (UsbhRequestPortSuspend.c)
 *     UsbhPortDisconnect @ 0x140021F00 (UsbhPortDisconnect.c)
 *     UsbhDropDevice @ 0x140023AE8 (UsbhDropDevice.c)
 *     UsbhCancelEnumeration @ 0x140033B08 (UsbhCancelEnumeration.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhDerefPdo @ 0x1400089B0 (UsbhDerefPdo.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhBusUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  KIRQL v13; // bp
  __int64 v14; // rcx
  signed __int32 v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbx
  _QWORD *v25; // rsi
  _QWORD *v26; // r9
  _QWORD *v27; // r8
  __int64 v28; // rcx
  signed __int32 v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  int v35; // eax

  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = 827354229;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = a2;
        *(_QWORD *)(v12 + v11 + 24) = a3;
      }
    }
  }
  if ( a5 )
  {
    Log(a1, 1024, 1970032691, a2, a3);
    *(_DWORD *)(a3 + 416) = 0;
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_140070600 = (__int64)&dword_140070608;
    *(_DWORD *)(a3 + 416) = 0;
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      if ( a1 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 880), 0xFFFFFFFF);
          v16 = *(_DWORD *)(v14 + 884);
          v17 = *(_QWORD *)(v14 + 888);
          v18 = 32LL * ((v15 - 1) & v16);
          *(_DWORD *)(v18 + v17) = 844131445;
          *(_QWORD *)(v18 + v17 + 8) = 0LL;
          *(_QWORD *)(v18 + v17 + 16) = a2;
          *(_QWORD *)(v18 + v17 + 24) = a3;
        }
      }
    }
    if ( _bittest(&UsbhLogMask, 8u) )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 880), 0xFFFFFFFF);
          v21 = *(_DWORD *)(v19 + 884);
          v22 = *(_QWORD *)(v19 + 888);
          v23 = 32LL * ((v20 - 1) & v21);
          *(_DWORD *)(v23 + v22) = 1348891236;
          *(_QWORD *)(v23 + v22 + 8) = 0LL;
          *(_QWORD *)(v23 + v22 + 16) = a2;
          *(_QWORD *)(v23 + v22 + 24) = 1884308559LL;
        }
      }
    }
    if ( !a2 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v24 = *(_QWORD *)(a2 + 64);
    if ( !v24 )
      UsbhTrapFatal_Dbg(a2, 0LL);
    if ( *(_DWORD *)v24 != 1329877064 )
      UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
    v25 = (_QWORD *)(v24 + 1272);
    v26 = *(_QWORD **)(v24 + 1272);
    if ( v26 == (_QWORD *)(v24 + 1272) )
      goto LABEL_32;
    do
    {
      v27 = v26 - 1;
      if ( _bittest(&UsbhLogMask, 8u) )
      {
        if ( a1 )
        {
          v28 = *(_QWORD *)(a1 + 64);
          if ( v28 )
          {
            v29 = _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 880), 0xFFFFFFFF);
            v30 = *(_DWORD *)(v28 + 884);
            v31 = *(_QWORD *)(v28 + 888);
            v32 = 32LL * ((v29 - 1) & v30);
            *(_DWORD *)(v32 + v31) = 1064591724;
            *(_QWORD *)(v32 + v31 + 8) = 0LL;
            *(_QWORD *)(v32 + v31 + 16) = v24;
            *(_QWORD *)(v32 + v31 + 24) = 1884308559LL;
          }
        }
      }
      if ( *((_DWORD *)v27 + 6) == 1884308559 && !v27[5] )
        break;
      v26 = (_QWORD *)*v26;
      v27 = 0LL;
    }
    while ( v26 != v25 );
    if ( !v27 )
    {
LABEL_32:
      v35 = *(_DWORD *)(v24 + 1288);
      if ( v35 )
        *(_DWORD *)(v24 + 1288) = v35 - 1;
    }
    else
    {
      v33 = v27[1];
      if ( *(_QWORD **)(v33 + 8) != v27 + 1 || (v34 = (_QWORD *)v27[2], (_QWORD *)*v34 != v27 + 1) )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      ExFreePoolWithTag(v27, 0);
    }
    if ( (_QWORD *)*v25 == v25 && !*(_DWORD *)(v24 + 1288) )
      KeSetEvent((PRKEVENT)(v24 + 1296), 0, 0);
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v13);
  }
}
