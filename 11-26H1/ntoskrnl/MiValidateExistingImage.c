/*
 * XREFs of MiValidateExistingImage @ 0x140A64508
 * Callers:
 *     MiShareExistingControlArea @ 0x140A63F80 (MiShareExistingControlArea.c)
 * Callees:
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140618694 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 *     MiValidateSectionSigningPolicy @ 0x14099C76C (MiValidateSectionSigningPolicy.c)
 *     SeGetImageRequiredSigningLevel @ 0x140A8F9E8 (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  char v5; // r12
  PVOID v6; // r15
  char v7; // si
  __int64 result; // rax
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r13
  _BYTE *v13; // rdi
  int v14; // ebp
  int Flink; // r15d
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // bp
  int v20; // eax
  int v21; // eax
  char v22; // cl
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 8);
  v5 = 0;
  v6 = (PVOID)*((_QWORD *)a1 + 7);
  v7 = 0;
  Object = v6;
  if ( (*(_DWORD *)(v4 + 56) & 0x800) != 0 && (*a1 & 0x40000) != 0 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 12;
    return 3221226547LL;
  }
  result = MiRelocateImageAgain(v4, (*a1 >> 5) & 1, (*a1 >> 27) & 1, a4);
  if ( (int)result < 0 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 13;
    return result;
  }
  v10 = *a1;
  if ( (*a1 & 0x80u) == 0 )
  {
    if ( (v10 & 0x20) != 0 )
    {
      v11 = 1;
    }
    else if ( (v10 & 0x10) != 0 )
    {
      v11 = (*a1 & 0x800) != 0 ? 8 : 2;
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    v11 = 4;
  }
  v12 = *(_QWORD *)v4;
  v13 = a1 + 6;
  v14 = v11 | 0x10;
  if ( (v10 & 0x400) == 0 )
    v14 = v11;
  if ( (*a1 & 0x210) == 0x200 )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
    LOBYTE(v23) = 0;
    result = SeGetImageRequiredSigningLevel(Object, (__int64)&v23);
    if ( (int)result < 0 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 14;
      return result;
    }
    v10 = *a1;
    if ( (*a1 & 0x400) == 0 )
    {
      if ( *v13 && (Flink & 0x800000) != 0 )
      {
        v7 = 1;
        v13 = a1 + 6;
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
    v6 = Object;
    *v13 = v23;
  }
  if ( (v10 & 0x40000) != 0 )
  {
    v14 |= 0x40000000u;
    if ( !*v13 )
      *v13 = 4;
  }
  v16 = v14 | 0x20000000;
  if ( (v10 & 0x100000) == 0 )
    v16 = v14;
  if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() && (*a1 & 0x4000000) != 0 )
    v16 |= 0x200000u;
  if ( (*a1 & 0x200) != 0 )
  {
    v18 = *a1;
    v19 = *(_BYTE *)(v12 + 15) & 0xF;
    if ( (v18 & 0x10) != 0
      || (v18 = *((_QWORD *)a1 + 20), LOBYTE(v17) = *((_BYTE *)a1 + 24), SepRmCapTableLock.KernelShadowStackInitial)
      && (v20 = guard_dispatch_icall_no_overrides(v16, v17), LOBYTE(v17) = *((_BYTE *)a1 + 24), v20)
      || (LOBYTE(v18) = v19, !(unsigned int)SeCompareSigningLevels(v18, v17))
      || (v16 & 0x40000000) != 0 && (*(_DWORD *)(v4 + 92) & 0xC0000) != 0x80000
      || !v19 && *(char *)(*(_QWORD *)(v12 + 56) + 46LL) < 0 )
    {
      v7 |= 2u;
    }
    LOBYTE(v17) = v5;
    LOBYTE(v18) = v19;
    v21 = SeCompareSigningLevels(v18, v17);
    v22 = v7 | 4;
    if ( v21 )
      v22 = v7;
    v7 = v22;
    if ( (*a1 & 0x2000000) != 0 )
      v7 = v22 | 8;
  }
  result = MiValidateSectionSigningPolicy(
             1u,
             (__int64)v6,
             v4,
             a1[42],
             *((_QWORD *)a1 + 20),
             v16,
             v7,
             *((_BYTE *)a1 + 24),
             v5);
  if ( (int)result < 0 )
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 15;
  return result;
}
