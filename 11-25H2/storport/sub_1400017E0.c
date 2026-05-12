/*
 * XREFs of sub_1400017E0 @ 0x1400017E0
 * Callers:
 *     sub_140001010 @ 0x140001010 (sub_140001010.c)
 *     sub_1400013F0 @ 0x1400013F0 (sub_1400013F0.c)
 * Callees:
 *     sub_1400179D0 @ 0x1400179D0 (sub_1400179D0.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400017E0(unsigned int a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v4; // r13
  __int64 v6; // rbx
  __int64 ContiguousNodeMemory; // rax
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF

  v4 = a3[110];
  v6 = a3[538];
  v15 = a3[539];
  v17 = a3[540];
  v16 = 0LL;
  if ( !(unsigned int)sub_1400567A0() && a3[703] )
    a1 += 24;
  if ( (unsigned __int8)sub_1400179D0(a3) )
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD))(*(_QWORD *)(v4 + 8) + 272LL))(
                             v4,
                             &v15,
                             &v17,
                             a1);
  else
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(a1, v15, v17, v6);
  v10 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
    goto LABEL_25;
  if ( a4 != 0x80000000 )
  {
    if ( (unsigned __int8)sub_1400179D0(a3) )
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, int, __int64 *))(*(_QWORD *)(v4 + 8) + 272LL))(
              v4,
              &v15,
              &v17,
              a1,
              0,
              0LL,
              v11,
              &v16);
    else
      v12 = MmAllocateContiguousNodeMemory(a1, v15, v17, v6);
    v10 = v12;
  }
  if ( v10 )
  {
LABEL_25:
    if ( (unsigned int)sub_1400567A0() )
    {
      *(_QWORD *)(v10 + 840) = 0LL;
      if ( a3[702] )
      {
        v13 = v10 + 856;
        goto LABEL_20;
      }
    }
    else
    {
      if ( a3[703] )
      {
        v13 = a1 + v10 - 24;
LABEL_20:
        *(_QWORD *)(v10 + 840) = v13;
        *(_OWORD *)v13 = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        goto LABEL_21;
      }
      *(_QWORD *)(v10 + 840) = 0LL;
    }
LABEL_21:
    *(_QWORD *)(v10 + 24) = v16;
    *(_DWORD *)(v10 + 16) = a1;
  }
  return v10;
}
