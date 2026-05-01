/*
 * XREFs of ?AddPositioner@PositionerPriority@@UEAAXW4SHELL_POSITIONER_TYPE@@@Z @ 0x18050DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall PositionerPriority::AddPositioner(RTL_SRWLOCK *a1, int a2)
{
  __int64 v2; // rdi
  int *v4; // r8
  unsigned int v5; // r9d
  _DWORD *v6; // rax
  unsigned int i; // ecx
  __int64 v8; // rax
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  wil::AcquireSRWLockExclusive(&v9, a1 + 3);
  v4 = (int *)&g_exclusivePositioners;
  v5 = 0;
  v6 = &g_exclusivePositioners;
  while ( *v6 != (_DWORD)v2 )
  {
    ++v5;
    ++v6;
    if ( v5 >= 2 )
      goto LABEL_7;
  }
  for ( i = 0; i < 2; ++i )
  {
    v8 = *v4++;
    *((_BYTE *)&a1[4].Ptr + v8) = 0;
  }
LABEL_7:
  *((_BYTE *)&a1[4].Ptr + v2) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
}
