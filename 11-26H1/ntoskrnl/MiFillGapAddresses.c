/*
 * XREFs of MiFillGapAddresses @ 0x140CFF990
 * Callers:
 *     MiFillPfnGaps @ 0x140CF8E68 (MiFillPfnGaps.c)
 *     MiInitializeKasan @ 0x140CF9930 (MiInitializeKasan.c)
 * Callees:
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFillGapAddresses(__int64 a1, __int64 a2)
{
  _DWORD v5[10]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+48h] [rbp-A0h]
  __int64 v7; // [rsp+50h] [rbp-98h]
  void *v8; // [rsp+C8h] [rbp-20h]
  PVOID *v9; // [rsp+D8h] [rbp-10h]

  memset_0(v5, 0, 0xC0uLL);
  v5[0] = 70400;
  v9 = qword_140E36180;
  v6 = a1;
  v8 = &MiFillGapPtes;
  v7 = a2;
  return MiWalkPageTables((__int64)v5);
}
