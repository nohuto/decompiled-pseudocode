/*
 * XREFs of DbgkCaptureLiveDump @ 0x14078DBB8
 * Callers:
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     DbgkpLkmdSnapData @ 0x1405B6580 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapDataEx @ 0x1405B65AC (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapGlobals @ 0x1405B65E4 (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapThread @ 0x1405B6974 (DbgkpLkmdSnapThread.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1405B69D8 (DbgkpLkmdSqmIncrementDword.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     DbgkpLkmdFireCallbacks @ 0x14078E198 (DbgkpLkmdFireCallbacks.c)
 *     DbgkpLkmdSqmIsOptedIn @ 0x14078E700 (DbgkpLkmdSqmIsOptedIn.c)
 *     DbgkpLkmdSqmStatus @ 0x14078E8A8 (DbgkpLkmdSqmStatus.c)
 *     DbgkpTriageDumpInitialize @ 0x14078F480 (DbgkpTriageDumpInitialize.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkCaptureLiveDump(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  REGHANDLE v4; // r15
  PVOID v5; // r13
  PEPROCESS v6; // r12
  _DWORD *v7; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  int v12; // r14d
  _DWORD *v13; // rax
  __int64 i; // rcx
  unsigned int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // rcx
  void *v18; // rcx
  NTSTATUS v19; // eax
  char v20; // cl
  PEPROCESS v21; // rax
  int v22; // eax
  char v23; // al
  void *v24; // rcx
  char v26; // [rsp+40h] [rbp-39h]
  char AccessMode; // [rsp+41h] [rbp-38h]
  unsigned int v28; // [rsp+44h] [rbp-35h]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-31h] BYREF
  PVOID Object; // [rsp+50h] [rbp-29h] BYREF
  __int64 v31; // [rsp+58h] [rbp-21h] BYREF
  _DWORD *v32; // [rsp+60h] [rbp-19h]
  _QWORD *v33; // [rsp+68h] [rbp-11h]
  __int64 v34; // [rsp+70h] [rbp-9h]
  __int128 v35; // [rsp+78h] [rbp-1h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v34 = a4;
  v6 = 0LL;
  Object = a2;
  v7 = 0LL;
  RegHandle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  LODWORD(v32) = 0;
  v31 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  if ( !*(_DWORD *)(a1 + 44) || a3 < 0x40000 || (*(_DWORD *)a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpLkmdSqmIsOptedIn() )
  {
    EtwRegister(&stru_14002C3B0, 0LL, 0LL, &RegHandle);
    v4 = RegHandle;
    if ( RegHandle )
      DbgkpLkmdSqmIncrementDword(RegHandle, 3292);
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x4060uLL, 0x504D444Cu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_53;
  }
  v12 = DbgkpTriageDumpInitialize(PoolWithTag + 2048, Object, a3, PoolWithTag + 2054);
  if ( v12 < 0 )
    goto LABEL_49;
  v12 = guard_dispatch_icall_no_overrides((__int64)(v11 + 2048), *(unsigned int *)(a1 + 4));
  if ( v12 < 0 )
    goto LABEL_49;
  DbgkpLkmdSnapGlobals((__int64)v11);
  LODWORD(RegHandle) = 4 * *(_DWORD *)(a1 + 44) + 4;
  v13 = ExAllocatePoolWithTag((POOL_TYPE)1025, (unsigned int)RegHandle, 0x704E534Bu);
  v7 = v13;
  if ( v13 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
      v13[i] = -1073741823;
    v13[i] = 1112752980;
  }
  v15 = 0;
  v26 = 1;
  v28 = 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_44;
  while ( 1 )
  {
    v16 = v15 + *(_DWORD *)(a1 + 40);
    v17 = *(_QWORD *)(a1 + 48);
    v35 = 0xC0000001uLL;
    v18 = *(void **)(v17 + 8 * v16);
    Object = 0LL;
    v19 = ObReferenceObjectByHandle(v18, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
    v5 = Object;
    v20 = 0;
    if ( v19 == -1073741790 )
      v20 = v26;
    v26 = v20;
    if ( v19 >= 0 )
      break;
    if ( v7 )
      v7[v28] = v19;
    if ( v4 )
    {
      LODWORD(v35) = v19;
      DbgkpLkmdSqmStatus(v4, &v35);
    }
LABEL_33:
    v23 = v26;
    v15 = v28 + 1;
    v28 = v15;
    if ( v15 >= *(_DWORD *)(a1 + 44) )
      goto LABEL_36;
  }
  if ( !v6 )
  {
    v21 = IoThreadToProcess((PETHREAD)Object);
    v6 = v21;
    if ( v21 )
    {
      ObfReferenceObjectWithTag(v21, 0x4C676244u);
      DbgkpLkmdSnapDataEx((__int64)v11, (__int64)v6);
    }
  }
  v22 = DbgkpLkmdSnapThread((__int64)v11, a1, (__int64)v5, (__int64)&v35);
  if ( !v22 )
    v22 = v35;
  if ( v7 )
    v7[v28] = v22;
  DbgkpLkmdFireCallbacks(v11, 2LL, v5);
  if ( v4 )
    DbgkpLkmdSqmStatus(v4, &v35);
  ObfDereferenceObject(v5);
  v5 = 0LL;
  if ( (_DWORD)v35 != -1073741670 )
    goto LABEL_33;
  v23 = v26;
LABEL_36:
  if ( v23 )
  {
LABEL_44:
    v12 = -1073741790;
    goto LABEL_45;
  }
  if ( v6 )
    DbgkpLkmdFireCallbacks(v11, 1LL, v6);
  LODWORD(v31) = *(_DWORD *)(a1 + 44);
  v32 = v7;
  DbgkpLkmdSnapData((int)v11, (int)&v31, 16);
  if ( v7 )
    DbgkpLkmdSnapData((int)v11, (int)v7, RegHandle);
  if ( (int)DbgkpLkmdSnapDataEx((__int64)v11, (__int64)&DbgkpLkmdLiveDumpDiagnosticInformation) >= 0 )
    *v33 = &v31;
  v12 = guard_dispatch_icall_no_overrides((__int64)(v11 + 2048), v34);
LABEL_45:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x4C676244u);
  if ( v5 )
    ObfDereferenceObject(v5);
LABEL_49:
  v24 = (void *)v11[2052];
  if ( v24 )
    ExFreePoolWithTag(v24, 0x4D574454u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x704E534Bu);
LABEL_53:
  if ( v4 )
    EtwUnregister(v4);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x504D444Cu);
  return (unsigned int)v12;
}
