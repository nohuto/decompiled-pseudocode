/*
 * XREFs of ?DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A7DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E6C70 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A8044 (-DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A8878 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall tagWND::DwsLinkProcess(__int64 *a1, tagPROCESSINFO *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *i; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  struct ContribueToProcessDws *v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // r15d
  bool v16; // si
  bool v17; // r14
  int v18; // ebx
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // si
  bool v24; // r12
  int v25; // ebx
  __int64 v26; // rdi
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx

  if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline(a1, a2) )
  {
    if ( a2 == *(tagPROCESSINFO **)(a1[2] + 464) )
      KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
    if ( (*((_DWORD *)a2 + 3) & 0x1000) == 0 )
    {
      v7 = a1[5];
      if ( *(char *)(v7 + 20) >= 0 && *(char *)(v7 + 19) >= 0 )
      {
        v8 = a1 + 50;
        for ( i = (_QWORD *)a1[50]; ; i = (_QWORD *)*i )
        {
          if ( i == v8 )
          {
            v10 = Win32AllocPoolZInitImpl(256LL, 0x38uLL, 0x6F717355u);
            v12 = (struct ContribueToProcessDws *)v10;
            if ( v10 )
            {
              *(_DWORD *)(v10 + 16) |= a3;
              *(_QWORD *)(v10 + 8) = a2;
              *(_QWORD *)v10 = a1;
              v13 = (_QWORD *)(v10 + 24);
              v14 = *v8;
              if ( *(_QWORD **)(*v8 + 8LL) != v8 )
                __fastfail(3u);
              *v13 = v14;
              v13[1] = v8;
              *(_QWORD *)(v14 + 8) = v13;
              *v8 = v13;
              *((_DWORD *)a1 + 95) |= 0x8000000u;
              v23 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
              v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v25 = *((_DWORD *)a2 + 14);
                v26 = *a1;
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
                LOBYTE(v28) = v24;
                LOBYTE(v29) = v23;
                WPP_RECORDER_AND_TRACE_SF_qDD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v29,
                  v28,
                  *(_QWORD *)(UserSessionState + 69144),
                  4,
                  14,
                  11,
                  (__int64)&WPP_862da53efbea371a3085c3fb769e157c_Traceguids,
                  v26,
                  v25,
                  a3);
              }
              tagPROCESSINFO::DwsLinkWindow(a2, v12);
            }
            return;
          }
          if ( (tagPROCESSINFO *)*(i - 2) == a2 )
            break;
        }
        v15 = *((_DWORD *)i - 2) | a3;
        *((_DWORD *)i - 2) = v15;
        v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = *((_DWORD *)a2 + 14);
          v19 = *a1;
          v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
          LOBYTE(v21) = v17;
          LOBYTE(v22) = v16;
          WPP_RECORDER_AND_TRACE_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v22,
            v21,
            *(_QWORD *)(v20 + 69144),
            4,
            14,
            10,
            (__int64)&WPP_862da53efbea371a3085c3fb769e157c_Traceguids,
            v19,
            v18,
            v15);
        }
      }
    }
  }
}
