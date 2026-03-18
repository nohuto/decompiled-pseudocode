/*
 * XREFs of CSTCleanupStack @ 0x1401C3EE8
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1401746CC (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 */

_QWORD *__fastcall CSTCleanupStack(int a1, int a2, int a3)
{
  _QWORD *result; // rax
  __int64 v4; // r8
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r9
  char *v8; // rcx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v10 = 0LL;
  result = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  if ( *result )
  {
    while ( 1 )
    {
      result = (_QWORD *)CSTPop(&v9, &v10, v4);
      if ( !(_DWORD)result )
        return result;
      if ( v9 == 2 || v9 == 4 )
        break;
      if ( v9 == 8 )
      {
        v5 = v10;
        if ( *(_QWORD *)v10 )
        {
          GreDeleteFastMutex(*(char **)v10, v6, v4, v7);
          *v5 = 0LL;
        }
LABEL_9:
        v8 = (char *)v5[1];
        if ( v8 )
        {
          GreDeleteFastMutex(v8, v6, v4, v7);
          v5[1] = 0LL;
        }
      }
    }
    v5 = v10;
    goto LABEL_9;
  }
  return result;
}
