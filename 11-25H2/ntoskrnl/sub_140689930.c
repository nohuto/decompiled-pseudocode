/*
 * XREFs of sub_140689930 @ 0x140689930
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x14046112C (KeExitRetpoline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PsQueryThreadTerminationPort @ 0x1406F0A50 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x1408F56FC (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_140689930(__int64 a1, __int64 a2)
{
  __int64 *ThreadTerminationPort; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r15
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  int v9; // edx
  __int64 v10; // rsi
  char v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v16; // r11d
  unsigned __int64 v17; // r10
  __int64 v18; // rbx
  unsigned int v19; // r9d
  unsigned __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rax
  _QWORD v25[2]; // [rsp+30h] [rbp-38h] BYREF
  __int16 Object; // [rsp+40h] [rbp-28h] BYREF
  char v27; // [rsp+42h] [rbp-26h]
  int v28; // [rsp+44h] [rbp-24h]
  _QWORD v29[4]; // [rsp+48h] [rbp-20h] BYREF
  LARGE_INTEGER Interval; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+60h]

  KeExitRetpoline(a1, a2);
  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
  Interval.QuadPart = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  if ( *(_QWORD *)(a1 + 8) == 1LL )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  if ( (unsigned int)ExGenRandom(1) % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v29[1] = v29;
    p_Object = (struct _KEVENT *)&Object;
    v27 = 6;
    v29[0] = v29;
    v28 = 0;
  }
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = *(_QWORD *)(v6 + 32);
  v8 = ExGenRandom(1);
  v10 = v8 ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v11 = v8 ^ 0xDB;
  v12 = v7 ^ v10;
  v13 = v6 ^ v10;
  v31 = v11 & 1;
  v14 = v12;
  while ( 1 )
  {
    if ( (v14 ^ v10) >> 47 == -1 || (v14 ^ v10) >> 47 == 0 )
    {
      guard_dispatch_icall_no_overrides(v13 ^ v10);
      v14 = *(_QWORD *)((v13 ^ v10) + 0x20) ^ v10;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
    }
    v16 = 25;
    v17 = v14 ^ *(_QWORD *)((v13 ^ v10) + 0x40) ^ v10 | 0xFFFF800000000000uLL;
    v18 = __ROR8__(v17, (v14 ^ *(_BYTE *)((v13 ^ v10) + 0x40) ^ v10) & 0x3F);
    v19 = 0;
    v20 = v17 - 8;
    do
    {
      v21 = *(_QWORD *)(v20 + 8);
      v20 += 8LL;
      *(_QWORD *)v20 = v17 + (KiWaitAlways ^ _byteswap_uint64(v18 ^ __ROL8__(KiWaitNever ^ v21, KiWaitNever))) + v19;
      v18 = (v17 + __ROL8__(
                     __ROR8__(v19 ^ (unsigned __int64)(200 - v19), ~(_BYTE)v21 & 0x3F) ^ v18,
                     (v21 ^ 0xFA) & 0x3F)) ^ 0x2F8068FF;
      if ( v19 == 24 && *(_QWORD *)v17 != 0x85131481131482ELL )
      {
        *(_QWORD *)v20 ^= *(_QWORD *)v17 ^ 0x85131481131482ELL;
        v16 += *(_DWORD *)(v20 + 4);
        *(_QWORD *)v20 ^= *(_QWORD *)v17 ^ 0x85131481131482ELL;
      }
      ++v19;
    }
    while ( v19 < v16 );
    v22 = v31;
    *(_BYTE *)(v17 + 3) = 17;
    *(_BYTE *)(v17 + 2) = 49;
    *(_BYTE *)(v17 + 1) = 72;
    *(_BYTE *)v17 = 46;
    guard_dispatch_icall_no_overrides(v17);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( *ThreadTerminationPort > 0 )
    {
      v23 = -*ThreadTerminationPort;
      *ThreadTerminationPort = 0LL;
      v25[0] = v23;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v23 + 24));
      memset((void *)v23, 0, 0x20uLL);
      memset(v25, 0, 8uLL);
    }
    while ( 1 )
    {
      v24 = *ThreadTerminationPort;
      if ( *ThreadTerminationPort )
        break;
      if ( v22 )
        KeDelayExecutionThread(0, 0, &Interval);
      else
        KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
    }
    v14 = *(_QWORD *)(v24 + 32) ^ v10;
    v13 = v10 ^ v24;
    *ThreadTerminationPort = 0LL;
    if ( v22 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
