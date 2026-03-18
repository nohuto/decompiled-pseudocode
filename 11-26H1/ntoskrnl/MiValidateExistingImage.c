/*
 * XREFs of MiValidateExistingImage @ 0x140A56F88
 * Callers:
 *     MiShareExistingControlArea @ 0x140A56A00 (MiShareExistingControlArea.c)
 * Callees:
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140615670 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     MiRelocateImageAgain @ 0x14087B470 (MiRelocateImageAgain.c)
 *     MiValidateSectionSigningPolicy @ 0x1409CB78C (MiValidateSectionSigningPolicy.c)
 *     SeGetImageRequiredSigningLevel @ 0x140A8876C (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevels @ 0x140A88910 (SeCompareSigningLevels.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  char v5; // r12
  __int64 v6; // r15
  char v7; // si
  __int64 result; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // ecx
  __int64 v14; // r13
  _BYTE *v15; // rdi
  int v16; // ebp
  int Flink; // r15d
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // bp
  int v22; // eax
  int v23; // eax
  char v24; // cl
  char v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 8);
  v5 = 0;
  v6 = *((_QWORD *)a1 + 7);
  v7 = 0;
  v26 = v6;
  if ( (*(_DWORD *)(v4 + 56) & 0x800) != 0 && (*a1 & 0x40000) != 0 )
  {
    *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 12;
    return 3221226547LL;
  }
  result = MiRelocateImageAgain(v4, (*a1 >> 5) & 1, (*a1 >> 27) & 1, a4);
  if ( (int)result < 0 )
  {
    *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 13;
    return result;
  }
  v12 = *a1;
  if ( (*a1 & 0x80u) == 0 )
  {
    if ( (v12 & 0x20) != 0 )
    {
      v13 = 1;
    }
    else if ( (v12 & 0x10) != 0 )
    {
      v13 = (*a1 & 0x800) != 0 ? 8 : 2;
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    v13 = 4;
  }
  v14 = *(_QWORD *)v4;
  v15 = a1 + 6;
  v16 = v13 | 0x10;
  if ( (v12 & 0x400) == 0 )
    v16 = v13;
  if ( (*a1 & 0x210) == 0x200 )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
    LOBYTE(v10) = *v15;
    LOBYTE(v11) = *(_BYTE *)(v14 + 15) & 0xF;
    v25 = 0;
    result = SeGetImageRequiredSigningLevel(v26, v16, v10, v11, (__int64)&v25);
    if ( (int)result < 0 )
    {
      *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 14;
      return result;
    }
    v12 = *a1;
    if ( (*a1 & 0x400) == 0 )
    {
      if ( *v15 && (Flink & 0x800000) != 0 )
      {
        v7 = 1;
        v15 = a1 + 6;
      }
      if ( (Flink & 0x1000000) != 0 )
      {
        v5 = 8;
      }
      else if ( (Flink & 0x2000000) != 0 )
      {
        v5 = 6;
      }
    }
    v6 = v26;
    *v15 = v25;
  }
  if ( (v12 & 0x40000) != 0 )
  {
    v16 |= 0x40000000u;
    if ( !*v15 )
      *v15 = 4;
  }
  v18 = v16 | 0x20000000;
  if ( (v12 & 0x100000) == 0 )
    v18 = v16;
  if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() && (*a1 & 0x4000000) != 0 )
    v18 |= 0x200000u;
  if ( (*a1 & 0x200) != 0 )
  {
    v20 = *a1;
    v21 = *(_BYTE *)(v14 + 15) & 0xF;
    if ( (v20 & 0x10) != 0
      || (v20 = *((_QWORD *)a1 + 20),
          LOBYTE(v19) = *((_BYTE *)a1 + 24),
          SepRmCapTableLock.GlobalUpdateVpThreadPriorityListEntry.Flink)
      && (v22 = guard_dispatch_icall_no_overrides(v18, v19), LOBYTE(v19) = *((_BYTE *)a1 + 24), v22)
      || (LOBYTE(v20) = v21, !(unsigned int)SeCompareSigningLevels(v20, v19))
      || (v18 & 0x40000000) != 0 && (*(_DWORD *)(v4 + 92) & 0xC0000) != 0x80000
      || !v21 && *(char *)(*(_QWORD *)(v14 + 56) + 46LL) < 0 )
    {
      v7 |= 2u;
    }
    LOBYTE(v19) = v5;
    LOBYTE(v20) = v21;
    v23 = SeCompareSigningLevels(v20, v19);
    v24 = v7 | 4;
    if ( v23 )
      v24 = v7;
    v7 = v24;
    if ( (*a1 & 0x2000000) != 0 )
      v7 = v24 | 8;
  }
  result = MiValidateSectionSigningPolicy(1u, v6, v4, a1[42], *((_QWORD *)a1 + 20), v18, v7, *((_BYTE *)a1 + 24), v5);
  if ( (int)result < 0 )
    *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 15;
  return result;
}
