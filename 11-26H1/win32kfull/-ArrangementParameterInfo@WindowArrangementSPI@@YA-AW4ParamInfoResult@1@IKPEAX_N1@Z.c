/*
 * XREFs of ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x140163FC8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _anonymous_namespace_::TestFeature @ 0x1401644A0 (_anonymous_namespace_--TestFeature.c)
 *     _anonymous_namespace_::SetMonitorDockThresholds @ 0x1401644D4 (_anonymous_namespace_--SetMonitorDockThresholds.c)
 *     _lambda_fcb4a4e7e214dab34917ad6111ff8639_::operator() @ 0x14016486C (_lambda_fcb4a4e7e214dab34917ad6111ff8639_--operator().c)
 *     _lambda_2b89108f8e380a56e0b1b303a75ceab9_::operator() @ 0x1401648FC (_lambda_2b89108f8e380a56e0b1b303a75ceab9_--operator().c)
 *     _lambda_315ad92e5be98155a16179dc024b8a3c_::operator() @ 0x140164974 (_lambda_315ad92e5be98155a16179dc024b8a3c_--operator().c)
 *     _lambda_23cd897c47050bff0d2fbbbc5d471d8f_::operator() @ 0x140165E24 (_lambda_23cd897c47050bff0d2fbbbc5d471d8f_--operator().c)
 *     UpdateWinIniInt @ 0x140201560 (UpdateWinIniInt.c)
 *     _anonymous_namespace_::UpdateThresholdFromMetric @ 0x140233D2C (_anonymous_namespace_--UpdateThresholdFromMetric.c)
 *     _lambda_9c8951c187b4be4d23fed8f94aee3ae8_::operator() @ 0x14024200C (_lambda_9c8951c187b4be4d23fed8f94aee3ae8_--operator().c)
 *     _lambda_28f03d232961592d9fdef10e21370bce_::operator() @ 0x14024770C (_lambda_28f03d232961592d9fdef10e21370bce_--operator().c)
 */

__int64 __fastcall WindowArrangementSPI::ArrangementParameterInfo(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        char a4,
        bool a5)
{
  bool v5; // r15
  unsigned int v9; // esi
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _BYTE *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // ecx
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _BYTE *v43; // rcx
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  _BYTE *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // ecx
  char v54; // al
  int v55; // [rsp+28h] [rbp-8h]
  bool v56; // [rsp+60h] [rbp+30h] BYREF

  v5 = 0;
  v56 = 0;
  if ( (unsigned int)a1 <= 0x88 )
  {
    if ( (_DWORD)a1 == 136 )
    {
      v54 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(a1, 2LL) + 63432) + 17LL);
      goto LABEL_70;
    }
    if ( (unsigned int)a1 > 0x83 )
    {
      v25 = (unsigned int)(a1 - 132);
      if ( (_DWORD)v25 )
      {
        v26 = v25 - 1;
        if ( !v26 )
        {
          if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                2LL,
                                lambda_fcb4a4e7e214dab34917ad6111ff8639_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v27) = a2;
            if ( (unsigned __int8)lambda_fcb4a4e7e214dab34917ad6111ff8639_::operator()(v28, v27, 1LL) )
            {
              if ( a4 )
              {
                v5 = (unsigned int)UpdateWinIniInt(0LL, 12LL, 19LL, (unsigned __int8)a2) != 0;
                a5 = v5;
              }
              if ( a5 )
              {
                v31 = *(_BYTE **)(W32GetUserSessionState(v30, v29) + 63432);
                v31[8] = a2;
                v31[9] = a2;
                v31[10] = a2;
                v31[11] = a2;
              }
            }
          }
          goto LABEL_26;
        }
        v38 = (unsigned int)(v26 - 1);
        if ( (_DWORD)v38 )
        {
          if ( (_DWORD)v38 == 1
            && !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                3LL,
                                lambda_2b89108f8e380a56e0b1b303a75ceab9_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v39) = a2;
            if ( (unsigned __int8)lambda_2b89108f8e380a56e0b1b303a75ceab9_::operator()(v40, v39, 1LL) )
            {
              if ( a4 )
              {
                v5 = (unsigned int)UpdateWinIniInt(0LL, 12LL, 20LL, (unsigned __int8)a2) != 0;
                a5 = v5;
              }
              if ( a5 )
              {
                v43 = *(_BYTE **)(W32GetUserSessionState(v42, v41) + 63432);
                v43[12] = a2;
                v43[13] = a2;
                v43[14] = a2;
                v43[15] = a2;
              }
            }
          }
          goto LABEL_26;
        }
        v54 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v38, 2LL) + 63432) + 13LL);
      }
      else
      {
        v54 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v25, 2LL) + 63432) + 9LL);
      }
      goto LABEL_70;
    }
    if ( (_DWORD)a1 == 131 )
    {
      v9 = 18;
      v10 = 1;
      goto LABEL_6;
    }
    v18 = (unsigned int)(a1 - 126);
    if ( !(_DWORD)v18 )
    {
      v54 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v18, 2LL) + 63432) + 1LL);
      goto LABEL_70;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = (unsigned int)(v19 - 1);
      if ( (_DWORD)v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                1LL,
                                lambda_315ad92e5be98155a16179dc024b8a3c_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v46) = a2;
            if ( (unsigned __int8)lambda_315ad92e5be98155a16179dc024b8a3c_::operator()(v47, v46, 1LL) )
            {
              if ( a4 )
              {
                v5 = (unsigned int)UpdateWinIniInt(0LL, 12LL, 17LL, (unsigned __int8)a2) != 0;
                a5 = v5;
              }
              if ( a5 )
              {
                v50 = *(_BYTE **)(W32GetUserSessionState(v49, v48) + 63432);
                v50[4] = a2;
                v50[5] = a2;
                v50[6] = a2;
                v50[7] = a2;
              }
            }
          }
          goto LABEL_26;
        }
        if ( v21 == 1 )
        {
          v22 = 1LL;
LABEL_20:
          *a3 = (unsigned __int8)anonymous_namespace_::TestFeature(v22, 2LL);
LABEL_21:
          result = 0LL;
          goto LABEL_27;
        }
        goto LABEL_26;
      }
      v54 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v20, 2LL) + 63432) + 5LL);
LABEL_70:
      *(_BYTE *)a3 = v54;
      goto LABEL_21;
    }
    if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                         a2,
                         0LL,
                         lambda_23cd897c47050bff0d2fbbbc5d471d8f_::_lambda_invoker_cdecl_) )
      goto LABEL_26;
    LOBYTE(v32) = a2;
    if ( !(unsigned __int8)lambda_23cd897c47050bff0d2fbbbc5d471d8f_::operator()(v33, v32, 1LL) )
      goto LABEL_26;
    v55 = 0;
    v35 = 16;
LABEL_64:
    LOBYTE(v34) = a4;
    anonymous_namespace_::UpdateThresholdFromMetric(v34, (unsigned int)&v56, (unsigned int)&a5, v35, a2, v55);
    v5 = v56;
    goto LABEL_26;
  }
  v13 = a1 - 137;
  if ( !v13 )
  {
    if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                         a2,
                         4LL,
                         lambda_9c8951c187b4be4d23fed8f94aee3ae8_::_lambda_invoker_cdecl_) )
      goto LABEL_26;
    LOBYTE(v51) = a2;
    if ( !(unsigned __int8)lambda_9c8951c187b4be4d23fed8f94aee3ae8_::operator()(v52, v51, 1LL) )
      goto LABEL_26;
    v55 = 4;
    v35 = 21;
    goto LABEL_64;
  }
  v14 = (unsigned int)(v13 - 1);
  if ( !(_DWORD)v14 )
  {
    v54 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v14, 2LL) + 63432) + 21LL);
    goto LABEL_70;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                         a2,
                         5LL,
                         lambda_28f03d232961592d9fdef10e21370bce_::_lambda_invoker_cdecl_) )
      goto LABEL_26;
    LOBYTE(v36) = a2;
    if ( !(unsigned __int8)lambda_28f03d232961592d9fdef10e21370bce_::operator()(v37, v36, 1LL) )
      goto LABEL_26;
    v55 = 5;
    v35 = 22;
    goto LABEL_64;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v22 = 2LL;
    goto LABEL_20;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v9 = 624;
    v10 = 2;
    goto LABEL_6;
  }
  v44 = v17 - 1;
  if ( !v44 )
  {
    v22 = 4LL;
    goto LABEL_20;
  }
  v45 = v44 - 1;
  if ( !v45 )
  {
    v9 = 626;
    v10 = 4;
    goto LABEL_6;
  }
  v53 = v45 - 1;
  if ( !v53 )
  {
    v22 = 8LL;
    goto LABEL_20;
  }
  if ( v53 == 1 )
  {
    v9 = 625;
    v10 = 8;
LABEL_6:
    if ( !(unsigned int)CheckDesktopPolicy(0LL, v9) )
    {
      if ( !a4 )
      {
LABEL_23:
        if ( a5 )
        {
          v24 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 63432);
          if ( a2 )
            *(_DWORD *)(v24 + 28) |= v10;
          else
            *(_DWORD *)(v24 + 28) &= ~v10;
        }
        goto LABEL_26;
      }
      v5 = (unsigned int)UpdateWinIniInt(0LL, 4LL, v9, a2) != 0;
    }
    a5 = v5;
    goto LABEL_23;
  }
LABEL_26:
  result = v5;
LABEL_27:
  if ( a5 )
    return (unsigned int)result | 2;
  return result;
}
