/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402EA1A4
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetLayout @ 0x140054CD8 (GreGetLayout.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     BltColor @ 0x140191F60 (BltColor.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2)
{
  int v2; // ebp
  unsigned int v5; // r15d
  unsigned int v6; // edi
  __int64 OemBitmapInfo; // rax
  __int64 v8; // r8
  __int16 *v9; // rsi
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // rcx
  Gre::Base *v15; // rbx
  __int64 UserSessionState; // rax
  __int64 v17; // r12
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  char Layout; // al
  __int64 v22; // rdx
  int v23; // ebx
  bool v24; // zf
  char v25; // al
  int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  HDC v34; // r10
  int v36; // [rsp+60h] [rbp-C8h]
  unsigned int v37; // [rsp+64h] [rbp-C4h]
  int v38; // [rsp+68h] [rbp-C0h]
  int v39; // [rsp+6Ch] [rbp-BCh]
  _WORD v40[24]; // [rsp+70h] [rbp-B8h] BYREF
  int v41; // [rsp+A0h] [rbp-88h]

  v2 = 2;
  v5 = 1;
  v6 = 1;
  OemBitmapInfo = GetOemBitmapInfo(0x3Fu);
  v8 = *(_QWORD *)a2;
  v9 = (__int16 *)OemBitmapInfo;
  v10 = *(_DWORD *)(*(_QWORD *)a2 + 76LL) - *(__int16 *)(OemBitmapInfo + 6);
  v11 = 0;
  if ( v10 >= 0 )
    v11 = v10;
  v12 = (unsigned int)(v11 >> 31);
  v37 = v11 / 2;
  v13 = v11 / 2;
  v14 = *(_DWORD *)(v8 + 4) & 8;
  if ( (_DWORD)v14 )
    v15 = *(Gre::Base **)(v8 + 24);
  else
    v15 = *(Gre::Base **)(v8 + 32);
  if ( v15 )
  {
    LODWORD(v12) = v11 % 2;
    UserSessionState = W32GetUserSessionState(v14, v12);
    v17 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43256), v15);
    if ( v17 )
    {
      memset_0(v40, 0, 0x68uLL);
      v38 = GreSetTextColor(a1, 0);
      v39 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (**(_DWORD **)a2 & 0x2000) != 0 )
        v2 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v9[2];
      if ( (unsigned int)GreExtGetObjectW(v15, 104LL, v40, v18) == 104 && v40[23] == 32 && !v41 )
      {
        LOBYTE(v36) = 0;
        HIWORD(v36) = 511;
        Layout = GreGetLayout(a1);
        v23 = v9[3];
        v24 = (Layout & 1) == 0;
        v25 = 0;
        v26 = v9[2];
        if ( !v24 )
          v25 = 0x80;
        BYTE1(v36) = v25;
        v27 = W32GetUserSessionState(128LL, v22);
        GreAlphaBlend(a1, v2, v37, v9[3], v9[3], *(HDC *)(v27 + 43256), 0, 0, v26, v23, v36);
      }
      else
      {
        v28 = W32GetUserSessionState(v20, v19);
        GreBitBltInternal(a1, v2, v37, v9[2], v9[3], *(HDC *)(v28 + 43256), 0, 0, 0xB8074Au, 0xFFFFFFu, 0);
      }
      GreSetTextColor(a1, v38);
      GreSetBkColor(a1, v39);
      v31 = W32GetUserSessionState(v30, v29);
      GreSelectBitmap(*(_QWORD *)(v31 + 43256), v17);
    }
  }
  else if ( (_DWORD)v14 )
  {
    if ( (*(_DWORD *)v8 & 0x200) != 0 )
      v9 = (__int16 *)GetOemBitmapInfo(0x40u);
    if ( (**(_DWORD **)a2 & 0x2000) != 0 )
      v2 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v9[2];
    if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 56968) + 80LL) )
      v6 = 3;
    v34 = (HDC)PrepareHDCBITSBitmap(0LL);
    if ( v34 )
      BltColor(a1, 0LL, v34, v2, v13, v9[2], v9[3], *v9, v9[1], v6);
  }
  else
  {
    return 0;
  }
  return v5;
}
