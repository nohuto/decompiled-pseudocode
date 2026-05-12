/*
 * XREFs of StorAdapterNVMeEnumerateZNS @ 0x1401B5E24
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x140033D50 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidDeleteBusEnumerator @ 0x1400370BC (RaidDeleteBusEnumerator.c)
 *     StorUnitReleaseIdentifyNamespaceResources @ 0x140049D50 (StorUnitReleaseIdentifyNamespaceResources.c)
 *     RaidCreateBusEnumerator @ 0x1400508D8 (RaidCreateBusEnumerator.c)
 *     RaidInitializeBusEnumerator @ 0x14005C9D0 (RaidInitializeBusEnumerator.c)
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1400C72B8 (StorProcessNVMeEnumeratorFillInfo.c)
 *     StorProcessNVMeModifiedNodes @ 0x1400C74E0 (StorProcessNVMeModifiedNodes.c)
 *     StorProcessNVMeUnitEnumerator @ 0x1400C75A4 (StorProcessNVMeUnitEnumerator.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1401B6620 (StorAdapterNVMeInitializeEnumUnitIdentifyInfo.c)
 */

__int64 __fastcall StorAdapterNVMeEnumerateZNS(__int64 a1, int *a2, _BYTE *a3)
{
  unsigned int v4; // r14d
  char v5; // r12
  _DWORD *v6; // rsi
  bool v8; // zf
  char v9; // r15
  _DWORD *Pool; // rax
  unsigned int v11; // r13d
  __int64 v12; // rdx
  int Unit; // ebx
  __int64 v14; // r8
  __int64 i; // rcx
  int v16; // edx
  int v17; // eax
  char v18; // r15
  char v19; // r15
  _QWORD *j; // rdi
  int v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+28h] [rbp-D8h]
  char v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+51h] [rbp-AFh]
  char v25; // [rsp+52h] [rbp-AEh]
  int v26; // [rsp+54h] [rbp-ACh]
  _BYTE v27[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  char v29; // [rsp+BCh] [rbp-44h]
  char v30; // [rsp+BDh] [rbp-43h]
  __int64 v31[15]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v32; // [rsp+138h] [rbp+38h] BYREF
  char v33; // [rsp+1A0h] [rbp+A0h]
  char v36; // [rsp+1B8h] [rbp+B8h] BYREF

  memset_0(v31, 0, 0x88uLL);
  v4 = 0;
  v5 = 0;
  v33 = 0;
  v6 = 0LL;
  v26 = 0;
  v24 = 0;
  v25 = 0;
  if ( !*(_QWORD *)(a1 + 6064) )
    return 3221225659LL;
  *(_DWORD *)(a1 + 6192) &= ~1u;
  v8 = (*(_BYTE *)(a1 + 104) & 0x40) == 0;
  *(_QWORD *)(a1 + 6196) = 0LL;
  if ( v8 || (*(_DWORD *)(a1 + 4892) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 111) & 0x40) != 0 )
    {
      v9 = 0;
    }
    else
    {
      Pool = (_DWORD *)RaidAllocatePool(64LL, 4096LL, 1229873490LL, *(_QWORD *)(a1 + 8));
      v6 = Pool;
      if ( Pool )
      {
        if ( (int)StorGetNVMeIdentifyInfo(a1, 0, 0, 2, v21, v22, 0, Pool) >= 0 )
        {
          if ( !*v6 )
          {
            *(_DWORD *)(a1 + 6192) |= 1u;
            ExFreePoolWithTag(v6, 0x494E6152u);
            return 3221226021LL;
          }
        }
        else
        {
          v5 = 1;
        }
        v11 = 1024;
        v9 = 0;
        goto LABEL_17;
      }
      v9 = 0;
    }
    v5 = 1;
  }
  else
  {
    v9 = 1;
    v33 = 1;
    v5 = 1;
    v26 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 4904) + 10LL);
  }
  v11 = 0;
LABEL_17:
  RaidCreateBusEnumerator(v31);
  Unit = RaidInitializeBusEnumerator(v31, a1);
  while ( v4 < *(_DWORD *)(*(_QWORD *)(a1 + 6064) + 516LL) )
  {
    if ( v9 && v4 != v26 )
      goto LABEL_41;
    memset_0(v27, 0, 0x60uLL);
    Unit = RaidBusEnumeratorGetUnit(v31, (unsigned int)(unsigned __int8)v4 + 1, (__int64)v27);
    if ( Unit < 0 )
    {
      Unit = -1073741801;
      goto LABEL_57;
    }
    if ( !v5 )
    {
      for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(i + 1) )
      {
        v16 = v6[i];
        if ( !v16 )
          break;
        if ( v16 == v4 + 1 )
          goto LABEL_29;
      }
      v30 = 0;
      StorProcessNVMeUnitEnumerator(v31, (__int64)v27);
      RaidBusEnumeratorReleaseUnit(v31, (__int64)v27);
      goto LABEL_41;
    }
LABEL_29:
    v23 = 0;
    v36 = 0;
    v17 = StorAdapterNVMeInitializeEnumUnitIdentifyInfo(
            a1,
            v4 + 1,
            (unsigned int)v27,
            (unsigned int)&v23,
            (__int64)&v36);
    v18 = v36;
    Unit = v17;
    if ( v17 < 0 )
      goto LABEL_34;
    if ( !v36 )
    {
      Unit = -1073741637;
LABEL_34:
      if ( v29 )
        StorUnitReleaseIdentifyNamespaceResources(v28);
      goto LABEL_36;
    }
    Unit = StorProcessNVMeEnumeratorFillInfo((__int64)v31, (__int64)v27);
    if ( Unit < 0 )
      goto LABEL_34;
    StorProcessNVMeUnitEnumerator(v31, (__int64)v27);
LABEL_36:
    RaidBusEnumeratorReleaseUnit(v31, (__int64)v27);
    if ( v18 && Unit >= 0 )
    {
      ++*(_DWORD *)(a1 + 6196);
      v24 = 1;
    }
    else if ( v23 )
    {
      ++*(_DWORD *)(a1 + 6200);
      v19 = 1;
      goto LABEL_45;
    }
    v9 = v33;
LABEL_41:
    ++v4;
  }
  v19 = v25;
LABEL_45:
  if ( Unit < 0 )
  {
LABEL_57:
    for ( j = v32; j != &v32; j = (_QWORD *)*j )
      StorUnitReleaseIdentifyNamespaceResources(*(j - 1));
    goto LABEL_60;
  }
  if ( v19 )
  {
    Unit = -1073741637;
    goto LABEL_57;
  }
  if ( !v24 )
  {
    Unit = -1073741275;
    goto LABEL_57;
  }
  StorProcessNVMeModifiedNodes((__int64)v31, v12, v14);
  if ( *(_BYTE *)(a1 + 106) )
  {
    *(_BYTE *)(a1 + 106) = 0;
    *(_QWORD *)(a1 + 4328) = MEMORY[0xFFFFF78000000014];
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
  {
    if ( a2 )
      *a2 = Unit;
    if ( a3 )
      *a3 = 1;
  }
LABEL_60:
  RaidDeleteBusEnumerator((__int64)v31);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x494E6152u);
  return (unsigned int)Unit;
}
