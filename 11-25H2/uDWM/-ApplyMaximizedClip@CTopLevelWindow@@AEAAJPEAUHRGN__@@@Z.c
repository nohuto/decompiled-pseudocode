/*
 * XREFs of ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18001113C
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180010470 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x1800110C8 (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1800E97E4 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ApplyMaximizedClip(CTopLevelWindow *this, HRGN a2)
{
  signed int v2; // ebx
  LONG v5; // r8d
  LONG v6; // r9d
  LONG v7; // eax
  LONG v8; // eax
  HRGN v9; // rsi
  signed int v10; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  signed int LastError; // eax
  struct tagRECT v15; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)this + 200) & 4) != 0 )
  {
    v5 = *((_DWORD *)this + 159);
    v6 = *((_DWORD *)this + 161);
    *(_QWORD *)&v15.left = 0LL;
    v7 = *((_DWORD *)this + 18) - *((_DWORD *)this + 160);
    v15.left = v5;
    v15.top = v6;
    if ( v5 > v7 )
      v7 = v5;
    v15.right = v7;
    v8 = *((_DWORD *)this + 19) - *((_DWORD *)this + 162);
    if ( v6 > v8 )
      v8 = v6;
    v15.bottom = v8;
    SetLastError(0);
    v9 = CreateRectRgnCoerceInvalid(&v15);
    if ( v9 )
    {
      SetLastError(0);
      if ( !CombineRgn(a2, a2, v9, 1) )
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9AD0, 10LL, v2, 0x1398u, 0LL);
      }
      DeleteObject(v9);
    }
    else
    {
      v10 = GetLastError();
      v2 = v10;
      if ( v10 > 0 )
        v2 = (unsigned __int16)v10 | 0x80070000;
      if ( v2 >= 0 )
        v2 = CheckGUIHandleQuota(v12, v11, v13);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9AD0, 10LL, v2, 0x1396u, 0LL);
    }
  }
  return (unsigned int)v2;
}
