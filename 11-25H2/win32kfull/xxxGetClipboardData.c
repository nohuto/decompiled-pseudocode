/*
 * XREFs of xxxGetClipboardData @ 0x1401118D0
 * Callers:
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B3E88 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B4028 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B41CC (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B43B0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1402B448C (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x140111A3C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1401137C0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B3E88 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B4028 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B41CC (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B43B0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1402B448C (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 */

void *__fastcall xxxGetClipboardData(struct tagTHREADINFO **a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v7; // rcx
  void *v8; // rbx
  int v9; // eax
  int v11; // ecx
  void *RenderData; // rax
  struct tagCLIP *v13; // rax

  v4 = a2;
  if ( a1[10] != PtiCurrent((__int64)a1, a2) )
  {
    v11 = 1418;
    goto LABEL_16;
  }
  ClipFormat = FindClipFormat((struct tagWINDOWSTATION *)a1, v4, 1u);
  v7 = ClipFormat;
  if ( !ClipFormat )
  {
    v11 = 1168;
LABEL_16:
    UserSetLastError(v11);
    return 0LL;
  }
  if ( (unsigned __int64)(*((_QWORD *)ClipFormat + 1) - 3LL) <= 1 )
  {
    if ( v4 == 14 )
    {
      v4 = 3;
    }
    else if ( v4 == 3 )
    {
      v4 = 14;
    }
    v7 = FindClipFormat((struct tagWINDOWSTATION *)a1, v4, 1u);
    if ( !v7 )
      return 0LL;
  }
  v8 = (void *)*((_QWORD *)v7 + 1);
  if ( !v8 || v8 == (void *)3 )
  {
    RenderData = xxxGetRenderData((struct tagWINDOWSTATION *)a1, v4);
LABEL_20:
    v8 = RenderData;
    goto LABEL_21;
  }
  if ( v8 != (void *)2 )
  {
    if ( v8 != (void *)1 )
    {
      if ( !a3 )
        return v8;
      v9 = *((_DWORD *)v7 + 4);
LABEL_13:
      *(_DWORD *)(a3 + 4) = v9;
      return v8;
    }
    RenderData = xxxGetDummyText((struct tagWINDOWSTATION *)a1, v4, (struct tagGETCLIPBDATA *)a3);
    goto LABEL_20;
  }
  switch ( v4 )
  {
    case 2u:
      RenderData = xxxGetDummyBitmap((struct tagWINDOWSTATION *)a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_20;
    case 8u:
      RenderData = xxxGetDummyDib((struct tagWINDOWSTATION *)a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_20;
    case 9u:
      RenderData = xxxGetDummyPalette((struct tagWINDOWSTATION *)a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_20;
    case 0x11u:
      RenderData = xxxGetDummyDibV5((struct tagWINDOWSTATION *)a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_20;
  }
LABEL_21:
  v13 = FindClipFormat((struct tagWINDOWSTATION *)a1, v4, 1u);
  if ( v13 )
  {
    if ( !a3 )
      return v8;
    v9 = *((_DWORD *)v13 + 4);
    goto LABEL_13;
  }
  return 0LL;
}
