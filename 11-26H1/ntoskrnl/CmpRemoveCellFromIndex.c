/*
 * XREFs of CmpRemoveCellFromIndex @ 0x1408663BC
 * Callers:
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A1D604 (CmpRemoveSubKeyCellNoCellRef.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall CmpRemoveCellFromIndex(unsigned __int16 *a1, unsigned __int16 a2)
{
  void *result; // rax
  __int64 v3; // r10
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // dx
  size_t v6; // r8
  unsigned __int16 *v7; // rdx
  unsigned __int16 *v8; // rcx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // dx

  result = (void *)*a1;
  v3 = a2;
  if ( (_WORD)result == 26220 || (_WORD)result == 26732 )
  {
    v9 = a1[1];
    if ( (unsigned __int16)v3 < v9 )
    {
      v10 = v9 - 1;
      a1[1] = v10;
      if ( v10 )
      {
        v6 = 8 * (v10 - v3);
        v7 = &a1[4 * (unsigned int)(v3 + 1) + 2];
        v8 = &a1[4 * v3 + 2];
        return memmove(v8, v7, v6);
      }
    }
  }
  else
  {
    v4 = a1[1];
    if ( (unsigned __int16)v3 < v4 )
    {
      v5 = v4 - 1;
      a1[1] = v5;
      if ( v5 )
      {
        v6 = 4 * (v5 - v3);
        v7 = &a1[2 * (unsigned int)(v3 + 1) + 2];
        v8 = &a1[2 * v3 + 2];
        return memmove(v8, v7, v6);
      }
    }
  }
  return result;
}
