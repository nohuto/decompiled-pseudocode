/*
 * XREFs of ConnectHwpInterrupt @ 0x14002A7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     IsHwpNativeInterruptEnabled @ 0x140005850 (IsHwpNativeInterruptEnabled.c)
 *     IsHgsEnabled @ 0x140006BD0 (IsHgsEnabled.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x140010330 (GetCpuIdInfo.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     IsHwpNativeInterruptSupported @ 0x14002950C (IsHwpNativeInterruptSupported.c)
 *     IsHgsInterruptSupported @ 0x140029588 (IsHgsInterruptSupported.c)
 */

__int64 __fastcall ConnectHwpInterrupt(__int64 a1)
{
  int v1; // edx
  int v2; // ebx
  bool v3; // di
  char v4; // bl
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF

  if ( IsHwpNativeInterruptEnabled(a1) )
  {
    BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = IsHwpNativeInterruptSupported();
    v3 = 0;
    v10 = 0LL;
    v11 = 0LL;
    GetCpuIdInfo(0, &v10);
    v4 = 1;
    if ( (unsigned int)v10 >= 6 )
    {
      GetCpuIdInfo(6u, &v11);
      v3 = (v11 & 0x8180) == 33152;
    }
    BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v3;
    if ( !IsHgsInterruptSupported() || !IsHgsEnabled() )
      v4 = 0;
    HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v4;
    if ( *(_WORD *)((char *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 5) )
    {
      v6 = __readmsr(0x773u);
      *(_QWORD *)&v10 = v6;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v6) = v6 & 0xFFFFFFFC;
        LODWORD(v10) = v6;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v10) = v6 & 0xFFFFFFFB;
      __writemsr(0x773u, v10);
      v7 = __readmsr(0x777u);
      *(_QWORD *)&v10 = v7;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v7) = v7 & 0xFFFFFFFA;
        LODWORD(v10) = v7;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v10) = v7 & 0xFFFFFFF7;
      v5 = DWORD1(v10);
      __writemsr(0x777u, v10);
    }
    if ( v4 )
    {
      *(_QWORD *)&v10 = __readmsr(0x1B2u) & 0xFFFFFFFFFDFFFFFFuLL;
      v5 = DWORD1(v10);
      __writemsr(0x1B2u, v10);
    }
    v2 = ((__int64 (__fastcall *)(char (__fastcall *)(__int64, __int64, __int64), unsigned __int64))HalPrivateDispatchTable[117])(
           HwpInterruptService,
           v5);
    if ( v2 >= 0 )
    {
      if ( HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        v8 = __readmsr(0x1B1u);
        if ( (v8 & 0x4000000) != 0 )
        {
          if ( qword_140019B20 )
            qword_140019B20(433LL);
        }
      }
      return 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_b964643e162d34d8cc7bd448a5fdd40b_Traceguids,
        v2);
    }
  }
  else
  {
    v2 = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v1,
        3,
        13,
        (__int64)&WPP_b964643e162d34d8cc7bd448a5fdd40b_Traceguids);
    }
  }
  return (unsigned int)v2;
}
