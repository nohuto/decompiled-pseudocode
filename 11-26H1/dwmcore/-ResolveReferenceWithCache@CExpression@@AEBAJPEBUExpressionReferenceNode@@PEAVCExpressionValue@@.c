/*
 * XREFs of ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180049AB0 (-SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18004BE80 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTrackerBase@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18004DCA0 (-CheckTargetsForInteractionSource@CInteractionTrackerBase@@SAXPEBUExpressionReferenceInfo@@PEAVC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x180080DE4 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1801076A8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z @ 0x18010B9FC (-AdjustPropertyTypeWithMask@CExpression@@AEBA-AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18010BE20 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18016E690 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x180175B10 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z @ 0x18026ED54 (-LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpression::ResolveReferenceWithCache(
        CExpression *this,
        const struct ExpressionReferenceNode *a2,
        struct CExpressionValue *a3,
        const char *a4)
{
  __int64 v4; // rax
  __int64 v5; // r13
  int *v6; // r12
  __int64 v8; // rbp
  const struct ExpressionReferenceInfo *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r14
  struct CResource *v13; // r14
  int v14; // ebx
  unsigned int v15; // r15d
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rbx
  struct CResource *v19; // rdx
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // edx
  unsigned int v26; // r15d
  unsigned int v27; // ecx
  __int64 v28; // r14
  int *v30; // r8
  unsigned int v31; // eax
  unsigned int v32; // eax
  const char *v33; // r9
  bool v34; // zf
  CNotificationResource *v35; // rcx
  unsigned int ChannelCallbackId; // eax
  char *v37; // rdi
  __int64 v38; // r10
  int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  int *v42; // r8
  unsigned int v43; // eax
  float v44; // xmm6_4
  __int64 Elapsed; // rax
  __int64 v46; // rax
  unsigned int v47; // [rsp+20h] [rbp-78h]
  unsigned int v48; // [rsp+20h] [rbp-78h]
  unsigned int v49; // [rsp+20h] [rbp-78h]
  _QWORD v50[2]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v52; // [rsp+A0h] [rbp+8h] BYREF

  v4 = *((unsigned int *)a2 + 1);
  v5 = 0LL;
  v6 = (int *)a3;
  v8 = 0LL;
  if ( (unsigned int)v4 >= *((_DWORD *)this + 81) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x579,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      a4);
  v9 = (const struct ExpressionReferenceInfo *)(*((_QWORD *)this + 38) + 28 * v4);
  if ( *((_DWORD *)v9 + 2) == 1 )
  {
    if ( !*((_BYTE *)v9 + 24) )
    {
      v41 = CExpression::ResolveReference(this, v9, a3);
      LODWORD(v8) = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2A30, 2u, v41, 0x5A1u, 0LL);
        return (unsigned int)v8;
      }
      goto LABEL_21;
    }
    v30 = (int *)(*((_QWORD *)this + 36) + *((unsigned int *)v9 + 5));
    v31 = *((_DWORD *)v9 + 1);
    if ( *((_DWORD *)v9 + 3) == 1 )
      v31 = CExpression::AdjustPropertyTypeWithMask(this, v31, v30);
    CExpressionValue::SetValue((int **)v6, v31, v30, a4);
    if ( *((_DWORD *)this + 55) )
      CExpression::LogCacheAccess(this, 1, *((_DWORD *)v9 + 5), (struct CExpressionValue *)v6);
  }
  else
  {
    if ( *((_DWORD *)v9 + 2) != 2 )
    {
      LODWORD(v8) = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2A30, 2u, -2147418113, 0x5A7u, 0LL);
      return (unsigned int)v8;
    }
    v10 = 0LL;
    v52 = 0LL;
    if ( *((_DWORD *)this + 55) || CCommonRegistryData::LogExpressionPerfStats )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 816LL) + 128LL;
      QpcStopwatch::Start((QpcStopwatch *)&v52);
      v10 = v52;
    }
    v11 = *((_DWORD *)v9 + 4);
    if ( v11 >= *((_DWORD *)this + 80) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x541,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
        a4);
    v12 = *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * v11);
    if ( !v12 )
      goto LABEL_46;
    if ( !g_pComposition
      || GetCurrentThreadId() != CComposition::s_compositionThreadId
      && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
    {
      ModuleFailFastForHRESULT(-2003304313, retaddr);
    }
    v13 = *(struct CResource **)(v12 + 64);
    if ( v13 )
    {
      if ( v10 )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v52);
        CExpressionPerformanceCounter::AddDurationSample(v8, 3LL, Elapsed);
      }
      v14 = *(_DWORD *)v9;
      v15 = *((_DWORD *)v9 + 3);
      v16 = *(unsigned int *)v9;
      LODWORD(v16) = v16 & 0x7FFFFFFF;
      v17 = (*(__int64 (__fastcall **)(struct CResource *, __int64, int *))(*(_QWORD *)v13 + 136LL))(v13, v16, v6);
      LODWORD(v8) = v17;
      if ( v17 >= 0 )
      {
        if ( v14 < 0 && v6[16] == 18 )
        {
          v44 = *(float *)v6;
          CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
          v6[16] = 18;
          *(float *)v6 = v44 * 57.295776;
        }
        if ( v15 == 1 )
        {
          v40 = *((_QWORD *)this + 24);
          if ( v40 )
          {
            if ( *(_BYTE *)(v40 + 4) )
              CExpressionValue::ApplyMaskToValue((CExpressionValue *)v6, (const struct SubchannelMaskInfo *)v40);
          }
        }
        v18 = *((_QWORD *)this + 23);
        LODWORD(v8) = 0;
        if ( v18 )
        {
          if ( !g_pComposition
            || GetCurrentThreadId() != CComposition::s_compositionThreadId
            && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
          {
            ModuleFailFastForHRESULT(-2003304313, retaddr);
          }
          v19 = *(struct CResource **)(v18 + 64);
        }
        else
        {
          v19 = 0LL;
        }
        CInteractionTrackerBase::CheckTargetsForInteractionSource(v9, v19, v13);
LABEL_21:
        v22 = 0LL;
        v52 = 0LL;
        if ( *((_DWORD *)this + 55) )
        {
          v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 816LL) + 128LL;
          QpcStopwatch::Start((QpcStopwatch *)&v52);
          v22 = v52;
        }
        v23 = *((unsigned int *)v9 + 1);
        if ( *((_DWORD *)v9 + 3) == 1 )
          LODWORD(v23) = CExpression::AdjustPropertyTypeWithMask(this, v23, v20);
        v24 = v6[16];
        if ( v24 == (_DWORD)v23 )
        {
          if ( (_DWORD)v23 == 17 )
          {
            v26 = 1;
          }
          else
          {
            if ( (_DWORD)v23 == 42 )
            {
LABEL_28:
              v25 = (int)v23 >> 4;
            }
            else
            {
              v21 = (const char *)&_ImageBase;
              switch ( (int)v23 )
              {
                case 17:
                case 18:
                case 35:
                case 52:
                case 69:
                case 70:
                case 71:
                case 104:
                case 265:
                  goto LABEL_28;
                default:
                  v25 = 0;
                  break;
              }
            }
            v26 = 4 * v25;
          }
          v27 = *((_DWORD *)v9 + 5);
          if ( v27 + v26 > *((_DWORD *)this + 79) )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x603,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
              v21);
          v28 = *((_QWORD *)this + 36) + v27;
          if ( v24 == 11 )
            v6 = *(int **)v6;
          memcpy_0((void *)(*((_QWORD *)this + 36) + v27), v6, v26);
          if ( !*((_BYTE *)v9 + 24) )
          {
            v34 = *((_DWORD *)v9 + 2) == 1;
            *((_BYTE *)v9 + 24) = 1;
            if ( v34 )
            {
              if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
                     *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
                     0LL) )
              {
                if ( CNotificationResource::ShouldNotify(this) )
                {
                  ChannelCallbackId = CNotificationResource::GetChannelCallbackId(v35);
                  v37 = (char *)v9 - *((_QWORD *)this + 38);
                  v50[0] = ChannelCallbackId;
                  v50[1] = *((unsigned int *)this + 18);
                  v39 = CoreUICallSend(v38, v50, 2LL, 0LL, 10, &unk_1802F5AC7, (int)v37 / 28, v28, v26);
                  if ( v39 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x61A,
                      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
                      (const char *)(unsigned int)v39,
                      v48);
                }
              }
            }
          }
        }
        else
        {
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x5FE,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
            (const char *)0x8007029CLL,
            v47);
        }
        if ( v22 )
        {
          v46 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v52);
          CExpressionPerformanceCounter::AddDurationSample(v5, 4LL, v46);
        }
        return (unsigned int)v8;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B8,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
        (const char *)(unsigned int)v17,
        v47);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B0,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\baseexpression.cpp",
        (const char *)(unsigned int)v8,
        v49);
      v32 = 1369;
    }
    else
    {
LABEL_46:
      LODWORD(v8) = -2147467259;
      v32 = 1356;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2A38, 2u, v8, v32, 0LL);
    if ( *((_BYTE *)v9 + 24) )
    {
      v42 = (int *)(*((_QWORD *)this + 36) + *((unsigned int *)v9 + 5));
      v43 = *((_DWORD *)v9 + 1);
      if ( *((_DWORD *)v9 + 3) == 1 )
        v43 = CExpression::AdjustPropertyTypeWithMask(this, v43, v42);
      CExpressionValue::SetValue((int **)v6, v43, v42, v33);
      if ( *((_DWORD *)this + 55) )
        CExpression::LogCacheAccess(this, 1, *((_DWORD *)v9 + 5), (struct CExpressionValue *)v6);
      LODWORD(v8) = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2A30, 2u, v8, 0x58Eu, 0LL);
    }
  }
  return (unsigned int)v8;
}
