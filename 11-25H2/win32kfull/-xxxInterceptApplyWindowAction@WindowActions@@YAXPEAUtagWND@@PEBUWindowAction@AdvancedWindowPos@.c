/*
 * XREFs of ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CF088
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402CC88C (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?SetPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CCCB8 (-SetPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@PEBUWindowAction@AdvancedWindo.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptApplyWindowAction(
        WindowActions *this,
        struct tagWND *a2,
        const struct AdvancedWindowPos::WindowAction *a3)
{
  char v5; // r14
  char v6; // si
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // ebx
  int v12; // esi
  int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  int v25; // eax
  int v26; // [rsp+50h] [rbp-39h] BYREF
  int v27; // [rsp+54h] [rbp-35h]
  int v28; // [rsp+58h] [rbp-31h]
  __int64 v29; // [rsp+5Ch] [rbp-2Dh]
  __int64 v30; // [rsp+64h] [rbp-25h]
  __int64 v31; // [rsp+70h] [rbp-19h]
  int v32; // [rsp+78h] [rbp-11h]
  __int128 v33; // [rsp+7Ch] [rbp-Dh]
  __int128 v34; // [rsp+8Ch] [rbp+3h]
  int v35; // [rsp+9Ch] [rbp+13h]
  __int64 v36; // [rsp+A0h] [rbp+17h]
  int v37; // [rsp+A8h] [rbp+1Fh]

  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    v7 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      97,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v7);
  }
  memset_0(&v26, 0, 0x60uLL);
  v11 = *(_DWORD *)a2;
  v12 = *((_DWORD *)a2 + 1);
  if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    if ( !SaveSystemOperationData(this, (struct tagWND *)((char *)a2 + 108)) )
      return;
    v13 = v26 | 0x400;
    v26 |= 0x400u;
  }
  else
  {
    v13 = v26;
  }
  if ( (v11 & 0x200) != 0 )
  {
    CInterceptWindowProp::SetPendingDisplayChangeInfo(this, a2);
    v14 = *((_QWORD *)a2 + 19);
    v13 = v26 | 0x200;
    v26 |= 0x200u;
    v37 = *(_DWORD *)(v14 + 12);
  }
  if ( (v11 & 1) != 0 )
  {
    v15 = *((unsigned __int8 *)a2 + 8);
    v13 |= 1u;
    v26 = v13;
    v28 = v15;
  }
  if ( (v11 & 2) != 0 )
  {
    v16 = *(_QWORD *)((char *)a2 + 12);
    v13 |= 2u;
    v26 = v13;
    v29 = v16;
  }
  if ( (v11 & 4) != 0 )
  {
    v17 = *(_QWORD *)((char *)a2 + 20);
    v13 |= 4u;
    v26 = v13;
    v30 = v17;
  }
  if ( (v11 & 8) != 0 )
  {
    v18 = *((_QWORD *)a2 + 4);
    v13 |= 8u;
    v26 = v13;
    v31 = v18;
  }
  if ( (v11 & 0x10) != 0 && (v13 |= 0x10u, v26 = v13, (v12 & 4) != 0) )
  {
    v19 = v27 | 8;
    v27 |= 8u;
  }
  else
  {
    v19 = v27;
  }
  if ( (v11 & 0x20) != 0 )
  {
    v20 = *((_DWORD *)a2 + 10);
    v13 |= 0x20u;
    v26 = v13;
    switch ( v20 )
    {
      case 1:
        v32 = 1;
        break;
      case 2:
        v32 = 2;
        break;
      case 3:
        v32 = 3;
        break;
      default:
        v32 = v20 != 0 ? v32 : 0;
        break;
    }
  }
  if ( (v11 & 0x100) != 0 )
  {
    v21 = *(_QWORD *)((char *)a2 + 100);
    v13 |= 0x80u;
    v26 = v13;
    v36 = v21;
  }
  if ( (v12 & 0x200) != 0 )
  {
    v22 = *(_QWORD *)((char *)a2 + 100);
    v19 |= 0x400u;
    v27 = v19;
    v36 = v22;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v23 = *(_OWORD *)((char *)a2 + 44);
    v13 |= 0x40u;
    v26 = v13;
    v33 = v23;
  }
  if ( (v11 & 0x80) != 0 )
    v26 = v13 | 0x100;
  if ( (v12 & 1) != 0 )
  {
    v19 |= 1u;
    v27 = v19;
  }
  if ( (v12 & 8) != 0 )
  {
    v19 |= 0x10u;
    v27 = v19;
  }
  if ( (v12 & 0x10) != 0 )
  {
    v19 |= 0x20u;
    v27 = v19;
  }
  if ( (v12 & 0x20) != 0 )
  {
    v19 |= 0x40u;
    v27 = v19;
  }
  if ( (v12 & 0x40) != 0 )
  {
    v19 |= 0x80u;
    v27 = v19;
  }
  if ( (v12 & 0x80) != 0 )
  {
    v24 = *(_OWORD *)((char *)a2 + 60);
    v19 |= 0x100u;
    v27 = v19;
    v34 = v24;
  }
  if ( (v12 & 0x100) != 0 )
  {
    v25 = *((_DWORD *)a2 + 24);
    v27 = v19 | 0x200;
    v35 = v25;
  }
  xxxSendTransformableMessageTimeout(
    (struct tagTHREADINFO **)this,
    838LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v26,
    0,
    0,
    0LL,
    1,
    1);
}
