/*
 * XREFs of ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x140192FF0
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x1400EF090 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400EF604 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140194444 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     Feature_PTPZoomImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1402255B4 (Feature_PTPZoomImprovements__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CPTPEngine::ApplyHeuristics(CPTPEngine *this, struct PTPInput *a2, char a3, char a4)
{
  int v8; // r9d
  __int64 v9; // rcx
  char *v10; // r9
  __int64 v11; // r10
  int v12; // eax
  _DWORD *v13; // rcx
  _DWORD *v14; // rdx
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // r9d
  __int64 v18; // r11
  unsigned int v19; // ecx
  char *v20; // r10
  __int64 v21; // rsi
  int v22; // edx
  bool v23; // cl
  bool v24; // al
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  int v27; // r8d
  unsigned int v28; // r8d
  char *v29; // r9
  unsigned int v30; // r12d
  char *v31; // r13
  char *v32; // rdi
  int v33; // ecx
  unsigned int j; // r8d
  char *v35; // r9
  int v36; // r10d
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
  unsigned int v48; // [rsp+50h] [rbp+8h]
  unsigned int i; // [rsp+50h] [rbp+8h]

  if ( !*((_DWORD *)this + 6) )
  {
    if ( (unsigned int)(*((_DWORD *)this + 706) - 1) <= 1 && *((_DWORD *)this + 698) >= 2u && !*((_DWORD *)this + 705) )
      CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(this, a2);
    v8 = *((_DWORD *)this + 706);
    if ( v8 != 2 )
      goto LABEL_16;
    if ( *((_DWORD *)this + 698) >= 2u )
    {
      v9 = 328LL * *((unsigned int *)this + 696);
      if ( (*(_DWORD *)((_BYTE *)this + v9 + 816) & 0x8000000) != 0
        || *(_QWORD *)a2 - *(_QWORD *)((char *)this + v9 + 912) < *((_QWORD *)this + 12)
                                                                * (unsigned __int64)*((unsigned int *)this + 811)
                                                                / 0x3E8 )
      {
        if ( a3 )
        {
          *((_DWORD *)this + 706) = 1;
          if ( (unsigned int)Feature_PTPZoomImprovements__private_IsEnabledDeviceUsageNoInline() )
            *((_DWORD *)this + 770) |= 0x20000u;
          CPTPEngine::ResetDragThresholds(this, a2);
          v8 = *((_DWORD *)this + 706);
        }
      }
    }
    if ( *((_DWORD *)this + 702) >= 2u )
    {
      *((_DWORD *)this + 706) = 1;
    }
    else
    {
LABEL_16:
      if ( v8 != 1 )
        return;
    }
    if ( a3 )
    {
      v10 = (char *)this + 820;
      v11 = 6LL;
      do
      {
        v12 = *((_DWORD *)v10 - 1);
        if ( (v12 & 1) != 0
          && (v12 & 0x20000) == 0
          && *(_QWORD *)a2 - *(_QWORD *)(v10 + 60) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 785)
                                                    / 0x3E8 )
        {
          *(_DWORD *)v10 &= ~2u;
        }
        v10 += 328;
        --v11;
      }
      while ( v11 );
    }
    v13 = (_DWORD *)((char *)this + 2812);
    v14 = (_DWORD *)((char *)this + 2792);
    if ( (unsigned int)(*((_DWORD *)this + 698) + *((_DWORD *)this + 703)) > 1
      && (*((_DWORD *)this + 770) & 0x20000) == 0
      && (a3 || a4) )
    {
      v15 = *((_DWORD *)this + 4);
      v13 = (_DWORD *)((char *)this + 2812);
      v48 = v15;
      v14 = (_DWORD *)((char *)this + 2792);
      if ( v15 )
      {
        v16 = *((_DWORD *)this + 4);
        v17 = 1;
        do
        {
          v18 = 328LL * (v17 - 1);
          v19 = v16;
          if ( _bittest((const signed __int32 *)((char *)this + v18 + 816), 0x1Eu)
            && (*(_DWORD *)((_BYTE *)this + v18 + 1044) & 0xFFFFFFFB) == 0
            && v17 < v16 )
          {
            v20 = (char *)this + 328 * v17 + 888;
            v21 = v15 - v17;
            do
            {
              v22 = *((_DWORD *)v20 - 18);
              if ( (v22 & 0x40000000) != 0 && (*((_DWORD *)v20 + 39) & 0xFFFFFFFB) == 0 )
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
                  if ( v26 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 786) / 0x3E8 )
                    *((_DWORD *)this + 770) |= 0x20000u;
                }
              }
              v20 += 328;
              --v21;
            }
            while ( v21 );
            v15 = v48;
            v19 = v48;
          }
          ++v17;
          v16 = v19;
        }
        while ( v17 - 1 < v19 );
        v13 = (_DWORD *)((char *)this + 2812);
        v14 = (_DWORD *)((char *)this + 2792);
      }
    }
    v27 = *((_DWORD *)this + 770);
    if ( (v27 & 0x20000) != 0 && *v13 + *v14 == 1 )
      *((_DWORD *)this + 770) = v27 & 0xFFF9FFFF;
    v28 = *((_DWORD *)a2 + 12);
    v29 = (char *)a2 + 56;
    v30 = 0;
    v31 = (char *)a2 + 56;
    for ( i = 0; v30 < v28; i = v30 )
    {
      v32 = (char *)this + 328 * (unsigned int)(*((_DWORD *)v31 + 1) % *((_DWORD *)this + 4)) + 816;
      v33 = *(_DWORD *)v32;
      if ( (*(_DWORD *)v32 & 1) != 0 && (*((_DWORD *)v31 + 3) & 0x40000) == 0 )
      {
        if ( (v33 & 0x100) != 0 && (v33 & 4) != 0 && (*((_DWORD *)v32 + 1) & 4) != 0 )
        {
          for ( j = 0; j < 6; ++j )
          {
            v35 = (char *)this + 328 * j + 816;
            if ( v32 != v35 )
            {
              v36 = *(_DWORD *)v35;
              if ( (*(_DWORD *)v35 & 1) != 0
                && ((v36 & 0x100) == 0
                 || __CFSHR__(v36, 18)
                 || *(_QWORD *)a2 - *((_QWORD *)v35 + 8) < *((_QWORD *)this + 12)
                                                         * (unsigned __int64)*((unsigned int *)this + 785)
                                                         / 0x3E8
                 && __CFSHR__(v36, 3)
                 && __CFSHR__(*((_DWORD *)v35 + 1), 3)) )
              {
                goto LABEL_81;
              }
            }
          }
          v37 = (char *)this + 820;
          v38 = 6LL;
          do
          {
            if ( v32 != v37 - 4 && (*((_DWORD *)v37 - 1) & 1) != 0 )
            {
              v39 = *(_DWORD *)v37 & 0xFFFFFFFB;
              *(_DWORD *)v37 = v39;
              v40 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 785) / 0x3E8;
              if ( *(_QWORD *)a2 - *(_QWORD *)(v37 + 60) >= v40 && *(_QWORD *)a2 - *((_QWORD *)v32 + 8) < v40 )
                *(_DWORD *)v37 = v39 & 0xFFFFFFFD;
            }
            v37 += 328;
            --v38;
          }
          while ( v38 );
          CPTPEngine::SetContactRestingState(this, (struct CContactState *)v32, 0);
          v30 = i;
LABEL_81:
          v29 = (char *)a2 + 56;
        }
        v28 = *((_DWORD *)a2 + 12);
        v41 = 0;
        if ( v28 )
        {
          v42 = v29 + 12;
          do
          {
            v43 = (char *)this + 328 * (unsigned int)(*(v42 - 2) % *((_DWORD *)this + 4)) + 816;
            if ( (*(_DWORD *)v43 & 1) != 0
              && v43 != v32
              && (*v42 & 0x40000) == 0
              && ((*(_DWORD *)v43 & 0x100) != 0 || (*(_DWORD *)v32 & 0x100) != 0) )
            {
              v44 = *((_QWORD *)v43 + 8);
              v45 = *((_QWORD *)v32 + 8);
              v46 = v44 - v45;
              if ( v44 <= v45 )
                v46 = *((_QWORD *)v32 + 8) - v44;
              if ( v46 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 811) / 0x3E8 )
              {
                v47 = *((_DWORD *)this + 755);
                if ( *((_DWORD *)v32 + 5) >= v47
                  && *((_DWORD *)v43 + 5) >= v47
                  && (*((_DWORD *)v32 + 1) & 2) != 0
                  && (*((_DWORD *)v43 + 1) & 2) != 0
                  && (*(_DWORD *)v32 & 0x100000) != 0
                  && (*(_DWORD *)v43 & 0x100000) != 0
                  && (int)((HIDWORD(*((_QWORD *)v32 + 2)) - HIDWORD(*((_QWORD *)v43 + 2)))
                         * (HIDWORD(*((_QWORD *)v32 + 2)) - HIDWORD(*((_QWORD *)v43 + 2)))
                         + (*((_QWORD *)v32 + 2) - *((_QWORD *)v43 + 2)) * (*((_QWORD *)v32 + 2) - *((_QWORD *)v43 + 2))) <= (unsigned __int64)*((unsigned int *)this + 804) )
                {
                  CPTPEngine::SetContactRestingState(this, (struct CContactState *)v32, 0);
                  CPTPEngine::SetContactRestingState(this, (struct CContactState *)v43, 0);
                  *(_DWORD *)v32 |= 0x400u;
                  *(_DWORD *)v43 |= 0x400u;
                }
              }
            }
            v28 = *((_DWORD *)a2 + 12);
            ++v41;
            v42 += 24;
          }
          while ( v41 < v28 );
          v30 = i;
        }
        v29 = (char *)a2 + 56;
      }
      ++v30;
      v31 += 96;
    }
  }
}
