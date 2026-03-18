/*
 * XREFs of ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B19BC
 * Callers:
 *     xxxCloseClipboard @ 0x1401B02A0 (xxxCloseClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14029419C (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1401B1E8C (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     _ConvertMemHandle @ 0x1401B23FC (_ConvertMemHandle.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1402CE6D4 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall MungeClipData(struct tagWINDOWSTATION *a1)
{
  struct tagCLIP *ClipFormat; // r14
  struct tagCLIP *v3; // rsi
  struct tagCLIP *v4; // rax
  struct tagCLIP *v5; // rbp
  struct tagCLIP *v6; // rbx
  struct tagCLIP *v7; // rbp
  struct tagCLIP *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagCLIP *v11; // rsi
  struct tagCLIP *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // [rsp+58h] [rbp+10h] BYREF

  ClipFormat = FindClipFormat((unsigned __int64)a1, 1u, 1);
  v3 = FindClipFormat((unsigned __int64)a1, 7u, 1);
  v4 = FindClipFormat((unsigned __int64)a1, 0xDu, 1);
  v5 = v4;
  if ( ClipFormat || v3 || v4 )
  {
    if ( !FindClipFormat((unsigned __int64)a1, 0x10u, 1) )
    {
      v15 = *((_QWORD *)PtiCurrent(v14) + 59);
      if ( v15 )
      {
        v19 = *(unsigned __int16 *)(v15 + 40);
        v16 = (void *)ConvertMemHandle(&v19, 4LL);
        v17 = (__int64)v16;
        if ( v16 )
        {
          if ( !(unsigned int)InternalSetClipboardData(a1, 0x10u, v16, 0, 1) )
          {
            v18 = HMValidateHandleNoRip(v17, 6);
            if ( v18 )
              HMUnlockDestroyObject(v18);
          }
        }
      }
    }
    if ( !ClipFormat )
      InternalSetClipboardData(a1, 1u, (void *)1, 0, 1);
    if ( !v3 )
      InternalSetClipboardData(a1, 7u, (void *)1, 0, 1);
    if ( !v5 )
      InternalSetClipboardData(a1, 0xDu, (void *)1, 0, 1);
  }
  if ( !FindClipFormat((unsigned __int64)a1, 3u, 1) )
  {
    v12 = FindClipFormat((unsigned __int64)a1, 0xEu, 1);
    if ( v12 )
    {
      v13 = 3;
LABEL_24:
      InternalSetClipboardData(a1, v13, (void *)((*((_QWORD *)v12 + 1) != 0LL) + 3LL), 0, 1);
      goto LABEL_6;
    }
  }
  if ( !FindClipFormat((unsigned __int64)a1, 0xEu, 1) )
  {
    v12 = FindClipFormat((unsigned __int64)a1, 3u, 1);
    if ( v12 )
    {
      v13 = 14;
      goto LABEL_24;
    }
  }
LABEL_6:
  v6 = FindClipFormat((unsigned __int64)a1, 2u, 1);
  v7 = FindClipFormat((unsigned __int64)a1, 8u, 1);
  v8 = FindClipFormat((unsigned __int64)a1, 0x11u, 1);
  v11 = v8;
  if ( !v6 )
  {
    if ( !v7 && !v8 )
      return;
    InternalSetClipboardData(a1, 2u, (void *)2, 0, 1);
  }
  if ( !v7 )
    InternalSetClipboardData(a1, 8u, (void *)2, 0, 1);
  if ( !v11 )
    InternalSetClipboardData(a1, 0x11u, (void *)2, 0, 1);
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904) + 7004LL) & 1) != 0
    && !FindClipFormat((unsigned __int64)a1, 9u, 1) )
  {
    if ( v7 || v11 )
      InternalSetClipboardData(a1, 9u, (void *)2, 0, 1);
    else
      PasteScreenPalette(a1);
  }
}
