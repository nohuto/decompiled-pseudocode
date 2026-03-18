/*
 * XREFs of ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180186E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVectorShape::OnChanged(__int64 a1, int a2)
{
  char v3; // cl
  int v5; // edx
  int v6; // edx

  if ( a2 == 4 || !a2 )
    goto LABEL_2;
  v5 = a2 - 1;
  if ( !v5 )
    return *(_BYTE *)(a1 + 96) == 0;
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_2:
    v3 = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(a1 + 96) = 1;
    return v3 == 0;
  }
  if ( v6 == 4 )
    return *(_BYTE *)(a1 + 96) == 0;
  return 1LL;
}
