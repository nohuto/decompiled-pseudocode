/*
 * XREFs of HsaUpdateDeviceTableEntry @ 0x1405AD260
 * Callers:
 *     HalpHsapInitializeReservedDomain @ 0x1405AA7A8 (HalpHsapInitializeReservedDomain.c)
 *     HsaAttachDeviceDomainInternal @ 0x1405AB798 (HsaAttachDeviceDomainInternal.c)
 *     HsaProcessDeviceExceptions @ 0x1405ACB08 (HsaProcessDeviceExceptions.c)
 *     HsaSetDevicePasidTable @ 0x1405AD020 (HsaSetDevicePasidTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     HsaIommuWaitCommand @ 0x140477FD0 (HsaIommuWaitCommand.c)
 *     HsaIommuSendCommand @ 0x140478008 (HsaIommuSendCommand.c)
 *     HsaBuildDeviceTableEntry @ 0x1405AB99C (HsaBuildDeviceTableEntry.c)
 *     HsaGetBlockedDomain @ 0x1405AC2C8 (HsaGetBlockedDomain.c)
 */

__int64 *__fastcall HsaUpdateDeviceTableEntry(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 v11; // r10
  __int64 v12; // rsi
  __int128 v13; // xmm1
  __int64 v14; // r14
  __int128 v15; // xmm0
  __int64 v16; // r12
  unsigned __int64 v17; // rbx
  char v18; // di
  char v19; // r13
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // edx
  int v24; // r14d
  __int16 BlockedDomain; // ax
  unsigned __int64 *v26; // r15
  int *v27; // r11
  int v28; // ecx
  unsigned int v29; // r8d
  unsigned int v30; // r14d
  __int64 v31; // rdi
  __int64 v32; // r10
  __int128 v33; // rax
  __int128 v34; // rt0
  unsigned __int8 v35; // tt
  int v36; // ebx
  __int64 *result; // rax
  char v38; // [rsp+60h] [rbp-59h]
  char v39; // [rsp+61h] [rbp-58h]
  __int128 v40; // [rsp+68h] [rbp-51h] BYREF
  __int64 v41; // [rsp+78h] [rbp-41h] BYREF
  unsigned __int64 *v42; // [rsp+80h] [rbp-39h]
  __int64 v43; // [rsp+88h] [rbp-31h]
  __int64 *v44; // [rsp+90h] [rbp-29h]
  __int128 v45; // [rsp+98h] [rbp-21h] BYREF
  __int128 v46[4]; // [rsp+A8h] [rbp-11h] BYREF

  v11 = a1;
  v12 = *(_QWORD *)(a1 + 24) + 32LL * (unsigned int)*a2;
  *(_QWORD *)&v40 = a2;
  v42 = (unsigned __int64 *)a1;
  v44 = a10;
  v13 = *(_OWORD *)v12;
  v14 = *(_QWORD *)(v12 + 8);
  v15 = *(_OWORD *)(v12 + 16);
  v39 = 0;
  v16 = *(_QWORD *)v12;
  v43 = 0x10000LL;
  v45 = v13;
  v46[0] = v15;
  if ( (v13 & 1) != 0 && !a7 )
  {
    v43 = (unsigned __int16)v14;
    v39 = 1;
  }
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v38 = 0;
  if ( a4 )
  {
    if ( (v16 & 0x80000000000000LL) != 0 )
    {
      v19 = 1;
      v17 = ((unsigned int)v14 & 0xFFFF0000 | ((v14 & 0xFFFFF80000FFFFFFuLL | ((unsigned __int64)v13 >> 34) & 0x7000000) >> 11)) >> 13;
    }
    v18 = BYTE4(v14) & 1;
  }
  else if ( a3 )
  {
    v19 = 1;
    PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a3 + 48));
    v21 = *(_DWORD *)(a3 + 36);
    v17 = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
    if ( v21 == 1 || v21 == 3 )
      v38 = 1;
    v11 = (__int64)v42;
    a2 = (_DWORD *)v40;
    v18 = *(_DWORD *)(a3 + 40) == 1;
  }
  v22 = 0LL;
  v41 = 0LL;
  if ( a5 )
  {
    v24 = *(_DWORD *)(a5 + 4);
    if ( v24 == 1 )
    {
      BlockedDomain = HsaGetBlockedDomain(v11, a2, (unsigned __int64 *)&v41);
      v22 = v41;
      LOWORD(v23) = BlockedDomain;
    }
    else
    {
      v23 = *(_DWORD *)(a5 + 48);
      if ( v24 == 2 )
        v22 = *(_QWORD *)(a5 + 40) >> 12;
    }
  }
  else
  {
    LOWORD(v23) = v14;
    if ( (v13 & 0xE00) == 0x800 )
    {
      v24 = 2;
      v22 = (__int64)((_QWORD)v13 << 12) >> 24;
    }
    else
    {
      v24 = 0;
    }
  }
  v26 = v42;
  HsaBuildDeviceTableEntry((__int64)v42, v17, v19, v38, v18, v23, v24, v22, v46, 0LL, (__int64)&v45);
  v27 = (int *)v40;
  v28 = *(_DWORD *)(v40 + 4);
  v29 = 1 << v28;
  v30 = 1 << (3 - v28);
  v31 = (unsigned int)(1 << v28);
  if ( 1 << v28 )
  {
    v32 = v29;
    do
    {
      v33 = *(_OWORD *)v12;
      v40 = *(_OWORD *)v12;
      do
      {
        v34 = v33;
        v35 = _InterlockedCompareExchange128(
                (volatile signed __int64 *)v12,
                *((signed __int64 *)&v45 + 1),
                v45,
                (signed __int64 *)&v34);
        v33 = v34;
        v40 = v34;
      }
      while ( !v35 );
      v12 += 32LL * v30;
      --v32;
    }
    while ( v32 );
  }
  if ( v39 )
  {
    v36 = *v27;
    if ( v29 )
    {
      do
      {
        *((_QWORD *)&v40 + 1) = 0LL;
        *(_QWORD *)&v40 = (unsigned __int16)v36 | 0x2000000000000000LL;
        HsaIommuSendCommand(v26, (unsigned __int64 *)&v40, a6);
        HsaIommuWaitCommand((__int64)v26);
        v36 += v30;
        --v31;
      }
      while ( v31 );
    }
  }
  result = v44;
  if ( v44 )
    *v44 = v43;
  return result;
}
