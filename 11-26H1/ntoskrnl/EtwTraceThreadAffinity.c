/*
 * XREFs of EtwTraceThreadAffinity @ 0x140506B68
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x14045C180 (KiUpdateThreadCpuSets.c)
 *     KeEtwRundown @ 0x1405E7258 (KeEtwRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     EtwpExtractCompactedAffinity @ 0x1406C9190 (EtwpExtractCompactedAffinity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceThreadAffinity(
        __int64 a1,
        __int16 a2,
        char a3,
        char a4,
        _KWAIT_STATUS_REGISTER *a5,
        __int16 a6)
{
  unsigned __int16 v8; // r9
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // r8
  unsigned __int16 i; // dx
  char v11; // al
  int v12; // ecx
  _QWORD *v13; // rcx
  int v14; // edx
  unsigned __int8 v16; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 v17; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v18; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-19h] BYREF
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp+7h] BYREF
  int v22; // [rsp+80h] [rbp+1Fh]
  int v23; // [rsp+84h] [rbp+23h]
  __int64 v24; // [rsp+88h] [rbp+27h]
  int v25; // [rsp+90h] [rbp+2Fh]
  int v26; // [rsp+94h] [rbp+33h]

  v18 = *(unsigned int *)(a1 + 1296);
  v8 = *(_WORD *)&a5->Flags;
  v16 = 0;
  v19[0] = 0LL;
  v17 = 0;
  WORD2(v18) = a2;
  v20 = 0LL;
  if ( v8 >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
  {
    p_WaitRegister = a5;
    v8 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  }
  else
  {
    p_WaitRegister = &stru_140FC11F0.WaitRegister;
  }
  for ( i = 0; i < v8; ++i )
  {
    if ( *(_QWORD *)&a5[8 * i + 8].Flags != *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * i + 4) )
    {
LABEL_8:
      v11 = BYTE6(v18);
      v12 = 0;
      goto LABEL_13;
    }
  }
  while ( i < *(_WORD *)&p_WaitRegister->Flags )
  {
    if ( *(_QWORD *)&p_WaitRegister[8 * i + 8].Flags )
      goto LABEL_8;
    ++i;
  }
  v12 = 1;
  v11 = BYTE6(v18) | 1;
  BYTE6(v18) |= 1u;
LABEL_13:
  if ( a3 )
  {
    v11 |= 2u;
    BYTE6(v18) = v11;
  }
  if ( a4 )
    BYTE6(v18) = v11 | 4;
  if ( v12 )
  {
    v19[1] = 8LL;
    v19[0] = &v18;
    v13 = v19;
    v14 = 1;
  }
  else
  {
    EtwpExtractCompactedAffinity((_DWORD)a5, (unsigned int)&v20, (unsigned int)&v16, (unsigned int)v19, (__int64)&v17);
    HIBYTE(v18) = v16;
    v14 = 3;
    v22 = 8 * v16;
    v24 = v19[0];
    v21[0] = &v18;
    v21[2] = &v20;
    v13 = v21;
    v25 = 8 * v17;
    v21[1] = 8LL;
    v23 = 0;
    v26 = 0;
  }
  return EtwTraceKernelEvent((int)v13, v14, 0x20001000u, a6, 6298370);
}
