/*
 * XREFs of RaidBusEnumeratorProcess1667DeviceInquiry @ 0x140045C00
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcess1667DeviceInquiry(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int16 v11; // [rsp+30h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0LL;
  *a4 = 0;
  v6 = *(_BYTE *)(a2 + 3) & 0x3F;
  if ( v6 != 1 && v6 != 18 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  v7 = *(_DWORD *)(a2 + 16);
  if ( v7 <= 0x3A )
    return 3221225473LL;
  v8 = 8;
  v9 = (v7 - 58) >> 1;
  if ( v9 < 8 )
    v8 = v9;
  while ( (unsigned int)v5 < v8 )
  {
    HIBYTE(v11) = *(_BYTE *)(v4 + 2 * v5 + 58);
    LOBYTE(v11) = *(_BYTE *)(v4 + 2 * v5 + 59);
    if ( (unsigned __int16)(v11 + 64) <= 2u )
    {
      *(_WORD *)(a3 + 56) |= 1u;
      return 0LL;
    }
    v5 = (unsigned int)(v5 + 1);
  }
  return 0LL;
}
