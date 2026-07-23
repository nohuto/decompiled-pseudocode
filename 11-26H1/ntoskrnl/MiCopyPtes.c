/*
 * XREFs of MiCopyPtes @ 0x14034433C
 * Callers:
 *     MiCopyTopLevelMappings @ 0x140344208 (MiCopyTopLevelMappings.c)
 *     MxCopyPage @ 0x140CFBAF4 (MxCopyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCopyPtes(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a2 - (_QWORD)a1;
    do
    {
      result = *(_QWORD *)((char *)a1 + v3);
      *a1++ = result;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
