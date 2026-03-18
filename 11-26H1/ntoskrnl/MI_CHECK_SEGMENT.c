/*
 * XREFs of MI_CHECK_SEGMENT @ 0x1404C439C
 * Callers:
 *     MmExtendSection @ 0x140A58080 (MmExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_CHECK_SEGMENT(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1 + 128LL;
  if ( *a1 != -128LL )
  {
    do
    {
      result = *(unsigned int *)(v1 + 52);
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 );
  }
  return result;
}
