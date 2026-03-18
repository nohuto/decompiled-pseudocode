/*
 * XREFs of ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x140124264
 * Callers:
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124220 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     _anonymous_namespace_::xxxRestoreMouseCursors @ 0x140125C04 (_anonymous_namespace_--xxxRestoreMouseCursors.c)
 * Callees:
 *     xxxClientLoadImage @ 0x1401244C4 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1401247A8 (xxxClientExpandStringW.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124AB0 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUpdateSystemCursorFromRegistry(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // edi
  __int64 UserSessionState; // rax
  int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  WCHAR *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  unsigned int v21; // eax
  PWSTR Buffer; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v28; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[528]; // [rsp+270h] [rbp+170h] BYREF

  v3 = (int)a2;
  DestinationString = 0LL;
  v6 = 576;
  UserSessionState = W32GetUserSessionState(a1, a2);
  FastGetProfileStringFromIDW(
    a1,
    1LL,
    *(unsigned __int16 *)(UserSessionState + 552 * v3 + 21874),
    &pszFormat,
    SourceString,
    260,
    0);
  if ( SourceString[0] )
  {
    v9 = 4LL;
    v6 = 592;
    v10 = 4LL;
    v11 = v30;
    v12 = SourceString;
    do
    {
      v13 = *((_OWORD *)v12 + 1);
      *v11 = *(_OWORD *)v12;
      v14 = *((_OWORD *)v12 + 2);
      v11[1] = v13;
      v15 = *((_OWORD *)v12 + 3);
      v11[2] = v14;
      v16 = *((_OWORD *)v12 + 4);
      v11[3] = v15;
      v17 = *((_OWORD *)v12 + 5);
      v11[4] = v16;
      v18 = *((_OWORD *)v12 + 6);
      v11[5] = v17;
      v19 = *((_OWORD *)v12 + 7);
      v12 += 64;
      v11[6] = v18;
      v11 += 8;
      *(v11 - 1) = v19;
      --v10;
    }
    while ( v10 );
    *(_QWORD *)v11 = *(_QWORD *)v12;
    v28 = v30;
    v20 = -1LL;
    do
      ++v20;
    while ( SourceString[v20] );
    v21 = 2 * v20;
    if ( v21 >= 0x206 )
      v21 = 518;
    v27[0] = v21;
    v27[1] = 520;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (unsigned int)xxxClientExpandStringW((struct _LARGE_STRING *)v27) )
    {
      Buffer = DestinationString.Buffer;
      v6 = 80;
      v23 = v28;
      do
      {
        *(_OWORD *)Buffer = *v23;
        *((_OWORD *)Buffer + 1) = v23[1];
        *((_OWORD *)Buffer + 2) = v23[2];
        *((_OWORD *)Buffer + 3) = v23[3];
        *((_OWORD *)Buffer + 4) = v23[4];
        *((_OWORD *)Buffer + 5) = v23[5];
        *((_OWORD *)Buffer + 6) = v23[6];
        Buffer += 64;
        v24 = v23[7];
        v23 += 8;
        *((_OWORD *)Buffer - 1) = v24;
        --v9;
      }
      while ( v9 );
      *(_QWORD *)Buffer = *(_QWORD *)v23;
      DestinationString.Length = v27[0];
      if ( LOWORD(v27[0]) >= 0x206u )
        DestinationString.Length = 518;
      DestinationString.MaximumLength = 520;
    }
  }
  else
  {
    DestinationString.Buffer = (PWSTR)(unsigned __int16)(v3 + 100);
  }
  result = xxxClientLoadImage((unsigned int)&DestinationString, v8, 2, 0, 0, v6);
  if ( result )
    return zzzInternalSetSystemCursor(result, (unsigned int)v3, &DestinationString, a3);
  return result;
}
