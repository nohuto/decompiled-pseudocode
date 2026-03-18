/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1400EFCEC
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140092208 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceParent @ 0x1400EE228 (RIMGetDeviceParent.c)
 *     RIMIsParentCommon @ 0x1400F0828 (RIMIsParentCommon.c)
 *     RIMDeliverConfigRequest @ 0x1400F1398 (RIMDeliverConfigRequest.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMFreeHidDesc @ 0x1401323EC (RIMFreeHidDesc.c)
 */

__int64 __fastcall RIMAllocateHidConfigDesc(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        __int16 *a5,
        __int64 a6)
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
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r13
  char v24; // bp
  char v25; // di
  const wchar_t *v26; // rbx
  __int64 v27; // rax
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  char v32; // r14
  bool v33; // di
  __int16 v34; // bx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  int v38; // edx
  int v39; // r8d
  bool v40; // bp
  bool v41; // r12
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  int v45; // r12d
  __int64 i; // rbp
  __int64 v47; // rcx
  int v48; // edx
  __int64 v49; // rcx
  int v50; // r8d
  int v51; // ebp
  bool v52; // bl
  int v53; // eax
  int v54; // ecx
  int v55; // r8d
  char v56; // bp
  bool v57; // bl
  bool v58; // di
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  __int16 v62; // [rsp+30h] [rbp-48h]
  char v63; // [rsp+40h] [rbp-38h]

  if ( !a4 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        46,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
    return 0LL;
  }
  if ( !a5[4] )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3);
      LOBYTE(v19) = v15;
      LOBYTE(v20) = v14;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 19368),
        3,
        1,
        47,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v17,
        v16);
    }
    return 0LL;
  }
  v23 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x44687352u);
  if ( !v23 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *(const wchar_t **)(a2 + 200);
      v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
      WPP_RECORDER_AND_TRACE_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v25,
        *(_QWORD *)(v27 + 19368),
        3u,
        1u,
        0x30u,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v26);
    }
    return 0LL;
  }
  v29 = Win32AllocPoolZInitImpl(64LL, (unsigned __int16)a5[4], 0x70707352u);
  *(_QWORD *)(v23 + 32) = v29;
  if ( !v29 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v32 = 0;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v32 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_88;
    v34 = a5[4];
    v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v30, v31);
    v63 = v34;
    LOBYTE(v37) = v32;
    v62 = 49;
    goto LABEL_87;
  }
  *(_OWORD *)(v23 + 40) = *(_OWORD *)a5;
  *(_OWORD *)(v23 + 56) = *((_OWORD *)a5 + 1);
  *(_OWORD *)(v23 + 72) = *((_OWORD *)a5 + 2);
  *(_OWORD *)(v23 + 88) = *((_OWORD *)a5 + 3);
  *(_QWORD *)(v23 + 16) = a4;
  *(_QWORD *)(v23 + 104) = *(_QWORD *)a6;
  *(_DWORD *)(v23 + 112) = *(_DWORD *)(a6 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(a3, a2, v31) )
  {
    v40 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v42 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v38, v39);
      LOBYTE(v43) = v41;
      LOBYTE(v44) = v40;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v44,
        v43,
        *(_QWORD *)(v42 + 19368),
        3,
        1,
        50,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
  }
  v45 = 0;
  for ( i = *(_QWORD *)(a1 + 424); ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
      goto LABEL_77;
    if ( (*(_DWORD *)(i + 168) & 0x400) == 0 && (*(_DWORD *)(i + 184) & 0x80u) != 0 )
    {
      v47 = *(_QWORD *)(i + 456);
      if ( *(_DWORD *)(v47 + 24) == 7 || (unsigned int)RIMIsTouchPointerDevice(v47) )
      {
        if ( (unsigned int)RIMIsParentCommon(
                             a2,
                             i,
                             v23,
                             *(unsigned __int16 *)(*(_QWORD *)(i + 440) + 110LL),
                             *(_WORD *)(*(_QWORD *)(i + 440) + 112LL)) )
          break;
      }
    }
  }
  v49 = *(_QWORD *)(i + 456);
  v50 = -__CFSHR__(*(_DWORD *)(v49 + 368), 13);
  if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && (unsigned int)RIMIsTouchPointerDevice(v49) )
    v45 = 1;
  if ( !v50 )
  {
LABEL_77:
    *(_DWORD *)(a2 + 48) = 3;
    return v23;
  }
  v51 = *(_DWORD *)(a1 + 84);
  if ( v45 )
  {
    if ( (v51 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 168) |= 0x800u;
LABEL_68:
      v53 = RIMDeliverConfigRequest((struct RIMDEV *)a2);
      v56 = v53;
      if ( v53 < 0 )
      {
        v57 = 0;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v54 = *((_DWORD *)WPP_GLOBAL_Control + 11);
          if ( (v54 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v57 = 1;
        }
        v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v59 = W32GetUserSessionState(v54, (_DWORD)WPP_GLOBAL_Control, v55);
          LOBYTE(v60) = v58;
          LOBYTE(v61) = v57;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v61,
            v60,
            *(_QWORD *)(v59 + 19368),
            3,
            1,
            53,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
            v56);
        }
      }
      goto LABEL_77;
    }
    v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v52 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_88;
    v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v48, v50);
    v63 = v51;
    v62 = 51;
  }
  else
  {
    if ( (v51 & 8) != 0 )
    {
      *(_DWORD *)(a2 + 168) |= 0x1000u;
      goto LABEL_68;
    }
    v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v52 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_88;
    v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v48, v50);
    v63 = v51;
    v62 = 52;
  }
  LOBYTE(v37) = v52;
LABEL_87:
  LOBYTE(v36) = v33;
  WPP_RECORDER_AND_TRACE_SF_D(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v37,
    v36,
    *(_QWORD *)(v35 + 19368),
    3,
    1,
    v62,
    (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
    v63);
LABEL_88:
  RIMFreeHidDesc((PVOID)v23);
  return 0LL;
}
