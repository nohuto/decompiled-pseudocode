/*
 * XREFs of ?NotifyOnChanged@CLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180264A10
 * Callers:
 *     ?NotifyOnChanged@CPositionedLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180208ED0 (-NotifyOnChanged@CPositionedLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLight::NotifyOnChanged(_BYTE *a1, unsigned int a2, __int64 a3)
{
  char v6; // al

  if ( a2 == 11 || a2 == 1 )
  {
    v6 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 264LL))(a1);
    if ( v6 && a1[96] )
    {
      a1[96] = v6;
      return;
    }
    a1[96] = v6;
  }
  else if ( a2 != 5 )
  {
    return;
  }
  CResource::NotifyOnChanged((__int64)a1, a2, a3);
}
