/*
 * XREFs of sub_14000DF30 @ 0x14000DF30
 * Callers:
 *     sub_14000C428 @ 0x14000C428 (sub_14000C428.c)
 *     sub_14000E9A8 @ 0x14000E9A8 (sub_14000E9A8.c)
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_140032FAC @ 0x140032FAC (sub_140032FAC.c)
 *     sub_1400445B0 @ 0x1400445B0 (sub_1400445B0.c)
 *     sub_140044CA0 @ 0x140044CA0 (sub_140044CA0.c)
 *     sub_140056830 @ 0x140056830 (sub_140056830.c)
 *     sub_14005C580 @ 0x14005C580 (sub_14005C580.c)
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 *     sub_140064B44 @ 0x140064B44 (sub_140064B44.c)
 *     sub_140073A74 @ 0x140073A74 (sub_140073A74.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 *     sub_140095140 @ 0x140095140 (sub_140095140.c)
 *     sub_140095220 @ 0x140095220 (sub_140095220.c)
 *     sub_140095300 @ 0x140095300 (sub_140095300.c)
 *     sub_1400954C0 @ 0x1400954C0 (sub_1400954C0.c)
 *     sub_140096CA8 @ 0x140096CA8 (sub_140096CA8.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     sub_140075610 @ 0x140075610 (sub_140075610.c)
 */

__int64 __fastcall sub_14000DF30(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  if ( byte_1400E9750 )
    return sub_1400499AC(a1);
  v7 = 0LL;
  if ( a2 && (unsigned int)RtlAllocateMemoryBlockLookaside(a2, a1, &v7) == -1073741670 )
  {
    v6 = 0x100000LL;
    if ( a1 > 0x100000 )
      v6 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    sub_140075610(a2, v6);
    RtlAllocateMemoryBlockLookaside(a2, a1, &v7);
  }
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(a1, a2, a3, 6, a2, a1, 0, 0);
  return v7;
}
