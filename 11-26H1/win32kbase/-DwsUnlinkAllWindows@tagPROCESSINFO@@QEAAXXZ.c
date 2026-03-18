/*
 * XREFs of ?DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ @ 0x1401CC084
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401CC878 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1401CC8D0 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 */

void __fastcall tagPROCESSINFO::DwsUnlinkAllWindows(tagPROCESSINFO *this)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD **v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  char *v13; // r14
  bool v14; // bp
  bool v15; // r12
  int v16; // edi
  __int64 v17; // rbx
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+28h] [rbp-40h]
  int v26; // [rsp+30h] [rbp-38h]
  int v27; // [rsp+38h] [rbp-30h]

  v1 = (_QWORD *)((char *)this + 1120);
  v3 = (_QWORD *)*((_QWORD *)this + 140);
  if ( v3 != (_QWORD *)((char *)this + 1120) )
  {
    if ( (_QWORD *)v3[1] != v1 )
      goto LABEL_27;
    v4 = (_QWORD *)*((_QWORD *)this + 141);
    if ( (_QWORD *)*v4 != v1 )
      goto LABEL_27;
    *v4 = v3;
    v3[1] = v4;
    v1[1] = v1;
    *v1 = v1;
  }
  if ( !(unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_10;
  v8 = (_QWORD *)((char *)this + 1136);
  v9 = (_QWORD *)*((_QWORD *)this + 142);
  if ( v9 == (_QWORD *)((char *)this + 1136) )
    goto LABEL_10;
  if ( (_QWORD *)v9[1] != v8 || (v5 = (_QWORD *)*((_QWORD *)this + 143), (_QWORD *)*v5 != v8) )
LABEL_27:
    __fastfail(3u);
  *v5 = v9;
  v9[1] = v5;
  *((_QWORD *)this + 143) = (char *)this + 1136;
  *v8 = v8;
LABEL_10:
  v10 = (_QWORD **)((char *)this + 1168);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == v10 )
      break;
    if ( (_QWORD **)v11[1] != v10 )
      goto LABEL_27;
    v12 = (_QWORD *)*v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_27;
    *v10 = v12;
    v13 = (char *)(v11 - 5);
    v12[1] = v10;
    v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *((_DWORD *)this + 14);
      v17 = **(_QWORD **)v13;
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v5, v6);
      LOBYTE(v19) = v15;
      LOBYTE(v20) = v14;
      WPP_RECORDER_AND_TRACE_SF_Dq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(UserSessionState + 69136),
        v24,
        v25,
        v26,
        v27,
        v16,
        v17);
    }
    v21 = (__int64)(v13 + 24);
    v22 = *((_QWORD *)v13 + 3);
    if ( *(char **)(v22 + 8) != v13 + 24 )
      goto LABEL_27;
    v23 = (_QWORD *)*((_QWORD *)v13 + 4);
    if ( *v23 != v21 )
      goto LABEL_27;
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    if ( v23 == (_QWORD *)v22 )
      *(_DWORD *)(*(_QWORD *)v13 + 380LL) &= ~0x8000000u;
    GreDeleteFastMutex(v13, v21, v6, v7);
  }
}
