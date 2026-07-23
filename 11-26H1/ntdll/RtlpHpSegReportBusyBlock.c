/*
 * XREFs of RtlpHpSegReportBusyBlock @ 0x1800E0BDC
 * Callers:
 *     RtlpHpSegWalk @ 0x180094C1C (RtlpHpSegWalk.c)
 *     RtlpHpSegReportPageRange @ 0x18011D164 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegReportBusyBlock(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int16 *v11; // rdx

  v7 = *a2;
  v8 = (*(_QWORD *)a1 & *a2)
     + 32 * ((unsigned __int64)((unsigned int)*a2 - (*(_DWORD *)a1 & *(_DWORD *)a2)) >> *(_BYTE *)(a1 + 8));
  *((_WORD *)a2 + 9) = 1;
  a2[1] = a3;
  result = (unsigned int)v8 & *(_DWORD *)a1;
  *((_BYTE *)a2 + 16) = a4;
  *(__int64 *)((char *)a2 + 36) = a4;
  *((_BYTE *)a2 + 17) = (__int64)(v8 - result) >> 5;
  if ( a5 )
  {
    v10 = v7 + a3 + 16;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x2000) == 0 )
      v10 = v7 + a3;
    v11 = (unsigned __int16 *)((v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    a2[3] = *((_QWORD *)v11 + 1);
    *((_WORD *)a2 + 9) = 17;
    *((_WORD *)a2 + 9) = (*((_BYTE *)v11 + 2) >> 4 << 8) | 0x11;
    result = *v11;
    *((_WORD *)a2 + 16) = result;
  }
  return result;
}
