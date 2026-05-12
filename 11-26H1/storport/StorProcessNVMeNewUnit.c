/*
 * XREFs of StorProcessNVMeNewUnit @ 0x140191C34
 * Callers:
 *     StorProcessNVMeModifiedNodes @ 0x1400C74E0 (StorProcessNVMeModifiedNodes.c)
 * Callees:
 *     McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x1400276DC (McTemplateK0zqjuuusssz_EtwWriteTransfer.c)
 *     RaidAdapterInsertUnit @ 0x1400350E8 (RaidAdapterInsertUnit.c)
 *     RaidUnitAssignAddress @ 0x14003F778 (RaidUnitAssignAddress.c)
 *     RaUnitLockForwardIo @ 0x140042F00 (RaUnitLockForwardIo.c)
 *     RaidLockDeviceQueue @ 0x14004D4D4 (RaidLockDeviceQueue.c)
 *     RaidStartUnit @ 0x140057F60 (RaidStartUnit.c)
 *     StorUnitAssignNVMeIdentity @ 0x140191D30 (StorUnitAssignNVMeIdentity.c)
 */

__int64 __fastcall StorProcessNVMeNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // r9
  __int64 result; // rax
  const wchar_t *v8; // r10

  v2 = *(_QWORD *)(a2 + 8);
  RaidUnitAssignAddress(v2, *(_DWORD *)(a2 + 4));
  StorUnitAssignNVMeIdentity(v4, v3 + 32);
  v5 = *(_BYTE *)(v2 + 504) & 0xF7;
  *(_DWORD *)(v2 + 56) = 2;
  *(_BYTE *)(v2 + 504) = v5 | 4;
  RaidLockDeviceQueue(v2 + 720);
  RaUnitLockForwardIo(v2, 1);
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), (_QWORD *)v2);
  RaidStartUnit(v2);
  v6 = *(_QWORD *)(v2 + 24);
  result = *(unsigned int *)(v6 + 4340);
  *(_DWORD *)(v2 + 3432) = result;
  if ( (byte_140173446 & 1) != 0 )
  {
    v8 = (const wchar_t *)&unk_140153274;
    if ( *(_QWORD *)(v6 + 5144) )
      v8 = *(const wchar_t **)(v6 + 5144);
    return McTemplateK0zqjuuusssz_EtwWriteTransfer(
             v2 + 177,
             v2 + 168,
             v6 + 5128,
             *(const wchar_t **)(v6 + 4784),
             *(_DWORD *)(v6 + 56),
             v6 + 5128,
             0,
             0,
             *(_BYTE *)(v2 + 104),
             (const char *)(v2 + 168),
             (const char *)(v2 + 177),
             (const char *)(v2 + 242),
             v8);
  }
  return result;
}
