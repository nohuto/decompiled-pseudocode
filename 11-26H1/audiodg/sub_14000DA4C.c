/*
 * XREFs of sub_14000DA4C @ 0x14000DA4C
 * Callers:
 *     sub_14000C428 @ 0x14000C428 (sub_14000C428.c)
 *     sub_14000C7BC @ 0x14000C7BC (sub_14000C7BC.c)
 *     sub_14000D9B8 @ 0x14000D9B8 (sub_14000D9B8.c)
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_14000E920 @ 0x14000E920 (sub_14000E920.c)
 *     sub_14000E9A8 @ 0x14000E9A8 (sub_14000E9A8.c)
 *     sub_14000EF40 @ 0x14000EF40 (sub_14000EF40.c)
 *     sub_140015F50 @ 0x140015F50 (sub_140015F50.c)
 *     sub_140016310 @ 0x140016310 (sub_140016310.c)
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_140032FAC @ 0x140032FAC (sub_140032FAC.c)
 *     sub_1400445B0 @ 0x1400445B0 (sub_1400445B0.c)
 *     sub_140044CA0 @ 0x140044CA0 (sub_140044CA0.c)
 *     sub_140044F74 @ 0x140044F74 (sub_140044F74.c)
 *     sub_14004505C @ 0x14004505C (sub_14004505C.c)
 *     sub_140056830 @ 0x140056830 (sub_140056830.c)
 *     sub_14005C580 @ 0x14005C580 (sub_14005C580.c)
 *     sub_140064B44 @ 0x140064B44 (sub_140064B44.c)
 *     sub_140073A74 @ 0x140073A74 (sub_140073A74.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 *     sub_140095140 @ 0x140095140 (sub_140095140.c)
 *     sub_140095220 @ 0x140095220 (sub_140095220.c)
 *     sub_140095300 @ 0x140095300 (sub_140095300.c)
 *     sub_1400954C0 @ 0x1400954C0 (sub_1400954C0.c)
 *     sub_140096888 @ 0x140096888 (sub_140096888.c)
 *     sub_140096938 @ 0x140096938 (sub_140096938.c)
 *     sub_140096CA8 @ 0x140096CA8 (sub_140096CA8.c)
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 sub_14000DA4C()
{
  BOOL inited; // eax
  LPVOID Context; // [rsp+30h] [rbp+8h] BYREF

  Context = 0LL;
  inited = InitOnceExecuteOnce(&stru_1400E9758, InitFn, 0LL, &Context);
  return (unsigned __int64)Context & -(__int64)inited;
}
