/*
 * XREFs of HalpIommuGetHardwareDomain @ 0x14050D954
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14058A5DC (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14058A958 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuInitializeDmar @ 0x1405903A8 (HalpIommuInitializeDmar.c)
 *     HalpIommuJoinDmaDomain @ 0x140590474 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x1405905CC (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpIommuAcquireNewDomain @ 0x14058E260 (HalpIommuAcquireNewDomain.c)
 *     HalpIommuDomainGetSupportedPageTableDepths @ 0x14058FF98 (HalpIommuDomainGetSupportedPageTableDepths.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405A331C (HalpIommuGetDmarptRootAddress.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpIommuGetHardwareDomain(__int64 a1, __int64 a2, char a3, char a4, char a5, __int64 *a6)
{
  __int64 v6; // rbx
  int DmarptRootAddress; // ebp
  _QWORD *v12; // r14
  __int64 v13; // rcx
  _QWORD *i; // rax
  void *v15; // rax
  _BYTE *v16; // r15
  int v17; // eax
  __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // r8
  __int64 *v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+24h] [rbp-44h] BYREF
  __int64 v25; // [rsp+28h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-30h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]

  v25 = 0LL;
  v6 = 0LL;
  v23 = 0;
  DmarptRootAddress = 0;
  v24 = 0;
  v26 = 0LL;
  SpinLock = (PKSPIN_LOCK)(a1 + 32);
  v12 = (_QWORD *)(a1 + 16);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  for ( i = (_QWORD *)*v12; ; i = (_QWORD *)*i )
  {
    if ( i == v12 )
    {
      if ( !a3 )
      {
LABEL_25:
        *a6 = v6;
        goto LABEL_26;
      }
      v15 = (void *)HalpMmAllocCtxAlloc(v13, 144LL);
      v6 = (__int64)v15;
      if ( !v15 )
      {
        DmarptRootAddress = -1073741670;
        goto LABEL_26;
      }
      memset_0(v15, 0, 0x90uLL);
      *(_QWORD *)(v6 + 16) = 1LL;
      v16 = (_BYTE *)(v6 + 48);
      *(_QWORD *)(v6 + 24) = a2;
      if ( *(_BYTE *)(a1 + 52) )
      {
        *v16 ^= (*v16 ^ (4 * a5)) & 4;
        v26 = (a1 + 48) & -(__int64)(a5 != 0);
        v17 = 0;
      }
      else
      {
        v17 = 1;
      }
      *(_DWORD *)(v6 + 32) = v17;
      if ( *(_QWORD *)(a1 + 40) )
      {
        HalpIommuDomainGetSupportedPageTableDepths(a1, a2, &v23, &v24);
        DmarptRootAddress = HalpIommuGetDmarptRootAddress(*(_QWORD *)(a1 + 40), v23, &v25);
        if ( DmarptRootAddress < 0 )
          goto LABEL_27;
        if ( *(_BYTE *)(a1 + 52) )
        {
          v19 = v23 == 5;
          *(_QWORD *)(v6 + 56) = v25;
          if ( v19 )
            *v16 |= 8u;
        }
        else
        {
          *(_QWORD *)(v6 + 72) = v25;
          *(_BYTE *)(v6 + 64) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 24LL) - 1;
        }
      }
      v20 = v26;
      *(_DWORD *)(v6 + 36) = *(_DWORD *)(a1 + 12);
      DmarptRootAddress = HalpIommuAcquireNewDomain(a2, v6 + 32, v20);
      if ( DmarptRootAddress >= 0 )
      {
        *(_DWORD *)(a1 + 48) = *(_DWORD *)(v6 + 80);
        v21 = *(__int64 **)(a1 + 24);
        if ( (_QWORD *)*v21 != v12 )
          __fastfail(3u);
        *(_QWORD *)v6 = v12;
        *(_QWORD *)(v6 + 8) = v21;
        *v21 = v6;
        *(_QWORD *)(a1 + 24) = v6;
        goto LABEL_25;
      }
LABEL_27:
      HalpMmAllocCtxFree(v18, v6);
      goto LABEL_26;
    }
    v6 = (__int64)i;
    if ( i[3] == a2 )
      break;
  }
  if ( a1 != HalpIommuBypassDomain && a4 )
    ++i[2];
  *a6 = (__int64)i;
LABEL_26:
  KeReleaseSpinLock(SpinLock, NewIrql);
  return (unsigned int)DmarptRootAddress;
}
