/*
 * XREFs of AUDIOSERVER_rundown @ 0x1800257C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800235E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180023C5C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 */

__int64 __fastcall AUDIOSERVER_rundown(__int64 a1)
{
  GUID v2; // xmm0
  int v3; // eax
  LPCRITICAL_SECTION v4; // rbx
  GUID v7; // [rsp+58h] [rbp-20h] BYREF

  if ( a1 )
    v2 = *(GUID *)(a1 + 256);
  else
    v2 = GUID_00000000_0000_0000_0000_000000000000;
  v7 = v2;
  EtwEventActivityIdControl(4LL, &v7);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_55a927f0784e38de47faa537a644ca17_Traceguids, a1);
  }
  v3 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release((volatile signed __int64 *)a1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_55a927f0784e38de47faa537a644ca17_Traceguids, a1, v3);
  }
  v4 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v4[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v4);
  LeaveCriticalSection(v4);
  return EtwEventActivityIdControl(4LL, &v7);
}
