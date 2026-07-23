/*
 * XREFs of PsSetCpuQuotaInformation @ 0x1406178F8
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeSetSchedulingGroupWeights @ 0x14043DB7C (KeSetSchedulingGroupWeights.c)
 *     PsGetSessionSchedulingGroup @ 0x14077E31C (PsGetSessionSchedulingGroup.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsSetCpuQuotaInformation(volatile void *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  SIZE_T v4; // rsi
  __int64 v7; // rsi
  char *Pool2; // rax
  _QWORD *v9; // r14
  __int64 v10; // r13
  __int64 i; // r8
  int v12; // eax
  NTSTATUS v13; // edi
  __int64 v14; // rbx
  char *v15; // rcx
  __int64 SessionSchedulingGroup; // rax
  PVOID *v17; // rsi
  char *v18; // [rsp+38h] [rbp-30h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = (unsigned int)Length;
  if ( !PsCpuFairShareEnabled )
    return 3221225473LL;
  if ( (unsigned int)Length < 0x10 || (Length & 0xF) != 0 )
    return 3221225476LL;
  if ( AccessMode )
  {
    if ( !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.QuantumTarget, AccessMode) )
      return 3221225569LL;
    if ( AccessMode )
      ProbeForRead(Address, v4, 8u);
  }
  v7 = (unsigned int)v4 >> 4;
  if ( (unsigned __int64)(24 * v7) > 0xFFFFFFFF )
    return 3221225621LL;
  Pool2 = (char *)ExAllocatePool2(0x41uLL);
  v9 = Pool2;
  Object = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v18 = &Pool2[8 * v7];
  v10 = (__int64)&v18[8 * v7];
  for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
  {
    v9[i] = *((_QWORD *)Address + 2 * (unsigned int)i);
    *(_DWORD *)(v10 + 8 * i + 4) = 0;
    v12 = *((_DWORD *)Address + 4 * (unsigned int)i + 2);
    *(_DWORD *)(v10 + 8 * i) = v12;
    if ( (unsigned __int16)(v12 - 1) > 8u )
    {
      v13 = -1073740712;
      goto LABEL_29;
    }
  }
  v13 = 0;
  v14 = 0LL;
  v15 = v18;
  while ( (unsigned int)v14 < (unsigned int)v7 )
  {
    Object = 0LL;
    v13 = ObReferenceObjectByHandle((HANDLE)v9[v14], 2u, MmSessionObjectType, AccessMode, &Object, 0LL);
    v9[v14] = Object;
    if ( v13 < 0 )
      goto LABEL_26;
    SessionSchedulingGroup = PsGetSessionSchedulingGroup();
    v15 = v18;
    *(_QWORD *)&v18[8 * v14] = SessionSchedulingGroup;
    if ( !SessionSchedulingGroup )
    {
      v13 = -1073740715;
      goto LABEL_26;
    }
    v14 = (unsigned int)(v14 + 1);
  }
  KeSetSchedulingGroupWeights(v7, v15, v10);
LABEL_26:
  if ( (_DWORD)v14 )
  {
    v17 = (PVOID *)&v9[(unsigned int)v14];
    do
    {
      ObfDereferenceObjectWithTag(*--v17, 0x746C6644u);
      LODWORD(v14) = v14 - 1;
    }
    while ( (_DWORD)v14 );
  }
LABEL_29:
  ExFreePoolWithTag(v9, 0x63537350u);
  return (unsigned int)v13;
}
