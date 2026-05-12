/*
 * XREFs of sub_1401147F0 @ 0x1401147F0
 * Callers:
 *     sub_1401172A0 @ 0x1401172A0 (sub_1401172A0.c)
 *     sub_140117A50 @ 0x140117A50 (sub_140117A50.c)
 *     sub_140118950 @ 0x140118950 (sub_140118950.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 *     sub_14011DA00 @ 0x14011DA00 (sub_14011DA00.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140087BF4 @ 0x140087BF4 (sub_140087BF4.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401147F0(__int64 a1, ULONG a2)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v6; // rbx
  ULONG NodeNumber; // edi
  void *v8; // rax
  void *v9; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Dst; // [rsp+20h] [rbp-68h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp+8h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+18h] BYREF
  PHYSICAL_ADDRESS v13; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 128);
  v13.QuadPart = 0LL;
  result = sub_1400143E0(
             72LL,
             (unsigned int)(dword_1401687C0 - 1)
           + 64LL
           - ((unsigned __int64)(unsigned int)(dword_1401687C0 - 1) + 64) % (unsigned int)dword_1401687C0,
             1296982354LL,
             *(_QWORD *)(v3 + 8));
  v6 = result;
  if ( result )
  {
    ProcNumber = 0;
    NodeNumber = 0x80000000;
    memset_0(&Dst, 0, sizeof(Dst));
    Length = 80;
    if ( KeGetProcessorNumberFromIndex(a2, &ProcNumber) >= 0
      && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Dst, &Length) >= 0 )
    {
      NodeNumber = Dst.NumaNode.NodeNumber;
    }
    v8 = sub_140087BF4(0x1000u, *(_QWORD **)(a1 + 128), NodeNumber, &v13);
    v9 = v8;
    if ( v8 )
    {
      memset_0(v8, 0, 0x1000uLL);
      *(PHYSICAL_ADDRESS *)(v6 + 24) = v13;
      result = v6;
      *(_QWORD *)(v6 + 16) = v9;
      *(_WORD *)(v6 + 36) = 512;
    }
    else
    {
      ExFreePoolWithTag((PVOID)v6, 0x4D4E6152u);
      return 0LL;
    }
  }
  return result;
}
