/*
 * XREFs of USBDeviceCreate @ 0x140034E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBDeviceCreate(__int64 a1)
{
  __int64 v1; // rbp
  NTSTATUS v3; // edi
  __int64 Pool2; // rax
  void *v5; // rbx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = -1073741670;
  Pool2 = ExAllocatePool2(64LL, 256LL, 1096972357LL);
  v5 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(v1 + 72) = Pool2;
    *(_DWORD *)Pool2 = 1096971093;
    ExInitializeNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)(Pool2 + 64), 0LL, 0LL, 0x200u, 0x88uLL, 0x41627355u, 0x14u);
    v3 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v5, ExFreePool);
    if ( v3 < 0 )
      ExFreePool(v5);
  }
  return (unsigned int)v3;
}
