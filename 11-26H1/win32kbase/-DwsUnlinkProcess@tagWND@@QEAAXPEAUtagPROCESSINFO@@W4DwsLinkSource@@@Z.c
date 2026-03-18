/*
 * XREFs of ?DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401CC240
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140179FF8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A7FA4 (-DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 */

void __fastcall tagWND::DwsUnlinkProcess(__int64 a1, tagPROCESSINFO *a2, int a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rsi
  char v5; // r12
  int v7; // r8d
  bool v8; // zf
  char v9; // r13
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]

  v3 = (_QWORD *)(a1 + 400);
  v4 = *(_QWORD **)(a1 + 400);
  v5 = 1;
  if ( ((*(_DWORD *)(a1 + 380) >> 27) & 1) != (v4 != (_QWORD *)(a1 + 400)) )
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  while ( v4 != v3 )
  {
    if ( (tagPROCESSINFO *)*(v4 - 2) == a2 )
    {
      v7 = ~a3;
      v8 = (v7 & *(_DWORD *)(v4 - 1)) == 0;
      *((_DWORD *)v4 - 2) &= v7;
      if ( v8 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v5 = 0;
        }
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, v7);
          WPP_RECORDER_AND_TRACE_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v5,
            v9,
            *(_QWORD *)(UserSessionState + 69136),
            BugCheckParameter4,
            0xEu,
            0xCu,
            (__int64)&WPP_f64b18c5451f34bf0a4a7e3a4e877b23_Traceguids);
        }
        tagPROCESSINFO::DwsUnlinkWindow(a2, (struct ContribueToProcessDws *)(v4 - 3));
        v14 = *v4;
        if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v15 = (_QWORD *)v4[1], (_QWORD *)*v15 != v4) )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        GreDeleteFastMutex((char *)v4 - 24, v11, v12, v13);
      }
      break;
    }
    v4 = (_QWORD *)*v4;
  }
  if ( (_QWORD *)*v3 == v3 )
    *(_DWORD *)(a1 + 380) &= ~0x8000000u;
}
