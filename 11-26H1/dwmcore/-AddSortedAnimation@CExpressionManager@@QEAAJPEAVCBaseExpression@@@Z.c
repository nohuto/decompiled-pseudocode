/*
 * XREFs of ?AddSortedAnimation@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18016C8B0
 * Callers:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18010E86C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CExpressionManager::AddSortedAnimation(
        CExpressionManager *this,
        struct CBaseExpression *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rax
  char *v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // r9d
  unsigned int v8; // ebx
  const char *v10; // r10
  unsigned int v11; // r11d
  const char *v12; // r9
  __int64 *v13; // rbx
  __int64 *v14; // rax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CBaseExpression *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  if ( (*((_BYTE *)a2 + 216) & 0x20) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCC,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionmanager.cpp",
      a4);
  v4 = *((_QWORD *)a2 + 7);
  if ( v4 && *(_BYTE *)(v4 + 18) )
  {
    v10 = (const char *)*((_QWORD *)this + 46);
    v11 = *((_DWORD *)a2 + 44);
    v12 = v10;
    v13 = (__int64 *)*((_QWORD *)v10 + 1);
    if ( !*((_BYTE *)v13 + 25) )
    {
      do
      {
        v14 = v13 + 2;
        if ( *((_DWORD *)v13 + 7) >= v11 )
        {
          v14 = v13;
          v12 = (const char *)v13;
        }
        v13 = (__int64 *)*v14;
      }
      while ( !*(_BYTE *)(*v14 + 25) );
    }
    if ( v12 == v10 || v12[25] || v11 < *((_DWORD *)v12 + 7) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xCF,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionmanager.cpp",
        v12);
  }
  v5 = (char *)this + 32 * (unsigned int)(1 - *((_DWORD *)this + 51));
  v6 = *((_DWORD *)v5 + 58);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v8 = 0;
    if ( v7 > *((_DWORD *)v5 + 57) )
    {
      v15 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v5 + 208), 8u, (__int64)v5, &v17);
      v8 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xC2u, 0LL);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v5 + 26) + 8LL * v6) = a2;
      *((_DWORD *)v5 + 58) = v7;
    }
  }
  return v8;
}
