/*
 * XREFs of ?OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180197D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMaskBrush::OnChanged(__int64 a1, int a2)
{
  __int64 v2; // rdx
  char v3; // al
  __int64 v4; // rdx

  if ( a2 == 14 )
  {
    v2 = *(_QWORD *)(a1 + 120);
    v3 = 0;
    if ( v2 )
    {
      if ( *(_BYTE *)(v2 + 96) || (v4 = *(_QWORD *)(a1 + 112)) != 0 && *(_BYTE *)(v4 + 96) )
        v3 = 1;
    }
    *(_BYTE *)(a1 + 96) = v3;
  }
  return 1LL;
}
