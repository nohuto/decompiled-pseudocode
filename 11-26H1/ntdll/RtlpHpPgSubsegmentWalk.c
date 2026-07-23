/*
 * XREFs of RtlpHpPgSubsegmentWalk @ 0x180158514
 * Callers:
 *     RtlpHpSegWalk @ 0x180094C1C (RtlpHpSegWalk.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpPgSubsegmentWalk(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6,
        int *a7)
{
  unsigned int *v7; // rdi
  __int64 result; // rax
  unsigned int v11; // edx
  __int64 v12; // r8
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int16 v16; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int8 v17; // [rsp+4Ah] [rbp+12h]

  v7 = a6;
  result = 0LL;
  if ( a4 == a2 )
  {
    v16 = 0;
    v17 = 0;
    ((void (__fastcall *)(_QWORD, __int64, __int16 *, __int64, int))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 56)))(
      *(_QWORD *)a1,
      a2,
      &v16,
      3LL,
      1);
    v11 = HIBYTE(v16);
    v12 = 16 * (unsigned int)v17;
    v13 = (unsigned __int8)v16 >> 7;
    *a5 = a3 - (v16 & 0x7F) - ((unsigned __int64)HIBYTE(v16) >> 4) - v12 - 0x2000;
    *a7 = v13;
    v14 = v11 >> 4;
    if ( (v11 & 1) != 0 )
    {
      *v7 = v12 + v14;
      v15 = 4096LL;
    }
    else
    {
      *v7 = v14;
      v15 = (unsigned int)(v12 + 4096);
    }
    return a2 + v15;
  }
  return result;
}
