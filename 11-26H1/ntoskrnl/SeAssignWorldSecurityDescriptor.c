/*
 * XREFs of SeAssignWorldSecurityDescriptor @ 0x140B11A58
 * Callers:
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall SeAssignWorldSecurityDescriptor(char *a1, unsigned int *a2, _DWORD *a3, char a4)
{
  unsigned int v7; // eax
  unsigned int v8; // r15d
  unsigned int v9; // ecx
  char *v10; // rbx
  __int16 v11; // dx
  __int16 v12; // dx
  char *v14; // rcx
  _DWORD *v15; // rcx
  int v16; // ebx

  if ( !a3 )
    return 3221225506LL;
  v7 = *a2;
  v8 = 4 * HIBYTE(RtlpBootStatHandleLock.StateSaveArea->ControlWord) + 8;
  v9 = 2 * v8 + 20;
  *a2 = v9;
  if ( v7 < v9 )
    return 3221225507LL;
  if ( a4 )
  {
    RtlSetUserMemory(a1, 0, 0x14uLL);
    RtlWriteUCharToUser(a1, 1);
  }
  else
  {
    RtlSetVolatileMemory(a1, 0, 0x14uLL);
    *a1 = 1;
  }
  v10 = a1 + 20;
  if ( (*a3 & 1) != 0 )
  {
    v14 = a1 + 20;
    if ( a4 )
      RtlCopyToUser(v14, RtlpBootStatHandleLock.StateSaveArea, v8);
    else
      RtlCopyVolatileMemory(v14, RtlpBootStatHandleLock.StateSaveArea, v8);
    v15 = a1 + 4;
    if ( a4 )
      RtlWriteULongToUser(v15, 20);
    else
      *v15 = 20;
    v10 += v8;
  }
  if ( (*a3 & 2) != 0 )
  {
    if ( a4 )
      RtlCopyToUser(v10, RtlpBootStatHandleLock.StateSaveArea, v8);
    else
      RtlCopyVolatileMemory(v10, RtlpBootStatHandleLock.StateSaveArea, v8);
    v16 = (_DWORD)v10 - (_DWORD)a1;
    if ( a4 )
      RtlWriteULongToUser((_DWORD *)a1 + 2, v16);
    else
      *((_DWORD *)a1 + 2) = v16;
  }
  v11 = *a3 & 4 | 0x10;
  if ( (*(_BYTE *)a3 & 8) == 0 )
    v11 = *a3 & 4;
  v12 = v11 | 0x8000;
  if ( a4 )
    RtlWriteUShortToUser((_WORD *)a1 + 1, v12);
  else
    *((_WORD *)a1 + 1) = v12;
  return 0LL;
}
