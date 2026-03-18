/*
 * XREFs of GetInheritedMonitor @ 0x140036E20
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x14006568C (GetNewMonitor.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x140050268 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     UnionRect @ 0x1401524B8 (UnionRect.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1401E3A24 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // r13
  int v17; // r12d
  int v18; // r15d
  BOOL v19; // r14d
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r13d
  int v25; // r12d
  BOOL v26; // r15d
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r14
  __int64 v30; // rcx
  __int128 v31; // [rsp+20h] [rbp-30h] BYREF
  __int64 v32; // [rsp+30h] [rbp-20h]
  __int128 v33; // [rsp+38h] [rbp-18h] BYREF

  v1 = 0LL;
  v32 = 0LL;
  if ( !(unsigned int)IsTopLevelWindow(a1) )
  {
    v5 = *((_QWORD *)a1 + 13);
LABEL_3:
    if ( v5 )
    {
LABEL_4:
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 256LL);
      return ValidateHmonitorNoRip(v6, v3);
    }
    return v1;
  }
  UserSessionState = W32GetUserSessionState(v4, v3);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41362), 1u);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v1;
    v5 = ValidateHwnd(Prop);
    goto LABEL_3;
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = *(unsigned int *)(v10 + 288);
  if ( (*(_DWORD *)(v10 + 288) & 0xF) == 2
    || ((*(_BYTE *)(v10 + 16) & 8) != 0 || (*(_BYTE *)(v10 + 30) & 3) != 0)
    && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v10 + 104))
    && ((*(_BYTE *)(v10 + 26) & 8) == 0 || (*(_BYTE *)(v10 + 27) & 0x20) != 0)
    || (*(_BYTE *)(v10 + 20) & 0x40) != 0
    || (*((_DWORD *)a1 + 95) & 0x400) != 0 )
  {
    return v1;
  }
  v12 = *((_QWORD *)a1 + 15);
  v13 = 511LL;
  if ( !v12 )
  {
LABEL_15:
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 6LL) & 1) != 0
      && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v33, *(_QWORD *)(*((_QWORD *)a1 + 35) + 8LL), v11, v13);
      if ( *(_QWORD *)v33 )
      {
        v31 = 0LL;
        if ( v12 || (v12 = *(_QWORD *)(*(_QWORD *)v33 + 8LL)) != 0 )
          v12 &= -(__int64)((unsigned int)IntersectRect(&v31, *((_QWORD *)a1 + 5) + 88LL, *(_QWORD *)(v12 + 40) + 88LL) != 0);
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v33);
    }
    if ( !v12 || (v32 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 256LL), v10), (v1 = v32) == 0) )
    {
      v14 = *((_QWORD *)a1 + 12);
      v15 = *((_QWORD *)a1 + 11);
      while ( 2 )
      {
        *(_QWORD *)&v31 = v15;
        while ( v14 )
        {
          v16 = *((_QWORD *)a1 + 5);
          v17 = 0;
          v33 = 0LL;
          v18 = *(_BYTE *)(v16 + 27) & 8;
          v19 = (*(_BYTE *)(v16 + 26) & 8) != 0 && (*(_BYTE *)(v16 + 27) & 0x20) == 0;
          v20 = *(_QWORD *)(v14 + 40);
          if ( (*(_BYTE *)(v20 + 31) & 0x10) != 0
            && ((*(_BYTE *)(v20 + 16) & 8) != 0 || (*(_BYTE *)(v20 + 30) & 3) != 0)
            && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v20 + 104))
            && ((*(_BYTE *)(v20 + 26) & 8) == 0 || (*(_BYTE *)(v20 + 27) & 0x20) != 0)
            && (v3[59] == *(_QWORD *)(v21 + 472) || v3[58] == *(_QWORD *)(v21 + 464))
            && (((unsigned __int16)(*(_DWORD *)(v20 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v16 + 288) >> 8)) & 0x1FF) == 0 )
          {
            if ( v18 || v19 )
              v17 = IsAdjacentRect((const struct tagRECT *)(v16 + 88), (const struct tagRECT *)(v20 + 88));
            if ( !v18 || v17 || (unsigned int)IntersectRect(&v33, v16 + 88, v20 + 88) )
            {
              if ( !v19 || v17 )
                goto LABEL_82;
              if ( (unsigned int)UnionRect(&v33, v16 + 88, v20 + 88) )
              {
                v22 = v33 - *v3;
                if ( (_QWORD)v33 == *v3 )
                  v22 = *((_QWORD *)&v33 + 1) - v3[1];
                if ( !v22 )
                {
LABEL_82:
                  v6 = *(_QWORD *)(v20 + 256);
                  return ValidateHmonitorNoRip(v6, v3);
                }
              }
            }
          }
          v15 = v31;
          v14 = *(_QWORD *)(v14 + 96);
          if ( (_QWORD)v31 )
            goto LABEL_43;
        }
        if ( !v15 )
          return v32;
LABEL_43:
        v23 = *((_QWORD *)a1 + 5);
        v24 = 0;
        v33 = 0LL;
        v25 = *(_BYTE *)(v23 + 27) & 8;
        v26 = (*(_BYTE *)(v23 + 26) & 8) != 0 && (*(_BYTE *)(v23 + 27) & 0x20) == 0;
        v27 = *(_QWORD *)(v15 + 40);
        if ( (*(_BYTE *)(v27 + 31) & 0x10) == 0 || (*(_BYTE *)(v27 + 16) & 8) == 0 && (*(_BYTE *)(v27 + 30) & 3) == 0 )
          goto LABEL_64;
        if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)(v27 + 104))
          || (*(_BYTE *)(v27 + 26) & 8) != 0 && (*(_BYTE *)(v27 + 27) & 0x20) == 0 )
        {
          goto LABEL_64;
        }
        if ( v3[59] != *(_QWORD *)(v28 + 472) && v3[58] != *(_QWORD *)(v28 + 464) )
          goto LABEL_64;
        v29 = *((_QWORD *)a1 + 5);
        if ( (((unsigned __int16)(*(_DWORD *)(v27 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v29 + 288) >> 8)) & 0x1FF) != 0 )
          goto LABEL_64;
        if ( v25 || v26 )
          v24 = IsAdjacentRect((const struct tagRECT *)(v29 + 88), (const struct tagRECT *)(v27 + 88));
        if ( v25 && !v24 && !(unsigned int)IntersectRect(&v33, v29 + 88, v27 + 88) )
          goto LABEL_64;
        if ( v26 && !v24 )
        {
          if ( !(unsigned int)UnionRect(&v33, v29 + 88, v27 + 88) )
            goto LABEL_64;
          v30 = v33 - *v3;
          if ( (_QWORD)v33 == *v3 )
            v30 = *((_QWORD *)&v33 + 1) - v3[1];
          if ( v30 )
          {
LABEL_64:
            v15 = *(_QWORD *)(v31 + 88);
            continue;
          }
        }
        break;
      }
      v5 = v31;
      goto LABEL_4;
    }
    return v1;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 464LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL)
    || (((unsigned __int16)((unsigned int)v11 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
  {
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner((struct tagWND *)v12, a1) )
        break;
      v12 = *(_QWORD *)(v12 + 120);
    }
    while ( v12 );
    goto LABEL_15;
  }
  return 0LL;
}
