/*
 * XREFs of MiWriteEntirePageHashEntry @ 0x14048F464
 * Callers:
 *     MiUpdatePageFileBlockOwner @ 0x14030D080 (MiUpdatePageFileBlockOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWriteEntirePageHashEntry(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_DWORD *)a1 = result;
  if ( dword_140E35F50 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
    result = a2[1];
    *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}
