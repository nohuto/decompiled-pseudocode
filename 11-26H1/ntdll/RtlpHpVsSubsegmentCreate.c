/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x18005E8D4
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x18005E538 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpVsSubsegmentComputeSize @ 0x18005FCA8 (RtlpHpVsSubsegmentComputeSize.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  v12 = 0;
  v11 = 0;
  v13 = 0;
  v4 = (unsigned int)RtlpHpVsSubsegmentComputeSize(a1, a2, &v12);
  while ( 1 )
  {
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, unsigned int *))(*(_QWORD *)(a1 + 16) ^ RtlpHpHeapGlobals ^ a1))(
           *(_QWORD *)(a1 + 8) ^ a1,
           (unsigned int)v4,
           &v13,
           &v11);
    v6 = v5;
    if ( v5 )
      break;
    v4 = v11;
    if ( v11 < v12 )
      return v2;
  }
  v7 = 4096;
  if ( (v13 & 1) != 0 )
    v7 = v4;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
         *(_QWORD *)(a1 + 8) ^ a1,
         v5,
         v7,
         0LL) < 0 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
      *(_QWORD *)(a1 + 8) ^ a1,
      v6,
      (unsigned int)v4,
      0LL);
  }
  else
  {
    v8 = (unsigned __int64)v7 >> 12;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v8);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_DWORD *)(v6 + 34) = 0;
    *(_WORD *)(v6 + 38) = 0;
    *(_QWORD *)(v6 + 16) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8);
    *(_QWORD *)(v6 + 24) = 0LL;
    v9 = (unsigned __int64)(v4 - 48) >> 4;
    *(_WORD *)(v6 + 32) = v9;
    if ( v7 == (_DWORD)v4 )
      LOWORD(v2) = 0x8000;
    *(_WORD *)(v6 + 36) = (v9 ^ 0x2BED) & 0x7FFF | v2;
    v2 = v6;
    *(_OWORD *)(v6 + 48) = 0LL;
    *(_WORD *)(v6 + 50) = v9;
    *(_QWORD *)(v6 + 48) ^= RtlpHpHeapGlobals ^ (v6 + 48);
  }
  return v2;
}
