/*
 * XREFs of ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1400213F0
 * Callers:
 *     EditionIsCompositeAppOrSelfDisabled @ 0x140021BE0 (EditionIsCompositeAppOrSelfDisabled.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x140021D08 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401C0E78 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1402210AC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14002160C (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall CoreWindowProp::IsCompositeAppOrSelfDisabled(const struct tagWND *a1, __int64 a2)
{
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 UserSessionState; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ebp
  tagObjLock **v18; // rsi
  __int64 Prop; // rbp
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v22; // [rsp+30h] [rbp-48h] BYREF
  char v23; // [rsp+40h] [rbp-38h]
  char v24; // [rsp+48h] [rbp-30h]

  CompositionInputWindowUIOwner = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 95) & 0x40000000) != 0 )
  {
    v20 = *((_QWORD *)a1 + 3);
    v21 = 0LL;
    if ( v20 )
      v21 = *(_QWORD *)(v20 + 112);
    if ( *((_QWORD *)CompositionInputWindowUIOwner + 13) == v21 )
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
  }
  if ( CompositionInputWindowUIOwner )
  {
    while ( 1 )
    {
      v3 = *((_QWORD *)CompositionInputWindowUIOwner + 13);
      if ( !v3 )
        break;
      v6 = *((_QWORD *)CompositionInputWindowUIOwner + 3);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          if ( v3 == *(_QWORD *)(v7 + 24) )
          {
            if ( CompositionInputWindowUIOwner )
            {
              v4 = 1;
              if ( (*((_DWORD *)CompositionInputWindowUIOwner + 95) & 0x1000) == 0 )
                goto LABEL_26;
              UserSessionState = W32GetUserSessionState(v3, a2);
              v9 = *((_QWORD *)CompositionInputWindowUIOwner + 18);
              v10 = *(unsigned __int16 *)(UserSessionState + 42254);
              v23 = 0;
              W32GetUserSessionState(v12, v11);
              v22 = 0LL;
              v24 = 0;
              if ( IS_USERCRIT_OWNED_SHAREDONLY() )
              {
                v24 = 1;
                v15 = W32GetUserSessionState(v14, v13);
                v16 = 0LL;
                if ( v9 != v15 + 42456 )
                  v16 = v9;
                *(_QWORD *)&v22 = v16;
                v17 = 0;
                v18 = (tagObjLock **)&v22;
                do
                {
                  if ( *v18 )
                    tagObjLock::LockExclusive(*v18);
                  ++v17;
                  ++v18;
                }
                while ( !v17 );
                v23 = 1;
              }
              Prop = RealGetProp(*((_QWORD *)CompositionInputWindowUIOwner + 18), v10, 1LL);
              if ( v23 && v24 )
              {
                if ( (_QWORD)v22 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v22);
                v23 = 0;
              }
              if ( !Prop
                || !*(_DWORD *)(Prop + 28)
                || (CompositionInputWindowUIOwner = CoreWindowProp::GetCompositeAppFrameWindow(CompositionInputWindowUIOwner)) != 0LL )
              {
LABEL_26:
                if ( (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 31LL) & 8) != 0 )
                  return v4;
              }
            }
            return 0;
          }
        }
      }
      CompositionInputWindowUIOwner = (struct tagWND *)*((_QWORD *)CompositionInputWindowUIOwner + 13);
    }
  }
  return 0;
}
