/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x140192318
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     _DrawIconEx @ 0x140056464 (_DrawIconEx.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x140192F6C (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, unsigned int a5)
{
  int v6; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  struct tagCURSOR **v15; // r14
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  _QWORD *v19; // r9
  struct tagCURSOR **v20; // rax
  __int64 i; // rax
  HDC v22; // rdi
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  struct tagCURSOR **v26; // rcx
  __int128 v27; // xmm0
  unsigned int v28; // edi
  HDC v29; // rbx
  __int64 v30; // rcx
  __int16 *OemBitmapInfo; // rax
  LONG left; // edi
  LONG top; // esi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v36; // eax
  int v37; // eax
  RECT v38; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2->bottom - a2->top;
  if ( v6 != *(__int16 *)(GetOemBitmapInfo(29LL) + 6)
    || (v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19872), a4 == *(HBRUSH *)(v13 + 4944))
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v38.left = left;
    v38.top = top;
    v38.right = left + v6;
    v38.bottom = top + v6;
    FillRect(a1, &v38, a4);
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(20, DpiForSystem);
    v36 = GetDpiForSystem();
    v37 = GetDpiDependentMetric(21, v36);
    DrawIconEx(
      a1,
      (v6 - DpiDependentMetric) / 2 + left + 1,
      top + (v6 - v37) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v37,
      0,
      0LL,
      3);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    v15 = (struct tagCURSOR **)(UserSessionState + 43160);
    v16 = (_QWORD *)(UserSessionState + 43176);
    if ( (a5 & 0x10) != 0 )
    {
      v17 = a3 - *v15;
      v18 = a3 != *v15 ? 5 : 0;
    }
    else
    {
      v18 = 1;
      v17 = 1LL;
      v19 = (_QWORD *)(UserSessionState + 43176);
      v20 = (struct tagCURSOR **)(UserSessionState + 43176);
      do
      {
        v16 = v19;
        if ( *v20 == a3 )
          break;
        ++v18;
        ++v17;
        v20 += 2;
      }
      while ( v17 < 5 );
    }
    if ( v18 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v18 = 0;
      }
      else
      {
        v18 = 1;
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v16 )
            break;
          ++v18;
          v16 += 2;
        }
      }
      v22 = *(HDC *)(W32GetUserSessionState(v17, v16) + 43248);
      v23 = GetDpiForSystem();
      v24 = GetDpiDependentMetric(20, v23);
      BltMe4Times((unsigned int)v15[2 * v18 + 1], v6, v24, v22, a3, a5);
      *(_QWORD *)&v38.left = &v15[2 * v18];
      *(_QWORD *)&v38.right = a3;
      HMAssignmentLock(&v38, 0LL);
    }
    if ( v18 > 1LL )
    {
      v25 = v18 - 1LL;
      v26 = &v15[2 * v18];
      v18 = 1;
      do
      {
        v27 = *((_OWORD *)v26 - 1);
        *((_OWORD *)v26 - 1) = *(_OWORD *)v26;
        *(_OWORD *)v26 = v27;
        v26 -= 2;
        --v25;
      }
      while ( v25 );
    }
    v28 = (unsigned int)v15[2 * v18 + 1];
    v29 = PrepareHDCBITSBitmap(0LL);
    if ( v29 )
    {
      v30 = v28 + 1;
      if ( (a5 & 1) != 0 )
        v30 = v28;
      OemBitmapInfo = (__int16 *)GetOemBitmapInfo(v30);
      GreBitBltInternal(a1, a2->left, a2->top, v6, v6, v29, *OemBitmapInfo, OemBitmapInfo[1], 0xCC0020u, 0, 0);
    }
  }
  a2->left += v6;
}
