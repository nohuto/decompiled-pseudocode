/*
 * XREFs of ACPIIoctlEvalPreProcessingV2Ex @ 0x140062778
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlEvalControlMethod @ 0x140023DBC (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x14003FB40 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsObjectInGivenScope @ 0x140043B44 (AMLIIsObjectInGivenScope.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1400630D0 (AcpiIoctlArgumentToPackageObjV2.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 ACPIIoctlEvalPreProcessingV2Ex(ULONG_PTR a1, __int64 a2, __int64 a3, ...)
{
  int v3; // r9d
  _WORD *v4; // rdi
  void *Pool2; // r14
  unsigned int v6; // eax
  unsigned int v7; // r12d
  int *v9; // rsi
  __int64 *v10; // rbp
  int v11; // eax
  __int64 v12; // r15
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rax
  int *v16; // rsi
  __int64 i; // rbp
  __int16 v18; // cx
  __int64 v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 *v26; // [rsp+80h] [rbp+28h]
  _QWORD *v27; // [rsp+88h] [rbp+30h]
  _QWORD *v28; // [rsp+90h] [rbp+38h]
  unsigned int *v29; // [rsp+98h] [rbp+40h]
  va_list va1; // [rsp+A0h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, __int64 *);
  v27 = va_arg(va1, _QWORD *);
  v28 = va_arg(va1, _QWORD *);
  v29 = va_arg(va1, unsigned int *);
  v3 = *(_DWORD *)(a3 + 8);
  v4 = 0LL;
  v24 = 0LL;
  Pool2 = 0LL;
  v6 = *(_DWORD *)(a3 + 16);
  v7 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v6 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v3 - 1) <= 0x16 )
    return 3221225507LL;
  v9 = *(int **)(a2 + 24);
  v10 = *(__int64 **)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( !v10 )
    return 3221225486LL;
  _strupr((char *)v9 + 4);
  v11 = AMLIGetNameSpaceObject((_BYTE *)v9 + 4, v10, (__int64 *)va, 1);
  v12 = v24;
  v13 = v11;
  if ( v11 < 0 )
    goto LABEL_11;
  v13 = AMLIIsObjectInGivenScope(v24, v10);
  if ( v13 < 0 )
    goto LABEL_11;
  Pool2 = (void *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
  if ( !Pool2 )
    goto LABEL_10;
  v14 = *v9;
  if ( *v9 == 1332307265 )
    goto LABEL_46;
  if ( v14 == 1349084481 || v14 == 1365861697 )
  {
    v7 = 1;
    v22 = ExAllocatePool2(64LL, 40LL, 1097884481LL);
    v4 = (_WORD *)v22;
    if ( !v22 )
      goto LABEL_10;
    v23 = v9 + 66;
    if ( *v9 == 1349084481 )
    {
      *(_WORD *)(v22 + 2) = 1;
      *(_QWORD *)(v22 + 16) = *v23;
    }
    else
    {
      *(_WORD *)(v22 + 2) = 2;
      *(_DWORD *)(v22 + 24) = v9[65];
      *(_QWORD *)(v22 + 32) = v23;
    }
LABEL_46:
    *v26 = v12;
    *v27 = Pool2;
    *v28 = v4;
    *v29 = v7;
    return 0LL;
  }
  if ( v14 != 1382638913 )
  {
    v13 = -1073741585;
    goto LABEL_11;
  }
  v15 = (unsigned int)v9[66];
  if ( !(_DWORD)v15 )
    goto LABEL_46;
  v7 = v9[66];
  v16 = v9 + 67;
  v4 = (_WORD *)ExAllocatePool2(64LL, 40 * v15, 1097884481LL);
  if ( v4 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v7 )
        goto LABEL_46;
      if ( *(_WORD *)v16 == 4 )
        v18 = 4;
      else
        v18 = *(_WORD *)v16 + 1;
      v19 = 5 * i;
      v4[20 * i + 1] = v18;
      if ( *(_WORD *)v16 )
      {
        if ( *(_WORD *)v16 == 1 || *(_WORD *)v16 == 2 )
          goto LABEL_37;
        if ( *(_WORD *)v16 != 4 )
        {
          v4[20 * i + 1] = 3;
LABEL_37:
          *(_DWORD *)&v4[20 * i + 12] = v16[1];
          *(_QWORD *)&v4[20 * i + 16] = (unsigned __int64)(v16 + 2) & -(__int64)(v16[1] != 0);
          goto LABEL_39;
        }
        LOBYTE(v19) = 1;
        v13 = AcpiIoctlArgumentToPackageObjV2(
                (_DWORD)v16,
                1,
                v19,
                (int)v4 + 24 + 40 * (int)i,
                (__int64)&v4[20 * i + 16]);
        if ( v13 < 0 )
          goto LABEL_11;
      }
      else
      {
        v20 = &v4[4 * v19 + 8];
        *v20 = 0LL;
        memmove(v20, v16 + 2, (unsigned int)v16[1]);
      }
LABEL_39:
      v21 = (unsigned int)v16[1];
      if ( (unsigned int)v21 < 4 )
        v21 = 4LL;
      v16 = (int *)((char *)v16 + v21 + 8);
    }
  }
LABEL_10:
  v13 = -1073741670;
LABEL_11:
  if ( v12 )
    AMLIDereferenceHandleEx(v12);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x52706341u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  return (unsigned int)v13;
}
