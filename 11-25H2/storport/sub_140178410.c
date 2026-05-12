/*
 * XREFs of sub_140178410 @ 0x140178410
 * Callers:
 *     sub_140059BAC @ 0x140059BAC (sub_140059BAC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140178410(__int64 a1, unsigned __int8 a2)
{
  bool v4; // zf
  NTSTATUS v5; // eax
  unsigned int v6; // r15d
  ULONG Version; // ecx
  bool v8; // sf
  __int64 *v9; // rsi
  PKINTERRUPT *InterruptObject; // rax
  __int64 *v11; // rbx
  __int64 *v12; // r14
  PKINTERRUPT v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rsi
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Dst; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF

  v20 = 0LL;
  memset_0(&Dst, 0, sizeof(Dst));
  v4 = *(_DWORD *)(a1 + 4336) == 2;
  Dst.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 32);
  Dst.FullySpecified.InterruptObject = (PKINTERRUPT *)&v20;
  Dst.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)sub_140029D70;
  Dst.Version = 3;
  Dst.FullySpecified.ServiceContext = (PVOID)a1;
  if ( v4 )
  {
    Dst.FullySpecified.SpinLock = 0LL;
  }
  else
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 4344));
    Dst.FullySpecified.SpinLock = (PKSPIN_LOCK)(a1 + 4344);
  }
  *(_WORD *)&Dst.MessageBased.SynchronizeIrql = a2;
  Dst.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)sub_1400356C0;
  v5 = IoConnectInterruptEx(&Dst);
  *(_BYTE *)(a1 + 4369) = 0;
  v6 = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)(a1 + 848) = 0LL;
    return v6;
  }
  Version = Dst.Version;
  *(_DWORD *)(a1 + 860) = Dst.Version;
  if ( Version != 3 )
  {
    *(_QWORD *)(a1 + 848) = v20;
    return v6;
  }
  v8 = *(char *)(a1 + 110) < 0;
  v9 = (__int64 *)(a1 + 4352);
  InterruptObject = Dst.FullySpecified.InterruptObject;
  v11 = (__int64 *)(a1 + 4360);
  *(_BYTE *)(a1 + 4369) = 1;
  v12 = (__int64 *)(a1 + 4352);
  v13 = *InterruptObject;
  *(_QWORD *)(a1 + 4352) = *InterruptObject;
  if ( !v8 )
  {
LABEL_9:
    v14 = sub_1400143E0(64LL, 16LL * *((unsigned int *)v13 + 1), 1917083986LL, *(_QWORD *)(a1 + 8));
    *v11 = v14;
    if ( !v14 )
      return v6;
    goto LABEL_10;
  }
  if ( !*v11 )
  {
    v12 = (__int64 *)(a1 + 4352);
    goto LABEL_9;
  }
LABEL_10:
  v15 = *v9;
  v16 = 0LL;
  if ( *(_DWORD *)(*v9 + 4) )
  {
    do
    {
      v17 = 16LL * (unsigned int)v16;
      if ( IoGetAffinityInterrupt(*(PKINTERRUPT *)(v15 + 48 * v16 + 24), (PGROUP_AFFINITY)(v17 + *v11)) < 0 )
      {
        *(_WORD *)(*v11 + v17 + 8) = -1;
        *(_QWORD *)(v17 + *v11) = 0LL;
      }
      v15 = *v12;
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < *(_DWORD *)(*v12 + 4) );
  }
  return v6;
}
