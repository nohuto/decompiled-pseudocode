/*
 * XREFs of EtwpCopySchematizedFilters @ 0x140912C88
 * Callers:
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140912F1C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpBuildNotificationPacket @ 0x1409159B8 (EtwpBuildNotificationPacket.c)
 *     EtwpCalculateUpdateNotification @ 0x140915B30 (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

_UNKNOWN **__fastcall EtwpCopySchematizedFilters(char *a1, __int64 a2, unsigned __int16 a3)
{
  _UNKNOWN **result; // rax
  char *v4; // r9
  int v5; // r12d
  unsigned int v6; // ebx
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  _DWORD *v11; // rbp
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0LL;
  v5 = a3;
  v6 = 0;
  v7 = (_DWORD *)(a2 + 128);
  v8 = 0LL;
  do
  {
    if ( *v7 )
    {
      result = *(_UNKNOWN ***)(a2 + 640);
      v11 = result[v8 + 11];
      if ( v11 )
      {
        if ( _bittest(&v5, (unsigned __int8)v6) )
        {
          result = (_UNKNOWN **)memmove(a1, result[v8 + 11], (unsigned int)v11[4]);
          v4 = a1;
          v12 = (v11[4] + 7) & 0xFFFFFFF8;
          *((_DWORD *)a1 + 5) = v12;
          a1 += v12;
        }
      }
    }
    ++v6;
    v7 += 8;
    v8 += 13LL;
  }
  while ( v6 < 0x10 );
  if ( v4 )
    *((_DWORD *)v4 + 5) = 0;
  return result;
}
