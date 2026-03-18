/*
 * XREFs of BcpDisplayCriticalString @ 0x14071681C
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140716F38 (BcpDisplayErrorInformation.c)
 *     BcpDisplayErrorInformationModernized @ 0x1407171A0 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgress @ 0x140717534 (BcpDisplayProgress.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x140717E40 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140715C90 (BgpDisplayCharacterEx.c)
 *     BgpFoGetStringAdvanceWidth @ 0x14071642C (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x140717CB8 (BcpPrintSpaces.c)
 *     BcpSetCursorPosition @ 0x140717E1C (BcpSetCursorPosition.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x140718964 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BcpDisplayCriticalString(_WORD *a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // r9
  char *v6; // rax
  char *v7; // rcx
  volatile LONG Lock; // r12d
  unsigned int v9; // esi
  unsigned int v10; // edi
  unsigned int v11; // r14d
  int v12; // ebx
  __int64 v13; // rcx
  int *v14; // r13
  unsigned int v15; // ebx
  _WORD *v16; // r8
  unsigned int v17; // r15d
  unsigned int v18; // r13d
  _QWORD *v19; // rax
  unsigned __int8 *p_InProgressFlags; // r9
  __int64 v21; // rcx
  int v22; // r15d
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  _QWORD *v26; // rcx
  unsigned int v27; // r9d
  unsigned __int64 v29; // [rsp+40h] [rbp-38h]
  int v30; // [rsp+50h] [rbp-28h]
  bool v31; // [rsp+54h] [rbp-24h]
  _QWORD *v32; // [rsp+58h] [rbp-20h]
  int v33; // [rsp+60h] [rbp-18h]
  __int64 v34; // [rsp+68h] [rbp-10h]
  int v36; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v37; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v38; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 84LL * a4;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v34 = v4;
  v6 = (char *)&unk_140E0F020 + v4;
  v7 = (char *)&unk_140E0F020 + v4;
  if ( WheapPfaLock.SchedulerApc.Thread )
    Lock = WheapPfaLock.SchedulerApc.Thread->Header.Lock;
  else
    Lock = *((_DWORD *)v6 + 8) + *((_DWORD *)v7 + 4);
  if ( WheapPfaLock.SchedulerApc.Reserved[2] )
    v9 = *(_DWORD *)WheapPfaLock.SchedulerApc.Reserved[2];
  else
    v9 = *((_DWORD *)v7 + 4) + *((_DWORD *)v6 + 8) + *(_DWORD *)((char *)&unk_140E0F020 + v4 + 24);
  v10 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[16];
  v11 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[20];
  v12 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
  v13 = *(_QWORD *)(*(_QWORD *)&stru_140E3E928.Timer.Processor + 24LL);
  v31 = 0;
  *(_DWORD *)(v13 + 56) = a2;
  v14 = (int *)(v13 + 40);
  v33 = v13 + 40;
  *(_DWORD *)(*(_QWORD *)&stru_140E3E928.Timer.Processor + 8LL) = a2;
  if ( (int)BgpFoGetStringAdvanceWidth((int)v13 + 40, (__int64)a1, &v38, v4) >= 0 )
    v31 = v10 + v38 > v9;
  v15 = v12 - v11;
  v16 = a1;
  v30 = *v14;
  v17 = 0;
  if ( (int)v15 <= 0 )
    v15 = 0;
  v18 = 0;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    v19 = a1 + 4;
    v32 = a1 + 4;
    while ( 1 )
    {
      p_InProgressFlags = &gLoadedDiffHivesLock.ApcState.InProgressFlags;
      if ( v31 && v17 <= v18 )
      {
        v21 = v18;
        v22 = 0;
        v38 = v18;
        while ( 1 )
        {
          v23 = *(unsigned __int16 *)(*v19 + 2 * v21);
          if ( (unsigned int)v23 <= 0x20 )
          {
            v24 = 0x100002401LL;
            if ( _bittest64(&v24, v23) )
              break;
          }
          if ( (int)BgpRasGetGlyphAdvanceWidth(
                      v33,
                      v23,
                      (unsigned int)&v36,
                      (unsigned int)&gLoadedDiffHivesLock.ApcStateFill[40],
                      (__int64)&gLoadedDiffHivesLock.ApcStateFill[40]) < 0 )
            goto LABEL_40;
          v22 += v36;
          p_InProgressFlags = &gLoadedDiffHivesLock.ApcState.InProgressFlags;
          v21 = ++v38;
          v19 = v32;
          if ( v9 < v22 + v10 )
          {
            p_InProgressFlags = &gLoadedDiffHivesLock.ApcState.InProgressFlags;
            if ( v15 )
            {
              if ( v10 < v9 )
              {
                LODWORD(p_InProgressFlags) = BcpPrintSpaces(
                                               *(_DWORD *)&stru_140E3E928.Timer.Processor,
                                               v10,
                                               v9,
                                               v11,
                                               v30,
                                               (__int64)&v37);
                if ( (int)p_InProgressFlags < 0 )
                  goto LABEL_40;
                if ( v15 < v37 )
                  v15 = v37;
              }
              v10 = Lock;
              v25 = v15 + *(_DWORD *)((char *)&unk_140E0F020 + v34 + 40);
              v15 = 0;
              v11 += v25;
              break;
            }
          }
        }
        v16 = a1;
        v17 = v38;
      }
      v32 = v16 + 4;
      if ( (int)BgpRasGetGlyphAdvanceWidth(
                  v33,
                  *(unsigned __int16 *)(*((_QWORD *)v16 + 1) + 2LL * v18),
                  (unsigned int)&v36,
                  (_DWORD)p_InProgressFlags,
                  (__int64)&gLoadedDiffHivesLock.ApcStateFill[40]) < 0 )
        goto LABEL_40;
      if ( v9 >= v10 + v36 )
        break;
      if ( v10 < v9 )
      {
        if ( (int)BcpPrintSpaces(*(_DWORD *)&stru_140E3E928.Timer.Processor, v10, v9, v11, v30, (__int64)&v37) < 0 )
          goto LABEL_40;
        if ( v15 < v37 )
          v15 = v37;
      }
      v10 = Lock;
      v11 += v15 + *(_DWORD *)((char *)&unk_140E0F020 + v34 + 40);
      v15 = 0;
      if ( *(_WORD *)(*v32 + 2LL * v18) != 32 )
      {
        v26 = a1 + 4;
LABEL_36:
        if ( (int)BgpDisplayCharacterEx(
                    *(_WORD *)(*v26 + 2LL * v18),
                    *(__int64 **)&stru_140E3E928.Timer.Processor,
                    v10,
                    v11,
                    v30,
                    -1,
                    &v36,
                    &v37,
                    v29) < 0 )
          goto LABEL_40;
        v10 += v36;
        if ( v37 > v15 )
          v15 = v37;
      }
      v16 = a1;
      ++v18;
      v19 = v32;
      if ( v18 >= (unsigned __int16)*a1 >> 1 )
        goto LABEL_40;
    }
    v26 = v32;
    goto LABEL_36;
  }
LABEL_40:
  v37 = v11 + v15;
  BcpSetCursorPosition(v10, v11, &v37);
  return v27;
}
