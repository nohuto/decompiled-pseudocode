/*
 * XREFs of IopLiveDumpCaptureMemoryPages @ 0x1405D0EE0
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     VslFinalizeLiveDumpInSk @ 0x1405C54FC (VslFinalizeLiveDumpInSk.c)
 *     IopLiveDumpCapture @ 0x1405D0DCC (IopLiveDumpCapture.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x1405D451C (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x1405D4FDC (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405D53FC (IopLiveDumpUncorralProcessors.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IopLiveDumpCaptureMemoryPages(__int64 a1)
{
  __int64 MillisecondCounter; // rax
  __int64 v3; // r14
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v17; // [rsp+98h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  __int64 *v19; // [rsp+A8h] [rbp-60h]
  __int64 v20; // [rsp+B0h] [rbp-58h]
  __int64 *v21; // [rsp+B8h] [rbp-50h]
  __int64 v22; // [rsp+C0h] [rbp-48h]
  __int64 *v23; // [rsp+C8h] [rbp-40h]
  __int64 v24; // [rsp+D0h] [rbp-38h]
  __int64 *v25; // [rsp+D8h] [rbp-30h]
  __int64 v26; // [rsp+E0h] [rbp-28h]
  __int64 *v27; // [rsp+E8h] [rbp-20h]
  __int64 v28; // [rsp+F0h] [rbp-18h]
  __int64 *v29; // [rsp+F8h] [rbp-10h]
  __int64 v30; // [rsp+100h] [rbp-8h]
  __int64 *v31; // [rsp+108h] [rbp+0h]
  __int64 v32; // [rsp+110h] [rbp+8h]

  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  SaveSupervisorState = 1;
  v3 = MillisecondCounter;
  v4 = IopLiveDumpCapture(a1);
  v6 = v4;
  if ( v4 < 0 || v4 == 258 )
  {
    if ( (*(_DWORD *)(a1 + 320) & 1) != 0 )
    {
      LOBYTE(v5) = 1;
      IopLiveDumpUncorralProcessors(a1 + 312, v5);
    }
    IopLiveDumpTraceMmDuplicateMemoryFailure(a1, v6);
    if ( v6 == 258 )
    {
      *(_DWORD *)(a1 + 80) |= 0x40u;
      v6 = -1073740682;
    }
  }
  else
  {
    if ( VslVsmEnabled && (*(_QWORD *)(a1 + 696) || *(_QWORD *)(a1 + 704)) )
      VslFinalizeLiveDumpInSk((_QWORD *)(a1 + 192), (_QWORD *)(a1 + 200), a1 + 144);
    if ( BYTE6(VslpReservedTransferLock.Queue)
      && VslpReservedTransferLock.WaitBlock[3].Thread
      && VslpReservedTransferLock.Teb )
    {
      memset_0(VslpReservedTransferLock.Teb, 0, LODWORD(VslpReservedTransferLock.RelativeTimerBias));
    }
    *(_QWORD *)(a1 + 480) = IopLiveDumpGetMillisecondCounter(0) - v3;
    IopLiveDumpTraceCaptureMemoryPages(a1);
  }
  SaveSupervisorState = 0;
  if ( (unsigned int)dword_140E06D90 > 5 && tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL) )
  {
    v8 = 0x1000000LL;
    v17 = &v8;
    v9 = *(_QWORD *)(a1 + 480);
    v18 = 8LL;
    v19 = &v9;
    v10 = *(_QWORD *)(a1 + 488);
    v21 = &v10;
    v11 = *(_QWORD *)(a1 + 496);
    v23 = &v11;
    v12 = *(_QWORD *)(a1 + 504);
    v25 = &v12;
    v13 = *(_QWORD *)(a1 + 512);
    v27 = &v13;
    v14 = *(_QWORD *)(a1 + 520);
    v29 = &v14;
    v15 = *(_QWORD *)(a1 + 528);
    v31 = &v15;
    v20 = 8LL;
    v22 = 8LL;
    v24 = 8LL;
    v26 = 8LL;
    v28 = 8LL;
    v30 = 8LL;
    v32 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06D90,
      (unsigned __int8 *)&word_140047B0E,
      (const GUID *)(a1 + 968),
      (const GUID *)(a1 + 952),
      0xAu,
      &v16);
  }
  return v6;
}
