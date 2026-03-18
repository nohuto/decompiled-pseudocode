/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x18018F734
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ExpressionReferenceInfoWithCache@@QEAA@XZ @ 0x18018F8CC (--0ExpressionReferenceInfoWithCache@@QEAA@XZ.c)
 *     ?RegisterSourceDependencies@CExpression@@AEAAJXZ @ 0x18018F8E0 (-RegisterSourceDependencies@CExpression@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        _DWORD *a4,
        unsigned int a5)
{
  __int64 v5; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r14
  ExpressionReferenceInfoWithCache *v11; // rax
  ExpressionReferenceInfoWithCache *v12; // rbp
  ExpressionReferenceInfoWithCache *v13; // rsi
  void *v14; // rcx
  unsigned int i; // r8d
  __int128 v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5
    || (v9 = *((unsigned int *)a3 + 3), !(_DWORD)v9)
    || (int)v5 + *((_DWORD *)this + 81) > (unsigned int)v9 )
  {
    v21 = 123LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  if ( a5 != 20 * v5 )
  {
    v21 = 126LL;
    goto LABEL_18;
  }
  if ( !*((_QWORD *)this + 38) )
  {
    v10 = (unsigned int)v9;
    v11 = (ExpressionReferenceInfoWithCache *)operator new[](saturated_mul(v9, 0x1CuLL));
    v12 = v11;
    if ( v11 )
    {
      v13 = v11;
      do
      {
        ExpressionReferenceInfoWithCache::ExpressionReferenceInfoWithCache(v13);
        v13 = (ExpressionReferenceInfoWithCache *)((char *)v13 + 28);
        --v10;
      }
      while ( v10 );
    }
    else
    {
      v12 = 0LL;
    }
    v14 = (void *)*((_QWORD *)this + 38);
    *((_QWORD *)this + 38) = v12;
    if ( v14 )
      operator delete(v14);
  }
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++*((_DWORD *)this + 81) )
  {
    ++i;
    v16 = *(_OWORD *)a4;
    v17 = *((_QWORD *)this + 38);
    a4 += 5;
    v18 = 28LL * *((unsigned int *)this + 81);
    *(_OWORD *)(v18 + v17) = v16;
    *(_DWORD *)(v18 + v17 + 16) = *(a4 - 1);
    *(_DWORD *)(v18 + v17 + 20) = 0x7FFFFFFF;
    *(_BYTE *)(v18 + v17 + 24) = 0;
  }
  if ( *((_DWORD *)this + 81) == *((_DWORD *)a3 + 3) )
  {
    v19 = CExpression::RegisterSourceDependencies(this);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x93,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
        (const char *)(unsigned int)v19,
        v22);
  }
  return 0LL;
}
