/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x1801450E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpHpRemoteStackSerializeWriter(char *Src, size_t Size, __int64 *a3)
{
  size_t v4; // rdi
  _QWORD *v6; // r15
  __int64 *v7; // r14
  __int64 v8; // rdx
  void *v9; // rcx
  size_t v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-48h]

  a3[4] += Size;
  v4 = Size;
  if ( *((_DWORD *)a3 + 7) != -1073741789 && Size )
  {
    v6 = a3 + 6;
    v7 = a3 + 7;
    while ( 1 )
    {
      v8 = a3[9];
      v9 = (void *)(v8 + *v6);
      if ( v8 + v4 <= *v7 )
        break;
      v10 = *v7 - v8;
      memmove(v9, Src, v10);
      v4 -= v10;
      Src += v10;
      a3[8] += *v7;
      if ( a3[8] >= a3[1] )
      {
        *((_DWORD *)a3 + 7) = -1073741789;
        return 0LL;
      }
      NtUnmapViewOfSection(-1LL, *v6);
      v11 = *v7;
      if ( *v7 >= (unsigned __int64)(a3[1] - a3[8]) )
        v11 = a3[1] - a3[8];
      *v7 = v11;
      v14 = v11;
      v12 = *a3;
      *v6 = 0LL;
      result = ZwMapViewOfSection(v12, -1LL, v6, 0LL, v14, a3 + 8, v7, 2, 0, 4);
      if ( (int)result < 0 )
        return result;
      a3[9] = 0LL;
    }
    memmove(v9, Src, v4);
    a3[9] += v4;
  }
  return 0LL;
}
