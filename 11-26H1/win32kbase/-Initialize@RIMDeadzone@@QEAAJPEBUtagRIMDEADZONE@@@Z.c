/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x14020C184
 * Callers:
 *     RIMCreatePointerDeviceDeadzone @ 0x140203450 (RIMCreatePointerDeviceDeadzone.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x14017F750 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x14020C910 (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this, const struct tagRIMDEADZONE *a2)
{
  unsigned int v2; // ebx
  unsigned int i; // r8d
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int j; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int k; // r14d
  __int64 v13; // rbp
  unsigned int m; // r9d
  __int64 v15; // rdx
  __int128 v17; // [rsp+20h] [rbp-38h]

  v2 = 0;
  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 390);
  ++*((_DWORD *)this + 1);
  if ( !a2 )
    goto LABEL_28;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *((_DWORD *)a2 + 4) >= *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) >= *((_DWORD *)a2 + 3) )
    {
      *((_DWORD *)this + 4) = 1;
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 8);
      return v2;
    }
LABEL_28:
    v2 = -1073741811;
    goto LABEL_29;
  }
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_28;
  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v6 = *((_QWORD *)a2 + 1);
    v7 = _mm_cvtsi128_si32(*(__m128i *)(v6 + 24LL * i));
    v17 = *(_OWORD *)(v6 + 24LL * i);
    if ( v7 > 0x168 || DWORD1(v17) > 0x168 || v7 == DWORD1(v17) )
      goto LABEL_28;
    for ( j = 0; j < (unsigned int)*(_QWORD *)(v6 + 24LL * i + 16); ++j )
    {
      if ( *(_DWORD *)(*((_QWORD *)&v17 + 1) + 8LL * j + 4) < *(_DWORD *)(*((_QWORD *)&v17 + 1) + 8LL * j) )
        goto LABEL_28;
    }
  }
  *((_DWORD *)this + 4) = 2;
  v9 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 8) = v9;
  v10 = Win32AllocPoolZInitImpl(256LL, 24 * v9, 0x6E7A4452u);
  *((_QWORD *)this + 3) = v10;
  v11 = v10;
  if ( !v10 )
  {
LABEL_17:
    v2 = -1073741801;
LABEL_29:
    RIMDeadzone::Release((char **)this);
    return v2;
  }
  for ( k = 0; k < *((_DWORD *)this + 8); ++k )
  {
    v13 = 3LL * k;
    *(_QWORD *)(v11 + 8 * v13) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * k);
    *(_DWORD *)(*((_QWORD *)this + 3) + 8 * v13 + 16) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 24LL * k + 16);
    *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * k + 8) = Win32AllocPoolZInitImpl(
                                                          256LL,
                                                          8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 24LL * k + 16),
                                                          0x6E7A4452u);
    v11 = *((_QWORD *)this + 3);
    if ( !*(_QWORD *)(v11 + 24LL * k + 8) )
      goto LABEL_17;
    for ( m = 0; m < *(_DWORD *)(v11 + 24LL * k + 16); v11 = *((_QWORD *)this + 3) )
    {
      v15 = m++;
      *(_QWORD *)(*(_QWORD *)(v11 + 24LL * k + 8) + 8 * v15) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * k + 8)
                                                                         + 8 * v15);
    }
  }
  RIMDeadzone::SetDeadzonePalmTelemetry(this);
  return v2;
}
