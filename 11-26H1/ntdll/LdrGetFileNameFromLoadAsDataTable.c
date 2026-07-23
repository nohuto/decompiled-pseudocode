/*
 * XREFs of LdrGetFileNameFromLoadAsDataTable @ 0x1800C2A80
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x1800C37FC (LdrpGetLoadAsEntry.c)
 */

NTSTATUS __cdecl LdrGetFileNameFromLoadAsDataTable(PVOID Module, PVOID *pFileNamePrt)
{
  NTSTATUS result; // eax
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, 48);
  if ( !Module || !pFileNamePrt )
    return -1073741811;
  result = LdrpGetLoadAsEntry(Module, v4);
  if ( result >= 0 )
  {
    if ( v4[1] )
      *pFileNamePrt = (PVOID)v4[1];
    else
      return -1073741823;
  }
  return result;
}
