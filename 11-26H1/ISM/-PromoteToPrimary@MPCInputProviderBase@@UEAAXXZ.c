/*
 * XREFs of ?PromoteToPrimary@MPCInputProviderBase@@UEAAXXZ @ 0x1800C5DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::PromoteToPrimary(MPCInputProviderBase *this)
{
  char *v1; // rcx

  v1 = (char *)this - 24;
  v1[3573] = 0;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 64LL))(v1);
}
