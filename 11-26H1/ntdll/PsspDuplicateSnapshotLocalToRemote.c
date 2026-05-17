/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180159B6C
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800B4CF0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800B5590 (PssNtFreeSnapshot.c)
 *     Feature_2609059128__private_IsEnabledDeviceUsageNoInline @ 0x180159ACC (Feature_2609059128__private_IsEnabledDeviceUsageNoInline.c)
 *     PssValidateSnapshotDescriptor @ 0x180159B14 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18015F680 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, int a4)
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
  __int64 v20; // rdx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+50h] [rbp-B0h]
  _BYTE v40[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+64h] [rbp-9Ch]
  __int64 v42; // [rsp+180h] [rbp+80h]
  _QWORD v43[3]; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v44; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v45; // [rsp+3E8h] [rbp+2E8h]
  _QWORD v46[3]; // [rsp+3F8h] [rbp+2F8h] BYREF
  _QWORD v47[4]; // [rsp+410h] [rbp+310h] BYREF
  _QWORD v48[4]; // [rsp+430h] [rbp+330h] BYREF
  _QWORD v49[15]; // [rsp+450h] [rbp+350h] BYREF
  _QWORD v50[3]; // [rsp+4C8h] [rbp+3C8h] BYREF

  v39 = a4;
  result = PssValidateSnapshotDescriptor((__int64 *)a1);
  if ( (int)result < 0 )
    return result;
  v37 = 0LL;
  v38 = 0LL;
  memset_thunk_772440563353939046(v40, 0, 0x478uLL);
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
    if ( v49[0] )
      ZwDuplicateObject(a2, v49[0], 0LL, 0LL, 0, 0, 1);
    if ( v48[0] )
      ZwDuplicateObject(a2, v48[0], 0LL, 0LL, 0, 0, 1);
    if ( v46[0] )
      ZwDuplicateObject(a2, v46[0], 0LL, 0LL, 0, 0, 1);
    if ( v47[0] )
      ZwDuplicateObject(a2, v47[0], 0LL, 0LL, 0, 0, 1);
    if ( v44 )
      ZwDuplicateObject(a2, v44, 0LL, 0LL, 0, 0, 1);
    if ( v43[0] )
      ZwDuplicateObject(a2, v43[0], 0LL, 0LL, 0, 0, 1);
    if ( v50[0] )
      ZwDuplicateObject(a2, v50[0], 0LL, 0LL, 0, 0, 1);
    goto LABEL_48;
  }
  v10 = 8LL;
  v11 = (_OWORD *)a1;
  v12 = v40;
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
  v20 = *(_QWORD *)(a1 + 872);
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
  v43[0] = 0LL;
  v44 = 0LL;
  v46[0] = 0LL;
  v47[0] = 0LL;
  v48[0] = 0LL;
  v49[0] = 0LL;
  v50[0] = 0LL;
  if ( v20 )
  {
    v28 = ZwDuplicateObject(-1LL, v20, a2, v43, 0, 0, 2);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v29 = *(_QWORD *)(a1 + 896);
  if ( v29 )
  {
    v28 = ZwDuplicateObject(-1LL, v29, a2, &v44, 0, 0, 2);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v30 = *(_QWORD *)(a1 + 920);
  if ( v30 )
  {
    v28 = ZwDuplicateObject(-1LL, v30, a2, v46, 0, 0, 2);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v31 = *(_QWORD *)(a1 + 944);
  if ( v31 )
  {
    v28 = ZwDuplicateObject(-1LL, v31, a2, v47, 0, 0, 2);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v32 = *(_QWORD *)(a1 + 976);
  if ( v32 )
  {
    v28 = ZwDuplicateObject(-1LL, v32, a2, v48, 0, 0, 2);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v33 = *(_QWORD *)(a1 + 1008);
  if ( v33 )
  {
    v28 = ZwDuplicateObject(-1LL, v33, a2, v49, 0, 0, 2);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v34 = *(_QWORD *)(a1 + 1128);
  if ( v34 )
  {
    v28 = ZwDuplicateObject(-1LL, v34, a2, v50, 0, 0, 2);
    if ( v28 < 0 )
      goto LABEL_32;
  }
  v38 = v9;
  v28 = ZwAllocateVirtualMemory(a2, &v37, 0LL, &v38, 4096, 4);
  if ( v28 < 0 )
    goto LABEL_32;
  v41 = v41 & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 904) )
    v45 = v37 + 1144;
  if ( *(_WORD *)(a1 + 280) )
    v42 = v37 + 296;
  v35 = (unsigned int)Feature_2609059128__private_IsEnabledDeviceUsageNoInline()
      ? NtWriteVirtualMemory(a2, v37, v40, 1144LL, 0LL)
      : NtWriteVirtualMemory(a2, v37, v40, v9, 0LL);
  v28 = v35;
  if ( v35 < 0
    || (v36 = *(_QWORD *)(a1 + 904)) != 0 && (v28 = NtWriteVirtualMemory(a2, v45, v36, (unsigned int)v8, 0LL), v28 < 0) )
  {
LABEL_32:
    if ( v37 )
    {
      v38 = v9;
      ZwFreeVirtualMemory(-1LL, &v37, &v38, 0x8000LL);
    }
    goto LABEL_34;
  }
  v28 = 0;
  *a3 = v37;
LABEL_48:
  if ( (v39 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v28;
}
