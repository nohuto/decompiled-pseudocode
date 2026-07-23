/*
 * XREFs of MiMapViewOfSection @ 0x1409941C8
 * Callers:
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 *     AlpcpCreateView @ 0x140993130 (AlpcpCreateView.c)
 *     NtMapViewOfSection @ 0x140993880 (NtMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x1409EDD40 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiFinalizeLagePageImageMapping @ 0x140777C90 (MiFinalizeLagePageImageMapping.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 *     MiValidateVadMetadataFlags @ 0x1409F04C0 (MiValidateVadMetadataFlags.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiArbitraryCodeBlocked @ 0x140ABDF28 (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        void *a4,
        _WORD *a5,
        int a6,
        int a7)
{
  _KPROCESS *v7; // rdi
  unsigned __int64 *v8; // rsi
  unsigned __int64 v11; // rax
  _WORD *v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r12
  __int64 v15; // r14
  int v16; // r8d
  char ProtectionMask; // al
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  BOOLEAN v22; // al
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rax
  int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // r14d
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v40; // rcx
  int v41; // edi
  __int64 v42; // r10
  int v43; // eax
  int v44; // eax
  int v45; // r9d
  int v46; // edx
  int v47; // ecx
  unsigned __int64 v48; // rsi
  int v49; // eax
  void *v50; // [rsp+40h] [rbp-51h] BYREF
  int v51; // [rsp+48h] [rbp-49h]
  _KPROCESS *v52; // [rsp+50h] [rbp-41h]
  unsigned __int64 *v53; // [rsp+58h] [rbp-39h]
  __int64 v54; // [rsp+60h] [rbp-31h]
  _OWORD v55[3]; // [rsp+68h] [rbp-29h] BYREF

  v7 = *(_KPROCESS **)(a2 + 88);
  v8 = a3;
  v50 = a4;
  v53 = a3;
  v51 = 0;
  memset(v55, 0, sizeof(v55));
  v52 = v7;
  v11 = MiSectionControlArea(a1);
  v14 = v11;
  v15 = *(_QWORD *)v11;
  v54 = *(_QWORD *)(a2 + 24);
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( !_bittest((const signed __int32 *)(v11 + 56), 0xAu)
      && *(_QWORD *)(a2 + 16) >= 0x10000uLL
      && (*v12 != (_WORD)v13 || *a5 != (_WORD)v13) )
    {
      return 3221226016LL;
    }
    if ( (*(_DWORD *)(a2 + 40) & 0x9F2BDFFF) != 0 )
      return 3221225485LL;
  }
  if ( _bittest((const signed __int32 *)(a2 + 40), 0x1Eu) && !a7 && v7[3].Padding[5] == v13 )
    return 3221225485LL;
  v16 = *(_DWORD *)(a2 + 44);
  if ( (v16 & 0xF0) != 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    *(_DWORD *)(a2 + 56) |= 8u;
  if ( (v16 & 0x40000000) != 0 )
  {
    if ( (v16 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      return 3221225485LL;
    v16 &= ~0x40000000u;
    *(_DWORD *)(a2 + 120) |= 2u;
    *(_DWORD *)(a2 + 44) = v16;
  }
  if ( (*(_DWORD *)(a2 + 120) & 8) != 0 )
  {
    if ( (v16 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      return 3221225485LL;
  }
  else if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 72) != v13 )
      return 3221225485LL;
    v21 = *(_DWORD *)(a2 + 40);
    if ( (v21 & 0x2000) != 0 )
      return 3221225485LL;
    if ( (v21 & 0x20000000) != 0 )
    {
      if ( *(_QWORD *)a5 != v13
        || (MiFlags & 0x80000) != 0
        || (*(_DWORD *)(v14 + 56) & 0x20000) != 0
        || (v22 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a2 + 53)), v13 = 0LL, !v22) )
      {
        *(_DWORD *)(a2 + 40) &= ~0x20000000u;
      }
    }
    goto LABEL_37;
  }
  ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(a1 + 60) & 0xFFF);
  if ( (v19 | MmCompatibleProtectionMask[ProtectionMask & 7] | 0x700) != (MmCompatibleProtectionMask[ProtectionMask & 7] | 0x700) )
    return 3221225550LL;
  v20 = *(_DWORD *)(a2 + 40);
  if ( (v20 & 0x840000) != 0
    || *(_WORD *)(a2 + 54) != (_WORD)v13
    || _bittest((const signed __int32 *)(v14 + 56), 0xAu) && (v20 & 0x20002000) != 0 )
  {
    return 3221225485LL;
  }
LABEL_37:
  v23 = *(_QWORD *)(a2 + 24);
  v24 = v23 + *(_QWORD *)a5;
  if ( v24 < *(_QWORD *)a5 )
    return 3221225503LL;
  v25 = *(_QWORD *)(a1 + 48);
  if ( v24 > v25 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  if ( !v23 )
    *(_QWORD *)(a2 + 24) = v25 - *(_QWORD *)a5;
  if ( (*(_DWORD *)(v14 + 56) & 0x400) != 0 )
  {
    if ( (*(_DWORD *)a5 & 0xFFF) == 0 )
      goto LABEL_54;
    if ( (*(_DWORD *)(a2 + 56) & 2) == 0 )
    {
      *(_DWORD *)a5 &= 0xFFFFF000;
      goto LABEL_54;
    }
    return 3221226016LL;
  }
  v26 = *(_QWORD *)(a2 + 16);
  if ( v26 > 0x10000 && *(_QWORD *)(v14 + 64) )
    v26 = 0x10000LL;
  v27 = *(unsigned int *)a5;
  v28 = v27 & (v26 - 1);
  if ( v28 )
  {
    if ( (*(_DWORD *)(a2 + 56) & 2) != 0 )
      return 3221226016LL;
    *(_DWORD *)a5 = v27 & -(int)v26;
    if ( (*(_DWORD *)(v14 + 56) & 0x20) == 0 )
    {
      v29 = *(_QWORD *)(a2 + 24);
      if ( v29 + v28 < v29 )
        return 3221225503LL;
      *(_QWORD *)(a2 + 24) = v29 + v28;
    }
  }
LABEL_54:
  if ( *(_QWORD *)(a2 + 24) <= v13 )
    return 3221225503LL;
  v30 = *(_QWORD *)(a2 + 16);
  if ( ((v30 - 1) & *v8) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 56) & 2) != 0 )
      return 3221226016LL;
    *v8 &= -v30;
  }
  v31 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 32) = v31;
  v32 = v31;
  if ( (v31 & 0xFFF) != 0 )
  {
    v32 = v31 + 4096 - (unsigned int)(v31 & 0xFFF);
    if ( v32 >= v31 )
    {
      *(_QWORD *)(a2 + 24) = v32;
      goto LABEL_62;
    }
    return 3221225503LL;
  }
LABEL_62:
  v33 = v8;
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
    v33 = (unsigned __int64 *)a2;
  v34 = *v33;
  v35 = *(_QWORD *)(a2 + 8);
  if ( v34 > v35 )
    return 3221225485LL;
  if ( v35 - v34 + 1 < v32 )
    return (unsigned int)((*(_DWORD *)(a2 + 56) & 1) != 0) - 1073741801;
  if ( (unsigned __int64)v50 > v31 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225485LL;
  if ( v31 > *(_QWORD *)(a1 + 48) && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  v36 = *(_DWORD *)(a2 + 40);
  if ( (v36 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v36 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v36 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 60) & 0x4000000) != 0
    && ((*(_DWORD *)(v14 + 56) & 0x420) != 0
     || (v36 & 0xDFFFDFFF) != 0
     || (*(_DWORD *)(a2 + 56) & 1) == 0
     || *v8 != (*v8 & 0xFFFFFFFFFFFFF000uLL)
     || !v54) )
  {
    return 3221225485LL;
  }
  v37 = *(_DWORD *)(a2 + 44);
  if ( (*(_WORD *)(v15 + 12) & 0x2000) != 0 )
  {
    v37 = v37 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v37;
  }
  if ( (*(_WORD *)(v15 + 12) & 0x1000) != 0 )
  {
    v37 = v37 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v37;
  }
  v38 = MiMakeProtectionMask(v37);
  if ( v38 == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 96) + 1872LL) & 0x100) != 0
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 40) &= ~0x20000000u;
    }
    else if ( (v38 & 2) != 0 && (*(_DWORD *)(a2 + 60) & 0x20000000) == 0 )
    {
      return MiArbitraryCodeBlocked(*(_QWORD *)(a2 + 96));
    }
  }
  if ( *(_KPROCESS **)(a2 + 96) != v7 )
  {
    KiStackAttachProcess(v7, 0, (__int64)v55);
    v51 = 1;
  }
  v41 = MiValidateVadMetadataFlags(a2, CurrentThread);
  if ( v41 < 0 )
    goto LABEL_104;
  v43 = *(_DWORD *)(v14 + 56);
  if ( (v43 & 0x400) != 0 )
  {
    v44 = MiMapViewOfPhysicalSection(v40, v8, a5, v38);
  }
  else
  {
    v45 = (int)a5;
    v46 = a2;
    v47 = v14;
    if ( (v43 & 0x20) != 0 )
    {
      while ( 1 )
      {
        v50 = (void *)*v8;
        v41 = MiMapViewOfImageSection(v47, v46, (unsigned int)&v50, v45, a1, a6, v38, 0);
        v49 = *(_DWORD *)(a2 + 40);
        if ( (v49 & 0x20000000) == 0 )
          break;
        *(_DWORD *)(a2 + 40) = v49 & 0xDFFFFFFF;
        if ( v41 >= 0 )
        {
          if ( v41 == 1073741838 )
          {
            MiUnmapViewOfSection(v52, v50, 0LL, 0LL);
          }
          else
          {
            v48 = (unsigned __int64)v50;
            if ( (int)MiFinalizeLagePageImageMapping(v14, a2, v50, (int)a5, a1, a6, v38) >= 0 )
            {
              v41 = 1073741827;
              goto LABEL_116;
            }
            MiUnmapViewOfSection(v52, v48, 0LL, 0LL);
            v8 = v53;
          }
        }
        v45 = (int)a5;
        v46 = a2;
        v47 = v14;
      }
      if ( v41 < 0 )
        goto LABEL_104;
      v48 = (unsigned __int64)v50;
LABEL_116:
      *v53 = v48;
      goto LABEL_104;
    }
    v44 = MiMapViewOfDataSection(v14, a2, (_DWORD)v8, (_DWORD)a5, a1, a6, v38, v42);
  }
  v41 = v44;
LABEL_104:
  if ( v51 )
    KiUnstackDetachProcess((__int64)v55, 0);
  return (unsigned int)v41;
}
