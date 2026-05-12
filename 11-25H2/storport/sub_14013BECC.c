/*
 * XREFs of sub_14013BECC @ 0x14013BECC
 * Callers:
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 * Callees:
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14013BECC(__int64 a1, const void *a2, unsigned int a3, char a4)
{
  size_t v5; // rsi
  __int64 v6; // rcx
  unsigned int v8; // edi
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 i; // rdx
  __int64 v13; // rcx

  v5 = a3;
  v6 = *(unsigned int *)(a1 + 12);
  v8 = 0;
  v10 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v6 + a3 + 4 <= v10 )
  {
    *(_BYTE *)(v6 + *(_QWORD *)a1) = -30;
    if ( a4 )
      *(_BYTE *)(*(unsigned int *)(a1 + 12) + *(_QWORD *)a1) |= 1u;
    v11 = ++*(_DWORD *)(a1 + 12);
    for ( i = v11 + 2; (unsigned int)i >= v11; i = (unsigned int)(i - 1) )
    {
      *(_BYTE *)(i + *(_QWORD *)a1) = a3;
      v11 = *(_DWORD *)(a1 + 12);
      a3 >>= 8;
    }
    v13 = v11 + 3;
    *(_DWORD *)(a1 + 12) = v13;
    memmove((void *)(*(_QWORD *)a1 + v13), a2, v5);
    *(_DWORD *)(a1 + 12) += v5;
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xEu, (__int64)&unk_1401552D8, v10, v6 + a3 + 4);
    return (unsigned int)-1073741789;
  }
  return v8;
}
