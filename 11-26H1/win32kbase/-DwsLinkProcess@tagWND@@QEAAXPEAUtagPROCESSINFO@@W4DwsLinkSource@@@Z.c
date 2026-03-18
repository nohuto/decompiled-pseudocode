/*
 * XREFs of ?DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401CBC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140132544 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A7F18 (-DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 */

void __fastcall tagWND::DwsLinkProcess(__int64 *a1, tagPROCESSINFO *a2, int a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *i; // rax
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  tagPROCESSINFO **v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // r15d
  char v16; // si
  char v17; // r14
  int v18; // ebx
  __int64 v19; // rdi
  __int64 v20; // rax
  char v21; // si
  char v22; // r12
  int v23; // ebx
  __int64 v24; // rdi
  __int64 UserSessionState; // rax

  if ( a2 == *(tagPROCESSINFO **)(a1[2] + 456) )
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  if ( (*((_DWORD *)a2 + 3) & 0x1000) == 0 )
  {
    v6 = a1[5];
    if ( *(char *)(v6 + 20) >= 0 && *(char *)(v6 + 19) >= 0 )
    {
      v7 = a1 + 50;
      for ( i = (_QWORD *)a1[50]; ; i = (_QWORD *)*i )
      {
        if ( i == v7 )
        {
          v9 = Win32AllocPoolZInitImpl(256LL, 0x38uLL, 0x6F717355u);
          v12 = (tagPROCESSINFO **)v9;
          if ( v9 )
          {
            *(_DWORD *)(v9 + 16) |= a3;
            *(_QWORD *)(v9 + 8) = a2;
            *(_QWORD *)v9 = a1;
            v13 = (_QWORD *)(v9 + 24);
            v14 = *v7;
            if ( *(_QWORD **)(*v7 + 8LL) != v7 )
              __fastfail(3u);
            *v13 = v14;
            v13[1] = v7;
            *(_QWORD *)(v14 + 8) = v13;
            *v7 = v13;
            *((_DWORD *)a1 + 95) |= 0x8000000u;
            v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v23 = *((_DWORD *)a2 + 14);
              v24 = *a1;
              UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
              WPP_RECORDER_AND_TRACE_SF_qDD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v21,
                v22,
                *(_QWORD *)(UserSessionState + 69136),
                4u,
                0xEu,
                0xBu,
                (__int64)&WPP_f64b18c5451f34bf0a4a7e3a4e877b23_Traceguids,
                v24,
                v23,
                a3);
            }
            tagPROCESSINFO::DwsLinkWindow(a2, v12);
          }
          return;
        }
        if ( (tagPROCESSINFO *)*(i - 2) == a2 )
          break;
      }
      v15 = *((_DWORD *)i - 2) | a3;
      *((_DWORD *)i - 2) = v15;
      v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = *((_DWORD *)a2 + 14);
        v19 = *a1;
        v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3);
        WPP_RECORDER_AND_TRACE_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v17,
          *(_QWORD *)(v20 + 69136),
          4u,
          0xEu,
          0xAu,
          (__int64)&WPP_f64b18c5451f34bf0a4a7e3a4e877b23_Traceguids,
          v19,
          v18,
          v15);
      }
    }
  }
}
