/*
 * XREFs of MiSlabEntryPageFreed @ 0x14036BAC4
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x14036B704 (MiFreePageToSlabAllocator.c)
 *     MiInsertSlabEntry @ 0x1404BCC44 (MiInsertSlabEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSlabEntryPageFreed(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // r8
  __int64 *v5; // r9
  __int64 v6; // r9
  __int64 result; // rax
  _QWORD *v8; // rdx
  unsigned int v9; // r8d
  unsigned int v10; // ecx

  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v4 = -1;
    v5 = (__int64 *)(a1 + 32);
    goto LABEL_3;
  }
  v9 = *(_DWORD *)(a2 + 92);
  if ( (v9 & 4) != 0 )
  {
    result = *(_QWORD *)(a1 + 32);
    v4 = (v9 >> 3) & 0x3F;
    v5 = (__int64 *)(result + 8LL * v4);
LABEL_3:
    if ( v5 )
    {
      v6 = *v5;
      if ( v6 )
      {
        if ( v4 == 0xFF || v6 != 1 && (v10 = *(_DWORD *)(v6 + 92), (v10 & 4) != 0) && ((v10 >> 3) & 0x3F) == v4 )
        {
          result = *(unsigned int *)(v6 + 84);
          if ( *(_DWORD *)(a2 + 84) >= (unsigned int)result )
            return result;
        }
      }
    }
    goto LABEL_7;
  }
  v4 = -1;
LABEL_7:
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( v4 == 0xFF )
      return result;
    result = *(_QWORD *)(a1 + 32);
    v8 = (_QWORD *)(result + 8LL * v4);
  }
  else
  {
    v8 = (_QWORD *)(a1 + 32);
  }
  if ( v8 )
    *v8 = a2;
  return result;
}
