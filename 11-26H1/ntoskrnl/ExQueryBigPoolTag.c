/*
 * XREFs of ExQueryBigPoolTag @ 0x1406CBEEC
 * Callers:
 *     sub_140553084 @ 0x140553084 (sub_140553084.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExQueryBigPoolTag(unsigned __int64 a1, _DWORD *a2)
{
  int v4; // ebx
  unsigned int v5; // edx
  char *v6; // r8
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  if ( !stru_140EFEF90.StackLimit || !stru_140EFEF90.SListFaultAddress )
    return 0LL;
  v4 = 1;
  v5 = (LODWORD(stru_140EFEF90.SListFaultAddress) - 1) & ((40543 * (a1 >> 12)) ^ ((40543 * (a1 >> 12)) >> 32));
  while ( 1 )
  {
    v6 = (char *)stru_140EFEF90.StackLimit + 32 * v5;
    v7 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 1) == 0 && a1 >= v7 && a1 < *((_QWORD *)v6 + 2) + v7 )
      break;
    if ( (void *)++v5 >= stru_140EFEF90.SListFaultAddress )
    {
      if ( !v4 )
        return 0LL;
      v5 = 0;
      v4 = 0;
    }
  }
  if ( !v6 )
    return 0LL;
  result = 1LL;
  *a2 = *((_DWORD *)v6 + 2);
  return result;
}
