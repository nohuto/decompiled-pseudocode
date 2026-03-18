/*
 * XREFs of ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x140188810
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall LegacyInputDispatcher::Initialize(
        LegacyInputDispatcher *this,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        struct LegacyDispatcherObject *a6)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v12; // rax
  void *v13; // rcx
  struct LegacyDispatcherObject *v14; // rdx
  __int64 v15; // r9

  v6 = 0LL;
  v7 = a4;
  if ( *((_DWORD *)this + 11) )
    return 3221225473LL;
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2978LL);
  if ( *((_QWORD *)this + 3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2979LL);
  if ( *((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2980LL);
  *((_QWORD *)this + 1) = Win32AllocPoolZInitImpl(64LL, 8 * v7, 0x79737355u);
  *((_QWORD *)this + 3) = Win32AllocPoolZInitImpl(64LL, 48 * v7, 0x774B7355u);
  v12 = Win32AllocPoolZInitImpl(256LL, 16 * v7, 0x43486970u);
  *((_QWORD *)this + 4) = v12;
  *((_DWORD *)this + 12) = 1;
  if ( !*((_QWORD *)this + 3) )
    return 3221225495LL;
  v13 = (void *)*((_QWORD *)this + 1);
  if ( !v13 || !v12 )
    return 3221225495LL;
  memset(v13, 0, 8 * v7);
  memset(*((void **)this + 4), 0, 16 * v7);
  if ( a5 )
  {
    v14 = a6;
    v15 = a5;
    do
    {
      *(_QWORD *)(v6 + *((_QWORD *)this + 1)) = *(_QWORD *)v14;
      v6 += 8LL;
      *(_QWORD *)((char *)v14 + *((_QWORD *)this + 4) - (_QWORD)a6) = *((_QWORD *)v14 + 1);
      v14 = (struct LegacyDispatcherObject *)((char *)v14 + 16);
      --v15;
    }
    while ( v15 );
  }
  *((_DWORD *)this + 11) = v7;
  result = 0LL;
  *((_DWORD *)this + 13) = a5;
  *((_BYTE *)this + 56) = a2;
  *((_BYTE *)this + 57) = a3;
  return result;
}
