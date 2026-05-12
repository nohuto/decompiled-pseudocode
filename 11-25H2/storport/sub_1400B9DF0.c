/*
 * XREFs of sub_1400B9DF0 @ 0x1400B9DF0
 * Callers:
 *     sub_1400B1F4C @ 0x1400B1F4C (sub_1400B1F4C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140051AC8 @ 0x140051AC8 (sub_140051AC8.c)
 *     sub_1400AE09C @ 0x1400AE09C (sub_1400AE09C.c)
 */

void __fastcall sub_1400B9DF0(__int64 a1, int a2, unsigned int a3)
{
  ULONG InputBufferLength; // edi
  int *v7; // rax
  unsigned int *v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdi
  const wchar_t *v11; // rbx

  InputBufferLength = a3 + 48;
  v7 = (int *)sub_1400143E0(256LL, a3 + 48, 1700028754LL, *(_QWORD *)(a1 + 8));
  v8 = (unsigned int *)v7;
  if ( v7 )
  {
    if ( sub_140051AC8(*(PDEVICE_OBJECT *)(a1 + 8), a2, a3, v7, InputBufferLength) >= 0 )
    {
      v9 = v8[7];
      if ( v9 <= a3 && (byte_1401694F4 & 4) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = (const wchar_t *)&unk_140149394;
        if ( *(_QWORD *)(v10 + 5080) )
          v11 = *(const wchar_t **)(v10 + 5080);
        sub_1400AE09C(
          a1 + 242,
          a1 + 177,
          a1 + 168,
          *(_DWORD *)(v10 + 56),
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          a1 + 2104,
          v10 + 5064,
          *(const wchar_t **)(v10 + 4720),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v11,
          (const char *)(*(_QWORD *)(a1 + 160) + 90LL),
          *(_BYTE *)(a1 + 506) & 1,
          a2,
          v9,
          (__int64)v8 + v8[6] + 8);
      }
    }
    ExFreePoolWithTag(v8, 0x65546152u);
  }
}
