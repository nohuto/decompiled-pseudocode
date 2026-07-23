/*
 * XREFs of HsaSlConfigureLeafPhysicalPfn @ 0x1404CCB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaSlConfigureLeafPhysicalPfn(unsigned __int64 *a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v4; // esi
  int v5; // ebx
  unsigned int v6; // r11d
  unsigned __int64 *i; // r10
  unsigned __int64 v8; // r8

  v4 = a3 & 1;
  v5 = a3 & 2;
  v6 = 0;
  for ( i = a1; v6 < a4; ++i )
  {
    if ( *i )
      break;
    ++v6;
    v8 = ((unsigned __int64)v4 << 61) | -(__int64)(v5 != 0) & 0x4000000000000000LL;
    *i = v8;
    *i = (*(unsigned __int64 *)((char *)i + a2 - (_QWORD)a1) << 12) ^ (v8 ^ (*(unsigned __int64 *)((char *)i
                                                                                                 + a2
                                                                                                 - (_QWORD)a1) << 12)) & 0xFFF0000000000FFFuLL | 1;
  }
  return v6;
}
