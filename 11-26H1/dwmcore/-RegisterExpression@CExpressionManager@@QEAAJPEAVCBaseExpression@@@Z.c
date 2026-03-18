/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18010E310
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18010E25C (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18004C220 (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?empty@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x18004DFD4 (-empty@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E554 (-AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18010E86C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetAnimationConsumersForProperty@CResource@@QEBAAEBV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180139BA0 (-GetAnimationConsumersForProperty@CResource@@QEBAAEBV-$vector_facade@PEAVCBaseExpression@@V-$poi.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18016DA20 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  CResource *v3; // rbp
  __int64 v4; // rax
  char *v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *AnimationConsumersForProperty; // rax
  __int64 v14; // r8
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 i; // rdx
  __int64 *v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CBaseExpression *v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = a2;
  v3 = CBaseExpression::ResolveTargetNoRef(a2);
  if ( !v3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionmanager.cpp",
      (const char *)0x80070072LL);
    return 2147942514LL;
  }
  v4 = *((_QWORD *)v20 + 7);
  if ( v4 && *(_BYTE *)(v4 + 18) )
  {
    v14 = *((_QWORD *)this + 46);
    v15 = *((_DWORD *)v20 + 44);
    v16 = v14;
    for ( i = *(_QWORD *)(v14 + 8); !*(_BYTE *)(i + 25); i = *v18 )
    {
      v18 = (__int64 *)(i + 16);
      if ( *(_DWORD *)(i + 28) >= v15 )
      {
        v18 = (__int64 *)i;
        v16 = i;
      }
    }
    if ( v16 == v14 || *(_BYTE *)(v16 + 25) || v15 < *(_DWORD *)(v16 + 28) )
    {
      v9 = DynArray<CBaseExpression *,1>::AddMultipleAndSet((char *)this + 336, &v20);
      if ( v9 < 0 )
      {
        v11 = 76LL;
        goto LABEL_11;
      }
      goto LABEL_7;
    }
  }
  v5 = (char *)this + 32 * *((unsigned int *)this + 51);
  v6 = *((_DWORD *)v5 + 58);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v9 = -2147024362;
    v10 = 183;
    goto LABEL_10;
  }
  if ( v7 > *((_DWORD *)v5 + 57) )
  {
    v9 = DynArrayImpl<1>::AddMultipleAndSet(v5 + 208, 8LL, v5, &v20);
    if ( v9 >= 0 )
      goto LABEL_7;
    v10 = 194;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v10, 0LL);
    v11 = 80LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionmanager.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  *(_QWORD *)(*((_QWORD *)v5 + 26) + 8LL * v6) = v20;
  *((_DWORD *)v5 + 58) = v7;
LABEL_7:
  CResource::AddAnimationProducer(v3, v20);
  if ( !*((_BYTE *)this + 418) )
  {
    v12 = *((unsigned int *)v20 + 45);
    LODWORD(v12) = v12 & 0x7FFFFFFF;
    AnimationConsumersForProperty = (_QWORD *)CResource::GetAnimationConsumersForProperty(v3, v12);
    if ( !detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::empty(AnimationConsumersForProperty) )
    {
      *((_BYTE *)this + 418) = 1;
      CExpressionManager::Invalidate(this);
    }
  }
  CExpressionManager::Invalidate(this);
  return 0LL;
}
