/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x14023C7F8
 * Callers:
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 * Callees:
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1401BFE18 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 */

void __fastcall DrawCaptionIcon(Gre::Base *a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  int v6; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  LONG left; // edi
  LONG top; // esi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v18; // eax
  int v19; // eax
  __int64 UserSessionState; // rax
  __int64 v21; // rdx
  struct tagCURSOR **v22; // r15
  _QWORD *v23; // rcx
  int v24; // esi
  _QWORD *v25; // r9
  struct tagCURSOR **v26; // rax
  __int64 i; // rax
  HDC v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // eax
  struct tagCURSOR **v31; // rcx
  __int64 v32; // rdx
  __int128 v33; // xmm0
  unsigned int v34; // edi
  __int64 v35; // rbx
  unsigned int v36; // ecx
  char *OemBitmapInfo; // rax
  RECT v38; // [rsp+60h] [rbp-48h] BYREF

  v6 = a2->bottom - a2->top;
  if ( v6 != *((__int16 *)GetOemBitmapInfo(0x1Du) + 3)
    || (v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19904), a4 == *(HBRUSH *)(v13 + 4944))
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v38.left = left;
    v38.top = top;
    v38.right = left + v6;
    v38.bottom = top + v6;
    FillRect((HDC)a1, &v38, a4);
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(20, DpiForSystem);
    v18 = GetDpiForSystem();
    v19 = GetDpiDependentMetric(21, v18);
    DrawIconEx(
      a1,
      (v6 - DpiDependentMetric) / 2 + left + 1,
      top + (v6 - v19) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v19,
      0,
      0LL,
      3);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    v22 = (struct tagCURSOR **)(UserSessionState + 43160);
    v23 = (_QWORD *)(UserSessionState + 43176);
    if ( (a5 & 0x10) != 0 )
    {
      v24 = a3 != *v22 ? 5 : 0;
    }
    else
    {
      v24 = 1;
      v21 = 1LL;
      v25 = (_QWORD *)(UserSessionState + 43176);
      v26 = (struct tagCURSOR **)(UserSessionState + 43176);
      do
      {
        v23 = v25;
        if ( *v26 == a3 )
          break;
        ++v24;
        ++v21;
        v26 += 2;
      }
      while ( v21 < 5 );
    }
    if ( v24 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v24 = 0;
      }
      else
      {
        v24 = 1;
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v23 )
            break;
          ++v24;
          v23 += 2;
        }
      }
      v28 = *(HDC *)(W32GetUserSessionState(v23, v21) + 43248);
      v29 = GetDpiForSystem();
      v30 = GetDpiDependentMetric(20, v29);
      BltMe4Times((unsigned int)v22[2 * v24 + 1], v6, v30, v28, a3, a5);
      *(_QWORD *)&v38.left = &v22[2 * v24];
      *(_QWORD *)&v38.right = a3;
      HMAssignmentLock(&v38, 0LL);
    }
    if ( v24 > 1LL )
    {
      v31 = &v22[2 * v24];
      v32 = v24 - 1LL;
      v24 = 1;
      do
      {
        v33 = *((_OWORD *)v31 - 1);
        *((_OWORD *)v31 - 1) = *(_OWORD *)v31;
        *(_OWORD *)v31 = v33;
        v31 -= 2;
        --v32;
      }
      while ( v32 );
    }
    v34 = (unsigned int)v22[2 * v24 + 1];
    v35 = PrepareHDCBITSBitmap(0LL);
    if ( v35 )
    {
      v36 = v34 + 1;
      if ( (a5 & 1) != 0 )
        v36 = v34;
      OemBitmapInfo = GetOemBitmapInfo(v36);
      GreBitBltInternal(
        a1,
        a2->left,
        a2->top,
        v6,
        v6,
        v35,
        *(__int16 *)OemBitmapInfo,
        *((__int16 *)OemBitmapInfo + 1),
        0xCC0020u,
        0,
        0);
    }
  }
  a2->left += v6;
}
