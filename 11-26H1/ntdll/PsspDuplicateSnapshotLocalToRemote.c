/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180159A3C
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800B2210 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800B2AB0 (PssNtFreeSnapshot.c)
 *     Feature_2609059128__private_IsEnabledDeviceUsageNoInline @ 0x18015999C (Feature_2609059128__private_IsEnabledDeviceUsageNoInline.c)
 *     PssValidateSnapshotDescriptor @ 0x1801599E4 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18015F580 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, void *a2, PVOID *a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // rdx
  _OWORD *v11; // rax
  _BYTE *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  void *v20; // rdx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rax
  NTSTATUS v28; // ebx
  void *v29; // rdx
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  void *v34; // rdx
  NTSTATUS v35; // eax
  void *v36; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+50h] [rbp-B0h]
  _BYTE Buffer[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+64h] [rbp-9Ch]
  char *v42; // [rsp+180h] [rbp+80h]
  HANDLE TargetHandle; // [rsp+3C8h] [rbp+2C8h] BYREF
  HANDLE v44; // [rsp+3E0h] [rbp+2E0h] BYREF
  PVOID v45; // [rsp+3E8h] [rbp+2E8h]
  HANDLE v46; // [rsp+3F8h] [rbp+2F8h] BYREF
  HANDLE v47; // [rsp+410h] [rbp+310h] BYREF
  HANDLE v48; // [rsp+430h] [rbp+330h] BYREF
  HANDLE SourceHandle; // [rsp+450h] [rbp+350h] BYREF
  HANDLE v50; // [rsp+4C8h] [rbp+3C8h] BYREF

  v39 = a4;
  result = PssValidateSnapshotDescriptor((__int64 *)a1);
  if ( (int)result < 0 )
    return result;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x478uLL);
  v8 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v8 > 0xFFFFFFFF )
  {
    v28 = -1073741675;
    goto LABEL_34;
  }
  v9 = v8 + 1144;
  if ( (unsigned int)(v8 + 1144) < 0x478 )
  {
    v28 = -1073741675;
LABEL_34:
    if ( SourceHandle )
      ZwDuplicateObject(a2, SourceHandle, 0LL, 0LL, 0, 0, 1u);
    if ( v48 )
      ZwDuplicateObject(a2, v48, 0LL, 0LL, 0, 0, 1u);
    if ( v46 )
      ZwDuplicateObject(a2, v46, 0LL, 0LL, 0, 0, 1u);
    if ( v47 )
      ZwDuplicateObject(a2, v47, 0LL, 0LL, 0, 0, 1u);
    if ( v44 )
      ZwDuplicateObject(a2, v44, 0LL, 0LL, 0, 0, 1u);
    if ( TargetHandle )
      ZwDuplicateObject(a2, TargetHandle, 0LL, 0LL, 0, 0, 1u);
    if ( v50 )
      ZwDuplicateObject(a2, v50, 0LL, 0LL, 0, 0, 1u);
    goto LABEL_48;
  }
  v10 = 8LL;
  v11 = (_OWORD *)a1;
  v12 = Buffer;
  do
  {
    v13 = v11[1];
    *(_OWORD *)v12 = *v11;
    v14 = v11[2];
    *((_OWORD *)v12 + 1) = v13;
    v15 = v11[3];
    *((_OWORD *)v12 + 2) = v14;
    v16 = v11[4];
    *((_OWORD *)v12 + 3) = v15;
    v17 = v11[5];
    *((_OWORD *)v12 + 4) = v16;
    v18 = v11[6];
    *((_OWORD *)v12 + 5) = v17;
    v19 = v11[7];
    v11 += 8;
    *((_OWORD *)v12 + 6) = v18;
    v12 += 128;
    *((_OWORD *)v12 - 1) = v19;
    --v10;
  }
  while ( v10 );
  v20 = *(void **)(a1 + 872);
  v21 = v11[1];
  *(_OWORD *)v12 = *v11;
  v22 = v11[2];
  *((_OWORD *)v12 + 1) = v21;
  v23 = v11[3];
  *((_OWORD *)v12 + 2) = v22;
  v24 = v11[4];
  *((_OWORD *)v12 + 3) = v23;
  v25 = v11[5];
  *((_OWORD *)v12 + 4) = v24;
  v26 = v11[6];
  v27 = *((_QWORD *)v11 + 14);
  *((_OWORD *)v12 + 5) = v25;
  *((_OWORD *)v12 + 6) = v26;
  *((_QWORD *)v12 + 14) = v27;
  TargetHandle = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  SourceHandle = 0LL;
  v50 = 0LL;
  if ( v20 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v20, a2, &TargetHandle, 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v29 = *(void **)(a1 + 896);
  if ( v29 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, a2, &v44, 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v30 = *(void **)(a1 + 920);
  if ( v30 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, a2, &v46, 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v31 = *(void **)(a1 + 944);
  if ( v31 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, &v47, 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v32 = *(void **)(a1 + 976);
  if ( v32 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, a2, &v48, 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v33 = *(void **)(a1 + 1008);
  if ( v33 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, a2, &SourceHandle, 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v34 = *(void **)(a1 + 1128);
  if ( v34 )
  {
    v28 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v34, a2, &v50, 0, 0, 2u);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  RegionSize = v9;
  v28 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v28 < 0 )
    goto LABEL_32;
  v41 = v41 & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 904) )
    v45 = (char *)BaseAddress + 1144;
  if ( *(_WORD *)(a1 + 280) )
    v42 = (char *)BaseAddress + 296;
  v35 = (unsigned int)Feature_2609059128__private_IsEnabledDeviceUsageNoInline()
      ? NtWriteVirtualMemory(a2, BaseAddress, Buffer, 0x478uLL, 0LL)
      : NtWriteVirtualMemory(a2, BaseAddress, Buffer, v9, 0LL);
  v28 = v35;
  if ( v35 < 0
    || (v36 = *(void **)(a1 + 904)) != 0LL && (v28 = NtWriteVirtualMemory(a2, v45, v36, (unsigned int)v8, 0LL), v28 < 0) )
  {
LABEL_32:
    if ( BaseAddress )
    {
      RegionSize = v9;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    goto LABEL_34;
  }
  v28 = 0;
  *a3 = BaseAddress;
LABEL_48:
  if ( (v39 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v28;
}
