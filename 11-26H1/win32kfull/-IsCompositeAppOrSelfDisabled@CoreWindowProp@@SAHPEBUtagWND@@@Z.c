/*
 * XREFs of ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140038250
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionIsCompositeAppOrSelfDisabled @ 0x140221650 (EditionIsCompositeAppOrSelfDisabled.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1400369B4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A37C0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsCompositeAppOrSelfDisabled(const struct tagWND *a1, __int64 a2)
{
  const struct tagWND *v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  const struct tagWND *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  const struct tagWND *Host; // rax
  __int64 UserSessionState; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  tagObjLock **v24; // rsi
  int v25; // ebp
  __int64 Prop; // rsi
  __int64 v27[2]; // [rsp+20h] [rbp-58h] BYREF
  char v28; // [rsp+30h] [rbp-48h]
  __int128 v29; // [rsp+38h] [rbp-40h] BYREF
  char v30; // [rsp+48h] [rbp-30h]
  char v31; // [rsp+50h] [rbp-28h]

  v2 = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 95) & 0x40000000) != 0 )
  {
    a1 = (const struct tagWND *)*((_QWORD *)a1 + 3);
    v6 = 0LL;
    if ( a1 )
      v6 = *((_QWORD *)a1 + 14);
    if ( *((_QWORD *)v2 + 13) == v6 )
    {
      v27[0] = 0LL;
      CWindowProp::GetProp<CInputQueueProp>((__int64)v2, v27);
      if ( *(_DWORD *)(v27[0] + 32) )
        v2 = *(const struct tagWND **)(v27[0] + 40);
      else
        v2 = 0LL;
    }
  }
  if ( v2 )
  {
    do
    {
      v5 = *((_QWORD *)v2 + 13);
      if ( v5 )
      {
        a1 = (const struct tagWND *)*((_QWORD *)v2 + 3);
        if ( a1 )
        {
          a2 = *((_QWORD *)a1 + 1);
          if ( a2 )
          {
            if ( v5 == *(_QWORD *)(a2 + 24) )
              break;
          }
        }
      }
      v2 = (const struct tagWND *)*((_QWORD *)v2 + 13);
    }
    while ( v5 );
  }
  if ( !v2 )
    return 0;
  v3 = 1;
  if ( (*((_DWORD *)v2 + 95) & 0x1000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v13 = *((_QWORD *)v2 + 18);
    v14 = *(unsigned __int16 *)(UserSessionState + 42282);
    v17 = W32GetUserSessionState(v16, v15);
    v28 = 0;
    v30 = 0;
    v27[1] = v17 + 42384;
    v29 = 0LL;
    v31 = 0;
    if ( (unsigned int)GET_USERCRIT_DISPOSITION(v19, v18) == 1 )
    {
      v31 = 1;
      v22 = W32GetUserSessionState(v21, v20);
      v23 = 0LL;
      if ( v13 != v22 + 42480 )
        v23 = v13;
      *(_QWORD *)&v29 = v23;
      if ( !v30 )
      {
        v24 = (tagObjLock **)&v29;
        v25 = 0;
        do
        {
          if ( *v24 )
            tagObjLock::LockExclusive(*v24);
          ++v25;
          ++v24;
        }
        while ( !v25 );
        v30 = 1;
      }
    }
    Prop = RealGetProp(*((_QWORD *)v2 + 18), v14, 1LL);
    if ( v30 && v31 )
    {
      if ( (_QWORD)v29 )
        tagObjLock::UnLockExclusive((tagObjLock *)v29);
      v30 = 0;
    }
    if ( Prop && *(_DWORD *)(Prop + 28) )
    {
      v7 = 0LL;
      if ( (unsigned int)CoreWindowProp::IsComponent(v2) )
      {
        v7 = v2;
        do
        {
          Host = CoreWindowProp::GetHost(v7);
          v7 = Host;
        }
        while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host) );
      }
      v2 = v7;
      if ( v7 )
      {
        do
        {
          v8 = *((_QWORD *)v2 + 13);
          if ( v8 )
          {
            v9 = *((_QWORD *)v2 + 3);
            if ( v9 )
            {
              v10 = *(_QWORD *)(v9 + 8);
              if ( v10 )
              {
                if ( v8 == *(_QWORD *)(v10 + 24) )
                  break;
              }
            }
          }
          v2 = (const struct tagWND *)*((_QWORD *)v2 + 13);
        }
        while ( v8 );
      }
      if ( !v2 )
        return 0;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)v2 + 5) + 31LL) & 8) == 0 )
    return 0;
  return v3;
}
