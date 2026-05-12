/*
 * XREFs of GetZoneCountFromUnit @ 0x140073E8C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x140073F50 (GetZoneIndexFromUnitAndLba.c)
 * Callees:
 *     McTemplateK0sssiqxxq_EtwWriteTransfer @ 0x1400740FC (McTemplateK0sssiqxxq_EtwWriteTransfer.c)
 */

__int64 __fastcall GetZoneCountFromUnit(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r11
  __int64 v4; // rdi
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d

  result = *(unsigned int *)(a1 + 3472);
  if ( !(_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 3464);
    v4 = *(unsigned int *)(a1 + 932);
    v5 = *(_QWORD *)(a1 + 3416);
    v6 = v4 * (v3 + 1) / v5;
    v7 = v6;
    if ( v6 <= 0xFFFFFFFF )
    {
      if ( v6 != 0xFFFFFFFF )
        v7 = v6 + 1;
    }
    else
    {
      if ( StorEtwLoggingEnabled )
      {
        if ( (byte_140173444 & 2) != 0 )
          McTemplateK0sssiqxxq_EtwWriteTransfer(
            a1 + 177,
            v4 * (v3 + 1) % v5,
            v6,
            a1 + 168,
            a1 + 177,
            a1 + 242,
            v3,
            v4,
            v5,
            v6);
      }
      v7 = -1;
    }
    *(_DWORD *)(a1 + 3472) = v7;
    return v7;
  }
  return result;
}
