/*
 * XREFs of _memccpy @ 0x180127FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__cdecl memccpy(void *Dst, const void *Src, int Val, size_t MaxCount)
{
  char *v4; // r10
  _BYTE *v5; // rdx
  char v6; // al

  if ( MaxCount )
  {
    v4 = (char *)Src - 1;
    do
    {
      ++v4;
      v5 = Dst;
      Dst = (char *)Dst + 1;
      v6 = *v4;
      *v5 = *v4;
      if ( v6 == (_BYTE)Val )
        break;
      --MaxCount;
    }
    while ( MaxCount );
  }
  return (void *)((unsigned __int64)Dst & -(__int64)(MaxCount != 0));
}
