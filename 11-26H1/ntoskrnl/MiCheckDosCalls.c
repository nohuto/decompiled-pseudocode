/*
 * XREFs of MiCheckDosCalls @ 0x140886074
 * Callers:
 *     MiComputeBadImageHeaderType @ 0x140A653C8 (MiComputeBadImageHeaderType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckDosCalls(unsigned __int16 *a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  __int64 v5; // r8
  unsigned __int16 *v6; // r11
  unsigned __int16 i; // dx
  unsigned __int64 v8; // rdi
  int v9; // ecx

  v2 = a1[15];
  if ( (_WORD)v2 )
  {
    v5 = a1[20];
    v6 = (unsigned __int16 *)((char *)a1 + v5);
    if ( v5 + 2 * v2 <= a2 )
    {
      for ( i = 0; i < (unsigned __int16)v2; ++i )
      {
        v8 = *v6 + (unsigned int)a1[21];
        if ( v8 >= a2 )
          break;
        v9 = *((unsigned __int8 *)a1 + v8);
        if ( !(_BYTE)v9 || (unsigned int)(v8 + v9) >= a2 )
          break;
        if ( (_BYTE)v9 == 8 && *(_QWORD *)((char *)a1 + v8 + 1) == 0x534C4C4143534F44LL )
          return 1LL;
        ++v6;
      }
    }
  }
  return 0LL;
}
