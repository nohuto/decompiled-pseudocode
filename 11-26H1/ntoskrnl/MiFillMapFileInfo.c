/*
 * XREFs of MiFillMapFileInfo @ 0x140997BA8
 * Callers:
 *     MiHandleInsertedDataVad @ 0x140996734 (MiHandleInsertedDataVad.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiLogMapFileEvent @ 0x140AD3354 (MiLogMapFileEvent.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiVadMapsLargeImage @ 0x1403C5E74 (MiVadMapsLargeImage.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 */

unsigned __int64 __fastcall MiFillMapFileInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 VadFlags; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int64 v13; // rbp
  ULONG_PTR v14; // rax
  unsigned int SessionId; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned int VadFlags2; // eax
  unsigned __int64 v20; // rdx
  unsigned __int64 result; // rax
  __int64 v22; // rcx
  unsigned __int64 LockedVadEvent; // rax
  unsigned int *v24; // [rsp+50h] [rbp+8h] BYREF

  v24 = 0LL;
  VadFlags = (unsigned int)MiReadVadFlags(a1);
  v6 = *(_QWORD *)(v4 + 120) & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = **(_QWORD **)(v4 + 80);
  v8 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v9 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v10 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
  v11 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  *(_QWORD *)(a2 + 16) = 0LL;
  v12 = v9 << 12;
  v13 = (v8 - v11 + 1) << 12;
  if ( !*(_QWORD *)(v7 + 64) )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a2 + 16) |= 0xC0000000000000uLL;
    goto LABEL_6;
  }
  v14 = MiReferenceControlAreaFile(v7);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v14 + 24);
  MiDereferenceControlAreaFile(v7, v14);
  MiGetProtoPteAddress(a1, v10, 0, &v24);
  SessionId = PsGetSessionIdEx(v6);
  v16 = MiStartingOffset((__int64 *)v24, *(_QWORD *)(a1 + 88), SessionId);
  v17 = v16 ^ (*(_QWORD *)(a2 + 16) ^ v16) & 0xFFFF000000000000uLL;
  if ( (VadFlags & 0x1C) != 8 )
  {
    v18 = v17 & 0xFF3FFFFFFFFFFFFFuLL;
    goto LABEL_5;
  }
  if ( (VadFlags & 0x3E0) != 0xE0 )
  {
    v18 = v17 & 0xFF3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
LABEL_5:
    *(_QWORD *)(a2 + 16) = v18;
    goto LABEL_6;
  }
  *(_QWORD *)(a2 + 16) = v17 & 0xFF3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
  if ( (unsigned int)MiVadMapsLargeImage(a1) )
  {
    LockedVadEvent = MiLocateLockedVadEvent(v22, 0x10u);
    v12 += (unsigned __int64)*(unsigned __int8 *)(LockedVadEvent + 24) << 16;
    v13 = *(_QWORD *)(LockedVadEvent + 32) << 12;
  }
LABEL_6:
  VadFlags2 = MiReadVadFlags2(a1);
  v20 = ((unsigned __int64)VadFlags2 << 53) ^ (*(_QWORD *)(a2 + 16) ^ ((unsigned __int64)VadFlags2 << 53)) & 0xFFDFFFFFFFFFFFFFuLL;
  *(_QWORD *)(a2 + 16) = v20;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(v6 + 464);
  result = (VadFlags & 0xFFFFFFFFFFFFFFE0uLL) << 43;
  *(_QWORD *)(a2 + 24) = v13;
  *(_QWORD *)a2 = v12;
  *(_QWORD *)(a2 + 16) = result ^ (result ^ v20) & 0xFFE0FFFFFFFFFFFFuLL;
  *(_QWORD *)(a2 + 32) = (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) << 12;
  return result;
}
