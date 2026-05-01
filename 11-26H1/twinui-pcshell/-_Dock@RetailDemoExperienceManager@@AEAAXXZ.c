/*
 * XREFs of ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x18039E400
 * Callers:
 *     ?Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x18039D1B0 (-Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18039EDC4 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x18039E264 (-_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x18039EB3C (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x18039EB7C (-_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_Dock(RetailDemoExperienceManager *this)
{
  int v2; // ecx
  _DWORD *v3; // rdi
  int v4; // eax
  _DWORD *v5; // r14
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r10d
  int v12; // r9d
  int v13; // ecx
  LONG v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // r9d
  int v19; // edx
  int v20; // [rsp+20h] [rbp-30h]
  struct tagRECT v21; // [rsp+20h] [rbp-30h]
  struct tagRECT pvParam; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( !*((_QWORD *)this + 25) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      v20);
  v2 = *((_DWORD *)this + 89);
  v3 = (_DWORD *)((char *)this + 352);
  v4 = *((_DWORD *)this + 88);
  v5 = (_DWORD *)((char *)this + 352);
  if ( *((_BYTE *)this + 382) )
  {
    v6 = v4 + 2 * v2;
    v7 = 0;
  }
  else
  {
    v7 = v4 + 2 * v2;
    v6 = 0;
  }
  *((_DWORD *)this + 100) = v7;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = v6;
  *((_DWORD *)this + 103) = 0;
  if ( *((_BYTE *)this + 381) )
  {
    pvParam = (struct tagRECT)*((_OWORD *)this + 25);
    RetailDemoExperienceManager::_AdjustWorkingArea(this, &pvParam);
    v8 = *((_DWORD *)this + 89);
    if ( *((_BYTE *)this + 382) )
      v9 = v8 + *((_DWORD *)this + 106);
    else
      v9 = *((_DWORD *)this + 104) - v8 - *v5;
    v10 = *((_DWORD *)this + 105);
    v11 = *((_DWORD *)this + 90);
    v21.left = v9;
    v21.right = *v5 + v9;
    v12 = v10 + v8;
    v13 = *((_DWORD *)this + 107);
    v21.top = v10 + v8;
    if ( v11 >= 0 )
    {
      v14 = v13 - 2 * v8 - v10;
      if ( v11 + v12 < v14 )
        v14 = v11 + v12;
    }
    else
    {
      v14 = v13 - v8;
    }
    v21.bottom = v14;
  }
  else
  {
    RetailDemoExperienceManager::_RestoreWorkingArea(this);
    pvParam = 0LL;
    if ( !SystemParametersInfoW(0x30u, 0, &pvParam, 0) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x142,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x8000FFFFLL,
        0);
    v15 = *((_DWORD *)this + 89);
    if ( *((_BYTE *)this + 382) )
      v16 = pvParam.right - v15 - *v3;
    else
      v16 = v15 + pvParam.left;
    v21.left = v16;
    v21.right = *v3 + v16;
    v17 = *((_DWORD *)this + 90);
    v18 = v15 + pvParam.top;
    v21.top = v15 + pvParam.top;
    if ( v17 >= 0 )
    {
      v19 = pvParam.bottom - 2 * v15 - pvParam.top;
      if ( v18 + v17 < v19 )
        v19 = v18 + v17;
      v21.bottom = v19;
    }
    else
    {
      v21.bottom = pvParam.bottom - v15;
    }
  }
  pvParam = v21;
  RetailDemoExperienceManager::_SetFrameRect(this, &pvParam);
}
