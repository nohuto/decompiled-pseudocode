/*
 * XREFs of ?DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ @ 0x140166E14
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A8878 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1401A89B4 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 */

void __fastcall tagPROCESSINFO::DwsUnlinkAllWindows(tagPROCESSINFO *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx
  _QWORD **v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  char *v8; // r14
  bool v9; // bp
  bool v10; // r12
  int v11; // edi
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  char **v17; // rax
  int v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+28h] [rbp-40h]

  if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = (_QWORD *)((char *)this + 1112);
    v3 = (_QWORD *)*((_QWORD *)this + 139);
    if ( v3 != (_QWORD *)((char *)this + 1112) )
    {
      if ( (_QWORD *)v3[1] != v2 || (v4 = (_QWORD *)*((_QWORD *)this + 140), (_QWORD *)*v4 != v2) )
LABEL_23:
        __fastfail(3u);
      *v4 = v3;
      v3[1] = v4;
      *((_QWORD *)this + 140) = (char *)this + 1112;
      *v2 = v2;
    }
    v5 = (_QWORD **)((char *)this + 1144);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (_QWORD **)v6[1] != v5 )
        goto LABEL_23;
      v7 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_23;
      *v5 = v7;
      v8 = (char *)(v6 - 5);
      v7[1] = v5;
      v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *((_DWORD *)this + 14);
        v12 = **(_QWORD **)v8;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
        LOBYTE(v14) = v10;
        LOBYTE(v15) = v9;
        WPP_RECORDER_AND_TRACE_SF_Dq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 69144),
          v18,
          v19,
          16,
          (__int64)&WPP_862da53efbea371a3085c3fb769e157c_Traceguids,
          v11,
          v12);
      }
      v16 = *((_QWORD *)v8 + 3);
      if ( *(char **)(v16 + 8) != v8 + 24 )
        goto LABEL_23;
      v17 = (char **)*((_QWORD *)v8 + 4);
      if ( *v17 != v8 + 24 )
        goto LABEL_23;
      *v17 = (char *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      if ( v17 == (char **)v16 )
        *(_DWORD *)(*(_QWORD *)v8 + 380LL) &= ~0x8000000u;
      GreDeleteFastMutex(v8);
    }
  }
}
