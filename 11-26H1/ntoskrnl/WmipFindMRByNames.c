/*
 * XREFs of WmipFindMRByNames @ 0x140B1C5E4
 * Callers:
 *     WmipAddMofResource @ 0x140B1C418 (WmipAddMofResource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindMRByNames(__int64 a1, __int64 a2)
{
  _QWORD *i; // rbx
  unsigned __int16 *v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // edx
  unsigned __int16 *v9; // rax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)WmipMRHeadPtr; i != (_QWORD *)WmipMRHeadPtr; i = (_QWORD *)*i )
  {
    v5 = (unsigned __int16 *)i[5];
    v6 = a1 - (_QWORD)v5;
    do
    {
      v7 = *(unsigned __int16 *)((char *)v5 + v6);
      v8 = *v5 - v7;
      if ( v8 )
        break;
      ++v5;
    }
    while ( v7 );
    if ( !v8 )
    {
      v9 = (unsigned __int16 *)i[6];
      v10 = a2 - (_QWORD)v9;
      do
      {
        v11 = *(unsigned __int16 *)((char *)v9 + v10);
        v12 = *v9 - v11;
        if ( v12 )
          break;
        ++v9;
      }
      while ( v11 );
      if ( !v12 )
      {
        WmipReferenceEntry((ULONG_PTR)i);
        goto LABEL_14;
      }
    }
  }
  i = 0LL;
LABEL_14:
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
