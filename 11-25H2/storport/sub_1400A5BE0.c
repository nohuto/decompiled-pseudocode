/*
 * XREFs of sub_1400A5BE0 @ 0x1400A5BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003F8D8 @ 0x14003F8D8 (sub_14003F8D8.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

PSLIST_ENTRY __fastcall sub_1400A5BE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _DEVICE_OBJECT *v4; // rsi
  unsigned int *v5; // r14
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = (struct _DEVICE_OBJECT *)(a1 & -(__int64)((*(_BYTE *)(v2 + 144) & 8) != 0));
  if ( v4 )
  {
    v5 = (unsigned int *)(a2 + 32);
    v6 = (_DWORD *)sub_1400143E0(64LL, *(unsigned int *)(a2 + 32), 1297572178LL, *(_QWORD *)(v2 + 8));
    v7 = v6;
    if ( v6 )
    {
      memmove(v6, v5, *v5);
      v7[1] = IoWMIDeviceObjectToProviderId(v4);
      *((_QWORD *)v7 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v7) < 0 )
        ExFreePoolWithTag(v7, 0x4D576152u);
    }
  }
  return sub_14003F8D8((union _SLIST_HEADER *)(v2 + 736), a2);
}
