/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18010CBB8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18010C918 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x18010CEB8 (-ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18010E25C (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETNODESINFO *a3)
{
  void **v3; // r14
  unsigned int v7; // esi
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r15
  void *v14; // rax
  unsigned __int64 v15; // rcx
  void *v16; // r12
  unsigned __int64 v17; // rdx
  void *v18; // rbx
  __int64 v19; // rax
  const void *v20; // rdx
  void *v21; // rcx
  int v22; // ecx
  int v23; // eax
  LPVOID v24; // rax
  void *v25; // rcx
  int v26; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // [rsp+20h] [rbp-58h]
  unsigned int v32; // [rsp+20h] [rbp-58h]
  int v33; // [rsp+30h] [rbp-48h] BYREF
  void *v34[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  SIZE_T dwBytes; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v37; // [rsp+98h] [rbp+20h] BYREF

  v3 = (void **)((char *)this + 280);
  v7 = 0;
  LODWORD(dwBytes) = 0;
  if ( *((_QWORD *)this + 35) || (v8 = *((_DWORD *)a3 + 2)) == 0 )
  {
    v32 = 175;
    goto LABEL_6;
  }
  if ( v8 >= *((_DWORD *)a2 + 7)
    || (v9 = *((_DWORD *)a2 + 6) * v8, v10 = *((_QWORD *)a2 + 5), v11 = (unsigned int)v9, !*(_DWORD *)(v9 + v10))
    || (v12 = *(_QWORD *)(v9 + v10 + 8)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 132LL)
    || (v13 = *(_QWORD *)(v11 + v10 + 8)) == 0
    || *((_DWORD *)a3 + 4) < 4u )
  {
    v32 = 181;
LABEL_6:
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v32, 0LL);
    goto LABEL_32;
  }
  v14 = operator new[](*((unsigned int *)a3 + 4));
  v15 = *(unsigned int *)(v13 + 80);
  v16 = v14;
  v17 = *((unsigned int *)a3 + 3);
  v18 = v14;
  v34[0] = v14;
  if ( v17 >= v15
    || *((unsigned int *)a3 + 4) > v15 - v17
    || (v19 = *(_QWORD *)(v13 + 88)) == 0
    || (v20 = (const void *)(v19 + v17)) == 0LL )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xBFu, 0LL);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v34);
    goto LABEL_32;
  }
  memcpy_0(v18, v20, *((unsigned int *)a3 + 4));
  if ( CExpression::ValidateNodes(this, *((_DWORD *)a3 + 4), (const unsigned __int8 *)v18, (unsigned int *)&dwBytes) < 0 )
  {
    if ( v18 )
      operator delete(v18);
  }
  else
  {
    if ( v3 != v34 )
    {
      v21 = *v3;
      v18 = 0LL;
      *v3 = v16;
      if ( v21 )
        operator delete(v21);
    }
    *((_DWORD *)this + 78) = *((_DWORD *)a3 + 4);
    if ( v18 )
      operator delete(v18);
    v22 = *((_DWORD *)this + 44);
    v23 = *((_DWORD *)a2 + 12);
    if ( v22 )
    {
      if ( v22 != v23 )
      {
        v7 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x2E2u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xD0u, 0LL);
        goto LABEL_32;
      }
    }
    else
    {
      *((_DWORD *)this + 44) = v23;
    }
    v7 = 0;
    if ( *((_QWORD *)this + 36) || *((_DWORD *)this + 79) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xD3,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
        (const char *)0x8007029CLL,
        v31);
    if ( (_DWORD)dwBytes )
    {
      v24 = operator new[]((unsigned int)dwBytes);
      v25 = (void *)*((_QWORD *)this + 36);
      *((_QWORD *)this + 36) = v24;
      if ( v25 )
        operator delete(v25);
      *((_DWORD *)this + 79) = dwBytes;
    }
    if ( (*((_BYTE *)this + 216) & 0x40) == 0 )
    {
      v26 = CBaseExpression::TryRegisterWithExpressionManager(this);
      v7 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0xDCu, 0LL);
    }
  }
LABEL_32:
  if ( *((_DWORD *)this + 55) && (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 1LL) )
  {
    v37 = v7;
    v33 = v29;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      byte_1803B4185,
      v29,
      v30,
      (__int64)&v33,
      (__int64)&v37);
  }
  return v7;
}
