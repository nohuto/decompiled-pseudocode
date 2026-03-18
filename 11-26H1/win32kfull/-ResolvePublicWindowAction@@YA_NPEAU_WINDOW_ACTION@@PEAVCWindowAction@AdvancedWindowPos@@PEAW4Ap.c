/*
 * XREFs of ?ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@3@@Z @ 0x1402E2F58
 * Callers:
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     PWInsertAfter @ 0x140048268 (PWInsertAfter.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

char __fastcall ResolvePublicWindowAction(
        struct _WINDOW_ACTION *a1,
        struct AdvancedWindowPos::CWindowAction *a2,
        enum AdvancedWindowPos::ApplyWindowActionError *a3)
{
  int v3; // eax
  int v6; // edx
  int v8; // r10d
  char v9; // r12
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int128 v19; // xmm0
  __int64 v20; // rdx
  int v21; // r9d
  int v22; // ecx
  int v23; // eax
  int v24; // r11d
  __int64 v25; // rax
  __int128 *v26; // rcx
  char v27; // r13
  int v28; // ebp
  int v29; // edi
  int v30; // esi
  int v31; // ebx
  __int64 UserSessionState; // rax
  __int128 v33; // xmm0
  unsigned int v34; // esi
  bool v35; // bl
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  unsigned int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // ecx
  int v43; // eax

  v3 = *(_DWORD *)a1;
  v6 = *((_DWORD *)a1 + 1);
  v8 = 6;
  if ( (v6 & 0xE0) != 0 )
  {
    if ( (v3 & 0x20) == 0 )
    {
      v3 |= 0x20u;
      *((_DWORD *)a1 + 10) = 2;
      *(_DWORD *)a1 = v3;
    }
  }
  else if ( (v3 & 0x20) != 0 && !*((_DWORD *)a1 + 10) && ((v3 & 0x40) != 0 || (v3 & 6) == 6) )
  {
    *((_DWORD *)a1 + 1) = v6 | 0x20;
  }
  v9 = 1;
  if ( (v3 & 0x20) != 0 )
  {
    v10 = *((_DWORD *)a1 + 10);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
          {
            *(_DWORD *)a3 = 12;
            return 0;
          }
          v14 = 3;
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
    }
    else
    {
      v14 = 0;
    }
    *(_DWORD *)a2 |= 0x20u;
    *((_DWORD *)a2 + 10) = v14;
    v3 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 6) != 0 )
    {
      if ( (v3 & 0x80) != 0 && *((_DWORD *)a1 + 10) == 1 )
      {
        *(_DWORD *)a3 = 13;
        return 0;
      }
      if ( (*(_DWORD *)a1 & 6) != 6 )
      {
        *(_DWORD *)a3 = 15;
        return 0;
      }
    }
  }
  if ( (v3 & 0x10) != 0 )
  {
    *(_DWORD *)a2 |= 0x10u;
    if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
      *((_DWORD *)a2 + 1) |= 4u;
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    *(_DWORD *)a2 |= 4u;
    *(_QWORD *)((char *)a2 + 20) = *(_QWORD *)((char *)a1 + 20);
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    *(_DWORD *)a2 |= 2u;
    *(_QWORD *)((char *)a2 + 12) = *(_QWORD *)((char *)a1 + 12);
  }
  if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
  {
    if ( (*(_BYTE *)a1 & 6) != 6 )
    {
      *(_DWORD *)a3 = 17;
      return 0;
    }
    *((_DWORD *)a2 + 1) |= 1u;
  }
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    v15 = *((_QWORD *)a1 + 4);
    if ( v15 )
    {
      if ( !PWInsertAfter(v15) )
      {
        *(_DWORD *)a3 = 18;
        return 0;
      }
      v8 = 6;
    }
    v16 = *((_QWORD *)a1 + 4);
    *(_DWORD *)a2 |= 8u;
    *((_QWORD *)a2 + 4) = v16;
    if ( (*((_DWORD *)a1 + 1) & 0x10) != 0 )
      *((_DWORD *)a2 + 1) |= 8u;
  }
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v17 = *((_DWORD *)a1 + 2);
    *(_DWORD *)a2 |= 1u;
    *((_BYTE *)a2 + 8) = v17 != 0;
  }
  v18 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( (v18 & 0x20) == 0 )
    {
      *(_DWORD *)a3 = 19;
      return 0;
    }
    if ( !*((_DWORD *)a1 + 10) && (v18 & 6) != 0 )
    {
      *(_DWORD *)a3 = 20;
      return 0;
    }
    v19 = *(_OWORD *)((char *)a1 + 44);
    *(_DWORD *)a2 |= 0x40u;
    *(_OWORD *)((char *)a2 + 44) = v19;
  }
  v20 = *((unsigned int *)a1 + 1);
  v21 = 256;
  v22 = *(_DWORD *)a1;
  v23 = *((_DWORD *)a1 + 1) & 0x400;
  v24 = 512;
  if ( (*(_DWORD *)a1 & 0x80) != 0 )
  {
    if ( v23 )
    {
      *(_DWORD *)a3 = 21;
      return 0;
    }
  }
  else
  {
    if ( !v23 )
      goto LABEL_72;
    if ( (v22 & 6) != 6 )
    {
      *(_DWORD *)a3 = 22;
      return 0;
    }
    if ( (v22 & 0x20) != 0 && *((_DWORD *)a1 + 10) )
    {
      *(_DWORD *)a3 = 23;
      return 0;
    }
    if ( (v22 & 0x100) != 0 )
    {
      *(_DWORD *)a3 = 24;
      return 0;
    }
    if ( (v20 & 0x100) != 0 )
    {
      *(_DWORD *)a3 = 26;
      return 0;
    }
    if ( (v20 & 0x200) != 0 )
    {
      *(_DWORD *)a3 = 25;
      return 0;
    }
  }
  v25 = *((_QWORD *)a1 + 10);
  if ( (*(_DWORD *)a1 & 0x80) != 0 )
    *(_DWORD *)a2 |= 0x100u;
  else
    *((_DWORD *)a2 + 1) |= 0x200u;
  *(_QWORD *)((char *)a2 + 100) = v25;
LABEL_72:
  if ( (*((_DWORD *)a1 + 1) & 0x100) != 0 )
  {
    if ( IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 60)) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v9 = 0;
      }
      v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v28 = *((_DWORD *)a1 + 16);
        v29 = *((_DWORD *)a1 + 18);
        v30 = *((_DWORD *)a1 + 15);
        v31 = *((_DWORD *)a1 + 17);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v9,
          v27,
          *(_QWORD *)(UserSessionState + 69152),
          3u,
          4u,
          0xBu,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v30,
          v28,
          v31,
          v29,
          v31 - v30,
          v29 - v28);
      }
      *(_DWORD *)a3 = 27;
      return 0;
    }
    v33 = *v26;
    *((_DWORD *)a2 + 1) |= 0x80u;
    *(_OWORD *)((char *)a2 + 60) = v33;
  }
  if ( (v24 & *((_DWORD *)a1 + 1)) != 0 )
  {
    v34 = *((_DWORD *)a1 + 19);
    if ( v34 < 0x60 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v9 = 0;
      }
      v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v9;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 69152),
          3,
          4,
          12,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v34);
      }
      *(_DWORD *)a3 = 28;
      return 0;
    }
    *((_DWORD *)a2 + 1) |= v21;
    *((_DWORD *)a2 + 24) = v34;
  }
  if ( (v21 & *(_DWORD *)a1) != 0 )
    *(_DWORD *)a2 |= 0x80u;
  v39 = *((_DWORD *)a1 + 1);
  if ( (v39 & 0xE0) != 0 )
  {
    if ( (*(_DWORD *)a1 & 0x20) != 0 )
    {
      v40 = *((_DWORD *)a1 + 10);
      if ( v40 != 2 )
      {
        if ( v40 )
        {
          *(_DWORD *)a3 = 29;
          return 0;
        }
        if ( (v39 & 0xC0) != 0 )
        {
          v41 = 30 - ((v39 & 0x40) != 0);
LABEL_103:
          *(_DWORD *)a3 = v41;
          return 0;
        }
      }
    }
    if ( (v39 & 0x80) != 0 )
    {
      v42 = v8 & *(_DWORD *)a1;
      if ( v42 )
      {
        if ( v42 != v8 )
        {
          *(_DWORD *)a3 = 31;
          return 0;
        }
      }
    }
    if ( (v39 & 0x40) != 0 )
    {
      if ( (v39 & 0xA0) != 0 )
      {
        v41 = (((v39 >> 5) & 1) == 0) | 0x20;
        goto LABEL_103;
      }
      *((_DWORD *)a2 + 1) |= 0x20u;
    }
    else
    {
      v43 = *((_DWORD *)a1 + 1) & 0x20;
      if ( (*((_DWORD *)a1 + 1) & 0x80) != 0 )
      {
        if ( v43 )
        {
          *(_DWORD *)a3 = 34;
          return 0;
        }
        *((_DWORD *)a2 + 1) |= 0x40u;
      }
      else if ( v43 )
      {
        *((_DWORD *)a2 + 1) |= 0x10u;
      }
    }
  }
  return 1;
}
