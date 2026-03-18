/*
 * XREFs of ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x1401B0F94
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x140132AAC (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x140132FF4 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401B1FA8 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 */

void __fastcall CPTPEngine::ApplyHeuristics(CPTPEngine *this, struct PTPInput *a2, char a3, char a4)
{
  int v8; // eax
  int v9; // r9d
  int v10; // r10d
  __int64 v11; // rax
  char *v12; // r9
  __int64 v13; // r10
  int v14; // eax
  unsigned int v15; // r11d
  unsigned int v16; // edx
  unsigned int v17; // r9d
  __int64 v18; // rdi
  unsigned int v19; // ecx
  char *v20; // r10
  __int64 v21; // rsi
  int v22; // edx
  bool v23; // cl
  bool v24; // al
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  int v27; // ecx
  unsigned int v28; // r8d
  unsigned int v29; // r13d
  _DWORD *v30; // r12
  char *v31; // rdi
  int v32; // ecx
  unsigned int i; // ecx
  __int64 v34; // r10
  char *v35; // rax
  int v36; // r9d
  char *v37; // r8
  __int64 v38; // r10
  unsigned int v39; // r9d
  unsigned __int64 v40; // rcx
  unsigned int v41; // ebp
  _DWORD *v42; // r15
  char *v43; // rsi
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r8
  int v47; // eax
  __int64 v48; // rax
  unsigned int v49; // [rsp+50h] [rbp+8h]
  unsigned int v50; // [rsp+50h] [rbp+8h]

  if ( !*((_DWORD *)this + 6) )
  {
    v8 = *((_DWORD *)this + 706);
    if ( (v8 == 1 || v8 == 2) && *((_DWORD *)this + 698) >= 2u && !*((_DWORD *)this + 705) )
      CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(this, a2);
    v9 = *((_DWORD *)this + 706);
    if ( v9 != 2 )
      goto LABEL_15;
    v10 = 2;
    if ( *((_DWORD *)this + 698) >= 2u )
    {
      v11 = *((unsigned int *)this + 696);
      if ( (*((_DWORD *)this + 82 * v11 + 204) & 0x4000000) != 0
        || *(_QWORD *)a2 - *((_QWORD *)this + 41 * v11 + 114) < *((_QWORD *)this + 12)
                                                              * (unsigned __int64)*((unsigned int *)this + 808)
                                                              / 0x3E8 )
      {
        v10 = 2;
        if ( a3 )
        {
          *((_DWORD *)this + 768) |= 0x20000u;
          *((_DWORD *)this + 706) = 1;
          CPTPEngine::ResetDragThresholds(this, a2);
          v10 = *((_DWORD *)this + 706);
        }
      }
    }
    v9 = v10;
    if ( *((_DWORD *)this + 702) >= 2u )
    {
      *((_DWORD *)this + 706) = 1;
    }
    else
    {
LABEL_15:
      if ( v9 != 1 )
        return;
    }
    if ( a3 )
    {
      v12 = (char *)this + 820;
      v13 = 6LL;
      do
      {
        v14 = *((_DWORD *)v12 - 1);
        if ( (v14 & 1) != 0
          && (v14 & 0x20000) == 0
          && *(_QWORD *)a2 - *(_QWORD *)(v12 + 60) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 783)
                                                    / 0x3E8 )
        {
          *(_DWORD *)v12 &= ~1u;
        }
        v12 += 328;
        --v13;
      }
      while ( v13 );
    }
    if ( (unsigned int)(*((_DWORD *)this + 698) + *((_DWORD *)this + 703)) > 1
      && (*((_DWORD *)this + 768) & 0x20000) == 0
      && (a3 || a4) )
    {
      v15 = *((_DWORD *)this + 4);
      v49 = v15;
      if ( v15 )
      {
        v16 = *((_DWORD *)this + 4);
        v17 = 1;
        do
        {
          v18 = 328LL * (v17 - 1);
          v19 = v16;
          if ( _bittest((const signed __int32 *)((char *)this + v18 + 816), 0x1Du)
            && (*(_DWORD *)((_BYTE *)this + v18 + 1044) & 0xFFFFFFFB) == 0
            && v17 < v16 )
          {
            v20 = (char *)this + 328 * v17 + 888;
            v21 = v15 - v17;
            do
            {
              v22 = *((_DWORD *)v20 - 18);
              if ( (v22 & 0x20000000) != 0 && (*((_DWORD *)v20 + 39) & 0xFFFFFFFB) == 0 )
              {
                v23 = (*(_DWORD *)((_BYTE *)this + v18 + 816) & 2) != 0
                   || *(_QWORD *)((char *)this + v18 + 888) == *(_QWORD *)a2;
                v24 = (v22 & 2) != 0 || *(_QWORD *)v20 == *(_QWORD *)a2;
                if ( v23 || v24 )
                {
                  v25 = *(_QWORD *)((char *)this + v18 + 888);
                  v26 = *(_QWORD *)v20 - v25;
                  if ( *(_QWORD *)v20 <= v25 )
                    v26 = *(_QWORD *)((char *)this + v18 + 888) - *(_QWORD *)v20;
                  if ( v26 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 784) / 0x3E8 )
                    *((_DWORD *)this + 768) |= 0x20000u;
                }
              }
              v20 += 328;
              --v21;
            }
            while ( v21 );
            v15 = v49;
            v19 = v49;
          }
          ++v17;
          v16 = v19;
        }
        while ( v17 - 1 < v19 );
      }
    }
    v27 = *((_DWORD *)this + 768);
    if ( (v27 & 0x20000) != 0 && *((_DWORD *)this + 698) + *((_DWORD *)this + 703) == 1 )
      *((_DWORD *)this + 768) = v27 & 0xFFF9FFFF;
    v28 = *((_DWORD *)a2 + 12);
    v29 = 0;
    v50 = 0;
    if ( v28 )
    {
      v30 = (_DWORD *)((char *)a2 + 68);
      do
      {
        v31 = (char *)this + 328 * (unsigned int)(*(v30 - 2) % *((_DWORD *)this + 4)) + 816;
        v32 = *(_DWORD *)v31;
        if ( (*(_DWORD *)v31 & 1) != 0 && (*v30 & 0x40000) == 0 )
        {
          if ( (v32 & 0x100) != 0 && (v32 & 4) != 0 && (*((_DWORD *)v31 + 1) & 2) != 0 )
          {
            for ( i = 0; i < 6; ++i )
            {
              v34 = 328LL * i;
              v35 = (char *)this + v34 + 816;
              if ( v31 != v35 )
              {
                v36 = *(_DWORD *)v35;
                if ( (*(_DWORD *)v35 & 1) != 0
                  && ((v36 & 0x100) == 0
                   || __CFSHR__(v36, 18)
                   || *(_QWORD *)a2 - *(_QWORD *)((char *)this + v34 + 880) < *((_QWORD *)this + 12)
                                                                            * (unsigned __int64)*((unsigned int *)this
                                                                                                + 783)
                                                                            / 0x3E8
                   && __CFSHR__(v36, 3)
                   && __CFSHR__(*(_DWORD *)((char *)this + v34 + 820), 2)) )
                {
                  goto LABEL_80;
                }
              }
            }
            v37 = (char *)this + 820;
            v38 = 6LL;
            do
            {
              if ( v31 != v37 - 4 && (*((_DWORD *)v37 - 1) & 1) != 0 )
              {
                v39 = *(_DWORD *)v37 & 0xFFFFFFFD;
                *(_DWORD *)v37 = v39;
                v40 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 783) / 0x3E8;
                if ( *(_QWORD *)a2 - *(_QWORD *)(v37 + 60) >= v40 && *(_QWORD *)a2 - *((_QWORD *)v31 + 8) < v40 )
                  *(_DWORD *)v37 = v39 & 0xFFFFFFFE;
              }
              v37 += 328;
              --v38;
            }
            while ( v38 );
            CPTPEngine::SetContactRestingState(this, (struct CContactState *)v31, 0);
            v29 = v50;
          }
LABEL_80:
          v28 = *((_DWORD *)a2 + 12);
          v41 = 0;
          if ( v28 )
          {
            v42 = (_DWORD *)((char *)a2 + 68);
            do
            {
              v43 = (char *)this + 328 * (unsigned int)(*(v42 - 2) % *((_DWORD *)this + 4)) + 816;
              if ( (*(_DWORD *)v43 & 1) != 0
                && v43 != v31
                && (*v42 & 0x40000) == 0
                && ((*(_DWORD *)v43 & 0x100) != 0 || (*(_DWORD *)v31 & 0x100) != 0) )
              {
                v44 = *((_QWORD *)v31 + 8);
                v45 = *((_QWORD *)v43 + 8);
                v46 = v45 - v44;
                if ( v45 <= v44 )
                  v46 = *((_QWORD *)v31 + 8) - v45;
                if ( v46 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 808) / 0x3E8 )
                {
                  v47 = *((_DWORD *)this + 753);
                  if ( *((_DWORD *)v31 + 5) >= v47
                    && *((_DWORD *)v43 + 5) >= v47
                    && (*((_DWORD *)v31 + 1) & 1) != 0
                    && (*((_DWORD *)v43 + 1) & 1) != 0
                    && (*(_DWORD *)v31 & 0x100000) != 0
                    && (*(_DWORD *)v43 & 0x100000) != 0 )
                  {
                    v48 = *((_QWORD *)v43 + 2);
                    if ( (int)((*((_QWORD *)v31 + 2) - v48) * (*((_QWORD *)v31 + 2) - v48)
                             + (HIDWORD(*((_QWORD *)v31 + 2)) - HIDWORD(v48))
                             * (HIDWORD(*((_QWORD *)v31 + 2)) - HIDWORD(v48))) <= (unsigned __int64)*((unsigned int *)this + 801) )
                    {
                      CPTPEngine::SetContactRestingState(this, (struct CContactState *)v31, 0);
                      CPTPEngine::SetContactRestingState(this, (struct CContactState *)v43, 0);
                      *(_DWORD *)v31 |= 0x400u;
                      *(_DWORD *)v43 |= 0x400u;
                    }
                  }
                }
              }
              v28 = *((_DWORD *)a2 + 12);
              ++v41;
              v42 += 24;
            }
            while ( v41 < v28 );
            v29 = v50;
          }
        }
        ++v29;
        v30 += 24;
        v50 = v29;
      }
      while ( v29 < v28 );
    }
  }
}
