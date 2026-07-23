/*
 * XREFs of HsaInitializeIommu @ 0x140BF6BE0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     HsaBuildDeviceTableEntry @ 0x1405AB99C (HsaBuildDeviceTableEntry.c)
 *     HsaGetBlockedDomain @ 0x1405AC2C8 (HsaGetBlockedDomain.c)
 *     HsaProcessDeviceExceptions @ 0x1405ACB08 (HsaProcessDeviceExceptions.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HsaInitializeInterruptRemapping @ 0x140BF6A38 (HsaInitializeInterruptRemapping.c)
 */

__int64 __fastcall HsaInitializeIommu(__int64 a1, int a2, char a3)
{
  int v3; // esi
  int v4; // r12d
  __int64 result; // rax
  __int64 v7; // rax
  PVOID v8; // rax
  PVOID v9; // rax
  unsigned int v10; // esi
  __int64 v11; // r11
  __int64 v12; // rdx
  SIZE_T v13; // r14
  __int64 v14; // r13
  bool v15; // zf
  __int64 v16; // rax
  PVOID v17; // rax
  unsigned int v18; // r14d
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int16 v23; // r9
  __int16 BlockedDomain; // ax
  int v25; // r8d
  __int64 v26; // rax
  __int64 *v27; // r10
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  signed __int32 v42[8]; // [rsp+8h] [rbp-99h] BYREF
  char v43; // [rsp+68h] [rbp-39h]
  unsigned int v44; // [rsp+6Ch] [rbp-35h]
  unsigned int v45; // [rsp+70h] [rbp-31h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-29h] BYREF
  int v47; // [rsp+80h] [rbp-21h]
  __int128 v48; // [rsp+88h] [rbp-19h]
  __int128 v49; // [rsp+98h] [rbp-9h]
  _QWORD v50[4]; // [rsp+A8h] [rbp+7h]

  v3 = *(_DWORD *)(a1 + 176);
  v4 = *(_DWORD *)(a1 + 172);
  v43 = a3;
  v47 = v3;
  v48 = 0LL;
  v49 = 0LL;
  if ( !a2 )
  {
    result = HalSocRequestApi(a1, 0LL, 4, 8LL, &qword_140F87870);
    if ( (int)result < 0 )
      return result;
    if ( !v4 && !v3 )
      goto LABEL_43;
    if ( v4 == 2 && !HsaBlockedPageTable )
    {
      v7 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
      qword_140F87878 = v7;
      if ( !v7 )
        return 3221225473LL;
      v8 = HalMapIoSpace((LARGE_INTEGER)v7, 0x1000uLL, (MEMORY_CACHING_TYPE)((*(unsigned __int8 *)(a1 + 16) >> 5) & 1));
      HsaBlockedPageTable = (__int64)v8;
      if ( !v8 )
        return 3221225473LL;
      memset_0(v8, 0, 0x1000uLL);
    }
    result = HsaInitializeInterruptRemapping(a1);
    if ( (int)result < 0 )
      return result;
    if ( *(_QWORD *)a1
      || (v9 = HalMapIoSpace(*(LARGE_INTEGER *)(a1 + 8), 0x2040uLL, MmNonCached), (*(_QWORD *)a1 = v9) != 0LL) )
    {
      v10 = 0;
      v11 = 3LL;
      while ( v10 < 4 )
      {
        if ( v10 )
        {
          if ( v10 == 3 )
          {
            v12 = 2LL;
            v13 = 0x2000LL;
          }
          else
          {
            v12 = 1LL;
            v13 = 4096LL;
          }
        }
        else
        {
          v12 = 512LL;
          v13 = 0x200000LL;
        }
        v14 = v10;
        v15 = *(_QWORD *)(a1 + 24LL * v10 + 24) == 0LL;
        *(_QWORD *)(a1 + 24LL * v10 + 40) = v13;
        if ( v15 )
        {
          v16 = guard_dispatch_icall_no_overrides(-1LL, v12);
          *(_QWORD *)(a1 + 24LL * v10 + 32) = v16;
          if ( !v16 )
            return 3221225473LL;
          v17 = HalMapIoSpace((LARGE_INTEGER)v16, v13, MmNonCached);
          *(_QWORD *)(a1 + 24LL * v10 + 24) = v17;
          if ( !v17 )
            return 3221225473LL;
          memset_0(v17, 0, v13);
          v18 = 0;
          if ( v10 )
          {
            v11 = 3LL;
          }
          else
          {
            v46 = *(_QWORD *)(a1 + 24);
            v19 = 0;
            v20 = v46;
            v21 = 0;
            v44 = 0;
            v45 = 0;
            do
            {
              v22 = 0LL;
              v23 = 0;
              v46 = 0LL;
              if ( v4 == 2 )
              {
                BlockedDomain = HsaGetBlockedDomain(a1, &v45, &v46);
                v22 = v46;
                v23 = BlockedDomain;
                v25 = 2;
              }
              else
              {
                v25 = 0;
                v44 = v21;
                v18 = v19;
              }
              HsaBuildDeviceTableEntry(
                a1,
                0LL,
                0,
                0,
                0,
                v23,
                v25,
                v22,
                0LL,
                (__int64)&xmmword_140F87720,
                v20 + 32LL * v18);
              v18 = v44 + 1;
              v45 = v18;
              v19 = ++v44;
              v21 = v18;
            }
            while ( v18 < 0x10000 );
            v11 = 3LL;
          }
        }
        v26 = *(_QWORD *)(a1 + 24LL * v10++ + 32);
        v50[v14] = v26 / 4096;
      }
      if ( v4 != 2 || v43 )
        goto LABEL_36;
      if ( (int)HsaProcessDeviceExceptions(a1) >= 0 )
      {
        v11 = 3LL;
LABEL_36:
        v27 = (__int64 *)(a1 + 64);
        v28 = 0LL;
        do
        {
          v29 = *v27;
          v27 += 3;
          _BitScanReverse64(
            (unsigned __int64 *)&v30,
            ((v29 & 0xFFFFFFFFFFFFF000uLL) + (-(__int64)((v29 & 0xFFF) != 0) & 0x1000)) >> 4);
          if ( (unsigned int)v30 <= 8 )
            v30 = 8LL;
          if ( (unsigned int)v30 >= 0xF )
            v30 = 15LL;
          *(_QWORD *)((char *)&v48 + v28 * 8 + 8) = (v30 << 56) ^ ((v30 << 56) ^ (v50[v28 + 1] << 12) ^ (*(_QWORD *)((char *)&v48 + v28 * 8 + 8) ^ (v50[v28 + 1] << 12)) & 0xFFF0000000000FFFuLL) & 0xF0FFFFFFFFFFFFFFuLL;
          ++v28;
          --v11;
        }
        while ( v11 );
        v3 = v47;
LABEL_43:
        **(_QWORD **)a1 = ((v50[0] & 0xFFFFFFFFFFLL) << 12) | ((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 12)
                                                             + ((*(_QWORD *)(a1 + 40) & 0xFFFLL) != 0)
                                                             - 1) & 0x1FF;
        _InterlockedOr(v42, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *((_QWORD *)&v48 + 1);
        _InterlockedOr(v42, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 16LL) = v49;
        _InterlockedOr(v42, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 0x2000LL) = 0LL;
        _InterlockedOr(v42, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8200LL) = 0LL;
        _InterlockedOr(v42, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8208LL) = 0LL;
        _InterlockedOr(v42, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8216LL) = 0LL;
        _InterlockedOr(v42, 0);
        if ( (*(_BYTE *)(a1 + 18) & 8) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)a1 + 56LL) = *((_QWORD *)&v49 + 1);
          _InterlockedOr(v42, 0);
        }
        v31 = *(_BYTE *)(a1 + 16);
        v32 = -(__int64)((*(_WORD *)(a1 + 18) & 0x25) != 0) & 8 | 0x11007;
        if ( (v31 & 1) == 0 )
          v32 = -(__int64)((*(_WORD *)(a1 + 18) & 0x25) != 0) & 8 | 0x11005;
        v33 = v32 | 0x100;
        if ( (v31 & 2) == 0 )
          v33 = v32;
        v34 = v33 | 0x200;
        if ( (v31 & 4) == 0 )
          v34 = v33;
        v35 = v34 | 0x400;
        if ( (v31 & 0x20) == 0 )
          v35 = v34;
        v36 = v35 | 0x800;
        if ( (v31 & 8) == 0 )
          v36 = v35;
        v37 = v36 | 0xA00000A000LL;
        if ( (*(_BYTE *)(a1 + 18) & 4) == 0 )
          v37 = v36;
        v38 = v37 | 0x60;
        if ( !*(_QWORD *)(a1 + 128) )
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 120));
          v40 = *(_QWORD *)(a1 + 136) & 0xFF0000000000002LL;
          *(PHYSICAL_ADDRESS *)(a1 + 128) = PhysicalAddress;
          *(_QWORD *)(a1 + 136) = PhysicalAddress.QuadPart & 0xFFFFFFFFFFFF8LL ^ v40 | 0x1000000000000005LL;
        }
        v41 = v38 | 0xC000000020000LL;
        if ( !v3 )
          v41 = v38;
        *(_QWORD *)(*(_QWORD *)a1 + 24LL) = v41;
        _InterlockedOr(v42, 0);
        if ( (*(_BYTE *)(a1 + 18) & 0x10) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)a1 + 364LL) = 0x2000;
          _InterlockedOr(v42, 0);
        }
        return 0LL;
      }
    }
    return 3221225473LL;
  }
  return 0LL;
}
