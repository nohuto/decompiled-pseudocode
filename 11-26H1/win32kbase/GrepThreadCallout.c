/*
 * XREFs of GrepThreadCallout @ 0x14011A030
 * Callers:
 *     GdiThreadCallout @ 0x14011A000 (GdiThreadCallout.c)
 * Callees:
 *     HmgFreeDcAttr @ 0x14000E59C (HmgFreeDcAttr.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@XZ @ 0x1401023EC (-Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@XZ.c)
 *     bDeletePalette @ 0x14017D940 (bDeletePalette.c)
 *     ?OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ @ 0x1401EDB48 (-OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepThreadCallout(_QWORD *a1, int a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int (*v8)(void); // rax
  int (*v9)(void); // rax
  __int64 v10; // rcx
  void (*v11)(void); // rax
  ThreadRestrictNewHandlesRegion *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int (*v15)(void); // rax
  void (*v16)(void); // rax
  __int64 v17; // rdi
  __int64 SessionState; // rax
  _QWORD **v19; // rdi
  _QWORD *v20; // rcx
  __int64 v21; // r14
  void (__fastcall *v22)(__int64); // rbp
  int (*v23)(void); // rax
  __int64 v24; // rcx
  void (__fastcall *v25)(_QWORD *); // rax
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  int (*v28)(void); // rax
  __int64 v29; // rcx
  void (__fastcall *v30)(_QWORD *); // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 1344LL);
  if ( v5
    && v5() >= 0
    && (v7 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24), (v8 = *(unsigned int (**)(void))(v7 + 1352)) != 0LL)
    && v8() )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 1376LL);
        if ( v9 )
        {
          if ( v9() >= 0 )
          {
            v11 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 24) + 1384LL);
            if ( v11 )
              v11();
          }
        }
      }
    }
    else if ( a1 )
    {
      a1[12] = a1 + 11;
      a1[11] = a1 + 11;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( a2 )
  {
    if ( a2 == 1 )
    {
      v12 = ThreadRestrictNewHandlesRegion::Get(v7, v6);
      if ( v12 )
        ThreadRestrictNewHandlesRegion::OnThreadTermination(v12);
      v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v13) + 24);
      v15 = *(int (**)(void))(v14 + 2448);
      if ( v15 )
      {
        if ( v15() >= 0 )
        {
          v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14) + 24);
          v16 = *(void (**)(void))(v14 + 2456);
          if ( v16 )
            v16();
        }
      }
      v17 = a1[4];
      if ( v17 )
      {
        SessionState = W32GetSessionState(v14);
        HmgFreeDcAttr(*(_QWORD **)(SessionState + 88), v17);
      }
      v19 = (_QWORD **)(a1 + 11);
      while ( 1 )
      {
        v20 = *v19;
        if ( *v19 == v19 )
          break;
        if ( v20 )
        {
          v21 = v20[2];
          v22 = (void (__fastcall *)(__int64))v20[3];
          PopThreadGuardedObject(v20);
          if ( v22 )
            v22(v21);
        }
      }
      v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 24) + 2464LL);
      if ( v23 )
      {
        if ( v23() >= 0 )
        {
          v25 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24) + 24) + 2472LL);
          if ( v25 )
            v25(a1);
        }
      }
      v26 = (_QWORD *)a1[35];
      if ( v26 )
      {
        a1[35] = 0LL;
        bDeletePalette(*v26);
        v28 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27) + 24) + 2480LL);
        if ( v28 )
        {
          if ( v28() >= 0 )
          {
            v30 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 24) + 2488LL);
            if ( v30 )
              v30(v26);
          }
        }
      }
      if ( a1 != (_QWORD *)8 )
      {
        v31 = a1 + 47;
        if ( *v31 )
          DxDdThreadCallout(v31, 0LL);
      }
    }
  }
  else
  {
    a1[10] = a1 + 9;
    a1[9] = a1 + 9;
    a1[12] = a1 + 11;
    a1[11] = a1 + 11;
    a1[34] = a1 + 13;
    if ( a1 != (_QWORD *)8 )
    {
      v32 = a1 + 47;
      LOBYTE(v6) = 1;
      *v32 = 0LL;
      return (unsigned int)DxDdThreadCallout(v32, v6);
    }
  }
  return v4;
}
