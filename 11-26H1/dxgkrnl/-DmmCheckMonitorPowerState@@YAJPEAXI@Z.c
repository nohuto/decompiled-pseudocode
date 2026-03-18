/*
 * XREFs of ?DmmCheckMonitorPowerState@@YAJPEAXI@Z @ 0x1402C49D8
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1402C42E0 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x14004FFE0 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AAC0 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1403DA270 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmCheckMonitorPowerState(DXGADAPTER *this, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  const struct DMMVIDPN *v9; // rbx
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v11; // edx
  unsigned int v13; // [rsp+80h] [rbp+8h] BYREF
  const struct DMMVIDPN *v14; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = *(_QWORD *)(*((_QWORD *)this + 395) + 104LL);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 86;
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v5 + 40));
  if ( !*((_QWORD *)this + 395) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10648;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10648LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)this + 395);
  if ( !v6 )
  {
    v7 = v3;
    goto LABEL_7;
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(v6 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6468;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6468LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = v3;
  if ( !*(_BYTE *)(4024 * v3 + *(_QWORD *)(v6 + 128) + 760) )
  {
LABEL_7:
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)v5);
    v14 = ClientCommittedVidPnRef;
    v9 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef )
    {
      v13 = 0;
      if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                  (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96),
                  v3,
                  0LL,
                  &v13) < 0 )
      {
        WdLogSingleEntry2(3LL, v7, this);
        WdLogGlobalForLineNumber = 15352;
      }
      else
      {
        PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((const struct DMMVIDPN *)((char *)v9 + 96), v13);
        if ( PathFromTarget )
        {
          if ( (unsigned __int8)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PathFromTarget + 12) + 96LL) + 536LL)
                                          + 168LL) == 12 )
          {
            v2 = -2145517568;
          }
          else if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(this)
                 || v11 != 14
                 || DMMVIDPN::IsPathFromSourcePoweredOff(v9, v3) )
          {
            v2 = -1071775738;
          }
          auto_rc<DMMVIDPN const>::reset((__int64 *)&v14, 0LL);
          goto LABEL_17;
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 15362;
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, this, -1071775738LL);
      WdLogGlobalForLineNumber = 15330;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v14, 0LL);
    v2 = -1071775738;
  }
LABEL_17:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v5 + 40));
  return v2;
}
