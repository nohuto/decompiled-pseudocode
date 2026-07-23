/*
 * XREFs of PspInitPhase1 @ 0x140CDE4AC
 * Callers:
 *     PsInitSystem @ 0x140C85D24 (PsInitSystem.c)
 * Callees:
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     ExRegisterHost @ 0x140846CA8 (ExRegisterHost.c)
 *     ObInsertObject @ 0x140906AE0 (ObInsertObject.c)
 *     PspCreateSecureSystemProcess @ 0x140CDE3BC (PspCreateSecureSystemProcess.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140CDEDF0 (PspInitializeCpuPartitionsPhase1.c)
 */

bool PspInitPhase1()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+38h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-30h] BYREF
  int *v12; // [rsp+48h] [rbp-28h]
  _OWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF

  if ( ObInsertObject(PspSystemPartition, 0LL, 0x1F0003u, 0, 0LL, &PspSystemPartitionHandle) < 0
    || (int)PspInitializeCpuPartitionsPhase1() < 0 )
  {
    KeBugCheck(0x60u);
  }
  v11 = 65540LL;
  v12 = &v9;
  v13[0] = 1uLL;
  v9 = 1;
  v10 = 0LL;
  *(_QWORD *)&v13[1] = 0LL;
  if ( (int)ExRegisterHost(&PsAltSystemCallRegistrationLock.TrapFrame, v0, (unsigned __int16 *)&v11) < 0 )
  {
    PsAltSystemCallRegistrationLock.TrapFrame = 0LL;
    return 0;
  }
  v11 = 65541LL;
  v10 = &PspBamHostInterface;
  v13[0] = 0x200uLL;
  v12 = &v9;
  v9 = 1;
  *(_QWORD *)&v13[1] = 0LL;
  if ( (int)ExRegisterHost(&PspBamExtensionHost, v1, (unsigned __int16 *)&v11) < 0 )
  {
    PspBamExtensionHost = 0LL;
    return 0;
  }
  v11 = 65543LL;
  v12 = &v9;
  v13[0] = 0x200uLL;
  v9 = 1;
  v10 = 0LL;
  *(_QWORD *)&v13[1] = 0LL;
  if ( (int)ExRegisterHost(&PspDamExtensionHost, v3, (unsigned __int16 *)&v11) < 0 )
  {
    PspDamExtensionHost = 0LL;
    return 0;
  }
  v11 = 65545LL;
  v10 = PspMmcssHostInterface;
  v13[0] = 0x200uLL;
  v12 = &v9;
  v9 = 1;
  *(_QWORD *)&v13[1] = 0LL;
  if ( (int)ExRegisterHost(&PspMmcssExtensionHost, v4, (unsigned __int16 *)&v11) < 0 )
  {
    PspMmcssExtensionHost = 0LL;
    return 0;
  }
  v11 = 65546LL;
  v10 = PspHwTraceHostInterface;
  v13[0] = 0x200uLL;
  v12 = &v9;
  v9 = 1;
  *(_QWORD *)&v13[1] = 0LL;
  if ( (int)ExRegisterHost(&PspHwTraceExtensionHost, v5, (unsigned __int16 *)&v11) < 0 )
  {
    PspHwTraceExtensionHost = 0LL;
    return 0;
  }
  v11 = 65549LL;
  v10 = (__int64 (__fastcall **)())&PspOctHostInterface;
  v12 = &v9;
  v9 = 1;
  memset((char *)v13 + 4, 0, 20);
  LODWORD(v13[0]) = 512;
  if ( (int)ExRegisterHost(&PspOctExtensionHost, v6, (unsigned __int16 *)&v11) < 0 )
  {
    PspOctExtensionHost = 0LL;
    return 0;
  }
  v11 = 65550LL;
  v10 = &PspSecHostInterface;
  v12 = &v9;
  v9 = 1;
  memset((char *)v13 + 4, 0, 20);
  LODWORD(v13[0]) = 512;
  if ( (int)ExRegisterHost(&PspSecExtensionHost, v7, (unsigned __int16 *)&v11) < 0 )
  {
    PspSecExtensionHost = 0LL;
    return 0;
  }
  v11 = 65555LL;
  v10 = PspDxgHostInterface;
  *(_QWORD *)&v13[0] = 512LL;
  v12 = &v9;
  v9 = 1;
  *((_QWORD *)&v13[0] + 1) = PspDxgExtensionHostCallback;
  *(_QWORD *)&v13[1] = 0LL;
  if ( (int)ExRegisterHost(&PspDxgExtensionHost, v8, (unsigned __int16 *)&v11) < 0 )
  {
    PspDxgExtensionHost = 0LL;
    return 0;
  }
  return PspCreateSecureSystemProcess();
}
