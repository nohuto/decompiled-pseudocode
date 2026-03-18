/*
 * XREFs of ACPIIoctlEvalPreProcessingV1Ex @ 0x140022548
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlEvalControlMethod @ 0x140023DBC (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x14003FB40 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x14003F0D0 (AcpiIoctlArgumentToPackageObjV1.c)
 *     AMLIIsObjectInGivenScope @ 0x140043B44 (AMLIIsObjectInGivenScope.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 ACPIIoctlEvalPreProcessingV1Ex(ULONG_PTR a1, __int64 a2, __int64 a3, ...)
{
  int v3; // r9d
  _WORD *v4; // rdi
  void *Pool2; // r14
  unsigned int v6; // eax
  unsigned int v7; // r12d
  int *v8; // rsi
  __int64 *v9; // rbp
  int v10; // eax
  __int64 v11; // r15
  int v12; // ebx
  int v13; // eax
  __int64 v15; // rax
  _WORD *v16; // rsi
  __int64 i; // rbp
  __int16 v18; // cx
  __int64 v19; // r8
  __int64 v20; // rax
  _QWORD *v21; // rcx
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
  if ( (unsigned int)(v3 - 1) <= 0x12 )
    return 3221225507LL;
  v8 = *(int **)(a2 + 24);
  v9 = *(__int64 **)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( !v9 )
    return 3221225486LL;
  _strupr((char *)v8 + 4);
  v10 = AMLIGetNameSpaceObject((_BYTE *)v8 + 4, v9, (__int64 *)va, 1);
  v11 = v24;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v12 = AMLIIsObjectInGivenScope(v24, v9);
    if ( v12 >= 0 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
      if ( Pool2 )
      {
        v13 = *v8;
        if ( *v8 == 1097426241 )
        {
LABEL_8:
          *v26 = v11;
          *v27 = Pool2;
          *v28 = v4;
          *v29 = v7;
          return 0LL;
        }
        if ( v13 == 1164535105 || v13 == 1147757889 )
        {
          v7 = 1;
          v22 = ExAllocatePool2(64LL, 40LL, 1097884481LL);
          v4 = (_WORD *)v22;
          if ( v22 )
          {
            v23 = v8 + 66;
            if ( *v8 == 1147757889 )
            {
              *(_WORD *)(v22 + 2) = 1;
              *(_QWORD *)(v22 + 16) = *v23;
            }
            else
            {
              *(_WORD *)(v22 + 2) = 2;
              *(_DWORD *)(v22 + 24) = v8[65];
              *(_QWORD *)(v22 + 32) = v23;
            }
            goto LABEL_8;
          }
        }
        else
        {
          if ( v13 != 1181312321 )
          {
            v12 = -1073741585;
            goto LABEL_31;
          }
          v15 = (unsigned int)v8[66];
          if ( !(_DWORD)v15 )
            goto LABEL_8;
          v7 = v8[66];
          v16 = v8 + 67;
          v4 = (_WORD *)ExAllocatePool2(64LL, 40 * v15, 1097884481LL);
          if ( v4 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              if ( (unsigned int)i >= v7 )
                goto LABEL_8;
              if ( *v16 == 4 )
                v18 = 4;
              else
                v18 = *v16 + 1;
              v19 = 5 * i;
              v4[20 * i + 1] = v18;
              if ( *v16 )
              {
                if ( *v16 == 1 || *v16 == 2 )
                  goto LABEL_21;
                if ( *v16 != 4 )
                {
                  v4[20 * i + 1] = 3;
LABEL_21:
                  *(_DWORD *)&v4[20 * i + 12] = (unsigned __int16)v16[1];
                  *(_QWORD *)&v4[20 * i + 16] = (unsigned __int64)(v16 + 2) & -(__int64)(v16[1] != 0);
                  goto LABEL_22;
                }
                LOBYTE(v19) = 1;
                v12 = AcpiIoctlArgumentToPackageObjV1(
                        (_DWORD)v16,
                        1,
                        v19,
                        (int)v4 + 24 + 40 * (int)i,
                        (__int64)&v4[20 * i + 16]);
                if ( v12 < 0 )
                  goto LABEL_31;
              }
              else
              {
                v21 = &v4[4 * v19 + 8];
                *v21 = 0LL;
                memmove(v21, v16 + 2, (unsigned __int16)v16[1]);
              }
LABEL_22:
              v20 = (unsigned __int16)v16[1];
              if ( (unsigned __int16)v20 < 4u )
                v20 = 4LL;
              v16 = (_WORD *)((char *)v16 + v20 + 4);
            }
          }
        }
      }
      v12 = -1073741670;
    }
  }
LABEL_31:
  if ( v11 )
    AMLIDereferenceHandleEx(v11);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x52706341u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  return (unsigned int)v12;
}
