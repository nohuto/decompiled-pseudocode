/*
 * XREFs of SepGetLowBoxNumberEntry @ 0x140A2C7B8
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x140A2C4A4 (SepSetTokenLowboxNumber.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140356570 (RtlNumberOfSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x1403586A0 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x140358D10 (RtlSetBits.c)
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     RtlInsertEntryHashTable @ 0x140466310 (RtlInsertEntryHashTable.c)
 *     RtlClearAllBits @ 0x14047EA90 (RtlClearAllBits.c)
 *     RtlCopySid @ 0x140A2AE10 (RtlCopySid.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x140A2C938 (SepFindMatchingLowBoxNumberEntry.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepGetLowBoxNumberEntry(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  struct _RTL_DYNAMIC_HASH_TABLE *v3; // r13
  RTL_BITMAP *v4; // r14
  unsigned int v6; // esi
  unsigned int v8; // ebx
  __int64 Pool2; // rax
  __int64 v10; // rdi
  ULONG ClearBitsAndSet; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // r8
  ULONG v16; // ebp
  __int64 v17; // r13
  struct _RTL_DYNAMIC_HASH_TABLE *v18; // [rsp+78h] [rbp+20h]

  v3 = *(struct _RTL_DYNAMIC_HASH_TABLE **)(a1 + 24);
  v4 = (RTL_BITMAP *)(a1 + 8);
  v18 = v3;
  v6 = 0;
  SepFindMatchingLowBoxNumberEntry(v3, a2);
  v8 = (4 * a2[1] + 67) & 0xFFFFFFFC;
  Pool2 = ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = Pool2 + 56;
    RtlCopySid(v8 - 56, (PSID)(Pool2 + 56), a2);
    ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v16 = 2 * RtlNumberOfSetBits(v4);
      if ( v16 > 0x10000 )
        goto LABEL_10;
      v17 = ExAllocatePool2(0x100uLL);
      if ( !v17 )
        goto LABEL_10;
      ExFreePoolWithTag(v4->Buffer, 0);
      v4->SizeOfBitMap = v16;
      v4->Buffer = (unsigned int *)v17;
      RtlClearAllBits(v4);
      RtlSetBits(v4, 0, v16 >> 1);
      v3 = v18;
      ClearBitsAndSet = RtlFindClearBitsAndSet(v4, 1u, 0);
    }
    if ( ClearBitsAndSet <= 0xFFFE )
    {
      *(_QWORD *)(v10 + 48) = 0LL;
      *(_DWORD *)(v10 + 40) = ClearBitsAndSet + 1;
      *(_QWORD *)(v10 + 24) = 1LL;
      v12 = (unsigned int)a2[1] - 1;
      v13 = *(unsigned int *)&a2[4 * v12 + 8];
      v14 = v13 + 1;
      if ( (_DWORD)v13 )
        v14 = *(unsigned int *)&a2[4 * v12 + 8];
      if ( RtlInsertEntryHashTable(v3, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v10, v14, 0LL) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24)) <= 1 )
          __fastfail(0xEu);
        *a3 = v10;
        return v6;
      }
      ExFreePoolWithTag((PVOID)v10, 0);
      RtlClearBits(v4, 1u, ClearBitsAndSet);
      return (unsigned int)-1073741670;
    }
LABEL_10:
    ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)-1073741670;
  }
  return 3221225626LL;
}
