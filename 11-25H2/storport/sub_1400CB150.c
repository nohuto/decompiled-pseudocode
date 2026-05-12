/*
 * XREFs of sub_1400CB150 @ 0x1400CB150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400D8B04 @ 0x1400D8B04 (sub_1400D8B04.c)
 */

__int64 __fastcall sub_1400CB150(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rdx

  result = sub_1400D8B04(a3, a2, a3, a1);
  if ( (_BYTE)result )
  {
    if ( v5 == 1 )
    {
      *(_DWORD *)(*(_QWORD *)(v4 + 160) + 176LL) |= 0x4000u;
      *(_QWORD *)(*(_QWORD *)(v4 + 160) + 352LL) = MEMORY[0xFFFFF78000000008];
      result = *(_QWORD *)(v4 + 160);
      ++*(_QWORD *)(*(_QWORD *)(result + 24) + 8LL);
    }
    else if ( v5 == 2 )
    {
      result = *(_QWORD *)(v4 + 160);
      *(_DWORD *)(result + 176) &= ~0x4000u;
      v6 = *(_QWORD *)(v4 + 160);
      if ( *(_QWORD *)(v6 + 352) )
      {
        *(_QWORD *)(*(_QWORD *)(v4 + 160) + 360LL) += (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v6 + 352)) / 0x2710uLL;
        result = *(_QWORD *)(v4 + 160);
        *(_QWORD *)(result + 352) = 0LL;
      }
    }
  }
  return result;
}
