/*
 * XREFs of PopDirectedDripsBuildPs4BroadcastTree @ 0x14077451C
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140B0D6D8 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     PopDirectedDripsRemoveQueueDevice @ 0x14077E6F0 (PopDirectedDripsRemoveQueueDevice.c)
 *     PopDirectedDripsFindPs4RootDevice @ 0x1407E7A08 (PopDirectedDripsFindPs4RootDevice.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x1407E7A28 (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsVisitPs4Device @ 0x1407E7A4C (PopDirectedDripsVisitPs4Device.c)
 *     PopDirectedDripsVisitDevice @ 0x140B0D684 (PopDirectedDripsVisitDevice.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x140B0DA00 (PopDirectedDripsDiagTraceProblemDevice.c)
 */

__int64 __fastcall PopDirectedDripsBuildPs4BroadcastTree(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx
  __int64 v6; // r9
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 Ps4RootDevice; // rax
  _QWORD *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  int v20; // eax
  _QWORD *v21; // rax
  unsigned int v22; // r9d
  _QWORD *v24; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v25; // [rsp+28h] [rbp-8h]

  v3 = (_QWORD *)(a1 + 728);
  v25 = &v24;
  v24 = &v24;
  v6 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3
    || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3)
    || (*v7 = v6, *(_QWORD *)(v6 + 8) = v7, v8 = v25, *v25 != &v24) )
  {
    __fastfail(3u);
  }
  v3[1] = v25;
  *v3 = &v24;
  *v8 = v3;
  v25 = (_QWORD **)v3;
  while ( v24 != &v24 )
  {
    v9 = PopDirectedDripsRemoveQueueDevice(&v24);
    v10 = v9;
    v11 = v9 - 728;
    if ( (*(_DWORD *)(v9 + 32) & 0x20000) == 0 )
    {
      PopDirectedDripsVisitDevice(a2, v9, a3, 4LL);
      Ps4RootDevice = PopDirectedDripsFindPs4RootDevice(v11);
      v13 = (_QWORD *)Ps4RootDevice;
      if ( !Ps4RootDevice )
      {
        *(_DWORD *)(v10 + 32) |= 0x40000u;
        PopDirectedDripsDiagTraceProblemDevice(v11, a3, 3LL);
        v17 = 3221225659LL;
LABEL_19:
        PopDirectedDripsFlushDeviceQueue(&v24, v15, v16, v17);
        return v22;
      }
      v14 = PopDirectedDripsVisitPs4Device(Ps4RootDevice, &v24, a2, a3);
      v17 = (unsigned int)v14;
      if ( v14 < 0 )
        goto LABEL_19;
      v18 = (_QWORD *)v13[1];
      v19 = v13;
      while ( v18 )
      {
        v19 = v18;
        v18 = (_QWORD *)v18[1];
      }
      while ( v19 != v13 )
      {
        v20 = PopDirectedDripsVisitPs4Device(v19, &v24, a2, a3);
        v17 = (unsigned int)v20;
        if ( v20 < 0 )
          goto LABEL_19;
        v21 = (_QWORD *)*v19;
        if ( *v19 )
        {
          do
          {
            v19 = v21;
            v21 = (_QWORD *)v21[1];
          }
          while ( v21 );
        }
        else
        {
          v19 = (_QWORD *)v19[2];
        }
      }
    }
  }
  return 0;
}
