/*
 * XREFs of ArbQueryConflict @ 0x14078BCA0
 * Callers:
 *     IopMemQueryConflict @ 0x1407A95C0 (IopMemQueryConflict.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ArbpBuildAlternative @ 0x14078C8F4 (ArbpBuildAlternative.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     RtlCopyRangeList @ 0x140AE2A90 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140AE2C50 (RtlFreeRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x140B11B70 (RtlDeleteOwnersRanges.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbQueryConflict(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // r14d
  void *Pool2; // rsi
  int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS DeviceProperty; // eax
  int v13; // ecx
  NTSTATUS v14; // eax
  int v15; // ecx
  void *v16; // r12
  void *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  _QWORD *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  _BYTE *v29; // [rsp+70h] [rbp-90h]
  __int64 *v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+80h] [rbp-80h]
  __int64 *v32; // [rsp+88h] [rbp-78h]
  __int16 v33; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  _BYTE v35[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DEVICE_OBJECT *v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  int PropertyBuffer; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v39[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v40; // [rsp+100h] [rbp+0h] BYREF
  __int64 v41; // [rsp+108h] [rbp+8h]

  memset_0(v35, 0, 0x60uLL);
  memset_0(&v40, 0, 0x40uLL);
  v21 = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  v6 = 10;
  memset_0(&v25, 0, 0x50uLL);
  v7 = a1[42];
  v8 = a1[5];
  v22 = a1[41];
  a1[42] = ArbpQueryConflictCallback;
  v9 = a1[6];
  a1[41] = &v21;
  v24 = v7;
  v10 = RtlCopyRangeList(v9, v8);
  if ( v10 < 0 )
    goto LABEL_19;
  v10 = ArbpBuildAlternative(a1, *(_QWORD *)(a2 + 8), &v40);
  if ( v10 < 0 )
    goto LABEL_19;
  v26 = v41;
  v28 = v41;
  v25 = v40;
  v30 = &v40;
  v27 = v40;
  v11 = *(struct _DEVICE_OBJECT **)a2;
  v32 = &v40;
  v29 = v35;
  v31 = 1;
  v33 = 4;
  v37 = 4;
  v36 = v11;
  DeviceProperty = IoGetDeviceProperty(v11, DevicePropertyLegacyBusType, 4u, &PropertyBuffer, &ResultLength);
  v13 = PropertyBuffer;
  if ( DeviceProperty < 0 )
    v13 = 1;
  PropertyBuffer = v13;
  v14 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)a2, DevicePropertyBusNumber, 4u, v39, &ResultLength);
  v15 = v39[0];
  if ( v14 < 0 )
    v15 = 0;
  v39[0] = v15;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    v10 = -1073741670;
LABEL_19:
    v19 = v22;
    goto LABEL_20;
  }
  v10 = guard_dispatch_icall_no_overrides((__int64)a1, (__int64)&v25);
  if ( v10 < 0 )
    goto LABEL_19;
  RtlDeleteOwnersRanges(a1[6]);
  while ( 1 )
  {
    v27 = v25;
    v28 = v26;
    v21 = 0LL;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)a1, (__int64)&v25) )
      break;
    if ( v4 == v6 )
    {
      v6 += 5;
      v16 = Pool2;
      v17 = (void *)ExAllocatePool2(0x100uLL);
      Pool2 = v17;
      if ( !v17 )
      {
        v10 = -1073741670;
        Pool2 = v16;
LABEL_18:
        v7 = v24;
        goto LABEL_19;
      }
      v18 = v4;
      memmove(v17, v16, 24LL * v4);
      ExFreePoolWithTag(v16, 0);
    }
    else
    {
      v18 = v4;
    }
    ++v4;
    if ( !v21 )
    {
      *((_QWORD *)Pool2 + 3 * v18) = 0LL;
      *((_QWORD *)Pool2 + 3 * v18 + 1) = 0LL;
      *((_QWORD *)Pool2 + 3 * v18 + 2) = -1LL;
      break;
    }
    *((_QWORD *)Pool2 + 3 * v18) = v21[3];
    *((_QWORD *)Pool2 + 3 * v18 + 1) = *v21;
    *((_QWORD *)Pool2 + 3 * v18 + 2) = v21[1];
    v10 = RtlDeleteOwnersRanges(a1[6]);
    if ( v10 < 0 )
      goto LABEL_18;
  }
  RtlFreeRangeList(a1[6]);
  v7 = v24;
  v19 = v22;
  a1[42] = v24;
  a1[41] = v19;
  **(_QWORD **)(a2 + 24) = Pool2;
  **(_DWORD **)(a2 + 16) = v4;
  v10 = 0;
LABEL_20:
  if ( (v33 & 0x10) != 0 )
  {
    ExFreePoolWithTag(P, 0);
    v33 &= ~0x10u;
  }
  if ( v10 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    RtlFreeRangeList(a1[6]);
    a1[42] = v7;
    a1[41] = v19;
    **(_QWORD **)(a2 + 24) = 0LL;
  }
  return (unsigned int)v10;
}
