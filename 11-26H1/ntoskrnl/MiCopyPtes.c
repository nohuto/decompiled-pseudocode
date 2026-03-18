/*
 * XREFs of MiCopyPtes @ 0x1403422BC
 * Callers:
 *     MiCopyTopLevelMappings @ 0x140342188 (MiCopyTopLevelMappings.c)
 *     MxCopyPage @ 0x140CF5774 (MxCopyPage.c)
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
