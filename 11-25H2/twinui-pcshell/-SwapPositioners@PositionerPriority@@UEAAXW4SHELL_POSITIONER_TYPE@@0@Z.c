/*
 * XREFs of ?SwapPositioners@PositionerPriority@@UEAAXW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1804EC930
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall PositionerPriority::SwapPositioners(RTL_SRWLOCK *a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v5 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  wil::AcquireSRWLockExclusive(&v6, a1 + 3);
  *((_BYTE *)&a1[4].Ptr + v5) = 0;
  *((_BYTE *)&a1[4].Ptr + v3) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
}
