/*
 * XREFs of PsRootSiloInformation @ 0x1407783B8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PspGetNextSilo @ 0x1409FF6D8 (PspGetNextSilo.c)
 *     PspIsSiloInSilo @ 0x140AF43F4 (PspIsSiloInSilo.c)
 */

__int64 __fastcall PsRootSiloInformation(unsigned int *a1, unsigned int a2, unsigned int *a3, char a4)
{
  unsigned __int64 v5; // r13
  unsigned int v7; // edi
  unsigned int v9; // esi
  int v10; // ebx
  unsigned int *i; // rcx
  unsigned int *NextSilo; // r14
  __int64 v13; // rdx
  unsigned int *v14; // rcx
  struct _LIST_ENTRY *CurrentSilo; // [rsp+38h] [rbp-40h]

  v5 = a2;
  v7 = 4;
  if ( a2 < 4 )
    return 3221225507LL;
  CurrentSilo = PsGetCurrentSilo();
  v9 = 0;
  v10 = 0;
  for ( i = 0LL; ; i = NextSilo )
  {
    NextSilo = (unsigned int *)PspGetNextSilo(i, 0LL);
    if ( !NextSilo )
      break;
    if ( NextSilo != (unsigned int *)CurrentSilo && (unsigned __int8)PspIsSiloInSilo(NextSilo) )
    {
      if ( (unsigned __int64)v7 + 4 > v5 )
      {
        v10 = -1073741789;
        ObfDereferenceObjectWithTag(NextSilo, 0x6E457350u);
        break;
      }
      v13 = NextSilo[367];
      v14 = &a1[v9 + 1];
      if ( a4 )
        RtlWriteULongToUser(v14, v13);
      else
        *v14 = v13;
      v7 += 4;
      ++v9;
    }
  }
  if ( v10 >= 0 )
  {
    if ( a4 )
      RtlWriteULongToUser(a1, v9);
    else
      *a1 = v9;
    *a3 = v7;
  }
  return (unsigned int)v10;
}
