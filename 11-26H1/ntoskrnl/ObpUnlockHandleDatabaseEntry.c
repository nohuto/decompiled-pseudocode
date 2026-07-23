/*
 * XREFs of ObpUnlockHandleDatabaseEntry @ 0x140AB8B3C
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x14043CFE0 (OBJECT_HEADER_TO_HANDLE_INFO.c)
 */

char __fastcall ObpUnlockHandleDatabaseEntry(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  __int64 v3; // r8
  _DWORD *v4; // r9
  int *v5; // rax
  int v6; // ecx
  char v7; // al

  v1 = OBJECT_HEADER_TO_HANDLE_INFO(a1);
  v4 = (_DWORD *)v1;
  if ( (*(_BYTE *)(v3 + 27) & 0x40) != 0 )
    goto LABEL_13;
  v5 = *(int **)v1;
  v6 = *v5;
  v4 = v5 + 2;
  v1 = 0LL;
  while ( v6 )
  {
    if ( *(_QWORD *)v4 == v2 )
    {
      v7 = *((_BYTE *)v4 + 11);
      if ( v7 != -1 )
      {
        LOBYTE(v1) = v7 - 1;
        *((_BYTE *)v4 + 11) = v1;
        goto LABEL_9;
      }
      v1 = (__int64)v4;
    }
    v4 += 4;
    --v6;
  }
  if ( v1 )
  {
    v4 = (_DWORD *)v1;
LABEL_13:
    --*(_BYTE *)(v1 + 11);
  }
LABEL_9:
  if ( !*((_BYTE *)v4 + 11) && (v4[2] & 0xFFFFFF) == 0 )
    *(_QWORD *)v4 = 0LL;
  return v1;
}
