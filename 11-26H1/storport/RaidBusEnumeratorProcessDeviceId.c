/*
 * XREFs of RaidBusEnumeratorProcessDeviceId @ 0x1400700B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessDeviceId(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, unsigned int *a5)
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // edx
  unsigned int v11; // ecx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  v8 = 60LL;
  v9 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v8 = 16LL;
  v10 = *(_DWORD *)(v8 + a2);
  v11 = (*(unsigned __int8 *)(v9 + 3) | (*(unsigned __int8 *)(v9 + 2) << 8)) + 4;
  if ( v11 > 0xFFFF )
    v11 = 0xFFFF;
  if ( v11 <= v10 )
  {
    *(_QWORD *)(a3 + 64) = v9;
    result = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  else
  {
    *a4 = 1;
    *a5 = v11;
    return 3221225507LL;
  }
  return result;
}
