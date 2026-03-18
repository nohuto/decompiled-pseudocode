/*
 * XREFs of ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1400629EC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     GetMessageWindow @ 0x140062A3C (GetMessageWindow.c)
 *     strcmp_0 @ 0x140342394 (strcmp_0.c)
 */

__int64 __fastcall IsOleDragDropCaptureWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 MessageWindow; // rax
  __int64 v3; // rcx
  __int64 v5; // rax
  const char *v6; // rcx

  v1 = 0;
  if ( a1 )
  {
    MessageWindow = GetMessageWindow(a1);
    if ( *(_QWORD *)(v3 + 104) == MessageWindow )
    {
      v5 = *(_QWORD *)(v3 + 136);
      if ( v5 )
      {
        v6 = *(const char **)(v5 + 104);
        if ( v6 )
          LOBYTE(v1) = strcmp_0(v6, "CLIPBRDWNDCLASS") == 0;
      }
    }
  }
  return v1;
}
