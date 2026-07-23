/*
 * XREFs of DrvDbDispatchDriverDatabase @ 0x140A880C0
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1408A43CC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbValidateDriverDatabaseName @ 0x1408A55E8 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbDestroyDatabaseNode @ 0x1408A5D90 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x140979718 (DrvDbFindDatabaseNode.c)
 *     DrvDbGetDriverDatabaseList @ 0x140A8825C (DrvDbGetDriverDatabaseList.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140B258C4 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 */

__int64 __fastcall DrvDbDispatchDriverDatabase(__int64 a1, const wchar_t *a2, int a3, int a4, unsigned int *a5)
{
  __int64 v5; // rbx
  int v6; // r9d
  __int64 v7; // r9
  __int64 v8; // r9
  int v9; // r9d
  int v10; // r9d
  int DatabaseNode; // ecx
  int v14; // r9d
  int v15; // r9d
  UNICODE_STRING *v16; // [rsp+40h] [rbp-18h] BYREF

  if ( (unsigned int)(a3 - 1) > 0xA )
    return (unsigned int)-1073741811;
  v5 = *(_QWORD *)(a1 + 8LL * a3 + 392);
  v6 = a4 - 1;
  if ( !v6 )
    return (unsigned int)DrvDbValidateDriverDatabaseName(a1, a2);
  v7 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v7 )
  {
    LODWORD(v7) = *((unsigned __int8 *)a5 + 4);
    return (unsigned int)DrvDbOpenDriverDatabaseRegKey(*(_QWORD *)(a1 + 8LL * a3 + 392), a2, *a5, v7);
  }
  v8 = (unsigned int)(v7 - 1);
  if ( (_DWORD)v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v16 = 0LL;
      DatabaseNode = DrvDbFindDatabaseNode(v5, a2, (const UNICODE_STRING **)&v16);
      if ( DatabaseNode < 0 )
        return (unsigned int)DatabaseNode;
      if ( (*(_DWORD *)&v16[4].Length & 0x10) == 0 )
        return (unsigned int)-1073741790;
      return (unsigned int)DrvDbDestroyDatabaseNode(v5, v16);
    }
    v10 = v9 - 1;
    if ( !v10 )
      return (unsigned int)DrvDbGetDriverDatabaseList(
                             *(_QWORD *)(a1 + 8LL * a3 + 392),
                             *(_QWORD *)a5,
                             *((_QWORD *)a5 + 1),
                             *((_QWORD *)a5 + 2),
                             a5[6],
                             *((_QWORD *)a5 + 4));
    v14 = v10 - 1;
    if ( !v14 )
      return (unsigned int)DrvDbGetDriverDatabaseMappedPropertyKeys(
                             *(_QWORD *)(a1 + 8LL * a3 + 392),
                             (__int64)a2,
                             *(HANDLE *)a5,
                             *((_QWORD *)a5 + 3),
                             a5[8],
                             *((unsigned int **)a5 + 5));
    v15 = v14 - 2;
    if ( !v15 )
      return (unsigned int)DrvDbGetDriverDatabaseMappedProperty(
                             *(_QWORD *)(a1 + 8LL * a3 + 392),
                             a2,
                             *(_QWORD *)a5,
                             *((_QWORD *)a5 + 2),
                             *((_QWORD *)a5 + 3),
                             *((_QWORD *)a5 + 4),
                             a5[10],
                             *((_QWORD *)a5 + 6));
    if ( v15 == 1 )
      return (unsigned int)DrvDbSetDriverDatabaseMappedProperty(
                             *(_QWORD *)(a1 + 8LL * a3 + 392),
                             a2,
                             *(void **)a5,
                             *((_QWORD *)a5 + 2),
                             a5[6],
                             *((int **)a5 + 4),
                             a5[10]);
    return (unsigned int)-1073741811;
  }
  LODWORD(v8) = 1;
  DatabaseNode = DrvDbOpenDriverDatabaseRegKey(v5, a2, *a5, v8);
  if ( DatabaseNode >= 0 )
    *((_BYTE *)a5 + 16) = 0;
  return (unsigned int)DatabaseNode;
}
