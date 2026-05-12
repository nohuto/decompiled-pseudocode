/*
 * XREFs of sub_140056004 @ 0x140056004
 * Callers:
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140056004(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  volatile signed __int32 *v3; // roff
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD **)(a2 + 792);
  if ( *v2 != 1 || v2[1] != 24 )
    return 0LL;
  v3 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 5640) + ((unsigned __int64)(unsigned int)v2[2] << 6) + 40);
  _InterlockedDecrement(v3);
  v4 = *(_QWORD *)(a2 + 792);
  result = (*(int *)v3 >> 31) & 0xC0000001;
  *(_OWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  return result;
}
