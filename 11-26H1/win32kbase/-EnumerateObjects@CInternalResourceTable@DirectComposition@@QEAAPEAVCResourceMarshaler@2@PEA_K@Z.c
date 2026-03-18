/*
 * XREFs of ?EnumerateObjects@CInternalResourceTable@DirectComposition@@QEAAPEAVCResourceMarshaler@2@PEA_K@Z @ 0x14013C82C
 * Callers:
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x14022AAE0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CResourceMarshaler *__fastcall DirectComposition::CInternalResourceTable::EnumerateObjects(
        DirectComposition::CInternalResourceTable *this,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // r11
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx
  struct DirectComposition::CResourceMarshaler *result; // rax

  v2 = *((_QWORD *)this + 3);
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 >= v2 )
      break;
    v6 = *((_QWORD *)this + 4);
    v7 = (_QWORD *)(*(_QWORD *)this + v5 * v6);
    while ( 1 )
    {
      v8 = v5++;
      if ( *v7 )
        break;
      v7 = (_QWORD *)((char *)v7 + v6);
      if ( v5 >= v2 )
        return 0LL;
    }
    *a2 = v5;
    result = *(struct DirectComposition::CResourceMarshaler **)(v6 * v8 + *(_QWORD *)this);
    if ( result != (struct DirectComposition::CResourceMarshaler *)1 )
      return result;
  }
  return 0LL;
}
