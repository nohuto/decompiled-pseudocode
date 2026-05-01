/*
 * XREFs of ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18010DBB0
 * Callers:
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x18010DB80 (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18030F074 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U-$IAsyncOperatio.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803E7508 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803E763C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803EFD54 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 * Callees:
 *     ?SHProcessMessagesUpdateTimeout@@YAHKKPEAK@Z @ 0x1801EBFA0 (-SHProcessMessagesUpdateTimeout@@YAHKKPEAK@Z.c)
 */

unsigned int __fastcall SHProcessMessagesUntilEventsEx(
        HWND a1,
        void **a2,
        ULONG a3,
        unsigned int a4,
        DWORD a5,
        APTTYPE pAptType)
{
  BOOL v9; // r14d
  DWORD TickCount; // eax
  DWORD v11; // ecx
  unsigned int v12; // r15d
  unsigned int result; // eax
  HRESULT v14; // eax
  HCURSOR CursorW; // rax
  tagMSG Msg; // [rsp+30h] [rbp-30h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+90h] [rbp+30h] BYREF
  int v18; // [rsp+94h] [rbp+34h]
  DWORD dwindex; // [rsp+A8h] [rbp+48h] BYREF

  v18 = HIDWORD(a1);
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  v9 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0
    && pAptType == APTTYPE_STA
    && pAptQualifier == APTTYPEQUALIFIER_APPLICATION_STA;
  TickCount = GetTickCount();
  v11 = a4;
  dwindex = 0;
  v12 = TickCount;
  a5 = a4;
  result = -1;
  if ( a2 || a4 != -1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        v14 = CoWaitForMultipleHandles(0x18u, v11, a3, a2, &dwindex);
        if ( v14 == -2147417835 )
        {
          dwindex = 258;
        }
        else if ( v14 < 0 )
        {
          dwindex = -1;
        }
      }
      else
      {
        dwindex = MsgWaitForMultipleObjectsEx(a3, a2, v11, 0x1CFFu, 0);
      }
      if ( (unsigned int)SHProcessMessagesUpdateTimeout(v12, a4, &a5) )
      {
        result = dwindex;
      }
      else
      {
        result = 258;
        dwindex = 258;
      }
      if ( result != a3 )
        goto LABEL_33;
      memset(&Msg, 0, sizeof(Msg));
      while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      {
        if ( Msg.message == 18 )
        {
          PostQuitMessage(Msg.wParam);
LABEL_28:
          result = 258;
LABEL_29:
          dwindex = result;
          goto LABEL_32;
        }
        TranslateMessage(&Msg);
        if ( Msg.message != 32 || LOWORD(Msg.lParam) == 0xFFFE )
        {
          DispatchMessageW(&Msg);
        }
        else
        {
          CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F02);
          SetCursor(CursorW);
        }
        if ( a3 )
        {
          result = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
          if ( result != 258 )
            goto LABEL_29;
        }
        if ( !(unsigned int)SHProcessMessagesUpdateTimeout(v12, a4, &a5) )
          goto LABEL_28;
      }
      result = dwindex;
LABEL_32:
      if ( result != a3 )
      {
LABEL_33:
        if ( result != 192 )
          break;
      }
      v11 = a5;
    }
    if ( result == 258 && a3 )
    {
      result = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
      if ( result == 258 )
        return dwindex;
    }
  }
  return result;
}
