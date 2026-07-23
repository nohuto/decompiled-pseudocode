/*
 * XREFs of KeFindConfigurationNextEntry @ 0x140CD1050
 * Callers:
 *     HalpAcpiFindRsdp @ 0x140CB381C (HalpAcpiFindRsdp.c)
 *     KeFindConfigurationEntry @ 0x140CD1020 (KeFindConfigurationEntry.c)
 *     KeFindConfigurationNextEntry @ 0x140CD1050 (KeFindConfigurationNextEntry.c)
 * Callees:
 *     KeFindConfigurationNextEntry @ 0x140CD1050 (KeFindConfigurationNextEntry.c)
 */

__int64 __fastcall KeFindConfigurationNextEntry(__int64 a1, int a2, int a3, int *a4, _QWORD *a5)
{
  int v9; // ebp
  __int64 i; // rbx
  __int64 v11; // rcx
  __int64 result; // rax

  if ( a4 )
    v9 = *a4;
  else
    v9 = 0;
LABEL_4:
  if ( a1 )
  {
    if ( *a5 )
    {
      if ( a1 == *a5 )
        *a5 = 0LL;
    }
    else if ( *(_DWORD *)(a1 + 24) == a2 && *(_DWORD *)(a1 + 28) == a3 && (a4 != 0LL ? *(_DWORD *)(a1 + 40) : 0) == v9 )
    {
      return a1;
    }
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(i + 16) )
    {
      if ( !i )
      {
        a1 = *(_QWORD *)(a1 + 8);
        goto LABEL_4;
      }
      if ( *a5 )
      {
        if ( i == *a5 )
          *a5 = 0LL;
      }
      else if ( *(_DWORD *)(i + 24) == a2 && *(_DWORD *)(i + 28) == a3 && (a4 != 0LL ? *(_DWORD *)(i + 40) : 0) == v9 )
      {
        return i;
      }
      v11 = *(_QWORD *)(i + 8);
      if ( v11 )
      {
        result = KeFindConfigurationNextEntry(v11, a2, a3, (_DWORD)a4, (__int64)a5);
        if ( result )
          return result;
      }
    }
  }
  return 0LL;
}
