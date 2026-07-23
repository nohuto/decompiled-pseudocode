/*
 * XREFs of RtlCrc32 @ 0x1404C3A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  size_t v3; // rbp
  DWORD i; // r8d
  size_t v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // al
  unsigned __int8 v10; // al
  size_t v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // r9
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx

  v3 = Size;
  for ( i = ~InitialCrc; v3; --v3 )
  {
    if ( ((unsigned __int8)Buffer & 7) == 0 )
      break;
    v10 = *(_BYTE *)Buffer;
    Buffer = (char *)Buffer + 1;
    i = _mm_crc32_u8(i, v10);
  }
  if ( v3 >= 0x40 )
  {
    v11 = v3 >> 6;
    v3 += -64LL * (v3 >> 6);
    do
    {
      v12 = *(_QWORD *)Buffer;
      v13 = (unsigned __int64 *)((char *)Buffer + 56);
      v14 = *((_QWORD *)Buffer + 1);
      v15 = *((_QWORD *)Buffer + 2);
      v16 = *((_QWORD *)Buffer + 3);
      v17 = *((_QWORD *)Buffer + 4);
      v18 = *((_QWORD *)Buffer + 5);
      v19 = *((_QWORD *)Buffer + 6);
      Buffer = (char *)Buffer + 64;
      i = _mm_crc32_u64(
            _mm_crc32_u64(
              _mm_crc32_u64(
                _mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(i, v12), v14), v15), v16), v17),
                v18),
              v19),
            *v13);
      --v11;
    }
    while ( v11 );
  }
  if ( v3 >= 8 )
  {
    v6 = v3 >> 3;
    v3 += -8LL * (v3 >> 3);
    do
    {
      v7 = *(_QWORD *)Buffer;
      Buffer = (char *)Buffer + 8;
      i = _mm_crc32_u64(i, v7);
      --v6;
    }
    while ( v6 );
  }
  for ( ; v3; --v3 )
  {
    v8 = *(_BYTE *)Buffer;
    Buffer = (char *)Buffer + 1;
    i = _mm_crc32_u8(i, v8);
  }
  return ~i;
}
