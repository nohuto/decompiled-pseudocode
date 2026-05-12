/*
 * XREFs of RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x140070040
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessBlockDeviceCharacteristics(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _BYTE *v4; // r10
  int v5; // eax
  __int64 v7; // rax

  v4 = *(_BYTE **)(a1 + 40);
  *a4 = 0;
  v5 = *(_BYTE *)(a2 + 3) & 0x3F;
  if ( v5 != 1 && v5 != 18 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  v7 = 60LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v7 = 16LL;
  if ( *(_DWORD *)(v7 + a2) < 9u || v4[3] != 60 || v4[1] != 0xB1 )
    return 3221225473LL;
  if ( (v4[8] & 0x30) == 0x10 )
    *(_WORD *)(a3 + 56) |= 2u;
  return 0LL;
}
