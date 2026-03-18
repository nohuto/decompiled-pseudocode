/*
 * XREFs of ?SetOutputValueOnTarget@CBaseExpression@@IEAAJXZ @ 0x18004C450
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180080E30 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValueOnTarget(CBaseExpression *this)
{
  __int64 v1; // rbx
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  float *v6; // r9
  int v7; // esi
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  const char *v13; // r9
  int v14; // edx
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  float *v18; // rsi
  char v19; // si
  unsigned int v20; // eax
  unsigned int i; // r8d
  unsigned int v22; // ecx
  __int64 v23; // rdx
  float *v24; // r9
  __int64 v25; // r9
  __int64 v26; // rax
  float v27; // xmm0_4
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  __int128 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+40h] [rbp-C0h]
  __int128 v31; // [rsp+50h] [rbp-B0h]
  __int128 v32; // [rsp+60h] [rbp-A0h]
  unsigned int v33; // [rsp+70h] [rbp-90h]
  float v34[16]; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+C0h] [rbp-40h]
  float v36[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v37; // [rsp+110h] [rbp+10h]
  void *retaddr; // [rsp+168h] [rbp+68h]

  v1 = *((_QWORD *)this + 23);
  if ( !v1 )
    goto LABEL_75;
  if ( !g_pComposition
    || GetCurrentThreadId() != CComposition::s_compositionThreadId
    && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
  {
    ModuleFailFastForHRESULT(-2003304313, retaddr);
  }
  v3 = *(__int64 **)(v1 + 64);
  if ( !v3 )
  {
LABEL_75:
    v7 = -2147024782;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024782, 0x2ADu, 0LL);
    return (unsigned int)v7;
  }
  v4 = *((_QWORD *)this + 24);
  if ( v4 && *(_BYTE *)(v4 + 4) )
  {
    v9 = *v3;
    v10 = *((_DWORD *)this + 45);
    v11 = (unsigned int)v10;
    v35 = 0;
    LODWORD(v11) = v10 & 0x7FFFFFFF;
    v33 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, float *))(v9 + 136))(v3, v11, v34);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x2B8,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
        (const char *)(unsigned int)v12,
        v28);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2C0u, 0LL);
LABEL_44:
      if ( v35 == 11 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 16LL))(*(_QWORD *)v34);
      return (unsigned int)v7;
    }
    v14 = v35;
    if ( v10 < 0 && v35 == 18 )
    {
      v35 = 18;
      v34[0] = v34[0] * 57.295776;
    }
    v15 = *((_QWORD *)this + 24);
    if ( *(_DWORD *)v15 == 1 )
    {
      v16 = (unsigned int)(v14 - 18);
      if ( (unsigned int)v16 <= 0x33 )
      {
        v17 = 0x8000400020001LL;
        if ( _bittest64(&v17, v16) )
          goto LABEL_22;
      }
      v20 = 1891;
      v7 = -2147024809;
    }
    else if ( *(_DWORD *)v15 == 2 )
    {
      if ( v14 == 104 || v14 == 265 )
      {
LABEL_22:
        v18 = v34;
        if ( v14 == 11 )
          v18 = *(float **)v34;
        if ( v14 == 18 )
        {
          *(float *)&v29 = *v18;
          v33 = 18;
        }
        else if ( v14 == 35 )
        {
          v33 = 35;
          *(_QWORD *)&v29 = *(_QWORD *)v18;
        }
        else if ( v14 )
        {
          if ( v14 == 17 )
          {
            v19 = *(_BYTE *)v18;
            v33 = 17;
            LOBYTE(v29) = v19;
          }
          else
          {
            switch ( v14 )
            {
              case 11:
                if ( !v18 )
                  goto LABEL_53;
                v33 = 11;
                *(_QWORD *)&v29 = v18;
                (*(void (__fastcall **)(float *))(*(_QWORD *)v18 + 8LL))(v18);
                v14 = v35;
                break;
              case 42:
                CExpressionValue::DestroyCurrent((CExpressionValue *)&v29);
                v14 = v35;
                v33 = 42;
                *(float *)&v29 = *v18;
                break;
              case 52:
                v33 = 52;
                *(_QWORD *)&v29 = *(_QWORD *)v18;
                *((float *)&v29 + 2) = v18[2];
                break;
              case 69:
                CExpressionValue::DestroyCurrent((CExpressionValue *)&v29);
                v14 = v35;
                v33 = 69;
                v29 = *(_OWORD *)v18;
                break;
              case 70:
                v33 = 70;
                v29 = *(_OWORD *)v18;
                break;
              case 71:
                CExpressionValue::DestroyCurrent((CExpressionValue *)&v29);
                v14 = v35;
                v33 = 71;
                v29 = *(_OWORD *)v18;
                break;
              case 104:
                v33 = 104;
                v29 = *(_OWORD *)v18;
                *(_QWORD *)&v30 = *((_QWORD *)v18 + 2);
                break;
              case 265:
                v33 = 265;
                v29 = *(_OWORD *)v18;
                v30 = *((_OWORD *)v18 + 1);
                v31 = *((_OWORD *)v18 + 2);
                v32 = *((_OWORD *)v18 + 3);
                break;
              default:
                wil::details::in1diag3::_FailFast_Unexpected(
                  (wil::details::in1diag3 *)retaddr,
                  (void *)0x2D6,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
                  v13);
            }
          }
        }
        else
        {
LABEL_53:
          v33 = 0;
        }
        for ( i = 0; ; ++i )
        {
          v22 = *(unsigned __int8 *)(v15 + 4);
          if ( i >= v22 )
            break;
          if ( *(_DWORD *)v15 == 1 )
          {
            LODWORD(v25) = (*(unsigned __int8 *)(v15 + 8) >> (2 * (v22 - i) - 2)) & 3;
          }
          else if ( *(_DWORD *)v15 == 2 )
          {
            v25 = (*(_QWORD *)(v15 + 8) >> (4 * ((unsigned __int8)v22 - (unsigned __int8)i) - 4)) & 0xFLL;
          }
          else
          {
            LODWORD(v25) = -1;
          }
          if ( v14 != 42 )
          {
            switch ( v14 )
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
                break;
              default:
                goto LABEL_67;
            }
          }
          if ( (unsigned int)v25 >= v14 >> 4 || (unsigned int)v25 >= 0x10 )
          {
LABEL_67:
            v7 = -2147467259;
            v20 = 1949;
            goto LABEL_31;
          }
          v26 = i;
          *((_DWORD *)&v29 + (unsigned int)v25) = *((_DWORD *)this + v26 + 20);
        }
        v23 = *((unsigned int *)this + 45);
        v37 = 0;
        if ( (int)v23 < 0 && v33 == 18 )
        {
          v24 = v36;
          v37 = 18;
          v36[0] = *(float *)&v29 * 0.017453292;
        }
        else if ( v33 == 11 )
        {
          v24 = (float *)v29;
        }
        else
        {
          v24 = (float *)&v29;
        }
        LODWORD(v23) = v23 & 0x7FFFFFFF;
        v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, float *))(*v3 + 96))(v3, v23, v33, v24);
        if ( v37 == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v36 + 16LL))(*(_QWORD *)v36);
        if ( v7 >= 0 )
        {
          if ( v33 == 11 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 16LL))(v29);
          goto LABEL_44;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2C4u, 0LL);
LABEL_32:
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v29);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v34);
        return (unsigned int)v7;
      }
      v20 = 1900;
      v7 = -2147024809;
    }
    else
    {
      v7 = -2147467259;
      v20 = 1910;
    }
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v20, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2C3u, 0LL);
    goto LABEL_32;
  }
  v5 = *((unsigned int *)this + 45);
  v6 = (float *)((char *)this + 80);
  v37 = 0;
  if ( (int)v5 < 0 && *((_DWORD *)this + 36) == 18 )
  {
    v27 = *v6;
    v6 = v36;
    v37 = 18;
    v36[0] = v27 * 0.017453292;
  }
  else if ( *((_DWORD *)this + 36) == 11 )
  {
    v6 = *(float **)v6;
  }
  LODWORD(v5) = v5 & 0x7FFFFFFF;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, float *))(*v3 + 96))(
         v3,
         v5,
         *((unsigned int *)this + 38),
         v6);
  if ( v37 == 11 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v36 + 16LL))(*(_QWORD *)v36);
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2B2u, 0LL);
  return (unsigned int)v7;
}
