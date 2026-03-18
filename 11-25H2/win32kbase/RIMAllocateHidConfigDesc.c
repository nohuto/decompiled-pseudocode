/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x14012A498
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F14BC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMIsParentCommon @ 0x14012AAD0 (RIMIsParentCommon.c)
 *     RIMGetDeviceParent @ 0x14012AB40 (RIMGetDeviceParent.c)
 *     RIMFreeHidDesc @ 0x1401E0854 (RIMFreeHidDesc.c)
 */

__int64 __fastcall RIMAllocateHidConfigDesc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 *a5, __int64 a6)
{
  char v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // r14
  bool v15; // r12
  __int16 v16; // bx
  __int16 v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // r13
  char v23; // bp
  bool v24; // di
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v30; // rax
  __int64 v31; // rdx
  char v32; // r14
  bool v33; // di
  __int16 v34; // bx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rdx
  bool v39; // bp
  bool v40; // r12
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  int v44; // r12d
  __int64 i; // rbp
  int v46; // ecx
  __int64 v47; // rdx
  int v48; // ebp
  unsigned int v49; // r9d
  bool v50; // bl
  int v51; // eax
  __int64 v52; // rcx
  char v53; // bp
  bool v54; // bl
  bool v55; // di
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int16 v59; // [rsp+30h] [rbp-48h]
  char v60; // [rsp+40h] [rbp-38h]

  if ( !a4 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        3,
        1,
        46,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
    }
    return 0LL;
  }
  if ( !a5[4] )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *a5;
      v17 = a5[1];
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v19) = v15;
      LOBYTE(v20) = v14;
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 19336),
        3,
        1,
        47,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v17,
        v16);
    }
    return 0LL;
  }
  v22 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x44687352u);
  if ( !v22 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v23 = 0;
    }
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = *(_QWORD *)(a2 + 200);
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
      LOBYTE(v27) = v24;
      LOBYTE(v28) = v23;
      WPP_RECORDER_AND_TRACE_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 19336),
        3,
        1,
        48,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v25);
    }
    return 0LL;
  }
  v30 = Win32AllocPoolZInitImpl(64LL, (unsigned __int16)a5[4], 0x70707352u);
  *(_QWORD *)(v22 + 32) = v30;
  if ( !v30 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v32 = 0;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v32 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_88;
    v34 = a5[4];
    v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
    v60 = v34;
    LOBYTE(v37) = v32;
    v59 = 49;
    goto LABEL_87;
  }
  *(_OWORD *)(v22 + 40) = *(_OWORD *)a5;
  *(_OWORD *)(v22 + 56) = *((_OWORD *)a5 + 1);
  *(_OWORD *)(v22 + 72) = *((_OWORD *)a5 + 2);
  *(_OWORD *)(v22 + 88) = *((_OWORD *)a5 + 3);
  *(_QWORD *)(v22 + 16) = a4;
  *(_QWORD *)(v22 + 104) = *(_QWORD *)a6;
  *(_DWORD *)(v22 + 112) = *(_DWORD *)(a6 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(a3, a2) )
  {
    v39 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
      LOBYTE(v42) = v40;
      LOBYTE(v43) = v39;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 19336),
        3,
        1,
        50,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
    }
  }
  v44 = 0;
  for ( i = *(_QWORD *)(a1 + 424); ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
      goto LABEL_77;
    if ( (*(_DWORD *)(i + 168) & 0x400) == 0 && (*(_DWORD *)(i + 184) & 0x80u) != 0 )
    {
      v46 = *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL);
      if ( (unsigned int)(v46 - 1) <= 3 || v46 == 7 )
      {
        if ( (unsigned int)RIMIsParentCommon(
                             a2,
                             i,
                             v22,
                             *(unsigned __int16 *)(*(_QWORD *)(i + 440) + 110LL),
                             *(_WORD *)(*(_QWORD *)(i + 440) + 112LL)) )
          break;
      }
    }
  }
  v47 = *(_QWORD *)(i + 456);
  if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v47 + 24) - 1) <= 3 )
    v44 = 1;
  if ( !__CFSHR__(*(_DWORD *)(v47 + 368), 13) )
  {
LABEL_77:
    *(_DWORD *)(a2 + 48) = 3;
    return v22;
  }
  v48 = *(_DWORD *)(a1 + 84);
  if ( v44 )
  {
    if ( (v48 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 168) |= 0x800u;
      v49 = 2;
LABEL_68:
      v51 = RIMDeliverConfigRequest((struct RIMDEV *)a2, v22, 0x52u, v49);
      v53 = v51;
      if ( v51 < 0 )
      {
        v54 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
        {
          v52 = *((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( (v52 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v54 = 1;
        }
        v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v56 = W32GetUserSessionState(v52, WPP_GLOBAL_Control);
          LOBYTE(v57) = v55;
          LOBYTE(v58) = v54;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v58,
            v57,
            *(_QWORD *)(v56 + 19336),
            3,
            1,
            53,
            (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
            v53);
        }
      }
      goto LABEL_77;
    }
    v50 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v50 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_88;
    v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v47);
    v60 = v48;
    v59 = 51;
  }
  else
  {
    if ( (v48 & 8) != 0 )
    {
      *(_DWORD *)(a2 + 168) |= 0x1000u;
      v49 = 3;
      goto LABEL_68;
    }
    v50 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v50 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_88;
    v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v47);
    v60 = v48;
    v59 = 52;
  }
  LOBYTE(v37) = v50;
LABEL_87:
  LOBYTE(v36) = v33;
  WPP_RECORDER_AND_TRACE_SF_D(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v37,
    v36,
    *(_QWORD *)(v35 + 19336),
    3,
    1,
    v59,
    (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
    v60);
LABEL_88:
  RIMFreeHidDesc((PVOID)v22);
  return 0LL;
}
