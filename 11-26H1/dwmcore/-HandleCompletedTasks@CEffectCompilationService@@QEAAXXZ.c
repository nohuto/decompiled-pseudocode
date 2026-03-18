/*
 * XREFs of ?HandleCompletedTasks@CEffectCompilationService@@QEAAXXZ @ 0x180150BC0
 * Callers:
 *     ?UpdateDelayedWorkStatus@CComposition@@QEAAXXZ @ 0x180150B30 (-UpdateDelayedWorkStatus@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18010B8AC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180151340 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall CEffectCompilationService::HandleCompletedTasks(CEffectCompilationService *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // rcx
  const void **v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD *i; // rbx
  char *v14; // rcx
  char *v15; // r15
  __int64 v16; // r13
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r12
  _QWORD *v21; // rax
  void *v22; // rcx
  char *v23; // r8
  _BYTE *v24; // rdx
  size_t v25; // r8
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-48h]
  void *v32; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+38h] [rbp-30h]
  __int64 v35; // [rsp+40h] [rbp-28h]
  char *v36; // [rsp+70h] [rbp+8h]
  _QWORD *v37; // [rsp+78h] [rbp+10h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = 0LL;
  if ( *((_DWORD *)this + 50) )
  {
    do
    {
      v6 = 0;
      v7 = **((_QWORD **)this + 8);
      *(_BYTE *)(v7 + 96) = 1;
      if ( *(_DWORD *)(v7 + 48) )
      {
        do
          CCompiledEffectTemplate::OnCompilationCompleted(*(CCompiledEffectTemplate **)(*(_QWORD *)(v7 + 24) + 8LL * v6++));
        while ( v6 < *(_DWORD *)(v7 + 48) );
      }
      *(_DWORD *)(v7 + 48) = 0;
      DynArrayImpl<0>::ShrinkToSize(v7 + 24, 8u);
      v3 = *((unsigned int *)this + 22);
      if ( (_DWORD)v3 )
      {
        v4 = *((_QWORD *)this + 8);
        v8 = 0LL;
        if ( (_DWORD)v3 != 1 )
        {
          do
          {
            *(_QWORD *)(v4 + 8 * v8) = *(_QWORD *)(v4 + 8LL * (unsigned int)(v8 + 1));
            v8 = (unsigned int)(v8 + 1);
            v3 = *((unsigned int *)this + 22);
          }
          while ( (unsigned int)v8 < (int)v3 - 1 );
        }
        *((_DWORD *)this + 22) = v3 - 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x19Au, 0LL);
      }
    }
    while ( (*((_DWORD *)this + 50))-- != 1 );
  }
  if ( *((_BYTE *)this + 242) )
  {
    v10 = (const void **)((char *)this + 216);
    *((_BYTE *)this + 242) = 0;
    v11 = *((_QWORD *)this + 27);
    if ( v11 != *((_QWORD *)this + 28) )
      *((_QWORD *)this + 28) = v11;
    if ( !*((_BYTE *)this + 240) )
    {
      v12 = (_QWORD *)*((_QWORD *)this + 13);
      for ( i = (_QWORD *)*v12; ; i = (_QWORD *)*i )
      {
        while ( 1 )
        {
          if ( i == v12 )
          {
            v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
            goto LABEL_31;
          }
          if ( *(int *)(i[4] + 72LL) > 1 )
            break;
LABEL_29:
          i = (_QWORD *)*i;
        }
        v14 = (char *)*((_QWORD *)this + 29);
        v15 = (char *)*((_QWORD *)this + 28);
        if ( v15 == v14 )
        {
          v16 = (v15 - (_BYTE *)*v10) >> 3;
          if ( v16 == 0x1FFFFFFFFFFFFFFFLL )
            std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
              v14,
              v3,
              v4,
              0x1FFFFFFFFFFFFFFFLL);
          v17 = v16 + 1;
          v18 = (v14 - (_BYTE *)*v10) >> 3;
          v19 = v18 >> 1;
          if ( v18 <= 0x1FFFFFFFFFFFFFFFLL - (v18 >> 1) )
          {
            v20 = v16 + 1;
            if ( v19 + v18 >= v17 )
              v20 = v19 + v18;
            if ( v20 > 0x1FFFFFFFFFFFFFFFLL )
              std::_Throw_bad_array_new_length();
          }
          else
          {
            v20 = 0x1FFFFFFFFFFFFFFFLL;
          }
          v21 = std::_Allocate<16,std::_Default_allocate_traits>(8 * v20, v17);
          v21[v16] = i[2];
          v22 = v21;
          v23 = (char *)*((_QWORD *)this + 28);
          v37 = v21;
          v36 = (char *)&v21[v16];
          v24 = *v10;
          if ( v15 == v23 )
          {
            v25 = v23 - v24;
          }
          else
          {
            memmove_0(v21, v24, v15 - v24);
            v24 = v15;
            v25 = *((_QWORD *)this + 28) - (_QWORD)v15;
            v22 = v36 + 8;
          }
          memmove_0(v22, v24, v25);
          std::vector<CVectorShape *>::_Change_array((char *)this + 216, v37, v16 + 1, v20, v31, v32, v33, v34, v35);
          goto LABEL_29;
        }
        *(_QWORD *)v15 = i[2];
        *((_QWORD *)this + 28) += 8LL;
      }
    }
  }
LABEL_31:
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 110);
  v26 = *((_DWORD *)this + 50);
  v27 = *((_DWORD *)this + 22);
  *((_QWORD *)this + 26) = v5;
  if ( v26 < v27 )
  {
    v28 = 8LL * v26;
    v29 = v27 - v26;
    do
    {
      v28 += 8LL;
      v30 = *(_QWORD *)(v28 + *((_QWORD *)this + 8) - 8);
      if ( v5 >= *(_QWORD *)(v30 + 8) - 1LL )
        v5 = *(_QWORD *)(v30 + 8) - 1LL;
      *((_QWORD *)this + 26) = v5;
      --v29;
    }
    while ( v29 );
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
