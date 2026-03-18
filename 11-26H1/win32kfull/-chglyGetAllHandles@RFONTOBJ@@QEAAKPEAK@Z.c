/*
 * XREFs of ?chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z @ 0x14023362C
 * Callers:
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1402335F0 (FONTOBJ_cGetAllGlyphHandles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::chglyGetAllHandles(RFONTOBJ *this, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r9
  unsigned int i; // r10d
  __int16 v7; // ax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  unsigned int v11; // eax

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  if ( *(_DWORD *)(v3 + 4) > 8u && (result = *(unsigned int *)(v3 + 200), (_DWORD)result) )
  {
    if ( a2 )
    {
      do
        *a2++ = v2++;
      while ( v2 < (unsigned int)result );
    }
  }
  else
  {
    v5 = *(_QWORD *)(*(_QWORD *)this + 472LL);
    if ( a2 )
    {
      for ( i = 0; i < *(_DWORD *)(v5 + 12); ++i )
      {
        v7 = *(_WORD *)(v5 + 16LL * i + 18);
        if ( *(_QWORD *)(v5 + 16LL * i + 24) )
        {
          v8 = 0;
          if ( v7 )
          {
            do
            {
              v9 = v8++;
              *a2++ = *(_DWORD *)(*(_QWORD *)(v5 + 16LL * i + 24) + 4 * v9);
            }
            while ( v8 < *(unsigned __int16 *)(v5 + 16LL * i + 18) );
          }
        }
        else
        {
          v10 = 0;
          if ( v7 )
          {
            do
            {
              v11 = v10 + *(unsigned __int16 *)(v5 + 16LL * i + 16);
              ++v10;
              *a2++ = v11;
            }
            while ( v10 < *(unsigned __int16 *)(v5 + 16LL * i + 18) );
          }
        }
      }
    }
    return *(unsigned int *)(v5 + 8);
  }
  return result;
}
