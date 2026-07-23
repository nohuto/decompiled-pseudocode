/*
 * XREFs of LdrpInitializeProcessHeap @ 0x1800EAD58
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpHpLfhContextEnable @ 0x1800EB094 (RtlpHpLfhContextEnable.c)
 *     NtOpenPartition @ 0x180161470 (NtOpenPartition.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeProcessHeap(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  ULONG_PTR v14; // r8
  void *v15; // r9
  int *v16; // rdx
  __int64 Heap; // rax
  __int64 v18; // rbx
  NTSTATUS v19; // edi
  int v21; // eax
  unsigned int v22; // eax
  HANDLE PartitionHandle; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v25[3]; // [rsp+80h] [rbp-80h] BYREF
  int v26; // [rsp+8Ch] [rbp-74h]
  int v27; // [rsp+90h] [rbp-70h]
  HANDLE v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v30[20]; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int64 v34; // [rsp+100h] [rbp+0h]

  PartitionHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_thunk_772440563353939046(v25, 0, 0x50uLL);
  memset_thunk_772440563353939046(v30, 0, 0x5CuLL);
  v29 = 96;
  v8 = 2;
  if ( !a1 )
    goto LABEL_19;
  if ( *(_DWORD *)a1 >= 0x4Cu )
  {
    v9 = *(_DWORD *)(a1 + 72);
    if ( v9 )
    {
      v22 = v9 & 0xFFFF0FFF;
      if ( v22 )
        v8 = v22;
    }
    goto LABEL_4;
  }
  if ( *(_DWORD *)a1 >= 0x20u )
  {
LABEL_4:
    v10 = v31;
    if ( *(_QWORD *)(a1 + 24) )
      v10 = *(_QWORD *)(a1 + 24);
    v31 = v10;
  }
  if ( *(_DWORD *)a1 >= 0x28u )
  {
    v11 = v32;
    if ( *(_QWORD *)(a1 + 32) )
      v11 = *(_QWORD *)(a1 + 32);
    v32 = v11;
  }
  if ( *(_DWORD *)a1 >= 0x38u )
  {
    v12 = v33;
    if ( *(_QWORD *)(a1 + 48) )
      v12 = *(_QWORD *)(a1 + 48);
    v33 = v12;
  }
  if ( *(_DWORD *)a1 >= 0x40u )
  {
    v13 = v34;
    if ( *(_QWORD *)(a1 + 56) )
      v13 = *(_QWORD *)(a1 + 56);
    v34 = v13;
  }
LABEL_19:
  v14 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    v14 = *(_QWORD *)(a2 + 112);
    v15 = *(void **)(a2 + 120);
  }
  v16 = &v29;
  if ( qword_1801CA9D8
    || (LdrpHeapPartitionName = *(_OWORD *)(a3 + 1056), _mm_srli_si128(LdrpHeapPartitionName, 8).m128i_u64[0]) )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&LdrpHeapPartitionName;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v19 = NtOpenPartition(&PartitionHandle, 0x1F0003u, &ObjectAttributes);
    if ( v19 < 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        9479,
        (__int64)"LdrpInitializeProcessHeap",
        0,
        "Cannot open partition.");
      return (unsigned int)v19;
    }
    if ( *(_DWORD *)(a3 + 1088) )
    {
      v21 = *(_DWORD *)(a3 + 1088) & 0x1C;
      if ( !v21 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          9494,
          (__int64)"LdrpInitializeProcessHeap",
          0,
          "Invalid partition heap page types.");
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      v21 = 8;
    }
    v26 = v21;
    v14 = 0LL;
    v15 = 0LL;
    v28 = PartitionHandle;
    goto LABEL_25;
  }
  if ( (RtlpHpHeapFeatures & 1) != 0 )
  {
    v26 = 1;
LABEL_25:
    v16 = v25;
    v27 = -1;
    v25[1] = 2;
    v8 = 258;
    v25[0] = 5242883;
  }
  if ( UseWOW64 || *(_WORD *)(a2 + 24) == 267 )
  {
    v14 = 0LL;
    v15 = 0LL;
  }
  else if ( *(_WORD *)(a2 + 72) <= 3u && *(_WORD *)(a2 + 74) < 0x33u )
  {
    v8 |= 0x10000u;
  }
  Heap = RtlpCreateHeap(v8, 0LL, v14, v15, 0LL, (__int64)v16, 0);
  v18 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  *a4 = Heap;
  if ( *(_DWORD *)(Heap + 16) != -571548178 )
    return 0;
  if ( (*(_DWORD *)(Heap + 20) & 0x400000) == 0 )
    NT_ASSERT("Heap->GlobalFlags & 0x00400000");
  v19 = RtlpHpLfhContextEnable(Heap + 896, &qword_1801CA1D8);
  if ( v19 >= 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v18 + 20), 0xFFBFFFFF);
    return 0;
  }
  return (unsigned int)v19;
}
