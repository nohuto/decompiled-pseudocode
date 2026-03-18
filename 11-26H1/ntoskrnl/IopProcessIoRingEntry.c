/*
 * XREFs of IopProcessIoRingEntry @ 0x140B00D00
 * Callers:
 *     NtSubmitIoRing @ 0x1404DCF60 (NtSubmitIoRing.c)
 * Callees:
 *     IopIoRingSetupCompletionWait @ 0x1404DD230 (IopIoRingSetupCompletionWait.c)
 *     IopIoRingWaitForCompletionEvent @ 0x14052B580 (IopIoRingWaitForCompletionEvent.c)
 *     IopIoRingDispatchComplete @ 0x14077C364 (IopIoRingDispatchComplete.c)
 *     IopIoRingDispatchCancel @ 0x140797ED8 (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchFlush @ 0x140797FA0 (IopIoRingDispatchFlush.c)
 *     IopIoRingDispatchReadScatter @ 0x140798090 (IopIoRingDispatchReadScatter.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x1407981A4 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x140798550 (IopIoRingDispatchRegisterFiles.c)
 *     IopIoRingDispatchWrite @ 0x1407987BC (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchWriteGather @ 0x140798974 (IopIoRingDispatchWriteGather.c)
 *     IopIoRingDispatchRead @ 0x140B00E10 (IopIoRingDispatchRead.c)
 */

void __fastcall IopProcessIoRingEntry(_QWORD *a1, _DWORD *a2, _BYTE *a3, __int64 a4)
{
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  if ( (a2[1] & 1) != 0 )
  {
    v10 = 0;
    IopIoRingSetupCompletionWait((__int64)a1, 0, 0xFFFFFFFF, 0, &v10);
    if ( v10 )
    {
      IopIoRingWaitForCompletionEvent((__int64)a1, 0, 0, 0LL);
      *a3 = 1;
    }
  }
  ++a1[14];
  if ( (a2[1] & 0xFFFFFFFE) != 0 && *a2 != 2 && *a2 != 3 )
  {
    v8 = -1069154303;
LABEL_9:
    v7 = (__int64)a2;
    v9 = (__int64)a1;
LABEL_10:
    IopIoRingDispatchComplete(v9, v7, v8);
    return;
  }
  if ( !*a2 )
  {
    v8 = 0;
    goto LABEL_9;
  }
  v7 = (__int64)a2;
  switch ( *a2 )
  {
    case 1:
      IopIoRingDispatchRead(a1);
      return;
    case 2:
      IopIoRingDispatchRegisterFiles((__int64)a1, (__int64)a2);
      break;
    case 3:
      IopIoRingDispatchRegisterBuffers((__int64)a1, (__int64)a2);
      break;
    case 4:
      IopIoRingDispatchCancel((__int64)a1, (__int64)a2);
      break;
    case 5:
      IopIoRingDispatchWrite((__int64)a1, (__int64)a2);
      break;
    case 6:
      IopIoRingDispatchFlush(a1, (__int64)a2);
      break;
    case 7:
      IopIoRingDispatchReadScatter(a1, (__int64)a2, (__int64)a3, a4);
      break;
    default:
      v9 = (__int64)a1;
      if ( *a2 != 8 )
      {
        v8 = -1073741822;
        goto LABEL_10;
      }
      IopIoRingDispatchWriteGather(a1, (__int64)a2, (__int64)a3, a4);
      break;
  }
}
