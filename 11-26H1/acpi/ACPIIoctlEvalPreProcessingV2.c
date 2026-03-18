/*
 * XREFs of ACPIIoctlEvalPreProcessingV2 @ 0x140024044
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlEvalControlMethod @ 0x140023DBC (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x14003FB40 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     CreateObjectHandle @ 0x14001F000 (CreateObjectHandle.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1400630D0 (AcpiIoctlArgumentToPackageObjV2.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV2(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  __int64 ObjectHandle; // r12
  int v10; // ecx
  void *v11; // rdi
  unsigned int v12; // r13d
  unsigned int v13; // eax
  int *v14; // r14
  __int64 *v15; // r15
  size_t v16; // rbx
  _BYTE *Pool2; // rsi
  KIRQL v18; // bp
  int NameSpaceObjectNoLock; // ebx
  __int64 v20; // rdx
  void *v21; // r15
  int v22; // eax
  __int64 v24; // rax
  _DWORD *v25; // rsi
  int v26; // edx
  __int64 i; // rbp
  __int16 v28; // cx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 Src; // [rsp+30h] [rbp-F8h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-F0h]
  _QWORD *v33; // [rsp+40h] [rbp-E8h]
  _QWORD *v34; // [rsp+48h] [rbp-E0h]
  unsigned int *v35; // [rsp+50h] [rbp-D8h]
  _BYTE P[128]; // [rsp+60h] [rbp-C8h] BYREF

  v32 = a5;
  ObjectHandle = 0LL;
  v10 = *(_DWORD *)(a3 + 8);
  v11 = 0LL;
  v33 = a6;
  v12 = 0;
  v34 = a7;
  v35 = a8;
  v13 = *(_DWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v13 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v10 - 1) <= 0x16 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  BYTE4(Src) = 0;
  LODWORD(Src) = v14[1];
  v15 = *(__int64 **)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 760);
  if ( !v15 )
    return 3221225486LL;
  v16 = -1LL;
  do
    ++v16;
  while ( *((_BYTE *)&Src + v16) );
  if ( v16 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v16 + 1, 1768973121LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, &Src, v16);
  Pool2[v16] = 0;
  v18 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  Src = 0LL;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( *Pool2 )
  {
    if ( (*(_BYTE *)(*v15 + 64) & 4) != 0 )
    {
      NameSpaceObjectNoLock = -1073741738;
    }
    else
    {
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, *v15, &Src, 1);
      if ( NameSpaceObjectNoLock >= 0 && Src )
      {
        ObjectHandle = CreateObjectHandle(Src);
        DereferenceObjectEx(v20);
      }
      if ( NameSpaceObjectNoLock == 32772 )
        NameSpaceObjectNoLock = 259;
    }
  }
  else
  {
    NameSpaceObjectNoLock = -1073741810;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v18);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( NameSpaceObjectNoLock < 0 )
    return (unsigned int)NameSpaceObjectNoLock;
  v21 = (void *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
  if ( !v21 )
  {
LABEL_57:
    NameSpaceObjectNoLock = -1073741670;
LABEL_58:
    if ( ObjectHandle )
      AMLIDereferenceHandleEx(ObjectHandle);
    if ( v21 )
      ExFreePoolWithTag(v21, 0x52706341u);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x52706341u);
    return (unsigned int)NameSpaceObjectNoLock;
  }
  v22 = *v14;
  if ( *v14 == 1265198401 )
  {
LABEL_22:
    *v32 = ObjectHandle;
    *v33 = v21;
    *v34 = v11;
    *v35 = v12;
    return 0LL;
  }
  switch ( v22 )
  {
    case 1281975617:
      goto LABEL_54;
    case 1315530049:
      v24 = (unsigned int)v14[3];
      if ( !(_DWORD)v24 )
        goto LABEL_22;
      v25 = v14 + 4;
      v12 = v14[3];
      v11 = (void *)ExAllocatePool2(64LL, 40 * v24, 1097884481LL);
      if ( v11 )
      {
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= v12 )
            goto LABEL_22;
          if ( *(_WORD *)v25 == 4 )
            v28 = 4;
          else
            v28 = *(_WORD *)v25 + 1;
          *((_WORD *)v11 + 20 * i + 1) = v28;
          if ( !*(_WORD *)v25 )
          {
            *((_QWORD *)v11 + 5 * i + 2) = (unsigned int)v25[2];
            goto LABEL_37;
          }
          if ( *(_WORD *)v25 == 1 || *(_WORD *)v25 == 2 )
            goto LABEL_42;
          if ( *(_WORD *)v25 != 4 )
            break;
          NameSpaceObjectNoLock = AcpiIoctlArgumentToPackageObjV2(
                                    (_DWORD)v25,
                                    v26,
                                    0,
                                    (int)v11 + 24 + 40 * (int)i,
                                    (__int64)v11 + 40 * i + 32);
          if ( NameSpaceObjectNoLock < 0 )
            goto LABEL_58;
LABEL_37:
          v29 = (unsigned int)v25[1];
          if ( (unsigned int)v29 < 4 )
            v29 = 4LL;
          v25 = (_DWORD *)((char *)v25 + v29 + 8);
        }
        *((_WORD *)v11 + 20 * i + 1) = 3;
LABEL_42:
        v26 = (_DWORD)v25 + 8;
        *((_DWORD *)v11 + 10 * i + 6) = v25[1];
        *((_QWORD *)v11 + 5 * i + 4) = (unsigned __int64)(v25 + 2) & -(__int64)(v25[1] != 0);
        goto LABEL_37;
      }
      goto LABEL_57;
    case 1298752833:
LABEL_54:
      v12 = 1;
      v30 = ExAllocatePool2(64LL, 40LL, 1097884481LL);
      v11 = (void *)v30;
      if ( v30 )
      {
        if ( *v14 == 1281975617 )
        {
          *(_WORD *)(v30 + 2) = 1;
          *(_QWORD *)(v30 + 16) = (unsigned int)v14[2];
        }
        else
        {
          *(_WORD *)(v30 + 2) = 2;
          *(_DWORD *)(v30 + 24) = v14[2];
          *(_QWORD *)(v30 + 32) = (unsigned __int64)(v14 + 3) & -(__int64)(v14[2] != 0);
        }
        goto LABEL_22;
      }
      goto LABEL_57;
  }
  return 3221225711LL;
}
