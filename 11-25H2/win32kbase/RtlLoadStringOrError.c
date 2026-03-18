/*
 * XREFs of RtlLoadStringOrError @ 0x1400F3D50
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall RtlLoadStringOrError(ULONG MessageId, void *a2, int a3, unsigned __int16 a4)
{
  int v5; // esi
  int v6; // ebx
  BYTE *Text; // rdx
  __int64 v8; // rax
  int v9; // eax
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( !a2 )
    return 0LL;
  v5 = a3 - 1;
  if ( !a3 )
    return 0LL;
  v6 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, a4, MessageId, &v11) >= 0 )
  {
    Text = v11->Text;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)&Text[2 * v8] );
    v9 = v8 - 2;
    if ( v9 < 0 )
      return 0LL;
    v6 = v5;
    if ( v9 <= v5 )
      v6 = v9;
    memmove(a2, Text, 2LL * v6);
  }
  result = (unsigned int)v6;
  *((_WORD *)a2 + v6) = 0;
  return result;
}
