/*
 * XREFs of PsCreateMinimalProcess @ 0x1407FC198
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14063CDAC (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     PspCreatePicoProcess @ 0x1407FC8C0 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x1407FDEB8 (PspCreatePartitionSystemProcess.c)
 *     CmpInitializeRegistryProcess @ 0x140857024 (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x140ADC7C0 (PspCreateProcess.c)
 *     VmCreateMemoryProcess @ 0x140B4F050 (VmCreateMemoryProcess.c)
 *     PspCreateSecureSystemProcess @ 0x140CD803C (PspCreateSecureSystemProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     KeKvaShadowingActive @ 0x1404E6308 (KeKvaShadowingActive.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspDeleteCpuAndMemoryPartitionContext @ 0x14077C3F8 (PspDeleteCpuAndMemoryPartitionContext.c)
 *     PsTerminateMinimalProcess @ 0x1407FA5A8 (PsTerminateMinimalProcess.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     DbgkpSendApiMessage @ 0x1409534DC (DbgkpSendApiMessage.c)
 *     PsTerminateProcess @ 0x14095690C (PsTerminateProcess.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     PspDeleteCreateProcessContext @ 0x140A00524 (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x140A00BC4 (PspBuildCreateProcessContext.c)
 *     PspCreateObjectHandle @ 0x140A0406C (PspCreateObjectHandle.c)
 *     PspGetCpuAndMemoryPartitionContext @ 0x140AAE864 (PspGetCpuAndMemoryPartitionContext.c)
 *     PsAssignProcessToJobObject @ 0x140AC5CC0 (PsAssignProcessToJobObject.c)
 *     MmSynchronizeAddressPolicy @ 0x140B256A0 (MmSynchronizeAddressPolicy.c)
 *     PspSetMinimalProcessName @ 0x140B69854 (PspSetMinimalProcessName.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        void *a5,
        int a6,
        int a7,
        __int64 a8,
        void *a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12)
{
  unsigned int v14; // ebx
  void *v15; // r12
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  int v18; // r14d
  int Process; // esi
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  int CpuAndMemoryPartitionContext; // eax
  __int64 v23; // rcx
  _BYTE *v24; // rdi
  char v25; // al
  volatile signed __int32 *v26; // rdi
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  __int16 v29; // [rsp+88h] [rbp-78h] BYREF
  void *v30; // [rsp+90h] [rbp-70h] BYREF
  void *v31; // [rsp+98h] [rbp-68h] BYREF
  PVOID v32; // [rsp+A0h] [rbp-60h]
  void *v33; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  _QWORD *v37; // [rsp+C8h] [rbp-38h]
  _DWORD v38[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v39[176]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v40[48]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v41; // [rsp+360h] [rbp+260h]
  __int64 v42; // [rsp+368h] [rbp+268h]
  __int128 Src; // [rsp+370h] [rbp+270h] BYREF
  __int128 v44; // [rsp+380h] [rbp+280h]
  __int64 v45; // [rsp+390h] [rbp+290h]
  _OWORD v46[3]; // [rsp+398h] [rbp+298h] BYREF
  _BYTE v47[512]; // [rsp+3D0h] [rbp+2D0h] BYREF

  v34 = a10;
  v37 = a12;
  v36 = a3;
  v35 = a2;
  v45 = 0LL;
  v32 = a5;
  v33 = a9;
  v29 = 0;
  Src = 0LL;
  v44 = 0LL;
  memset(v46, 0, sizeof(v46));
  memset_0(v40, 0, 0x190uLL);
  v30 = 0LL;
  v31 = 0LL;
  Object = 0LL;
  v14 = 0;
  v15 = 0LL;
  memset_0(v47, 0, 0x1F8uLL);
  if ( a5 )
    v14 = 1;
  else
    v32 = (PVOID)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v16, v17);
  v18 = a6 | 0x800;
  if ( !a11
    || (v45 = 0LL,
        *((_QWORD *)&v44 + 1) = a11,
        *((_QWORD *)&Src + 1) = 131085LL,
        *(_QWORD *)&v44 = 2LL,
        *(_QWORD *)&Src = 40LL,
        Process = PspBuildCreateProcessContext(&Src),
        Process >= 0) )
  {
    CpuAndMemoryPartitionContext = PspGetCpuAndMemoryPartitionContext(
                                     a1,
                                     v18,
                                     (unsigned int)&v33,
                                     a9 != 0LL,
                                     (__int64)&v30,
                                     (__int64)&v31);
    v15 = v30;
    Process = CpuAndMemoryPartitionContext;
    if ( CpuAndMemoryPartitionContext >= 0 )
    {
      v23 = v34;
      LOBYTE(v21) = a4;
      if ( v30 )
        v23 = (__int64)v30;
      Process = PspAllocateProcess(
                  a1,
                  0,
                  0,
                  (_DWORD)v21,
                  0,
                  0,
                  0LL,
                  (__int64)v32,
                  v18,
                  a7,
                  (__int64)v47,
                  v14,
                  v23,
                  (__int64)v31,
                  (__int64)&v29,
                  (__int64)&Object);
      if ( Process >= 0 )
      {
        if ( a8 )
          *((_QWORD *)Object + 200) = a8;
        v24 = Object;
        if ( (*((_DWORD *)Object + 383) & 1) != 0 && !*((_QWORD *)Object + 200) && (unsigned int)KeKvaShadowingActive() )
        {
          v24[352] = 1;
          if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 383, 0xEu) )
          {
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v46);
            MmSynchronizeAddressPolicy(Object);
            KiUnstackDetachProcess((__int64)v46, 0);
          }
          v24 = Object;
        }
        if ( v35 )
        {
          PspSetMinimalProcessName(v24, v35);
          v24 = Object;
        }
        v25 = 1;
        if ( (_BYTE)v29 )
          v25 = 3;
        Process = PspInsertProcess(v24, 0LL, v25, v36, (__int64)v40);
        if ( Process >= 0 )
        {
          v14 |= 4u;
          if ( !a9 || (Process = PsAssignProcessToJobObject(a9, (ULONG_PTR)Object), Process >= 0) )
          {
            v26 = (volatile signed __int32 *)Object;
            memset_0(v39, 0, sizeof(v39));
            _InterlockedOr(v26 + 125, 0x400001u);
            if ( *((_QWORD *)v26 + 97) )
            {
              memset_0(v38, 0, sizeof(v38));
              v38[0] = 6291512;
              v38[1] = 8;
              v38[10] = 2;
              DbgkpSendApiMessage((PVOID)v26);
            }
            v14 |= 2u;
            v41 |= 0x200u;
            Process = PspCreateObjectHandle(Object, v40, PsProcessType);
            if ( Process >= 0 )
            {
              v14 &= ~4u;
              *v37 = v42;
            }
          }
        }
        else
        {
          PspRundownSingleProcess((PRKPROCESS)Object);
        }
      }
      else
      {
        Object = 0LL;
      }
    }
  }
  if ( (v14 & 2) != 0 )
    SeDeleteAccessState(v40);
  if ( Object )
  {
    if ( v14 >= 4 )
    {
      if ( *((_QWORD *)Object + 200) )
        PsTerminateProcess(Object, (unsigned int)Process);
      else
        PsTerminateMinimalProcess((PRKPROCESS)Object, Process, v20, v21);
    }
    ObfDereferenceObjectWithTag(Object, 0x72437350u);
  }
  PspDeleteCpuAndMemoryPartitionContext(v15, v31);
  PspDeleteCreateProcessContext(v47);
  if ( (v14 & 1) == 0 )
    ObfDereferenceObject(v32);
  return (unsigned int)Process;
}
