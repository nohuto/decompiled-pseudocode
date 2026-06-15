/*
 * XREFs of ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180042210
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180041C34 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800423E4 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJ$$QEA.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CAudioSessionManager::NotifyActiveSession(CAudioSessionManager *this, struct CAudioSession *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int *v8; // rax
  unsigned int *v9; // r14
  unsigned int v10; // r11d
  _WORD *v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int16 v15; // ax
  _WORD *v16; // rax
  char *v17; // r8
  char *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r10
  signed __int64 v21; // r8
  __int16 v22; // cx
  char *v23; // rcx
  HANDLE ProcessHeap; // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids, 0LL);
  }
  v4 = *((_DWORD *)this + 64);
  v5 = 2 * *(_DWORD *)(*((_QWORD *)a2 + 82) - 16LL) + 2;
  v6 = 2 * v4 + 2;
  v7 = v5 + 2 * v4 + 74;
  v8 = (unsigned int *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8[6] = v5;
    v10 = v5 + 72;
    v11 = v8 + 18;
    *v8 = v7;
    v12 = (unsigned __int64)v5 >> 1;
    v8[1] = 64;
    v8[12] = v6;
    v8[13] = v5 + 72;
    if ( v12 )
    {
      v13 = 2147483646 - v12;
      v14 = *((_QWORD *)a2 + 82) - (_QWORD)v11;
      do
      {
        if ( !(v13 + v12) )
          break;
        v15 = *(_WORD *)((char *)v11 + v14);
        if ( !v15 )
          break;
        *v11++ = v15;
        --v12;
      }
      while ( v12 );
      v16 = v11 - 1;
      if ( v12 )
        v16 = v11;
      *v16 = 0;
      v10 = v9[13];
    }
    v17 = (char *)this + 240;
    if ( *((_QWORD *)this + 33) > 7uLL )
      v17 = *(char **)v17;
    v18 = (char *)v9 + v10;
    v19 = (unsigned __int64)v6 >> 1;
    if ( v19 )
    {
      v20 = 2147483646 - v19;
      v21 = v17 - v18;
      do
      {
        if ( !(v20 + v19) )
          break;
        v22 = *(_WORD *)&v18[v21];
        if ( !v22 )
          break;
        *(_WORD *)v18 = v22;
        v18 += 2;
        --v19;
      }
      while ( v19 );
      v23 = v18 - 2;
      if ( v19 )
        v23 = v18;
      *(_WORD *)v23 = 0;
    }
    CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 176));
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v9);
}
