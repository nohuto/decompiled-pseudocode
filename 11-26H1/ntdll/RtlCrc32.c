/*
 * XREFs of RtlCrc32 @ 0x18010F720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  size_t v3; // rbp
  DWORD i; // r8d
  unsigned __int8 v6; // al
  size_t v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // r9
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdx
  size_t v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // al

  v3 = Size;
  for ( i = ~InitialCrc; v3; --v3 )
  {
    if ( ((unsigned __int8)Buffer & 7) == 0 )
      break;
    v6 = *(_BYTE *)Buffer;
    Buffer = (char *)Buffer + 1;
    i = _mm_crc32_u8(i, v6);
  }
  if ( v3 >= 0x40 )
  {
    v7 = v3 >> 6;
    v3 += -64LL * (v3 >> 6);
    do
    {
      v8 = *(_QWORD *)Buffer;
      v9 = (unsigned __int64 *)((char *)Buffer + 56);
      v10 = *((_QWORD *)Buffer + 1);
      v11 = *((_QWORD *)Buffer + 2);
      v12 = *((_QWORD *)Buffer + 3);
      v13 = *((_QWORD *)Buffer + 4);
      v14 = *((_QWORD *)Buffer + 5);
      v15 = *((_QWORD *)Buffer + 6);
      Buffer = (char *)Buffer + 64;
      i = _mm_crc32_u64(
            _mm_crc32_u64(
              _mm_crc32_u64(
                _mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(i, v8), v10), v11), v12), v13),
                v14),
              v15),
            *v9);
      --v7;
    }
    while ( v7 );
  }
  if ( v3 >= 8 )
  {
    v16 = v3 >> 3;
    v3 += -8LL * (v3 >> 3);
    do
    {
      v17 = *(_QWORD *)Buffer;
      Buffer = (char *)Buffer + 8;
      i = _mm_crc32_u64(i, v17);
      --v16;
    }
    while ( v16 );
  }
  for ( ; v3; --v3 )
  {
    v18 = *(_BYTE *)Buffer;
    Buffer = (char *)Buffer + 1;
    i = _mm_crc32_u8(i, v18);
  }
  return ~i;
}
