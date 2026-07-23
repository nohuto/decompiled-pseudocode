/*
 * XREFs of CmpMarkCurrentProfileDirty @ 0x140852334
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     CmpOpenDevicesControlSet @ 0x140852D30 (CmpOpenDevicesControlSet.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

NTSTATUS __fastcall CmpMarkCurrentProfileDirty(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE v2; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  unsigned int ValueByName; // edi
  __int64 v10; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+80h] [rbp+20h] BYREF
  int v13; // [rsp+84h] [rbp+24h]
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF

  v12 = -1;
  Handle = 0LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v13 = 0;
  result = CmpOpenDevicesControlSet(a1, &Handle, 0LL);
  if ( result >= 0 )
  {
    v2 = Handle;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    result = ZwClose(v2);
    if ( v3 >= 0 )
    {
      Handle = 0LL;
      v4 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Handle, 0LL);
      result = ZwClose(KeyHandle);
      if ( v4 >= 0 )
      {
        CmpLockRegistryExclusive();
        v5 = Handle;
        v6 = *((_QWORD *)Handle + 1);
        v7 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v7, *(unsigned int *)(v6 + 40), &v12);
        else
          CellFlat = HvpGetCellPaged(v7);
        if ( CellFlat )
        {
          ValueByName = CmpFindValueByName(*(_QWORD *)(v5[1] + 32LL), CellFlat, &CmpCurrentConfigString);
          v10 = *(_QWORD *)(v5[1] + 32LL);
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v10, &v12);
          else
            HvpReleaseCellPaged(v10, &v12);
          if ( ValueByName != -1 )
            HvpMarkCellDirty(*(_QWORD *)(v5[1] + 32LL), ValueByName);
        }
        CmpUnlockRegistry();
        return ObfDereferenceObject(v5);
      }
    }
  }
  return result;
}
