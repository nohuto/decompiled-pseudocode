/*
 * XREFs of xxxPSMTextOut @ 0x1402EE394
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14002A200 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     GetPrefixCount @ 0x14002B41C (GetPrefixCount.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 *     _GetTextMetricsW @ 0x1400C00C4 (_GetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x1400C13EC (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GreGetTextColor @ 0x14021FA6C (GreGetTextColor.c)
 *     xxxClientPSMTextOut @ 0x1402BE1C0 (xxxClientPSMTextOut.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxPSMTextOut(HDC a1, __int64 a2, unsigned int a3, WCHAR *a4, unsigned int a5, int a6)
{
  unsigned int v8; // r15d
  __int64 v10; // r12
  __m128i *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  int PrefixCount; // edi
  int v16; // ebx
  int v17; // r13d
  unsigned int v18; // edi
  int TextColor; // eax
  int v20; // ebx
  unsigned int v21; // [rsp+38h] [rbp-71h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  _OWORD v24[2]; // [rsp+58h] [rbp-51h] BYREF
  __int128 v25; // [rsp+78h] [rbp-31h]
  __int64 v26; // [rsp+88h] [rbp-21h]
  int v27; // [rsp+90h] [rbp-19h]
  unsigned int v28[4]; // [rsp+98h] [rbp-11h] BYREF

  v8 = a2;
  memset(v24, 0, sizeof(v24));
  v10 = W32GetUserSessionState(a1, a2) + 57024;
  v26 = 0LL;
  v11 = (__m128i *)v10;
  v27 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v25 = 0LL;
  v14 = PtiCurrent(v13, v12);
  if ( (unsigned int)CALL_LPK(v14) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a4);
    xxxClientPSMTextOut(a1, v8, a3, (char **)&DestinationString, a5, a6);
  }
  else if ( a5 < 0xFF || (v11 = (__m128i *)Win32AllocPoolZInit(2LL * (int)(a5 + 1), 1953657685LL)) != 0LL )
  {
    PrefixCount = GetPrefixCount((__int16 *)a4, a5, (__int64)v11, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutW(a1, v8, a3, 0, 0LL, (unsigned __int16 *)v11, a5 - HIWORD(PrefixCount), v21);
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      if ( (unsigned int)GetTextMetricsW(a1, (__int64)v24) )
      {
        v16 = v25;
        v17 = DWORD1(v24[0]);
      }
      else
      {
        v16 = 0;
        v17 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, v11, (unsigned __int16)PrefixCount, (struct tagSIZE *)&DestinationString);
        v8 += *(_DWORD *)&DestinationString.Length - v16;
      }
      GreGetTextExtentW(
        a1,
        (__m128i *)((char *)v11 + 2 * (unsigned __int16)PrefixCount),
        1LL,
        (struct tagSIZE *)&DestinationString);
      v28[0] = v8;
      v18 = v17 + a3 + 1;
      v28[1] = v18;
      v28[3] = v18 + 1;
      v28[2] = v8 + DestinationString.Length - v16 / 2;
      TextColor = GreGetTextColor(a1);
      v20 = GreSetBkColor(a1, TextColor);
      GreExtTextOutW(a1, v8, v18, 2, v28, (unsigned __int16 *)&pszFormat, 0, v21);
      GreSetBkColor(a1, v20);
    }
    if ( v11 != (__m128i *)v10 )
      Win32FreePool(v11);
  }
}
