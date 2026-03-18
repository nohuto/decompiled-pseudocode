/*
 * XREFs of _anonymous_namespace_::ContactVisualizationWorker @ 0x1401969A0
 * Callers:
 *     EditionContactVisualization @ 0x140196980 (EditionContactVisualization.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     IsCurrentDesktopComposed @ 0x140060BF0 (IsCurrentDesktopComposed.c)
 *     DwmAsyncSendTouchContacts @ 0x140107F1C (DwmAsyncSendTouchContacts.c)
 *     _anonymous_namespace_::PointerEventIntToDigitizerContactInfo @ 0x140196E68 (_anonymous_namespace_--PointerEventIntToDigitizerContactInfo.c)
 *     _anonymous_namespace_::DeferPointerCursorOperation @ 0x140197010 (_anonymous_namespace_--DeferPointerCursorOperation.c)
 *     _anonymous_namespace_::GetWindowBarrelVisualizationSetting @ 0x140197200 (_anonymous_namespace_--GetWindowBarrelVisualizationSetting.c)
 *     _anonymous_namespace_::GetWindowVisualizationSetting @ 0x1401972D4 (_anonymous_namespace_--GetWindowVisualizationSetting.c)
 *     _GetPointerDeviceType @ 0x140197514 (_GetPointerDeviceType.c)
 *     _anonymous_namespace_::SwitchMouseCursors @ 0x1402A5508 (_anonymous_namespace_--SwitchMouseCursors.c)
 */

_BOOL8 __fastcall anonymous_namespace_::ContactVisualizationWorker(
        unsigned int a1,
        char *a2,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // rbx
  int v6; // r14d
  char *v7; // rdi
  void *v8; // r12
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 UserSessionState; // rax
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // rax
  unsigned int *v19; // rbx
  int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned int Prop; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  BOOL v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rsi
  BOOL v31; // edx
  const struct tagPOINTEREVENTINT *v32; // rbx
  int v33; // eax
  __int64 i; // rdi
  unsigned int v35; // esi
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // [rsp+30h] [rbp-48h]
  int v46; // [rsp+34h] [rbp-44h] BYREF
  int v47; // [rsp+38h] [rbp-40h]
  const struct tagPOINTEREVENTINT *v48; // [rsp+40h] [rbp-38h]
  _DWORD v49[4]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v50[8]; // [rsp+58h] [rbp-20h] BYREF
  int v51; // [rsp+C0h] [rbp+48h] BYREF
  char *v52; // [rsp+C8h] [rbp+50h]
  __int64 v53; // [rsp+D0h] [rbp+58h]
  int v54; // [rsp+D8h] [rbp+60h]

  v54 = a4;
  v53 = a3;
  v52 = a2;
  v5 = a1;
  v6 = 0;
  v47 = 0;
  v7 = a2;
  v8 = 0LL;
  v9 = a1;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v45 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed(v12, v11) )
    v8 = (void *)Win32AllocPoolZInit(40 * v5, 1987081045LL);
  v15 = 0LL;
  if ( (_DWORD)v5 )
  {
    v16 = v53;
    do
    {
      v46 = 0;
      UserSessionState = W32GetUserSessionState(v14, v13);
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              *(CTouchProcessor **)(UserSessionState + 3256),
                                              v7,
                                              &v46);
      v48 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v19 = (unsigned int *)((char *)ContactVisualizationPointerEventInt + 8);
        if ( (unsigned int)(*((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2) <= 1
          && !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
        {
          if ( *v19 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v19 + 2)) == 1 )
          {
            v41 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 36312);
            *(_DWORD *)(v41 + 84) = (v19[3] >> 1) & 1;
            v44 = *(_QWORD *)(W32GetUserSessionState(v41, v42) + 36312);
            if ( !*(_DWORD *)(v44 + 88)
              || *(_DWORD *)(W32GetUserSessionState(v44, v43) + 36340) == 2
              || (v19[3] & 0x10001) != 0 )
            {
              anonymous_namespace_::SwitchMouseCursors(3LL);
            }
            v49[0] = v19[3];
            v49[1] = v19[8];
            v49[2] = v19[9];
            anonymous_namespace_::DeferPointerCursorOperation(v19, v49);
          }
          else
          {
            v14 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 36312);
            if ( !*(_DWORD *)(v14 + 84) && (v19[3] & 0x2000) != 0 )
            {
              v50[0] = v19[3];
              v20 = 0;
              v50[1] = v19[8];
              v50[2] = v19[9];
              if ( *v19 - 2 <= 1 )
              {
                v14 = *((_QWORD *)v19 + 3);
                if ( v14 )
                {
                  v21 = ValidateHwnd(v14);
                  if ( v21 )
                  {
                    while ( v21 )
                    {
                      v22 = W32GetUserSessionState(v14, v13);
                      Prop = GetProp(v21, *(unsigned __int16 *)(v22 + 41350), 1u);
                      if ( (Prop & 0x20000000) != 0 )
                      {
                        v20 = (Prop >> 13) & 1;
                        break;
                      }
                      if ( IsTopLevelWindow(v21) )
                        v21 = 0LL;
                      else
                        v21 = *(_QWORD *)(v21 + 104);
                    }
                  }
                }
              }
              if ( (v19[3] & 0x10001) != 0 )
              {
                if ( *v19 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v19 + 2)) == 2 || v20 )
                {
                  v27 = 4LL;
                }
                else
                {
                  if ( *v19 == 2 )
                  {
                    v14 = *((_QWORD *)v19 + 3);
                    if ( v14 )
                    {
                      v24 = ValidateHwnd(v14);
                      if ( v24 )
                      {
                        while ( v24 )
                        {
                          v25 = W32GetUserSessionState(v14, v13);
                          v26 = GetProp(v24, *(unsigned __int16 *)(v25 + 41350), 1u);
                          if ( (v26 & 0x10000000) != 0 )
                          {
                            if ( ((v26 >> 12) & 1) != 0 )
                              goto LABEL_29;
                            break;
                          }
                          if ( IsTopLevelWindow(v24) )
                            v24 = 0LL;
                          else
                            v24 = *(_QWORD *)(v24 + 104);
                        }
                      }
                    }
                  }
                  IsCurrentDesktopComposed(v14, v13);
LABEL_29:
                  v27 = *v19;
                }
                anonymous_namespace_::SwitchMouseCursors(v27);
              }
              if ( !v20 )
                anonymous_namespace_::DeferPointerCursorOperation(v19, v50);
              v10 = v45;
              v7 = v52;
            }
          }
          if ( a5 != 3 )
          {
            v51 = 0;
            if ( *v19 != 2
              || (unsigned int)anonymous_namespace_::GetWindowVisualizationSetting(
                                 (_DWORD)v19,
                                 v10 == 0,
                                 a5 == 2,
                                 v10 == 2,
                                 (__int64)&v51)
              || v51 )
            {
              if ( v8 )
              {
                v28 = 1;
                v29 = 5 * v15;
                v15 = (unsigned int)(v15 + 1);
                v30 = (__int64)v8 + 8 * v29;
                if ( *v19 == 3 )
                  v28 = anonymous_namespace_::GetWindowBarrelVisualizationSetting(v19, v46 != 0) != 0;
                v31 = v54 && a5 == 2;
                v32 = v48;
                anonymous_namespace_::PointerEventIntToDigitizerContactInfo((_DWORD)v48, v31, v28, v51, v30);
                v33 = *((_DWORD *)v32 + 5);
                if ( (v33 & 0x10000) != 0 )
                {
                  EtwTraceContactVisualizationDown();
                }
                else if ( (v33 & 0x40000) != 0 )
                {
                  EtwTraceContactVisualizationUp();
                }
                v7 = v52;
              }
            }
          }
        }
      }
      v10 = v45;
      v7 += v16;
      v52 = v7;
      --v9;
    }
    while ( v9 );
    v6 = v47;
  }
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v15; i = v35 + (unsigned int)i )
    {
      v35 = v15 - i;
      if ( (unsigned int)(v15 - i) > 0xB )
        v35 = 11;
      v36 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18656);
      v39 = (void *)ReferenceDwmApiPort(v38, v37);
      v6 = DwmAsyncSendTouchContacts(v39, (__int64)v8 + 40 * i, v36, v35);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v8);
  }
  return v6 >= 0;
}
