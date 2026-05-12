/*
 * XREFs of RaidBusEnumeratorProcessNewUnit @ 0x140034E94
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x14005CC38 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x1400276DC (McTemplateK0zqjuuusssz_EtwWriteTransfer.c)
 *     RaidUnitAssignIdentity @ 0x140035004 (RaidUnitAssignIdentity.c)
 *     RaidAdapterInsertUnit @ 0x1400350E8 (RaidAdapterInsertUnit.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaidStartUnit @ 0x140057F60 (RaidStartUnit.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall RaidBusEnumeratorProcessNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  char v6; // al
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rax
  KIRQL v10; // al
  __int64 v11; // rcx
  KIRQL v12; // di
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int16 v17; // cx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  const wchar_t *v22; // r8
  __int128 *v24; // [rsp+78h] [rbp-19h] BYREF
  __int64 v25; // [rsp+80h] [rbp-11h]
  __int128 v26; // [rsp+88h] [rbp-9h] BYREF
  _OWORD v27[2]; // [rsp+98h] [rbp+7h] BYREF
  __int128 v28; // [rsp+B8h] [rbp+27h]
  __int64 v29; // [rsp+C8h] [rbp+37h]

  v2 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 104) = *(_DWORD *)(a2 + 4);
  v5 = *(_QWORD *)(v2 + 24);
  *(_WORD *)(v2 + 96) = 1;
  *(_DWORD *)(v2 + 100) = 4;
  *(_WORD *)(v2 + 98) = *(_WORD *)(v5 + 56);
  RaidUnitAssignIdentity(v2, a2 + 32);
  v6 = *(_BYTE *)(v2 + 504) & 0xF7;
  *(_DWORD *)(v2 + 56) = 2;
  *(_BYTE *)(v2 + 504) = v6 | 4;
  *(_BYTE *)(v2 + 757) = 1;
  v7 = *(_QWORD *)(v2 + 808);
  do
  {
    if ( (v7 & 3) != 0 )
      break;
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 808), v7 | 2, v7);
  }
  while ( v8 != v7 );
  memset(v27, 0, sizeof(v27));
  v29 = 0LL;
  v28 = 0LL;
  if ( *(_QWORD *)(v2 + 32) && RaidIsUnitControlSupported(v2, 31) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v2 + 32) + 24LL));
    v11 = *(_QWORD *)(v2 + 32);
    v12 = v10;
    *(_DWORD *)(v11 + 80) |= 0x20u;
    *(_QWORD *)&v27[0] = 0x3800000038LL;
    DWORD2(v27[0]) = 2;
    if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(v11, v13, v14, v15) )
    {
      v16 = *(_QWORD *)(v2 + 24);
      WORD4(v28) = 1;
      HIDWORD(v28) = 4;
      v17 = *(_WORD *)(v16 + 56);
      LOWORD(v29) = *(_WORD *)(v2 + 104);
      BYTE2(v29) = *(_BYTE *)(v2 + 106);
      WORD5(v28) = v17;
    }
    v18 = *(_DWORD **)(v2 + 24);
    if ( *v18 == 1094997074 )
    {
      v19 = v18 + 94;
    }
    else if ( *v18 == 1314275652 )
    {
      v19 = v18 + 42;
    }
    else
    {
      v19 = 0LL;
    }
    RaCallMiniportUnitControl(v19, 31LL, v27);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v2 + 32) + 24LL), v12);
  }
  if ( *(_QWORD *)(*(_QWORD *)a1 + 4944LL)
    && _bittest64(*(const signed __int64 **)(*(_QWORD *)a1 + 4936LL), *(unsigned __int8 *)(a2 + 4)) )
  {
    *(_DWORD *)(v2 + 1952) |= 1u;
  }
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), v2);
  RaidStartUnit(v2);
  *(_DWORD *)(v2 + 3432) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4340LL);
  LOBYTE(v9) = RaidIsUnitControlSupported(v2, 12);
  if ( (_BYTE)v9 )
  {
    v20 = *(_QWORD *)(v2 + 24);
    v25 = 0LL;
    v26 = 0LL;
    LOWORD(v26) = 1;
    DWORD1(v26) = 4;
    WORD1(v26) = *(_WORD *)(v20 + 56);
    WORD4(v26) = *(_WORD *)(v2 + 104);
    BYTE10(v26) = *(_BYTE *)(v2 + 106);
    v24 = &v26;
    LODWORD(v9) = RaCallMiniportUnitControl(v20 + 376, 12LL, &v24);
    if ( (int)v9 >= 0 )
    {
      LOBYTE(v9) = v25 - 1;
      if ( (unsigned int)(v25 - 1) <= 0x13 )
      {
        v9 = *(_QWORD *)(v2 + 24);
        if ( (_DWORD)v25 != *(_DWORD *)(v9 + 4340) )
          *(_DWORD *)(v2 + 3432) = v25;
      }
    }
  }
  if ( (byte_140173446 & 1) != 0 )
  {
    v21 = *(_QWORD *)(v2 + 24);
    v22 = (const wchar_t *)&unk_140153274;
    if ( *(_QWORD *)(v21 + 5144) )
      v22 = *(const wchar_t **)(v21 + 5144);
    LOBYTE(v9) = McTemplateK0zqjuuusssz_EtwWriteTransfer(
                   v2 + 177,
                   v2 + 168,
                   (__int64)v22,
                   *(const wchar_t **)(v21 + 4784),
                   *(_DWORD *)(v21 + 56),
                   v21 + 5128,
                   *(_BYTE *)(v2 + 104),
                   *(_BYTE *)(v2 + 105),
                   *(_BYTE *)(v2 + 106),
                   (const char *)(v2 + 168),
                   (const char *)(v2 + 177),
                   (const char *)(v2 + 242),
                   v22);
  }
  return v9;
}
