/*
 * XREFs of ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x140128450
 * Callers:
 *     xxxSetScrollBar @ 0x140127BBC (xxxSetScrollBar.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dlDdddddl @ 0x140128744 (WPP_RECORDER_AND_TRACE_SF_dlDdddddl.c)
 */

__int64 __fastcall SBSetParms(struct tagSBDATA *a1, unsigned __int64 a2, int *a3, int *a4)
{
  int v4; // r10d
  _DWORD *v7; // r15
  char v9; // r8
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // r9d
  int v16; // eax
  int v17; // ecx
  bool v18; // cf
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  BOOL v26; // [rsp+90h] [rbp-38h]
  char v27; // [rsp+94h] [rbp-34h]
  bool v28; // [rsp+D8h] [rbp+10h]

  v4 = *(_DWORD *)(a2 + 4);
  v26 = 0;
  v7 = (_DWORD *)a2;
  if ( (v4 & 0x1000) != 0 )
    *a4 = *((_DWORD *)a1 + 3);
  v9 = 1;
  v27 = 1;
  if ( (v4 & 1) != 0 )
  {
    v10 = *(_DWORD *)(a2 + 12);
    v11 = *(_DWORD *)(a2 + 8);
    a2 = v11 == v10;
    v26 = v11 == v10;
    if ( v11 > v10 )
    {
      v7[3] = v11;
      v10 = v11;
    }
    if ( *(_DWORD *)a1 != v11 || *((_DWORD *)a1 + 1) != v10 )
    {
      *(_DWORD *)a1 = v11;
      *((_DWORD *)a1 + 1) = v7[3];
      v4 = v7[1];
      if ( (v4 & 2) == 0 )
      {
        v4 |= 2u;
        v7[1] = v4;
        v7[4] = *((_DWORD *)a1 + 2);
      }
      if ( (v4 & 4) == 0 )
      {
        v4 |= 4u;
        v7[1] = v4;
        v7[5] = *((_DWORD *)a1 + 3);
      }
      v26 = 1;
    }
  }
  if ( (v4 & 2) == 0 )
    goto LABEL_14;
  v12 = *(_DWORD *)a1 - *((_DWORD *)a1 + 1);
  if ( v12 < 0 )
    v12 = *((_DWORD *)a1 + 1) - *(_DWORD *)a1;
  v13 = v12 + 1;
  v14 = v7[4];
  if ( v14 > v13 )
  {
    v7[4] = v13;
    v14 = v13;
  }
  if ( *((_DWORD *)a1 + 2) != v14 )
  {
    *((_DWORD *)a1 + 2) = v14;
    v4 = v7[1];
    if ( (v4 & 4) == 0 )
    {
      v4 |= 4u;
      v7[1] = v4;
      v7[5] = *((_DWORD *)a1 + 3);
    }
    v15 = 1;
    v26 = 1;
  }
  else
  {
LABEL_14:
    v15 = v26;
  }
  if ( (v4 & 4) != 0 )
  {
    v16 = *((_DWORD *)a1 + 2);
    v17 = v16 - 1;
    v18 = v16 != 0;
    v19 = *(_DWORD *)a1;
    v20 = *((_DWORD *)a1 + 1) - (v18 ? v17 : 0);
    a2 = (unsigned int)v7[5];
    if ( (int)a2 < *(_DWORD *)a1 )
    {
      v7[5] = v19;
    }
    else
    {
      v19 = v7[5];
      if ( (int)a2 > v20 )
      {
        v7[5] = v20;
        v19 = v20;
      }
    }
    if ( *((_DWORD *)a1 + 3) != v19 )
    {
      *((_DWORD *)a1 + 3) = v19;
      v15 = 1;
      v26 = 1;
    }
  }
  v21 = v7[1];
  if ( (v21 & 0x1000) == 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v21 & 1) != 0 )
  {
    if ( *(_DWORD *)a1 == *((_DWORD *)a1 + 1) )
    {
      *a3 = 0;
      goto LABEL_26;
    }
  }
  else if ( (v21 & 2) == 0 )
  {
    goto LABEL_26;
  }
  *a3 = *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 1) - *(_DWORD *)a1;
LABEL_26:
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v9 = 0;
    v27 = 0;
  }
  v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v23) = v28;
    LOBYTE(v24) = v27;
    WPP_RECORDER_AND_TRACE_SF_dlDdddddl(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(UserSessionState + 69152));
    return v26;
  }
  return v15;
}
