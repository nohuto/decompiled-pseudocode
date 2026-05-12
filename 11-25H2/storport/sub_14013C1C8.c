/*
 * XREFs of sub_14013C1C8 @ 0x14013C1C8
 * Callers:
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 * Callees:
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14013C1C8(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // r9d
  unsigned int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]

  v5 = *(unsigned int *)(a1 + 12);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v5 + a3 + 1 <= v7 )
  {
    *(_BYTE *)(v5 + *(_QWORD *)a1) = a3 - 96;
    v8 = *(_DWORD *)(a1 + 12) + 1;
    *(_DWORD *)(a1 + 12) = v8;
    if ( a3 )
    {
      memmove((void *)(*(_QWORD *)a1 + v8), a2, a3);
      *(_DWORD *)(a1 + 12) += a3;
    }
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    {
      v10 = v5 + a3 + 1;
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xCu, (__int64)&unk_1401552D8, v7, v10);
    }
    return (unsigned int)-1073741789;
  }
  return v6;
}
