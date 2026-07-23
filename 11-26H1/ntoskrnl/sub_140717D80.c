/*
 * XREFs of sub_140717D80 @ 0x140717D80
 * Callers:
 *     <none>
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PsQueryThreadTerminationPort @ 0x140782700 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x14094BFD8 (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_140717D80(__int64 a1, __int64 a2)
{
  __int64 *ThreadTerminationPort; // r14
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r12
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v19; // r10
  unsigned int v20; // ebx
  unsigned __int64 v21; // r10
  __int64 v22; // rdx
  unsigned int v23; // r11d
  unsigned __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rax
  __int16 Object; // [rsp+30h] [rbp-28h] BYREF
  char v39; // [rsp+32h] [rbp-26h]
  int v40; // [rsp+34h] [rbp-24h]
  _QWORD v41[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v42; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v43; // [rsp+A8h] [rbp+50h]
  LARGE_INTEGER Interval; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v45; // [rsp+B8h] [rbp+60h]

  KeExitRetpoline(a1, a2);
  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
  v5 = (unsigned int)ExGenRandom(1, v4);
  v6 = v5 / 0x5F5E100;
  Interval.QuadPart = -1200000000LL - v5 % 0x5F5E100;
  if ( *(_QWORD *)(a1 + 8) == 1LL )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1, v6) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  v10 = ExGenRandom(1, v9);
  v11 = v10 / 0xA;
  if ( v10 % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v41[1] = v41;
    p_Object = (struct _KEVENT *)&Object;
    v39 = 6;
    v41[0] = v41;
    v40 = 0;
  }
  v12 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v13 = *(_QWORD *)(v12 + 32);
  v15 = (unsigned int)ExGenRandom(1, v11) ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v42 = v15 ^ v12;
  v43 = v15 ^ v13;
  v16 = v15 ^ v12;
  v45 = v15 & 1;
  v17 = v43;
  while ( 1 )
  {
    if ( (v17 ^ v15) >> 47 == -1 || (v17 ^ v15) >> 47 == 0 )
    {
      v42 = v16 ^ v15;
      v43 = v17 ^ v15;
      guard_dispatch_icall_no_overrides(v16 ^ v15, v17 ^ v15);
      v43 = *(_QWORD *)((v16 ^ v15) + 0x20) ^ v15;
      v17 = v43;
      v42 = v16;
    }
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14);
    }
    v19 = v17 ^ *(_QWORD *)((v16 ^ v15) + 0x40) ^ v15;
    v20 = 25;
    v21 = v19 | 0xFFFF800000000000uLL;
    v22 = __ROR8__(v21, v21 & 0x3F);
    v23 = 0;
    v24 = v21 - 8;
    v25 = v22;
    do
    {
      v24 += 8LL;
      v26 = *(_QWORD *)v24;
      *(_QWORD *)v24 = v21
                     + ((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(v22 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)v24, KiWaitNever)))
                     + v23;
      v22 = (v21 + __ROL8__(v25 ^ __ROR8__(v23 ^ (unsigned __int64)(200 - v23), ~(_BYTE)v26 & 0x3F), (v26 ^ 5) & 0x3F)) ^ 0x4DC0694C;
      if ( v23 == 24 )
      {
        v42 = 0xB82144C52044C52LL;
        v27 = *(_QWORD *)v21;
        v42 = 0x85131481131482ELL;
        if ( v27 != 0x85131481131482ELL )
        {
          v28 = v42;
          v29 = *(_QWORD *)v21 ^ *(_QWORD *)v24 ^ v42;
          *(_QWORD *)v24 = v29;
          v20 += *(_DWORD *)(v24 + 4);
          *(_QWORD *)v24 = *(_QWORD *)v21 ^ v29 ^ v28;
        }
      }
      ++v23;
      v25 = v22;
    }
    while ( v23 < v20 );
    v30 = v45;
    v42 = 0x85131481131482ELL;
    v31 = *(_QWORD *)v21;
    *(_BYTE *)(v21 + 3) = 17;
    *(_BYTE *)(v21 + 2) = 49;
    *(_BYTE *)(v21 + 1) = 72;
    *(_BYTE *)v21 = 46;
    guard_dispatch_icall_no_overrides(v21, v31 ^ 0x85131481131482ELL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( *ThreadTerminationPort > 0 )
    {
      v33 = -*ThreadTerminationPort;
      *ThreadTerminationPort = 0LL;
      v42 = v33;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v33 + 24), v32);
      v34 = 32LL;
      do
      {
        *(_BYTE *)v33++ = 0;
        --v34;
      }
      while ( v34 );
      v35 = 8LL;
      v36 = &v42;
      do
      {
        *(_BYTE *)v36 = 0;
        v36 = (__int64 *)((char *)v36 + 1);
        --v35;
      }
      while ( v35 );
    }
    while ( 1 )
    {
      v37 = *ThreadTerminationPort;
      if ( *ThreadTerminationPort )
        break;
      if ( v30 )
        KeDelayExecutionThread(0, 0, &Interval);
      else
        KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
    }
    v17 = *(_QWORD *)(v37 + 32) ^ v15;
    v16 = v15 ^ v37;
    *ThreadTerminationPort = 0LL;
    if ( v30 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
