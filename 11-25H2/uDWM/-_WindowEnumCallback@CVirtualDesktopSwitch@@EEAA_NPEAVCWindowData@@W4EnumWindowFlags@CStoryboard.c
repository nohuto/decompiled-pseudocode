/*
 * XREFs of ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CDF30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18007C0E0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C997C (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 */

char __fastcall CVirtualDesktopSwitch::_WindowEnumCallback(__int64 a1, struct CWindowData *a2, char a3, int *a4)
{
  CBaseObject *v4; // rdi
  int v5; // ebx
  int v9; // r14d
  __int64 i; // r15
  __int64 v11; // rax
  struct tagRECT v12; // xmm6
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  CBaseObject *v23; // [rsp+38h] [rbp-49h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-39h] BYREF
  struct tagRECT v25; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v27; // [rsp+78h] [rbp-9h] BYREF

  v4 = 0LL;
  v5 = 0;
  v23 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 184) == *(_DWORD *)(a1 + 152) )
    {
      v9 = *((_DWORD *)a2 + 170) & 0xFFF;
      if ( v9 == 75 || (*((_DWORD *)a2 + 170) & 0xFFF) == 0x4C )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 184); i = (unsigned int)(i + 1) )
        {
          v11 = *(_QWORD *)(a1 + 160);
          v12 = *(struct tagRECT *)(v11 + 16LL * (unsigned int)i);
          v13 = *(_DWORD *)(v11 + 16LL * (unsigned int)i + 8);
          v24 = v12;
          rc = v12;
          v14 = v13 - _mm_cvtsi128_si32((__m128i)v12);
          v15 = 0;
          if ( v14 >= 0 )
            v15 = v14;
          v16 = -v15;
          if ( v9 != 75 )
            v16 = v15;
          OffsetRect(&rc, v16, 0);
          v27 = v12;
          OffsetRect(&v27, -v16, 0);
          v17 = CStoryboard::_AddAnimationComponent(
                  (CStoryboard *)a1,
                  *(struct CAnimationComponent **)(*(_QWORD *)(a1 + 128) + 8 * i));
          v5 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v17,
              0x12A4u,
              0LL);
            break;
          }
          CAnimatedTransitionVisual::SetBeginRect(
            *(struct tagPOINT **)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * i) + 40LL),
            &v24);
          CAnimatedTransitionVisual::SetEndRect(
            *(CAnimatedTransitionVisual **)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * i) + 40LL),
            &rc);
          v18 = *(_QWORD *)(a1 + 128);
          v25 = v12;
          v19 = *(_QWORD *)(v18 + 8 * i);
          *(struct tagRECT *)(v19 + 104) = v12;
          *(_DWORD *)(v19 + 68) = 2;
          v20 = CVirtualDesktopSwitch::_CreateMonitorSnapshot((CVirtualDesktopSwitch *)a1, a2, &v25, 0, &v23);
          v5 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v20,
              0x12AAu,
              0LL);
            v4 = v23;
            break;
          }
          v4 = v23;
          v21 = CStoryboard::_AddAnimationComponent((CStoryboard *)a1, v23);
          v5 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v21,
              0x12ABu,
              0LL);
            break;
          }
          CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v4 + 5), &v27);
          CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v4 + 5), &v24);
          *((_DWORD *)v4 + 17) = 2;
          *(struct tagRECT *)((char *)v4 + 104) = v12;
          CBaseObject::Release(v4);
          v4 = 0LL;
          v23 = 0LL;
        }
        if ( v4 )
          CBaseObject::Release(v4);
      }
    }
    else
    {
      v5 = -2147019873;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        -2147019873,
        0x128Bu,
        0LL);
    }
  }
  *a4 = v5;
  return 1;
}
