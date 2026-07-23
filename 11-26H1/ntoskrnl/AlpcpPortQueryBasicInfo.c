/*
 * XREFs of AlpcpPortQueryBasicInfo @ 0x140A7D454
 * Callers:
 *     NtAlpcQueryInformation @ 0x140A7D210 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall AlpcpPortQueryBasicInfo(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  int v8; // eax
  int v9; // eax
  int *v10; // rcx
  unsigned int v11; // ebx

  if ( !a1 )
    return 3221225485LL;
  if ( a3 < 0x10 )
  {
    v11 = -1073741820;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 256) & 0x3FF0000;
    if ( a5 )
      RtlWriteULongToUser((_DWORD *)a2, v8);
    else
      *(_DWORD *)a2 = v8;
    v9 = *(_DWORD *)(a1 + 400);
    v10 = (int *)(a2 + 4);
    if ( a5 )
      RtlWriteULongToUser(v10, v9);
    else
      *v10 = v9;
    if ( a5 )
      RtlWriteULong64ToUser((_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 56));
    else
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 56);
    v11 = 0;
  }
  if ( a4 )
  {
    if ( a5 )
      RtlWriteULongToUser(a4, 16);
    else
      *a4 = 16;
  }
  return v11;
}
