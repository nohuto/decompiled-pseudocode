/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x140178CEC
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1401D360C (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     DwmAsyncChildLink @ 0x14012ECB4 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1401780EC (DwmAsyncChildUnlink.c)
 *     DwmAsyncOwnerChange @ 0x14017A4CC (DwmAsyncOwnerChange.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v3; // ebp
  int v4; // r12d
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  struct tagBWL *v7; // r13
  __int64 *i; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rbx
  void *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rbx
  void *v24; // rax
  struct tagWND *v25; // rcx
  __int64 *v27; // rdx
  __int64 v28; // rdi
  int v29; // esi
  __int64 *v30; // rcx
  __int64 v31; // rbx
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // rax
  struct tagBWL *v36; // rax
  __int64 v37; // rdx
  struct tagBWL *v38; // r15
  __int64 *j; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rsi
  int v46; // r13d
  __int64 *v47; // rax
  __int64 v48; // r12
  __int64 v49; // rdi
  __int64 v50; // rbx
  void *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rbx
  void *v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rbx
  void *v57; // rax
  int v58; // [rsp+70h] [rbp+8h]

  v3 = 1;
  v4 = a2;
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL), 3LL, 0LL, 1);
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (__int64 *)((char *)v5 + 32); *i != 1; ++i )
  {
    v12 = HMValidateHandleNoSecure(*i, 1);
    v14 = v12;
    if ( v12 )
    {
      if ( v4 )
      {
        v58 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 236LL);
        v15 = *(__int64 **)(v12 + 96);
        if ( v15 )
          v16 = *v15;
        else
          v16 = 0LL;
        v17 = *(_QWORD *)v14;
        v18 = **(_QWORD **)(v14 + 104);
        v19 = (void *)ReferenceDwmApiPort(v13, v6);
        DwmAsyncChildLink(v19, v17, v18, v16, v58);
        v11 = (void *)ReferenceDwmApiPort(v10, v9);
        DwmAsyncOwnerChange(v11);
        v4 = a2;
      }
      else
      {
        v52 = *(_QWORD *)v12;
        v53 = **(_QWORD **)(v12 + 104);
        v54 = (void *)ReferenceDwmApiPort(v13, v6);
        DwmAsyncChildUnlink(v54, v52, v53);
      }
    }
  }
  FreeHwndList(v7, v6);
  if ( v4 )
  {
    v27 = (__int64 *)*((_QWORD *)a1 + 14);
    v28 = *v27;
    v29 = *(_DWORD *)(v27[5] + 236);
    v30 = *(__int64 **)(*((_QWORD *)a1 + 1) + 24LL);
    v31 = *v30;
    v32 = (void *)ReferenceDwmApiPort(v30, v27);
    DwmAsyncChildLink(v32, v28, v31, 1LL, v29);
    v35 = (void *)ReferenceDwmApiPort(v34, v33);
    DwmAsyncOwnerChange(v35);
  }
  else
  {
    v21 = *(__int64 **)(*((_QWORD *)a1 + 1) + 24LL);
    v22 = *v21;
    v23 = **((_QWORD **)a1 + 14);
    v24 = (void *)ReferenceDwmApiPort(v21, v20);
    DwmAsyncChildUnlink(v24, v23, v22);
  }
  v25 = *(struct tagWND **)(*((_QWORD *)a1 + 14) + 112LL);
  if ( !v25 )
    return v3;
  v36 = BuildHwndList(v25, 3LL, 0LL, 1);
  v38 = v36;
  if ( !v36 )
    return 0;
  for ( j = (__int64 *)((char *)v36 + 32); *j != 1; ++j )
  {
    v43 = HMValidateHandleNoSecure(*j, 1);
    v45 = v43;
    if ( v43 )
    {
      if ( v4 )
      {
        v46 = *(_DWORD *)(*(_QWORD *)(v43 + 40) + 236LL);
        v47 = *(__int64 **)(v43 + 96);
        if ( v47 )
          v48 = *v47;
        else
          v48 = 0LL;
        v49 = *(_QWORD *)v45;
        v50 = **(_QWORD **)(v45 + 104);
        v51 = (void *)ReferenceDwmApiPort(v44, v37);
        DwmAsyncChildLink(v51, v49, v50, v48, v46);
        v42 = (void *)ReferenceDwmApiPort(v41, v40);
        DwmAsyncOwnerChange(v42);
        v4 = a2;
      }
      else
      {
        v55 = *(_QWORD *)v43;
        v56 = **(_QWORD **)(v43 + 104);
        v57 = (void *)ReferenceDwmApiPort(v44, v37);
        DwmAsyncChildUnlink(v57, v55, v56);
      }
    }
  }
  FreeHwndList(v38, v37);
  return v3;
}
