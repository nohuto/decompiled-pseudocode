/*
 * XREFs of ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1400148D8
 * Callers:
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14013E294 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     NtUserGetIconInfo @ 0x1401E2A80 (NtUserGetIconInfo.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x140015078 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GreCreateDIBitmap @ 0x140015974 (GreCreateDIBitmap.c)
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     GetCursorSizesIndexFromDpi @ 0x14002BC2C (GetCursorSizesIndexFromDpi.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GreStretchBlt @ 0x14016B458 (GreStretchBlt.c)
 *     GetCursorSizeFromIndex @ 0x1401BFD2C (GetCursorSizeFromIndex.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall _InternalGetIconInfo(
        struct tagCURSOR *a1,
        struct _ICONINFO *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        bool a6)
{
  struct tagCURSOR *v6; // r13
  INT v7; // esi
  int v8; // r12d
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Bitmap; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 UserSessionState; // rax
  __int64 DIBitmap; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int DpiForSystem; // eax
  unsigned int CursorSizesIndexFromDpi; // eax
  INT CursorSizeFromIndex; // ebx
  __int64 v49; // rax
  int v50; // r14d
  int v51; // edi
  HDC v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rax
  struct tagCURSOR **v55; // r13
  int v56; // ebx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  HDC v60; // [rsp+28h] [rbp-130h]
  INT a; // [rsp+70h] [rbp-E8h]
  INT aa; // [rsp+70h] [rbp-E8h]
  unsigned int b; // [rsp+74h] [rbp-E4h]
  BOOL v64; // [rsp+78h] [rbp-E0h]
  __int64 v67; // [rsp+90h] [rbp-C8h]
  __int64 v68; // [rsp+98h] [rbp-C0h]
  int v69; // [rsp+A0h] [rbp-B8h]
  HDC v70; // [rsp+A8h] [rbp-B0h]
  HDC v71; // [rsp+A8h] [rbp-B0h]
  __int64 v73; // [rsp+C0h] [rbp-98h]
  __int64 v74; // [rsp+C8h] [rbp-90h]
  _DWORD v75[3]; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v76; // [rsp+ECh] [rbp-6Ch]
  int v77; // [rsp+F4h] [rbp-64h]
  __int64 v78; // [rsp+F8h] [rbp-60h]
  int v79; // [rsp+100h] [rbp-58h]
  __int64 v80; // [rsp+104h] [rbp-54h]

  v6 = a1;
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    v55 = (struct tagCURSOR **)*((_QWORD *)a1 + 12);
    if ( !v55 )
      return 0;
    v6 = *v55;
  }
  b = *((_DWORD *)v6 + 35);
  a = *((_DWORD *)v6 + 36);
  if ( ShouldVirtualizeIconCursorSize(v6) )
  {
    DpiForSystem = GetDpiForSystem();
    CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(DpiForSystem);
    CursorSizeFromIndex = GetCursorSizeFromIndex(CursorSizesIndexFromDpi);
    b = EngMulDiv(b, CursorSizeFromIndex, *((_DWORD *)v6 + 19));
    a = EngMulDiv(a, CursorSizeFromIndex, *((_DWORD *)v6 + 19));
  }
  v7 = b;
  v64 = b != *((_DWORD *)v6 + 35);
  if ( !*((_QWORD *)v6 + 12) || a6 )
  {
    v8 = a;
    v9 = a;
  }
  else
  {
    v8 = a;
    v9 = a / 2;
  }
  Bitmap = GreCreateBitmap(b, v9, 1LL, 1LL, 0LL);
  v68 = Bitmap;
  if ( !Bitmap )
    return 0;
  v13 = 0LL;
  v67 = 0LL;
  if ( *((_QWORD *)v6 + 12) )
  {
    v14 = (unsigned int)(v8 >> 31);
    LODWORD(v14) = v8 % 2;
    if ( *((_DWORD *)v6 + 34) == 32 )
    {
      v78 = 0LL;
      v80 = 0LL;
      v75[0] = 40;
      v75[1] = b;
      v75[2] = v8 / 2;
      v76 = 2097153LL;
      v77 = 0;
      v79 = 0;
      UserSessionState = W32GetUserSessionState(32LL, v14);
      DIBitmap = GreCreateDIBitmap(
                   *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 64LL),
                   0,
                   0,
                   (unsigned int)v75,
                   0,
                   44,
                   0,
                   0LL,
                   0,
                   0LL,
                   0,
                   0LL);
    }
    else
    {
      v49 = W32GetUserSessionState(32LL, v14);
      DIBitmap = GreCreateCompatibleBitmapEx(
                   *(_QWORD *)(*(_QWORD *)(v49 + 56968) + 64LL),
                   b,
                   (unsigned int)(v8 / 2),
                   0LL,
                   0LL,
                   0LL);
    }
    v67 = DIBitmap;
    v13 = DIBitmap;
    if ( !DIBitmap )
    {
      GreDeleteObject(Bitmap);
      return 0;
    }
  }
  v17 = *((_QWORD *)v6 + 11);
  v18 = W32GetUserSessionState(v11, v10);
  v73 = GreSelectBitmap(*(_QWORD *)(v18 + 43256), v17);
  v21 = W32GetUserSessionState(v20, v19);
  v74 = GreSelectBitmap(*(_QWORD *)(v21 + 43248), v68);
  if ( v64 )
  {
    if ( !*((_QWORD *)v6 + 12) || a6 )
      v56 = *((_DWORD *)v6 + 36);
    else
      v56 = *((_DWORD *)v6 + 36) >> 1;
    v69 = *((_DWORD *)v6 + 35);
    v71 = *(HDC *)(W32GetUserSessionState(v23, v22) + 43256);
    if ( !*((_QWORD *)v6 + 12) || a6 )
    {
      aa = v8;
    }
    else
    {
      v57 = (unsigned int)(v8 >> 31);
      LODWORD(v57) = v8 % 2;
      aa = v8 / 2;
    }
    v59 = W32GetUserSessionState(v58, v57);
    GreStretchBlt(*(HDC *)(v59 + 43248), 0, 0, b, aa, v71, 0, 0, v69, v56, 0xCC0020u, 0xFFFFFFu);
  }
  else
  {
    v70 = *(HDC *)(W32GetUserSessionState(v23, v22) + 43256);
    if ( !*((_QWORD *)v6 + 12) || a6 )
    {
      v26 = v8;
    }
    else
    {
      v24 = (unsigned int)(v8 >> 31);
      LODWORD(v24) = v8 % 2;
      v26 = v8 / 2;
    }
    v27 = W32GetUserSessionState(v25, v24);
    GreBitBltInternal(*(_QWORD *)(v27 + 43248), 0LL, 0LL, b, v26, v70, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  if ( v13 )
  {
    v30 = *((_QWORD *)v6 + 12);
    v31 = W32GetUserSessionState(v29, v28);
    GreSelectBitmap(*(_QWORD *)(v31 + 43256), v30);
    v34 = W32GetUserSessionState(v33, v32);
    GreSelectBitmap(*(_QWORD *)(v34 + 43248), v13);
    if ( v64 )
    {
      v50 = *((_DWORD *)v6 + 36) >> 1;
      v51 = *((_DWORD *)v6 + 35);
      v52 = *(HDC *)(W32GetUserSessionState(v36, v35) + 43256);
      v53 = (unsigned int)(v8 >> 31);
      LODWORD(v53) = v8 % 2;
      v54 = W32GetUserSessionState(2LL, v53);
      v60 = v52;
      v7 = b;
      GreStretchBlt(*(HDC *)(v54 + 43248), 0, 0, b, v8 / 2, v60, 0, 0, v51, v50, 0xCC0020u, 0);
    }
    else
    {
      v37 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 43256);
      v38 = (unsigned int)(v8 >> 31);
      LODWORD(v38) = v8 % 2;
      v40 = W32GetUserSessionState(v39, v38);
      GreBitBltInternal(*(_QWORD *)(v40 + 43248), 0LL, 0LL, b, v8 / 2, v37, 0, 0, 13369376, 0, 0);
    }
    v13 = v67;
  }
  v41 = W32GetUserSessionState(v29, v28);
  GreSelectBitmap(*(_QWORD *)(v41 + 43256), v73);
  v44 = W32GetUserSessionState(v43, v42);
  GreSelectBitmap(*(_QWORD *)(v44 + 43248), v74);
  *(_DWORD *)a2 = *((_WORD *)v6 + 37) == 3;
  *((_DWORD *)a2 + 1) = EngMulDiv(*((__int16 *)v6 + 42), v7, *((_DWORD *)v6 + 35));
  *((_DWORD *)a2 + 2) = EngMulDiv(*((__int16 *)v6 + 43), v7, *((_DWORD *)v6 + 35));
  *((_QWORD *)a2 + 2) = v68;
  *((_QWORD *)a2 + 3) = v13;
  if ( a3 )
  {
    if ( *((_WORD *)v6 + 36) )
      a3->Length = UserGetAtomName(*((unsigned __int16 *)v6 + 36), a3->Buffer, a3->MaximumLength >> 1);
    else
      a3->Length = 0;
  }
  if ( a4 )
  {
    if ( (*((_QWORD *)v6 + 8) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(a4, (PCUNICODE_STRING)((char *)v6 + 56));
    else
      *a4 = *(struct _UNICODE_STRING *)((char *)v6 + 56);
  }
  if ( a5 )
    *a5 = *((_DWORD *)v6 + 34);
  return 1;
}
