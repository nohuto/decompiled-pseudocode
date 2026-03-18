/*
 * XREFs of ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x140166C10
 * Callers:
 *     <none>
 * Callees:
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400637C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1400D51D8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x140166FA8 (-OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A8878 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall tagWND::ComputeDominantState(tagWND *this)
{
  __int64 v2; // rdx
  unsigned int v3; // esi
  __int64 v4; // rdx
  char v5; // bp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // r8
  int v12; // r15d
  char v13; // r14
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  tagWND *i; // rbx

  if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = 5;
    v5 = 1;
    if ( (*(_BYTE *)(HMPheFromObject((int *)this, v2) + 25) & 1) == 0 )
    {
      v6 = *((_QWORD *)this + 13);
      if ( v6 )
      {
        v7 = *((_QWORD *)this + 3);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 8);
          if ( v8 )
          {
            if ( v6 == *(_QWORD *)(v8 + 24) )
            {
              if ( *(_QWORD *)(W32GetUserSessionState(v6, v4) + 18888)
                && *(tagWND **)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 18888) + 128LL) == this )
              {
                v3 = 0;
              }
              else
              {
                v4 = *((_QWORD *)this + 5);
                if ( (*(_BYTE *)(v4 + 31) & 0x10) != 0 && !IsRectEmptyInl((const struct tagRECT *)(v4 + 88)) )
                {
                  if ( (v11 & 0x20) != 0 )
                  {
                    v3 = 3;
                  }
                  else if ( (*(_BYTE *)(v4 + 233) & 0x60) != 0 )
                  {
                    v3 = 4;
                  }
                  else
                  {
                    v3 = (*((_DWORD *)this + 98) == 2) + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v12 = *((_DWORD *)this + 99);
    if ( v12 != v3 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v13 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v5 = 0;
      if ( v13 || v5 )
      {
        v14 = *(_QWORD *)this;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
        LOBYTE(v16) = v5;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69144),
          5,
          14,
          14,
          (__int64)&WPP_862da53efbea371a3085c3fb769e157c_Traceguids,
          v14,
          v12,
          v3);
      }
      tagPROCESSINFO::OnDwsChanged(*(_QWORD *)(*((_QWORD *)this + 2) + 464LL), *((unsigned int *)this + 99), v3);
      for ( i = (tagWND *)*((_QWORD *)this + 50); i != (tagWND *)((char *)this + 400); i = *(tagWND **)i )
        tagPROCESSINFO::OnDwsChanged(*((_QWORD *)i - 2), *((unsigned int *)this + 99), v3);
      *((_DWORD *)this + 99) = v3;
    }
  }
}
