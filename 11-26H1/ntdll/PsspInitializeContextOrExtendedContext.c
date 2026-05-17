/*
 * XREFs of PsspInitializeContextOrExtendedContext @ 0x1800B3E10
 * Callers:
 *     PsspDumpThread @ 0x1800B3AE8 (PsspDumpThread.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1800B3F80 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1800B4000 (RtlGetExtendedContextLength.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall PsspInitializeContextOrExtendedContext(char *a1, size_t Size, unsigned int a3)
{
  size_t v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // r9
  char *result; // rax
  int ExtendedContextLength; // eax
  unsigned int v9; // ecx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  _DWORD *v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = (unsigned int)Size;
  v4 = a3;
  v10 = 0;
  v11 = 0LL;
  if ( (_DWORD)Size == 1232 )
    goto LABEL_8;
  if ( (int)RtlGetExtendedContextLength(a3, &v10) < 0 || (unsigned int)v3 < v10 )
  {
    if ( (v4 & 0x10000) != 0 )
    {
      v4 &= 0x1003Fu;
    }
    else if ( (v4 & 0x100000) != 0 )
    {
      v4 &= 0x10001Fu;
    }
    ExtendedContextLength = RtlGetExtendedContextLength(v4, &v10);
    v9 = v10;
    if ( ExtendedContextLength < 0 )
      v9 = -1;
    if ( (unsigned int)v3 < v9 )
      goto LABEL_8;
  }
  if ( (int)RtlInitializeExtendedContext(a1, v4, &v11) < 0
    || (v6 = (int)v11[2], *v11 > (int)v6)
    || *v11 + v11[1] < (int)v6 + v11[3]
    || (result = (char *)v11 + v6) == 0LL )
  {
LABEL_8:
    if ( (v4 & 0x10000) != 0 )
    {
      v4 &= 0x1003Fu;
    }
    else if ( (v4 & 0x100000) != 0 )
    {
      v4 &= 0x10001Fu;
    }
    memset_thunk_772440563353939046(a1, 0, v3);
    result = a1;
    *((_DWORD *)a1 + 12) = v4;
  }
  return result;
}
