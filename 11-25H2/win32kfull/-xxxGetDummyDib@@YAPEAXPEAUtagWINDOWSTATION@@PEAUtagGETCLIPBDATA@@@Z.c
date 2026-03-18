/*
 * XREFs of ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B4028
 * Callers:
 *     xxxGetClipboardData @ 0x1401118D0 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     xxxGetClipboardData @ 0x1401118D0 (xxxGetClipboardData.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1401137C0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401EF344 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     _ConvertMemHandle @ 0x1401F588C (_ConvertMemHandle.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14022553C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1402B3C38 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 */

void *__fastcall xxxGetDummyDib(struct tagTHREADINFO **a1, struct tagGETCLIPBDATA *a2)
{
  void *ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  void *result; // rax
  struct tagCLIP *v7; // rax
  Gre::Base *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  struct tagBITMAPINFOHEADER *v11; // rax
  struct tagBITMAPINFOHEADER *v12; // rbp
  int v13; // eax
  __int64 v14; // r8
  int biHeight; // edx
  struct tagCLIP *v16; // rax
  __int64 v17; // rdx
  struct tagCLIP *v18; // rsi
  __int64 v19; // rax

  ClipboardData = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 7004LL) & 1) != 0 )
  {
    ClipboardData = xxxGetClipboardData(a1, 9LL, (__int64)a2);
    if ( !ClipboardData )
      return 0LL;
  }
  ClipFormat = FindClipFormat((unsigned __int64)a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      result = xxxGetClipboardData(a1, 17LL, (__int64)a2);
      if ( result )
      {
        *(_DWORD *)a2 = 17;
        *((_QWORD *)a2 + 1) = ClipboardData;
        return result;
      }
    }
  }
  v7 = FindClipFormat((unsigned __int64)a1, 2u, 1);
  if ( !v7 )
    return 0LL;
  if ( *((_QWORD *)v7 + 1) == 2LL )
    return 0LL;
  v8 = (Gre::Base *)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v8 )
    return 0LL;
  v10 = 0LL;
  v11 = xxxBMPtoDIB(v8, (__int64)ClipboardData, 0LL, v9);
  v12 = v11;
  if ( v11 )
  {
    v13 = SizeOfDibColorTable(v11);
    biHeight = -v12->biHeight;
    if ( v12->biHeight > 0 )
      biHeight = v12->biHeight;
    v10 = ConvertMemHandle(
            v12,
            v12->biSize + v13 + (((v12->biWidth * v12->biBitCount + 31) >> 3) & 0xFFFFFFFC) * biHeight,
            v14);
    Win32FreePool(v12);
    if ( v10 )
    {
      v16 = FindClipFormat((unsigned __int64)a1, 8u, 1);
      v18 = v16;
      if ( v16 )
      {
        UT_FreeCBFormat(v16);
        *((_QWORD *)v18 + 1) = v10;
        *(_DWORD *)a2 = 8;
      }
      else
      {
        LOBYTE(v17) = 6;
        v19 = HMValidateHandleNoRip(v10, v17);
        if ( v19 )
          HMUnlockDestroyObject(v19);
        return 0LL;
      }
    }
  }
  return (void *)v10;
}
