/*
 * XREFs of sub_14018B5D0 @ 0x14018B5D0
 * Callers:
 *     sub_1400CB8F4 @ 0x1400CB8F4 (sub_1400CB8F4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14018B5D0(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  KSERVICE_ROUTINE *v5; // rax
  __int64 v6; // rcx
  NTSTATUS v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  PKINTERRUPT *InterruptObject; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 i; // rdi
  __int64 v15; // rsi
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Dst; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+90h] [rbp+20h] BYREF

  v18 = 0LL;
  memset_0(&Dst, 0, sizeof(Dst));
  Dst.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 32);
  Dst.FullySpecified.InterruptObject = (PKINTERRUPT *)&v18;
  v4 = *(_QWORD *)(a1 + 400);
  Dst.Version = 3;
  if ( (*(_DWORD *)(v4 + 184) & 0x40000000) != 0 )
  {
    Dst.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)sub_1400DADF0;
    v5 = (KSERVICE_ROUTINE *)sub_1400DADB0;
  }
  else
  {
    Dst.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)sub_1400D19A0;
    v5 = (KSERVICE_ROUTINE *)sub_1400D1520;
  }
  v6 = *(_QWORD *)(a1 + 584);
  Dst.MessageBased.FallBackServiceRoutine = v5;
  Dst.FullySpecified.ServiceContext = (PVOID)a1;
  if ( *(_DWORD *)(v6 + 104) == 2 )
  {
    Dst.FullySpecified.SpinLock = 0LL;
  }
  else
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v6 + 112));
    Dst.FullySpecified.SpinLock = (PKSPIN_LOCK)(*(_QWORD *)(a1 + 584) + 112LL);
  }
  *(_WORD *)&Dst.MessageBased.SynchronizeIrql = a2;
  v7 = IoConnectInterruptEx(&Dst);
  *(_QWORD *)(a1 + 144) &= ~0x800uLL;
  v8 = v7;
  v9 = *(_QWORD *)(a1 + 584);
  if ( v7 < 0 )
  {
    *(_QWORD *)v9 = 0LL;
  }
  else
  {
    *(_DWORD *)(v9 + 12) = Dst.Version;
    v10 = *(_QWORD **)(a1 + 584);
    if ( Dst.Version == 3 )
    {
      InterruptObject = Dst.FullySpecified.InterruptObject;
      *(_QWORD *)(a1 + 144) |= 0x800uLL;
      v10[15] = *InterruptObject;
      v12 = *(_QWORD *)(a1 + 584);
      if ( (*(_DWORD *)(a1 + 144) & 0x200LL) == 0 || !*(_QWORD *)(v12 + 128) )
        *(_QWORD *)(*(_QWORD *)(a1 + 584) + 128LL) = sub_1400143E0(
                                                       64LL,
                                                       16LL * *(unsigned int *)(*(_QWORD *)(v12 + 120) + 4LL),
                                                       1917083986LL,
                                                       *(_QWORD *)(a1 + 8));
      v13 = *(_QWORD *)(a1 + 584);
      if ( *(_QWORD *)(v13 + 128) )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(v13 + 120) + 4LL); i = (unsigned int)(i + 1) )
        {
          v15 = 16LL * (unsigned int)i;
          if ( IoGetAffinityInterrupt(
                 *(PKINTERRUPT *)(*(_QWORD *)(v13 + 120) + 48 * i + 24),
                 (PGROUP_AFFINITY)(v15 + *(_QWORD *)(v13 + 128))) < 0 )
          {
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 584) + 128LL) + v15 + 8) = -1;
            *(_QWORD *)(v15 + *(_QWORD *)(*(_QWORD *)(a1 + 584) + 128LL)) = 0LL;
          }
          v13 = *(_QWORD *)(a1 + 584);
        }
      }
    }
    else
    {
      *v10 = v18;
    }
  }
  return v8;
}
