/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402F9E30
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     BltColor @ 0x1401FB750 (BltColor.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2)
{
  int v2; // ebp
  unsigned int v5; // r15d
  unsigned int v6; // edi
  char *OemBitmapInfo; // rax
  _DWORD *v8; // r8
  __int16 *v9; // rsi
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r12d
  unsigned __int64 v14; // rcx
  Gre::Base *v15; // rbx
  __int64 UserSessionState; // rax
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  char Layout; // al
  __int64 v21; // rdx
  int v22; // ebx
  bool v23; // zf
  char v24; // al
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r10
  int v35; // [rsp+60h] [rbp-C8h]
  int v36; // [rsp+64h] [rbp-C4h]
  int v37; // [rsp+68h] [rbp-C0h]
  int v38; // [rsp+6Ch] [rbp-BCh]
  _WORD v39[24]; // [rsp+70h] [rbp-B8h] BYREF
  int v40; // [rsp+A0h] [rbp-88h]

  v2 = 2;
  v5 = 1;
  v6 = 1;
  OemBitmapInfo = GetOemBitmapInfo(0x3Fu);
  v8 = *(_DWORD **)a2;
  v9 = (__int16 *)OemBitmapInfo;
  v10 = *(_DWORD *)(*(_QWORD *)a2 + 76LL) - *((__int16 *)OemBitmapInfo + 3);
  v11 = 0;
  if ( v10 >= 0 )
    v11 = v10;
  v12 = v8[1] & 8;
  v36 = v11 / 2;
  v13 = v11 / 2;
  v14 = -(__int64)((_DWORD)v12 != 0) & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = *(Gre::Base **)((char *)v8 + v14 + 32);
  if ( v15 )
  {
    UserSessionState = W32GetUserSessionState(v14, v12);
    v17 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43256), v15);
    if ( v17 )
    {
      memset_0(v39, 0, 0x68uLL);
      v37 = GreSetTextColor(a1, 0);
      v38 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (**(_DWORD **)a2 & 0x2000) != 0 )
        v2 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v9[2];
      if ( (unsigned int)GreExtGetObjectW(v15, 104, v39) == 104 && v39[23] == 32 && !v40 )
      {
        LOBYTE(v35) = 0;
        HIWORD(v35) = 511;
        Layout = GreGetLayout(a1);
        v22 = v9[3];
        v23 = (Layout & 1) == 0;
        v24 = 0;
        v25 = v9[2];
        if ( !v23 )
          v24 = 0x80;
        BYTE1(v35) = v24;
        v26 = W32GetUserSessionState(128LL, v21);
        GreAlphaBlend((__int64)a1, v2, v36, v9[3], v9[3], *(_QWORD *)(v26 + 43256), 0, 0, v25, v22, v35);
      }
      else
      {
        v27 = W32GetUserSessionState(v19, v18);
        GreBitBltInternal(
          (Gre::Base *)a1,
          v2,
          v36,
          v9[2],
          v9[3],
          *(_QWORD *)(v27 + 43256),
          0,
          0,
          0xB8074Au,
          0xFFFFFFu,
          0);
      }
      GreSetTextColor(a1, v37);
      GreSetBkColor(a1, v38);
      v30 = W32GetUserSessionState(v29, v28);
      GreSelectBitmap(*(_QWORD *)(v30 + 43256), v17);
    }
  }
  else if ( (_DWORD)v12 )
  {
    if ( (*v8 & 0x200) != 0 )
      v9 = (__int16 *)GetOemBitmapInfo(0x40u);
    if ( (**(_DWORD **)a2 & 0x2000) != 0 )
      v2 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v9[2];
    if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v32, v31) + 56968) + 72LL) )
      v6 = 3;
    v33 = PrepareHDCBITSBitmap(0LL);
    if ( v33 )
      BltColor((Gre::Base *)a1, 0LL, v33, v2, v13, v9[2], v9[3], *v9, v9[1], v6);
  }
  else
  {
    return 0;
  }
  return v5;
}
