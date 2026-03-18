/*
 * XREFs of UsbhIncPdoIoCount @ 0x14000EA40
 * Callers:
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 *     UsbhPdoPower_WaitWake @ 0x14000F7A0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoSystemControl @ 0x140037320 (UsbhPdoSystemControl.c)
 *     UsbhPdoPower_Sequence @ 0x14004BA00 (UsbhPdoPower_Sequence.c)
 *     UsbhPdoDeviceControl @ 0x14005D200 (UsbhPdoDeviceControl.c)
 *     UsbhPdoSuccess @ 0x14005DC10 (UsbhPdoSuccess.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIncPdoIoCount(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // si
  __int64 Pool2; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  int v16; // [rsp+40h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v8 = (KSPIN_LOCK *)(v7 + 1216);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1216));
  v10 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1216), v9);
    return 3221225486LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = a2;
      v12 = v7 + 1224;
      LOBYTE(v16) = HIBYTE(a3);
      BYTE1(v16) = BYTE2(a3);
      *(_DWORD *)(Pool2 + 32) = a4;
      BYTE2(v16) = BYTE1(a3);
      HIBYTE(v16) = a3;
      *(_DWORD *)Pool2 = v16;
      v13 = (_QWORD *)(Pool2 + 8);
      v14 = *(_QWORD **)(v12 + 8);
      if ( *v14 != v12 )
        __fastfail(3u);
      *v13 = v12;
      v13[1] = v14;
      *v14 = v13;
      *(_QWORD *)(v12 + 8) = v13;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1264);
    }
    KeReleaseSpinLock(v8, v10);
    return 0LL;
  }
}
