/*
 * XREFs of ??$wcsncpycch@PEAGPEAG@@YAKPEAG0K@Z @ 0x1401C4B4C
 * Callers:
 *     _GetKeyNameText @ 0x140087F70 (_GetKeyNameText.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wcsncpycch<unsigned short *,unsigned short *>(_WORD *a1, __int64 a2, int a3)
{
  _WORD *v3; // r9
  __int64 v4; // rdx
  __int16 v5; // ax

  v3 = a1;
  if ( a3 )
  {
    v4 = a2 - (_QWORD)a1;
    do
    {
      v5 = *(_WORD *)((char *)a1 + v4);
      *a1++ = v5;
      if ( !v5 )
        break;
      --a3;
    }
    while ( a3 );
  }
  return (unsigned int)(a1 - v3);
}
