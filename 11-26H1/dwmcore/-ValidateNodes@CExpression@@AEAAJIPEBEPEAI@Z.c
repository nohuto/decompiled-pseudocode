/*
 * XREFs of ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x18010CEB8
 * Callers:
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18010CBB8 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z @ 0x18010B9FC (-AdjustPropertyTypeWithMask@CExpression@@AEBA-AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z.c)
 *     ?reserve_region@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUNodesDataBookmark@CExpression@@_K0@Z @ 0x18010BA68 (-reserve_region@-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmar.c)
 *     ?clear_region@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18010CADC (-clear_region@-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmark@.c)
 *     ??1?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010D380 (--1-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmark@CExpression.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18010D3FC (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpression::ValidateNodes(
        CExpression *this,
        __int64 a2,
        const unsigned __int8 *a3,
        unsigned int *a4)
{
  _BYTE *v4; // r10
  _BYTE *v5; // r9
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  const unsigned __int8 *v8; // r11
  unsigned int v9; // r15d
  unsigned int i; // r8d
  int v12; // esi
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned int v23; // edx
  int ExpressionTypeByteSize; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ebx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // edi
  _DWORD *v38; // rax
  _DWORD *v39; // rax
  bool v40; // zf
  int v41; // ecx
  bool v42; // zf
  int v43; // ecx
  bool v44; // zf
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  _BYTE *v58; // [rsp+30h] [rbp-89h] BYREF
  _BYTE *v59; // [rsp+38h] [rbp-81h]
  char *v60; // [rsp+40h] [rbp-79h]
  _BYTE v61[128]; // [rsp+48h] [rbp-71h] BYREF
  char v62; // [rsp+C8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v4 = v61;
  v5 = v61;
  v6 = 0;
  v59 = v61;
  v7 = 0;
  v58 = v61;
  v8 = a3;
  v9 = a2;
  v60 = &v62;
  for ( i = 0; i < *((_DWORD *)this + 81); ++i )
  {
    a2 = 28LL * i;
    if ( *(_DWORD *)(a2 + *((_QWORD *)this + 38) + 16) >= *((_DWORD *)this + 80) )
    {
      v13 = 1072LL;
      goto LABEL_61;
    }
  }
  while ( 1 )
  {
    while ( v7 >= v9 )
    {
      if ( v7 != v9 )
      {
        v13 = 1298LL;
        goto LABEL_61;
      }
      if ( v5 == v4 )
      {
        *a4 = v6;
        detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::~vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>(
          &v58,
          a2);
        return 0LL;
      }
      v9 = *((_DWORD *)v5 - 1);
      v7 = *((_DWORD *)v5 - 2);
      detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v58,
        (v5 - 8 - v4) >> 3,
        1LL);
      v5 = v59;
      v4 = v58;
      v8 = a3;
    }
    v12 = 4;
    if ( v7 + 4 < v7 )
    {
      v13 = 1083LL;
LABEL_8:
      v14 = -2147024362;
      goto LABEL_9;
    }
    if ( v7 + 4 > v9 )
    {
      v13 = 1084LL;
      goto LABEL_61;
    }
    a2 = v7;
    v17 = *(_DWORD *)&v8[v7];
    if ( v17 == 51 )
    {
      v28 = v7 + 12;
      v12 = 12;
      if ( v7 + 12 < v7 )
      {
        v13 = 1265LL;
        goto LABEL_8;
      }
      if ( v28 > v9 )
      {
        v13 = 1266LL;
        goto LABEL_61;
      }
      v29 = v28 + *(_DWORD *)&v8[v7 + 4];
      if ( v29 < v28 )
      {
        v13 = 1271LL;
        goto LABEL_8;
      }
      if ( v29 > v9 )
      {
        v13 = 1272LL;
        goto LABEL_61;
      }
      v37 = v29 + *(_DWORD *)&v8[v7 + 8];
      if ( v37 < v29 )
      {
        v13 = 1275LL;
        goto LABEL_8;
      }
      if ( v37 > v9 )
      {
        v13 = 1276LL;
        goto LABEL_61;
      }
      v38 = (_DWORD *)detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::reserve_region(
                        (__int64 *)&v58,
                        (v5 - v4) >> 3);
      *v38 = v37;
      v38[1] = v9;
      v39 = (_DWORD *)detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::reserve_region(
                        (__int64 *)&v58,
                        (v59 - v58) >> 3);
      v8 = a3;
      v9 = v29;
      *v39 = v29;
      v39[1] = v37;
LABEL_35:
      v4 = v58;
      v5 = v59;
      goto LABEL_21;
    }
    if ( v17 > 51 )
    {
      if ( v17 <= 78 )
      {
        if ( v17 == 78 )
          goto LABEL_20;
        if ( v17 > 65 )
        {
          if ( v17 > 72 )
          {
            v53 = v17 - 73;
            if ( !v53 )
              goto LABEL_20;
            v54 = v53 - 1;
            if ( !v54 )
              goto LABEL_20;
            v55 = v54 - 1;
            if ( !v55 )
              goto LABEL_20;
            v52 = v55 - 1;
            if ( v52 )
              goto LABEL_126;
          }
          else
          {
            if ( v17 == 72 )
              goto LABEL_20;
            v48 = v17 - 66;
            if ( v48 )
            {
              v49 = v48 - 1;
              if ( v49 )
              {
                v50 = v49 - 1;
                if ( v50 )
                {
                  v51 = v50 - 1;
                  if ( v51 )
                  {
                    v52 = v51 - 1;
                    if ( v52 )
                    {
LABEL_126:
                      if ( v52 != 1 )
                        goto LABEL_65;
                    }
LABEL_20:
                    v12 = 8;
                    goto LABEL_21;
                  }
                }
              }
            }
          }
          goto LABEL_21;
        }
        if ( v17 == 65 )
          goto LABEL_21;
        if ( v17 > 59 )
        {
          v45 = v17 - 60;
          v44 = v45 == 0;
          goto LABEL_108;
        }
        if ( v17 == 59 )
          goto LABEL_21;
        v43 = v17 - 53;
        v42 = v43 == 0;
        goto LABEL_106;
      }
      if ( v17 <= 91 )
      {
        if ( v17 == 91 )
          goto LABEL_21;
        if ( v17 > 85 )
        {
          v45 = v17 - 86;
          v44 = v45 == 0;
          goto LABEL_108;
        }
        if ( v17 == 85 )
          goto LABEL_21;
        v43 = v17 - 79;
        if ( !v43 )
          goto LABEL_20;
        goto LABEL_107;
      }
      if ( v17 > 97 )
      {
        v30 = v17 - 98;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( !v33 )
                goto LABEL_95;
              if ( v33 != 1 )
                goto LABEL_65;
              v12 = 24;
            }
          }
        }
        goto LABEL_21;
      }
      if ( v17 == 97 )
        goto LABEL_21;
      v45 = v17 - 92;
      v44 = v45 == 0;
      goto LABEL_108;
    }
    if ( v17 <= 26 )
      break;
    if ( v17 <= 39 )
    {
      if ( v17 == 39 )
        goto LABEL_21;
      if ( v17 > 33 )
      {
        v45 = v17 - 34;
        v44 = v45 == 0;
        goto LABEL_108;
      }
      if ( v17 == 33 )
        goto LABEL_21;
      v43 = v17 - 27;
      v42 = v43 == 0;
LABEL_106:
      if ( v42 )
        goto LABEL_21;
LABEL_107:
      v45 = v43 - 1;
      v44 = v45 == 0;
      goto LABEL_108;
    }
    if ( v17 > 45 )
    {
      v45 = v17 - 46;
      v44 = v45 == 0;
    }
    else
    {
      if ( v17 == 45 )
        goto LABEL_21;
      v45 = v17 - 40;
      v44 = v45 == 0;
    }
LABEL_108:
    if ( !v44 )
    {
      v46 = v45 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( v47 )
        {
          v41 = v47 - 1;
          v40 = v41 == 0;
          goto LABEL_103;
        }
      }
    }
LABEL_21:
    if ( v12 + v7 < v7 )
    {
      v13 = 1294LL;
      goto LABEL_8;
    }
    v7 += v12;
  }
  if ( v17 == 26 )
    goto LABEL_21;
  if ( v17 > 13 )
  {
    if ( v17 > 20 )
    {
      v45 = v17 - 21;
      v44 = v45 == 0;
      goto LABEL_108;
    }
    if ( v17 == 20 )
      goto LABEL_21;
    v43 = v17 - 14;
    v42 = v43 == 0;
    goto LABEL_106;
  }
  if ( v17 == 13 )
    goto LABEL_21;
  if ( v17 <= 6 )
  {
    if ( v17 == 6 )
      goto LABEL_72;
    if ( !v17 )
      goto LABEL_20;
    v34 = v17 - 1;
    if ( !v34 )
      goto LABEL_20;
    v35 = v34 - 1;
    if ( !v35 )
    {
      v12 = 12;
      goto LABEL_21;
    }
    v36 = v35 - 1;
    if ( v36 )
    {
      if ( (unsigned int)(v36 - 1) >= 2 )
        goto LABEL_65;
LABEL_72:
      v12 = 20;
      goto LABEL_21;
    }
LABEL_95:
    v12 = 16;
    goto LABEL_21;
  }
  v18 = v17 - 7;
  if ( !v18 )
  {
    v12 = 28;
    goto LABEL_21;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v12 = 68;
    goto LABEL_21;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v12 = 8;
    if ( v7 + 8 < v7 )
    {
      v13 = 1122LL;
      goto LABEL_8;
    }
    if ( v7 + 8 > v9 )
    {
      v13 = 1123LL;
      goto LABEL_61;
    }
    v21 = *(unsigned int *)&v8[v7 + 4];
    if ( (unsigned int)v21 >= *((_DWORD *)this + 81) )
    {
      v13 = 1126LL;
      goto LABEL_61;
    }
    v22 = *((_QWORD *)this + 38);
    v23 = *(_DWORD *)(28 * v21 + v22 + 4);
    if ( *(_DWORD *)(28 * v21 + v22 + 12) == 1 )
      v23 = CExpression::AdjustPropertyTypeWithMask((__int64)this, v23);
    ExpressionTypeByteSize = GetExpressionTypeByteSize(v23);
    if ( !ExpressionTypeByteSize )
    {
      v13 = 1136LL;
      goto LABEL_61;
    }
    v27 = v6 + ExpressionTypeByteSize;
    *(_DWORD *)(v25 + v26 + 20) = v6;
    if ( v27 < v6 )
    {
      v13 = 1139LL;
      goto LABEL_8;
    }
    v6 = v27;
    goto LABEL_35;
  }
  v41 = v20 - 2;
  v40 = v41 == 0;
LABEL_103:
  if ( v40 || v41 == 1 )
    goto LABEL_21;
LABEL_65:
  v13 = 1291LL;
LABEL_61:
  v14 = -2147467259;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
    (const char *)v14);
  detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::~vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>(
    &v58,
    v15);
  return v14;
}
