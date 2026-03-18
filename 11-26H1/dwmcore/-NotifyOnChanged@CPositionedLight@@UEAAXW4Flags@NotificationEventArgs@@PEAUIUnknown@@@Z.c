/*
 * XREFs of ?NotifyOnChanged@CPositionedLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180208ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180264A10 (-NotifyOnChanged@CLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CPositionedLight::NotifyOnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a3 != *(_QWORD *)(a1 + 232) )
    return CLight::NotifyOnChanged();
  return result;
}
