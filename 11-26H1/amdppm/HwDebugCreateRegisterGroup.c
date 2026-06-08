/*
 * XREFs of HwDebugCreateRegisterGroup @ 0x14003992C
 * Callers:
 *     HwDebugInitializeProcessorSupport @ 0x140039D34 (HwDebugInitializeProcessorSupport.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1400055D4 (ProcLibTraceRegisterGroupEvents.c)
 *     HwDebugUpdateRegister @ 0x14000CBA8 (HwDebugUpdateRegister.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
 *     GetPackageAffinity @ 0x1400328D0 (GetPackageAffinity.c)
 *     HwDebugInitializeRegister @ 0x140039E90 (HwDebugInitializeRegister.c)
 */

__int64 __fastcall HwDebugCreateRegisterGroup(__int64 a1, int a2, __int64 a3, unsigned __int8 *a4, _QWORD *a5, int a6)
{
  int v9; // edi
  unsigned __int8 *v10; // r8
  __int64 v11; // r14
  __int64 v12; // r9
  __int64 v13; // r10
  _DWORD *v14; // rdx
  bool v15; // zf
  int v16; // ecx
  int PackageAffinity; // ebx
  _QWORD **v18; // rsi
  _QWORD *i; // rbx
  int v20; // edx
  __int64 Pool2; // rax
  int v22; // edx
  _BYTE *v23; // rdi
  int v24; // edx
  __int64 v25; // rsi
  __int64 j; // rbx
  __int64 v27; // r12
  __int64 *v28; // rcx
  _QWORD **v29; // rsi
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h]
  _QWORD **v35; // [rsp+40h] [rbp-C0h]
  _QWORD *v36; // [rsp+48h] [rbp-B8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-B0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[272]; // [rsp+70h] [rbp-90h] BYREF

  v36 = a5;
  memset(v39, 0, 0x108uLL);
  v9 = 0;
  v33 = 0LL;
  *a5 = 0LL;
  v10 = a4;
  Affinity = 0LL;
  v11 = 2LL;
  v12 = 2LL;
  PreviousAffinity = 0LL;
  do
  {
    if ( *v10 )
    {
      v13 = *v10;
      v14 = (_DWORD *)(*((_QWORD *)v10 + 1) + 12LL);
      do
      {
        v15 = *v14 == a2;
        v16 = v9 + 1;
        v14 += 10;
        if ( !v15 )
          v16 = v9;
        v9 = v16;
        --v13;
      }
      while ( v13 );
    }
    v10 += 16;
    --v12;
  }
  while ( v12 );
  if ( !v9 )
    return 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (unsigned int)-1073741823;
    KeInitializeAffinityEx2(v39, 32LL);
    KeAddProcessorAffinityEx(v39, *(unsigned int *)(a1 + 56));
  }
  else
  {
    KeInitializeAffinityEx2(v39, 32LL);
    PackageAffinity = GetPackageAffinity(a1, (__int64)v39);
    if ( PackageAffinity < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          3,
          34,
          (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
          PackageAffinity,
          v33);
      }
      return (unsigned int)PackageAffinity;
    }
  }
  v18 = (_QWORD **)((char *)&unk_1400155F8 + 16 * a6);
  v35 = v18;
  for ( i = *v18; i != v18; i = (_QWORD *)*i )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(v39, i + 2) )
    {
      *a5 = i;
      return 0;
    }
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(24 * (v9 + 13)), 1919119952LL);
  v23 = (_BYTE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 304) = a2;
    KeInitializeAffinityEx2(Pool2 + 16, 32LL);
    KeCopyAffinityEx2(v23 + 16, v39);
    PackageAffinity = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _BYTE *))(WdfFunctions_01015 + 2520))(
                        WdfDriverGlobals,
                        0LL,
                        v23 + 280);
    if ( PackageAffinity >= 0 )
    {
      v34 = KeQueryInterruptTimePrecise(&v33);
      KeFirstGroupAffinityEx(&Affinity, v39);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v25 = v34;
      do
      {
        for ( j = 0LL; (unsigned int)j < *a4; j = (unsigned int)(j + 1) )
        {
          v27 = *((_QWORD *)a4 + 1) + 40 * j;
          if ( *(_DWORD *)(v27 + 12) == a2
            && (int)HwDebugInitializeRegister(v27, &v23[24 * (unsigned __int8)v23[308] + 312]) >= 0 )
          {
            v28 = (__int64 *)&v23[24 * (unsigned __int8)v23[308] + 312];
            *v28 = v27;
            HwDebugUpdateRegister(v28, v25);
            ++v23[308];
          }
        }
        a4 += 16;
        --v11;
      }
      while ( v11 );
      v29 = v35;
      v30 = v35[1];
      if ( (_QWORD **)*v30 != v35 )
        __fastfail(3u);
      *((_QWORD *)v23 + 1) = v30;
      *(_QWORD *)v23 = v29;
      *v30 = v23;
      v31 = v36;
      v29[1] = v23;
      *v31 = v23;
      ProcLibTraceRegisterGroupEvents((__int64)v23, 0);
      PackageAffinity = 0;
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v24,
          4,
          36,
          (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
          PackageAffinity,
          v33);
      }
      ExFreePoolWithTag(v23, (ULONG)1919119952);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v22,
        4,
        35,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)PackageAffinity;
}
