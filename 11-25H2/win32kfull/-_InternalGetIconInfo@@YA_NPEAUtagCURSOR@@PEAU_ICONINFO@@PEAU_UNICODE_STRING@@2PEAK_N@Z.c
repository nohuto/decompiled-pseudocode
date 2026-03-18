/*
 * XREFs of ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x14007B1BC
 * Callers:
 *     NtUserGetIconInfo @ 0x14007ABF0 (NtUserGetIconInfo.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1401310F0 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     NtGdiStretchBlt @ 0x140076870 (NtGdiStretchBlt.c)
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 *     GreCreateDIBitmapReal @ 0x14007C73C (GreCreateDIBitmapReal.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x140273994 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall _InternalGetIconInfo(
        struct tagCURSOR *a1,
        struct _ICONINFO *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        bool a6)
{
  struct tagCURSOR *v6; // r15
  INT v7; // r14d
  int v8; // r12d
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Bitmap; // rdi
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 UserSessionState; // rax
  __int64 DIBitmapReal; // rax
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
  HDC v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  INT v45; // eax
  INT v46; // eax
  USHORT AtomName; // ax
  __int64 v49; // rax
  struct tagCURSOR **v50; // r15
  int v51; // r14d
  int v52; // edi
  HDC v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // ebx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // [rsp+70h] [rbp-E8h] BYREF
  INT b; // [rsp+74h] [rbp-E4h] BYREF
  BOOL v62; // [rsp+78h] [rbp-E0h]
  struct _ICONINFO *v63; // [rsp+80h] [rbp-D8h]
  struct _UNICODE_STRING *v64; // [rsp+88h] [rbp-D0h]
  int v65; // [rsp+90h] [rbp-C8h]
  __int64 v66; // [rsp+98h] [rbp-C0h]
  __int64 v67; // [rsp+A0h] [rbp-B8h]
  HDC v68; // [rsp+A8h] [rbp-B0h]
  PUNICODE_STRING DestinationString; // [rsp+B0h] [rbp-A8h]
  unsigned int *v70; // [rsp+B8h] [rbp-A0h]
  __int64 v71; // [rsp+C0h] [rbp-98h]
  __int64 v72; // [rsp+C8h] [rbp-90h]
  int v73; // [rsp+E0h] [rbp-78h]
  INT v74; // [rsp+E4h] [rbp-74h]
  int v75; // [rsp+E8h] [rbp-70h]
  __int64 v76; // [rsp+ECh] [rbp-6Ch]
  int v77; // [rsp+F4h] [rbp-64h]
  __int64 v78; // [rsp+F8h] [rbp-60h]
  int v79; // [rsp+100h] [rbp-58h]
  __int64 v80; // [rsp+104h] [rbp-54h]

  v6 = a1;
  v63 = a2;
  v64 = a3;
  DestinationString = a4;
  v70 = a5;
  b = 0;
  v60 = 0;
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    v50 = (struct tagCURSOR **)*((_QWORD *)a1 + 12);
    if ( !v50 )
      return 0;
    v6 = *v50;
  }
  GetVirtualizedCursorSize(v6, &b, &v60);
  v7 = b;
  v62 = b != *((_DWORD *)v6 + 35);
  if ( !*((_QWORD *)v6 + 12) || a6 )
  {
    v8 = v60;
    v9 = v60;
  }
  else
  {
    v8 = v60;
    v9 = v60 / 2;
  }
  Bitmap = GreCreateBitmap((unsigned int)b, v9, 1LL, 1LL);
  v66 = Bitmap;
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
      v73 = 40;
      v74 = v7;
      v75 = v8 / 2;
      v76 = 2097153LL;
      v77 = 0;
      v79 = 0;
      UserSessionState = W32GetUserSessionState(32LL, v14);
      DIBitmapReal = GreCreateDIBitmapReal(
                       *(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 72LL),
                       0,
                       44,
                       0,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    }
    else
    {
      v49 = W32GetUserSessionState(32LL, v14);
      DIBitmapReal = GreCreateCompatibleBitmapEx(*(HDC *)(*(_QWORD *)(v49 + 56968) + 72LL), 0LL, 0LL);
    }
    v67 = DIBitmapReal;
    v13 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(Bitmap);
      return 0;
    }
  }
  v17 = *((_QWORD *)v6 + 11);
  v18 = W32GetUserSessionState(v11, v10);
  v71 = GreSelectBitmap(*(_QWORD *)(v18 + 43256), v17);
  v21 = W32GetUserSessionState(v20, v19);
  v72 = GreSelectBitmap(*(_QWORD *)(v21 + 43248), Bitmap);
  if ( v62 )
  {
    if ( !*((_QWORD *)v6 + 12) || a6 )
      v56 = *((_DWORD *)v6 + 36);
    else
      v56 = *((_DWORD *)v6 + 36) >> 1;
    v65 = *((_DWORD *)v6 + 35);
    v68 = *(HDC *)(W32GetUserSessionState(v23, v22) + 43256);
    if ( !*((_QWORD *)v6 + 12) || a6 )
    {
      v60 = v8;
    }
    else
    {
      v57 = (unsigned int)(v8 >> 31);
      LODWORD(v57) = v8 % 2;
      v60 = v8 / 2;
    }
    v59 = W32GetUserSessionState(v58, v57);
    NtGdiStretchBlt(*(HDC *)(v59 + 43248), 0, 0, v7, v60, v68, 0, 0, v65, v56, 0xCC0020u, 0xFFFFFFu);
  }
  else
  {
    v68 = *(HDC *)(W32GetUserSessionState(v23, v22) + 43256);
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
    GreBitBltInternal(*(HDC *)(v27 + 43248), v26, v68, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  if ( v13 )
  {
    v30 = *((_QWORD *)v6 + 12);
    v31 = W32GetUserSessionState(v29, v28);
    GreSelectBitmap(*(_QWORD *)(v31 + 43256), v30);
    v34 = W32GetUserSessionState(v33, v32);
    GreSelectBitmap(*(_QWORD *)(v34 + 43248), v13);
    if ( v62 )
    {
      v51 = *((_DWORD *)v6 + 36) >> 1;
      v52 = *((_DWORD *)v6 + 35);
      v53 = *(HDC *)(W32GetUserSessionState(v36, v35) + 43256);
      v54 = (unsigned int)(v8 >> 31);
      LODWORD(v54) = v8 % 2;
      v55 = W32GetUserSessionState(2LL, v54);
      NtGdiStretchBlt(*(HDC *)(v55 + 43248), 0, 0, b, v8 / 2, v53, 0, 0, v52, v51, 0xCC0020u, 0);
    }
    else
    {
      v37 = *(HDC *)(W32GetUserSessionState(v36, v35) + 43256);
      v38 = (unsigned int)(v8 >> 31);
      LODWORD(v38) = v8 % 2;
      v40 = W32GetUserSessionState(v39, v38);
      GreBitBltInternal(*(HDC *)(v40 + 43248), v8 / 2, v37, 0, 0, 13369376, 0, 0);
    }
    Bitmap = v66;
  }
  v41 = W32GetUserSessionState(v29, v28);
  GreSelectBitmap(*(_QWORD *)(v41 + 43256), v71);
  v44 = W32GetUserSessionState(v43, v42);
  GreSelectBitmap(*(_QWORD *)(v44 + 43248), v72);
  *(_DWORD *)v63 = *((_WORD *)v6 + 37) == 3;
  v45 = EngMulDiv(*((__int16 *)v6 + 42), b, *((_DWORD *)v6 + 35));
  *((_DWORD *)v63 + 1) = v45;
  v46 = EngMulDiv(*((__int16 *)v6 + 43), b, *((_DWORD *)v6 + 35));
  *((_DWORD *)v63 + 2) = v46;
  *((_QWORD *)v63 + 2) = Bitmap;
  *((_QWORD *)v63 + 3) = v13;
  if ( v64 )
  {
    if ( *((_WORD *)v6 + 36) )
    {
      AtomName = UserGetAtomName(*((unsigned __int16 *)v6 + 36), v64->Buffer, v64->MaximumLength >> 1);
      v64->Length = AtomName;
    }
    else
    {
      v64->Length = 0;
    }
  }
  if ( DestinationString )
  {
    if ( (*((_QWORD *)v6 + 8) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)((char *)v6 + 56));
    else
      *DestinationString = *(PUNICODE_STRING)((char *)v6 + 56);
  }
  if ( v70 )
    *v70 = *((_DWORD *)v6 + 34);
  return 1;
}
