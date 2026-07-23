/*
 * XREFs of PopDirectedDripsBuildBroadcastTreeFull @ 0x140B0D6D8
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1407E7900 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     PopFxIsDirectedPowerTransitionSupported @ 0x14050C900 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14077451C (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x1407E7A28 (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsMarkDfxDevice @ 0x140B0D58C (PopDirectedDripsMarkDfxDevice.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140B0D9B8 (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x140B0DA00 (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x140B0DB80 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 */

__int64 __fastcall PopDirectedDripsBuildBroadcastTreeFull(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  int v4; // r14d
  __int64 *v8; // rax
  __int64 *v9; // rdx
  __int64 **v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 ***v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // r9d
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int64 v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v26; // [rsp+28h] [rbp-18h]
  __int64 *v27; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v28; // [rsp+38h] [rbp-8h]
  int v29; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0;
  v26 = &v25;
  v25 = (__int64)&v25;
  v28 = &v27;
  v27 = (__int64 *)&v27;
  if ( (*(_DWORD *)(a1 + 760) & 0x30000) == 0 )
  {
    v8 = (__int64 *)(a1 + 728);
    v9 = *(__int64 **)(a1 + 728);
    if ( v9[1] != a1 + 728
      || (v10 = *(__int64 ***)(a1 + 736), *v10 != v8)
      || (*v10 = v9, v9[1] = (__int64)v10, v11 = v26, (__int64 *)*v26 != &v25) )
    {
LABEL_44:
      __fastfail(3u);
    }
    v8[1] = (__int64)v26;
    *v8 = (__int64)&v25;
    *v11 = (__int64)v8;
    v26 = v8;
    while ( 1 )
    {
      do
      {
        v12 = v25;
        if ( (__int64 *)v25 == &v25 )
          goto LABEL_34;
        if ( *(__int64 **)(v25 + 8) != &v25 )
          goto LABEL_44;
        v13 = *(_QWORD *)v25;
        if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 )
          goto LABEL_44;
        v25 = *(_QWORD *)v25;
        *(_QWORD *)(v13 + 8) = &v25;
        v14 = v12 - 728;
        *(_QWORD *)(v12 + 8) = v12;
        *(_QWORD *)v12 = v12;
        v15 = *(_QWORD *)(v12 - 728 + 80);
      }
      while ( (*(_DWORD *)(v12 + 32) & 0x30000) != 0 );
      v16 = (__int64 ***)(v12 + 16);
      if ( *v16 == (__int64 **)v16 )
      {
        *(_DWORD *)(v12 + 36) = *(_DWORD *)(v12 + 32);
        v17 = v28;
        if ( *v28 != (__int64 *)&v27 )
          goto LABEL_44;
        *(_QWORD *)(v12 + 24) = v28;
        *v16 = &v27;
        *v17 = v16;
        v28 = (__int64 **)(v12 + 16);
      }
      PopDirectedDripsDiagTraceBroadcastVisit(v14, a2, 0LL);
      if ( (*(_DWORD *)(v14 + 760) & 0x10) != 0 )
      {
        v20 = 0LL;
        goto LABEL_32;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 48LL) & 0x2000000) != 0 )
      {
        v20 = 7LL;
        goto LABEL_32;
      }
      if ( (*(_DWORD *)(v14 + 760) & 0x80000) != 0 )
      {
        v20 = 6LL;
LABEL_32:
        *(_DWORD *)(v12 + 32) |= 0x40000u;
        PopDirectedDripsDiagTraceProblemDevice(v14, a2, v20);
LABEL_33:
        PopDirectedDripsFlushDeviceQueue(&v25);
        goto LABEL_35;
      }
      if ( (a3 & 1) == 0 )
      {
        v18 = 8LL;
        goto LABEL_25;
      }
      v29 = 0;
      if ( (unsigned __int8)PopDirectedDripsIsPnpSoftwareDeviceNode(v14) )
        goto LABEL_23;
      if ( !v15 )
        goto LABEL_22;
      if ( PopFxIsDirectedPowerTransitionSupported(v15, &v29) )
      {
LABEL_23:
        PopDirectedDripsMarkDfxDevice((__int64)&v25, (__int64)&v27, v12, a2);
        v4 |= 1u;
      }
      else
      {
        if ( v29 != 2 )
        {
LABEL_22:
          v18 = (4 * (*(_DWORD *)(v12 + 32) & 2)) | 1u;
          goto LABEL_25;
        }
        v18 = 4LL;
LABEL_25:
        PopDirectedDripsDiagTraceProblemDevice(v14, a2, v18);
        if ( (a3 & 2) == 0 || (int)PopDirectedDripsBuildPs4BroadcastTree(v14, (__int64)&v27, a2) < 0 )
          goto LABEL_33;
        v19 = *(_QWORD *)(v14 + 776);
        v4 |= 2u;
        if ( v19 )
          *(_DWORD *)(v19 + 152) |= 0x10000u;
      }
    }
  }
LABEL_34:
  v21 = 0;
LABEL_35:
  while ( 1 )
  {
    v22 = v27;
    if ( v27 == (__int64 *)&v27 )
      break;
    if ( (__int64 **)v27[1] != &v27 )
      goto LABEL_44;
    v23 = (__int64 *)*v27;
    if ( *(__int64 **)(*v27 + 8) != v27 )
      goto LABEL_44;
    v27 = (__int64 *)*v27;
    v23[1] = (__int64)&v27;
    if ( v21 < 0 )
      *((_DWORD *)v22 + 4) = *((_DWORD *)v22 + 5);
    v22[1] = (__int64)v22;
    *v22 = (__int64)v22;
    *((_DWORD *)v22 + 5) = 0;
  }
  if ( v21 >= 0 )
    *a4 |= v4;
  return (unsigned int)v21;
}
