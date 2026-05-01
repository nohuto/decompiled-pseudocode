/*
 * XREFs of ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x1801B9660
 * Callers:
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x1801B9630 (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803131CC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U-$IAsyncOperatio.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803DE414 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803DE53C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803E64D8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SHProcessMessagesUntilEventsEx(
        HWND a1,
        void **a2,
        ULONG a3,
        DWORD a4,
        APTTYPE pAptType,
        APTTYPEQUALIFIER pAptQualifier)
{
  _BOOL8 v9; // r15
  DWORD TickCount; // eax
  DWORD v11; // ebx
  DWORD v12; // r12d
  unsigned int result; // eax
  DWORD v14; // eax
  DWORD v15; // eax
  HRESULT v16; // eax
  HCURSOR CursorW; // rax
  struct tagMSG Msg; // [rsp+30h] [rbp-30h] BYREF
  DWORD dwindex; // [rsp+A8h] [rbp+48h] BYREF

  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  v9 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0
    && pAptType == APTTYPE_STA
    && pAptQualifier == APTTYPEQUALIFIER_APPLICATION_STA;
  TickCount = GetTickCount();
  dwindex = 0;
  v11 = a4;
  v12 = TickCount;
  result = -1;
  if ( a2 || a4 != -1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        v16 = CoWaitForMultipleHandles(0x18u, v11, a3, a2, &dwindex);
        if ( v16 == -2147417835 )
        {
          result = 258;
        }
        else
        {
          if ( v16 >= 0 )
          {
            result = dwindex;
            goto LABEL_7;
          }
          result = -1;
        }
      }
      else
      {
        result = MsgWaitForMultipleObjectsEx(a3, a2, v11, 0x1CFFu, 0);
      }
      dwindex = result;
LABEL_7:
      v11 = 0;
      if ( a4 == -1 )
      {
        v11 = -1;
      }
      else
      {
        v14 = GetTickCount() - v12;
        if ( v14 > a4 )
        {
          result = 258;
          dwindex = 258;
        }
        else
        {
          v11 = a4 - v14;
          result = dwindex;
        }
      }
      if ( result != a3 )
        goto LABEL_23;
      memset(&Msg, 0, sizeof(Msg));
      while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      {
        if ( Msg.message == 18 )
        {
          PostQuitMessage(Msg.wParam);
LABEL_42:
          result = 258;
LABEL_21:
          dwindex = result;
          goto LABEL_22;
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
            goto LABEL_21;
        }
        v11 = 0;
        if ( a4 == -1 )
        {
          v11 = -1;
        }
        else
        {
          v15 = GetTickCount() - v12;
          if ( v15 > a4 )
            goto LABEL_42;
          v11 = a4 - v15;
        }
      }
      result = dwindex;
LABEL_22:
      if ( result != a3 )
      {
LABEL_23:
        if ( result != 192 )
        {
          if ( result == 258 && a3 )
          {
            result = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
            if ( result == 258 )
              return dwindex;
          }
          return result;
        }
      }
    }
  }
  return result;
}
