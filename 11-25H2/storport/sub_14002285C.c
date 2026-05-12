/*
 * XREFs of sub_14002285C @ 0x14002285C
 * Callers:
 *     sub_140007BD8 @ 0x140007BD8 (sub_140007BD8.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_1400281F4 @ 0x1400281F4 (sub_1400281F4.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_1400536E8 @ 0x1400536E8 (sub_1400536E8.c)
 *     sub_1400537EC @ 0x1400537EC (sub_1400537EC.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     StorPortGetUncachedExtension @ 0x140073F80 (StorPortGetUncachedExtension.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 * Callees:
 *     sub_1400179D0 @ 0x1400179D0 (sub_1400179D0.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14002285C(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 ContiguousNodeMemory; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v14[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3[539];
  v14[0] = 0LL;
  v6 = a3[110];
  v7 = a3[538];
  v16 = v3;
  v15 = a3[540];
  if ( !(unsigned int)((__int64 (*)(void))sub_1400567A0)() && a3[703] )
    a1 += 24;
  if ( sub_1400179D0((__int64)a3) )
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)(v6 + 8) + 272LL))(
                             v6,
                             &v16,
                             &v15,
                             a1,
                             0,
                             0LL,
                             0x80000000,
                             v14);
  else
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(a1, v16, v15, v7);
  v11 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
  {
    if ( (unsigned int)sub_1400567A0(v10, v9) )
    {
      *(_QWORD *)(v11 + 840) = 0LL;
      if ( a3[702] )
      {
        *(_QWORD *)(v11 + 840) = v11 + 856;
        *(_OWORD *)(v11 + 856) = 0LL;
        *(_QWORD *)(v11 + 872) = 0LL;
      }
    }
    else if ( a3[703] )
    {
      v12 = v11 + a1 - 24LL;
      *(_QWORD *)(v11 + 840) = v12;
      *(_OWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
    }
    else
    {
      *(_QWORD *)(v11 + 840) = 0LL;
    }
    *(_QWORD *)(v11 + 24) = v14[0];
    *(_DWORD *)(v11 + 16) = a1;
  }
  return v11;
}
