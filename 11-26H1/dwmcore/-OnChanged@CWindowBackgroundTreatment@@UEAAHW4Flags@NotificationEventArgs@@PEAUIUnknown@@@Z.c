/*
 * XREFs of ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801D6610
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180039E6C (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800D77DC (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::OnChanged(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( v2 )
    CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v2);
  CWindowBackgroundTreatment::UpdateBackdropFlags((CBrush **)a1);
  return 1LL;
}
