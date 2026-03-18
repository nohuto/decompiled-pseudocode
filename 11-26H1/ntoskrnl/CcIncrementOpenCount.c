/*
 * XREFs of CcIncrementOpenCount @ 0x14049AF30
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14038984C (CcNotifyOfMappedWrite.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcIncrementOpenCount(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 4) + 1);
  *(_DWORD *)(a1 + 4) = result;
  if ( a3 )
    ++*(_DWORD *)(a1 + 544);
  return result;
}
