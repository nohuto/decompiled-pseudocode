/*
 * XREFs of StorCompareScsiIdentity @ 0x14003DBB0
 * Callers:
 *     RaidBusEnumeratorProcessBusUnit @ 0x1400518A4 (RaidBusEnumeratorProcessBusUnit.c)
 * Callees:
 *     IsBlankIdPage @ 0x14003DCEC (IsBlankIdPage.c)
 *     StorCompareScsiDeviceId @ 0x14003DD80 (StorCompareScsiDeviceId.c)
 *     memcmp @ 0x140138EA0 (memcmp.c)
 */

__int64 __fastcall StorCompareScsiIdentity(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  const void *v10; // rdx
  const void *v11; // rcx
  size_t v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdi
  char v15; // al
  char v16; // r11
  __int64 v18; // rcx
  __int64 v19; // rax

  v2 = *a1;
  v4 = *a2;
  v6 = *(_QWORD *)(*a1 + 8) - *(_QWORD *)(v4 + 8);
  if ( !v6 )
  {
    v6 = *(_QWORD *)(v2 + 16) - *(_QWORD *)(v4 + 16);
    if ( !v6 )
      v6 = *(_QWORD *)(v2 + 24) - *(_QWORD *)(v4 + 24);
  }
  v7 = 0;
  if ( v6 || ((*(_BYTE *)v2 ^ *(_BYTE *)v4) & 0x1F) != 0 )
    return 1LL;
  v8 = a1[6];
  if ( v8 && (v9 = a2[6]) != 0 )
  {
    v10 = (const void *)(v9 + 90);
    v11 = (const void *)(v8 + 90);
    v12 = 16LL;
  }
  else
  {
    v18 = a1[5];
    if ( v18 && (v19 = a2[5]) != 0 )
    {
      v10 = (const void *)(v19 + 41);
      v11 = (const void *)(v18 + 41);
      v12 = 8LL;
    }
    else
    {
      v10 = (const void *)(v4 + 32);
      v11 = (const void *)(v2 + 32);
      v12 = 4LL;
    }
  }
  if ( memcmp(v11, v10, v12) )
    return 3LL;
  v13 = a1[4];
  v14 = a2[4];
  if ( !v13 )
  {
    if ( !v14 )
    {
      LOBYTE(v7) = RtlCompareString((const STRING *)(a1 + 1), (const STRING *)(a2 + 1), 0) != 0;
      return v7;
    }
    return 1LL;
  }
  if ( !v14 )
    return 1LL;
  IsBlankIdPage(a1[4]);
  v15 = IsBlankIdPage(v14);
  if ( v16 )
    return 0LL;
  if ( v15 )
    return 2LL;
  return StorCompareScsiDeviceId(v13, v14);
}
