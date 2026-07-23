/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x1801197F0
 * Callers:
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     LdrpMakePermanentImageCommit @ 0x1800DDD00 (LdrpMakePermanentImageCommit.c)
 *     qsort @ 0x18012BC20 (qsort.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  size_t v3; // rdi
  __int64 (__fastcall **v7)(_QWORD); // r15
  __int64 (__fastcall **v8)(); // r12
  size_t v9; // rsi
  int v10; // r8d
  int v11; // edx
  int v12; // edx
  bool v13; // zf
  SIZE_T v14; // rdx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // rax
  unsigned __int64 v18; // rcx
  char *v19; // rdx
  __int64 v20; // r8
  int v21; // edx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 *v25; // rdx
  unsigned int *v26; // r8
  size_t v27; // rax
  size_t v28; // rax
  unsigned __int64 v29; // r13
  size_t v30; // rax
  unsigned __int64 v31; // r11
  size_t v32; // rax
  unsigned __int64 v33; // rbx
  NTSTATUS result; // eax
  size_t v35; // rax
  int v36; // r13d
  _OWORD *v37; // rbx
  PVOID v38; // r8
  __int64 (__fastcall *v39)(_QWORD); // rax
  __int64 (__fastcall *v40)(); // rcx
  __int64 (__fastcall *v41)(); // rax
  __int64 (__fastcall *v42)(); // rax
  ULONG OldProtect; // [rsp+30h] [rbp-89h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-81h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-79h] BYREF
  _QWORD *v46; // [rsp+48h] [rbp-71h]
  __int64 (__fastcall **v47)(); // [rsp+50h] [rbp-69h]
  __int64 (__fastcall **v48)(); // [rsp+58h] [rbp-61h]
  __int64 (__fastcall **v49)(); // [rsp+60h] [rbp-59h]
  ULONG Size; // [rsp+68h] [rbp-51h] BYREF
  _OWORD Base[6]; // [rsp+70h] [rbp-49h] BYREF

  v3 = 0LL;
  v49 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v7 = 0LL;
  OldProtect = 0;
  v8 = 0LL;
  BaseAddress = 0LL;
  v9 = 0LL;
  RegionSize = 0LL;
  memset(Base, 0, sizeof(Base));
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0;
  v10 = 31488;
  v11 = 31488;
  if ( (LdrpPolicyBits & 4) != 0 )
    v11 = 32512;
  v12 = *(unsigned __int16 *)(a3 + 78) & (v11 | 0x8000);
  v13 = (LdrpPolicyBits & 4) == 0;
  *(_DWORD *)(a1 + 280) = v12;
  if ( !v13 )
    v10 = 32512;
  if ( (v10 & v12) != 0
    && *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) > (unsigned int)(unsigned __int16)LdrpSystem32
                                                                                     + 2 )
  {
    v14 = (unsigned __int64)(unsigned __int16)LdrpSystem32 >> 1;
    if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * v14) == 92
      && !RtlCompareUnicodeStrings(
            (PCWCH)_mm_srli_si128(*(__m128i *)(a1 + 72), 8).m128i_i64[0],
            v14,
            *((PCWCH *)&LdrpSystem32 + 1),
            v14,
            1u) )
    {
      v15 = *(_DWORD *)(a1 + 280);
      if ( a1 == LdrpImageEntry )
        v16 = v15 | 0x200;
      else
        v16 = v15 | 0x100;
      *(_DWORD *)(a1 + 280) = v16;
    }
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      v17 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xDu, &Size);
      if ( v17 )
      {
        v18 = 0LL;
        v19 = (char *)a2 + a2[10] + 24;
        if ( a2[3] )
        {
          while ( 1 )
          {
            v20 = *((unsigned int *)v19 + 3);
            if ( (unsigned int)(v17[3] - v20) < *((_DWORD *)v19 + 2) )
              break;
            ++v18;
            v19 += 40;
            if ( v18 >= a2[3] )
              goto LABEL_23;
          }
          BaseAddress = (PVOID)(*(_QWORD *)(a1 + 48) + v20);
          RegionSize = *((unsigned int *)v19 + 2);
          LdrpMakePermanentImageCommit((__int64)BaseAddress, RegionSize);
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &OldProtect);
        }
      }
    }
  }
LABEL_23:
  v21 = *(_DWORD *)(a3 + 144);
  if ( (v21 & 0x1000000) != 0 )
  {
    v22 = *(_QWORD *)(a3 + 304);
    v49 = (__int64 (__fastcall **)())v22;
    if ( v22 && (v23 = *(_QWORD *)(a1 + 48), v22 >= v23) && v22 <= *(unsigned int *)(a1 + 64) + v23 - 8 )
    {
      *(_QWORD *)&Base[0] = v22;
      *((_QWORD *)&Base[0] + 1) = LdrpCgRoutineCallback;
      v9 = 1LL;
    }
    else
    {
      v49 = 0LL;
    }
  }
  if ( LdrSystemDllInitBlock.CfgBitMap
    && (LdrSystemDllInitBlock.Flags & 1) == 0
    && (a2[47] & 0x4000) != 0
    && (v21 & 0x100) != 0 )
  {
    v7 = *(__int64 (__fastcall ***)(_QWORD))(a3 + 112);
    if ( v7
      && (v24 = *(_QWORD *)(a1 + 48), v25 = (unsigned __int64 *)(a1 + 48), (unsigned __int64)v7 >= v24)
      && (v26 = (unsigned int *)(a1 + 64), (unsigned __int64)v7 <= *(unsigned int *)(a1 + 64) + v24 - 8) )
    {
      v27 = v9++;
      *(_QWORD *)&Base[v27] = v7;
      *((_QWORD *)&Base[v27] + 1) = LdrpCfgCheckRoutineCallback;
    }
    else
    {
      v25 = (unsigned __int64 *)(a1 + 48);
      v7 = 0LL;
      v26 = (unsigned int *)(a1 + 64);
    }
    v8 = *(__int64 (__fastcall ***)())(a3 + 120);
    if ( v8 && (unsigned __int64)v8 >= *v25 && (unsigned __int64)v8 <= *v25 + *v26 - 8LL )
    {
      v28 = v9++;
      *(_QWORD *)&Base[v28] = v8;
      *((_QWORD *)&Base[v28] + 1) = LdrpCfgDispatchRoutineCallback;
    }
    else
    {
      v8 = 0LL;
    }
    if ( *(_DWORD *)a3 < 0x130u )
    {
LABEL_62:
      v36 = 1;
      goto LABEL_63;
    }
    v29 = *(_QWORD *)(a3 + 280);
    v46 = (_QWORD *)v29;
    if ( v29 && v29 >= *v25 && v29 <= *v26 + *v25 - 8 )
    {
      if ( v9 >= 6 )
        return -1073741762;
      v30 = v9++;
      *(_QWORD *)&Base[v30] = v29;
      *((_QWORD *)&Base[v30] + 1) = LdrpCfgCheckRoutineCallback;
    }
    else
    {
      v29 = 0LL;
      v46 = 0LL;
    }
    v31 = *(_QWORD *)(a3 + 288);
    v47 = (__int64 (__fastcall **)())v31;
    if ( !v31 || v31 < *v25 || v31 > *v26 + *v25 - 8 )
    {
      v31 = 0LL;
      v47 = 0LL;
      v46 = (_QWORD *)v29;
      goto LABEL_56;
    }
    if ( v9 < 6 )
    {
      v32 = v9++;
      *(_QWORD *)&Base[v32] = v31;
      *((_QWORD *)&Base[v32] + 1) = LdrpCfgDispatchRoutineCallback;
LABEL_56:
      v33 = *(_QWORD *)(a3 + 296);
      v48 = (__int64 (__fastcall **)())v33;
      if ( v33 && v33 >= *v25 && v33 <= *v26 + *v25 - 8 )
      {
        if ( v9 >= 6 )
          return -1073741762;
        v35 = v9++;
        *(_QWORD *)&Base[v35] = v33;
        *((_QWORD *)&Base[v35] + 1) = LdrpCfgDispatchRoutineCallback;
      }
      else
      {
        v48 = 0LL;
        v47 = (__int64 (__fastcall **)())v31;
        v46 = (_QWORD *)v29;
      }
      goto LABEL_62;
    }
    return -1073741762;
  }
  v36 = 0;
LABEL_63:
  qsort(Base, v9, 0x10uLL, (_CoreCrtNonSecureSearchSortCompareFunction)LdrpSortLoadConfigFptrs);
  if ( !v9 )
  {
LABEL_70:
    if ( v36 )
    {
      if ( !v7 )
        return -1073741762;
      v39 = *v7;
      if ( *v7 != LdrpValidateUserCallTarget
        && v39 != LdrpValidateUserCallTargetES
        && v39 != (__int64 (__fastcall *)(_QWORD))LdrSystemDllInitBlock.ScpCfgCheckFunction
        && v39 != (__int64 (__fastcall *)(_QWORD))LdrSystemDllInitBlock.ScpCfgCheckESFunction )
      {
        return -1073741762;
      }
      if ( v8 )
      {
        v40 = *v8;
        if ( *v8 != LdrpDispatchUserCallTarget
          && v40 != LdrpDispatchUserCallTargetES
          && v40 != (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchFunction
          && v40 != (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchESFunction )
        {
          return -1073741762;
        }
      }
      if ( v46 && (__int64 (__fastcall *)(_QWORD))*v46 != v39 )
        return -1073741762;
      if ( v47 )
      {
        v41 = *v47;
        if ( *v47 != LdrpDispatchUserCallTarget
          && v41 != LdrpDispatchUserCallTargetES
          && v41 != (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchFunction
          && v41 != (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchESFunction )
        {
          return -1073741762;
        }
      }
      if ( v48 )
      {
        v42 = *v48;
        if ( *v48 != LdrpDispatchUserCallTarget
          && v42 != LdrpDispatchUserCallTargetES
          && v42 != (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchFunction
          && v42 != (__int64 (__fastcall *)())LdrSystemDllInitBlock.ScpCfgDispatchESFunction )
        {
          return -1073741762;
        }
      }
      if ( v49 && *v49 != LdrpCgLogFailure )
        return -1073741762;
    }
    return 0;
  }
  while ( 1 )
  {
    RegionSize = 8LL;
    v37 = &Base[v3];
    BaseAddress = *(PVOID *)v37;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect);
    if ( result < 0 )
      return result;
    v38 = *(PVOID *)v37;
    do
    {
      (*((void (__fastcall **)(PVOID, _QWORD))v37 + 1))(v38, *(unsigned int *)(a3 + 144));
      ++v3;
      ++v37;
      if ( v3 >= v9 )
        break;
      v38 = *(PVOID *)v37;
    }
    while ( *(_QWORD *)v37 + 8LL <= (unsigned __int64)BaseAddress + RegionSize );
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, OldProtect, &OldProtect);
    if ( result < 0 )
      return result;
    if ( v3 >= v9 )
      goto LABEL_70;
  }
}
