/*
 * XREFs of ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18003A9E4
 * Callers:
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180027C60 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180048C74 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@Applic.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180048DA0 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
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
  BOOL v8; // r14d
  unsigned int result; // eax
  HRESULT v10; // eax
  HCURSOR CursorW; // rax
  tagMSG Msg; // [rsp+30h] [rbp-30h] BYREF
  DWORD dwindex; // [rsp+98h] [rbp+38h] BYREF

  dwindex = a4;
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  v8 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0
    && pAptType == APTTYPE_STA
    && pAptQualifier == APTTYPEQUALIFIER_APPLICATION_STA;
  GetTickCount();
  dwindex = 0;
  if ( !a2 )
    return -1;
  while ( 1 )
  {
    if ( v8 )
    {
      v10 = CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, a3, a2, &dwindex);
      if ( v10 == -2147417835 )
      {
        result = 258;
      }
      else
      {
        if ( v10 >= 0 )
        {
          result = dwindex;
          goto LABEL_16;
        }
        result = -1;
      }
    }
    else
    {
      result = MsgWaitForMultipleObjectsEx(a3, a2, 0xFFFFFFFF, 0x1CFFu, 0);
    }
    dwindex = result;
LABEL_16:
    if ( result != a3 )
      goto LABEL_30;
    memset(&Msg, 0, sizeof(Msg));
    while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
    {
      if ( Msg.message == 18 )
      {
        PostQuitMessage(Msg.wParam);
        result = 258;
LABEL_26:
        dwindex = result;
        goto LABEL_29;
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
          goto LABEL_26;
      }
    }
    result = dwindex;
LABEL_29:
    if ( result != a3 )
    {
LABEL_30:
      if ( result != 192 )
        break;
    }
  }
  if ( result == 258 && a3 )
  {
    result = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
    if ( result == 258 )
      return dwindex;
  }
  return result;
}
