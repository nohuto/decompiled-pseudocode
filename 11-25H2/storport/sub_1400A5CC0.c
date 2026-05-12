/*
 * XREFs of sub_1400A5CC0 @ 0x1400A5CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     StorPortGetLogicalUnit @ 0x14001F590 (StorPortGetLogicalUnit.c)
 *     sub_14003F8D8 @ 0x14003F8D8 (sub_14003F8D8.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

PSLIST_ENTRY __fastcall sub_1400A5CC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // dl
  struct _DEVICE_OBJECT *v5; // rbx
  __int64 LogicalUnit; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rbp

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_BYTE *)(a2 + 32);
  if ( v4 == -1 )
  {
    v5 = (struct _DEVICE_OBJECT *)(a1 & -(__int64)((*(_BYTE *)(v2 + 104) & 4) != 0));
  }
  else
  {
    LogicalUnit = StorPortGetLogicalUnit(*(_QWORD *)(a1 + 64), v4, *(_BYTE *)(a2 + 33), *(_BYTE *)(a2 + 34));
    if ( !LogicalUnit || (*(_BYTE *)(LogicalUnit + 504) & 0x10) == 0 )
      return sub_14003F8D8((union _SLIST_HEADER *)(v2 + 1392), a2);
    v5 = *(struct _DEVICE_OBJECT **)(LogicalUnit + 8);
  }
  if ( v5 )
  {
    v7 = (_DWORD *)sub_1400143E0(64LL, *(unsigned int *)(a2 + 40), 1297572178LL, *(_QWORD *)(v2 + 8));
    v8 = v7;
    if ( v7 )
    {
      memmove(v7, (const void *)(a2 + 40), *(unsigned int *)(a2 + 40));
      v8[1] = IoWMIDeviceObjectToProviderId(v5);
      *((_QWORD *)v8 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v8) < 0 )
        ExFreePoolWithTag(v8, 0x4D576152u);
    }
  }
  return sub_14003F8D8((union _SLIST_HEADER *)(v2 + 1392), a2);
}
