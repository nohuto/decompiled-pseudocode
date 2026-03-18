/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140011E40
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140011C5C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     _RGNOBJ::iCombine_::_2_::_lambda_1_::operator() @ 0x140012020 (_RGNOBJ--iCombine_--_2_--_lambda_1_--operator().c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140022050 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140038140 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1401BCB10 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  int v4; // r10d
  __int64 *v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // rdi
  _QWORD *v8; // rbp
  __int64 **v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax

  v4 = *(_DWORD *)(*(_QWORD *)this + 76LL);
  *(_DWORD *)(*(_QWORD *)this + 76LL) = *(_DWORD *)(*(_QWORD *)a2 + 76LL);
  *(_DWORD *)(*(_QWORD *)a2 + 76LL) = v4;
  v5 = (__int64 *)(*(_QWORD *)this + 80LL);
  v6 = (_QWORD *)(*(_QWORD *)a2 + 80LL);
  v7 = *v5;
  v8 = (_QWORD *)*v6;
  if ( *(_QWORD *)this != -80LL )
  {
    if ( *(__int64 **)(v7 + 8) != v5 )
      goto LABEL_25;
    v9 = *(__int64 ***)(*(_QWORD *)this + 88LL);
    if ( *v9 != v5 )
      goto LABEL_25;
    *v9 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v9;
    v5[1] = (__int64)v5;
    *v5 = (__int64)v5;
  }
  v10 = (_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_QWORD *)a2 != -80LL )
  {
    v11 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      goto LABEL_25;
    v12 = *(_QWORD **)(*(_QWORD *)a2 + 88LL);
    if ( (_QWORD *)*v12 != v10 )
      goto LABEL_25;
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v10[1] = v10;
    *v10 = v10;
  }
  v13 = *(_QWORD *)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v13;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
  {
    v15 = *CurrentThreadWin32Thread;
    if ( v15 )
    {
      if ( v15 != -8 )
      {
        if ( (__int64 *)v7 != v5 )
        {
          v16 = *(_QWORD *)this;
          v17 = (_QWORD *)(*(_QWORD *)this + 80LL);
          if ( *(_QWORD *)this != -80LL )
          {
            v18 = (__int64 *)PsGetCurrentThreadWin32Thread();
            if ( !v18 || (v19 = *v18) == 0 )
            {
              *(_QWORD *)(v16 + 96) = v16;
              *(_QWORD *)(v16 + 104) = CleanUpRegion;
LABEL_17:
              v17[1] = v17;
              *v17 = v17;
              goto LABEL_18;
            }
            v17[2] = v16;
            v17[3] = CleanUpRegion;
            v24 = v19 + 8;
            if ( !v24 )
              goto LABEL_17;
            v25 = *(_QWORD *)(v24 + 88);
            v26 = (_QWORD *)(v24 + 88);
            if ( *(_QWORD **)(v25 + 8) != v26 )
              goto LABEL_25;
            *v17 = v25;
            v17[1] = v26;
            *(_QWORD *)(v25 + 8) = v17;
            *v26 = v17;
          }
        }
LABEL_18:
        if ( v8 != v6 )
        {
          v20 = *(_QWORD *)a2;
          v21 = (_QWORD *)(*(_QWORD *)a2 + 80LL);
          if ( *(_QWORD *)a2 != -80LL )
          {
            v22 = (__int64 *)PsGetCurrentThreadWin32Thread();
            if ( !v22 || (v23 = *v22) == 0 )
            {
              *(_QWORD *)(v20 + 96) = v20;
              *(_QWORD *)(v20 + 104) = CleanUpRegion;
LABEL_23:
              v21[1] = v21;
              *v21 = v21;
              return;
            }
            v21[2] = v20;
            v21[3] = CleanUpRegion;
            v27 = v23 + 8;
            if ( !v27 )
              goto LABEL_23;
            v28 = *(_QWORD *)(v27 + 88);
            v29 = (_QWORD *)(v27 + 88);
            if ( *(_QWORD **)(v28 + 8) == v29 )
            {
              *v21 = v28;
              v21[1] = v29;
              *(_QWORD *)(v28 + 8) = v21;
              *v29 = v21;
              return;
            }
LABEL_25:
            __fastfail(3u);
          }
        }
      }
    }
  }
}
