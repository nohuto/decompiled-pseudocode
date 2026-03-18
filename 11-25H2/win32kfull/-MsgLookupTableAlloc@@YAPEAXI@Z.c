/*
 * XREFs of ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x14019FCD0
 * Callers:
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x14019FB2C (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

__int64 __fastcall MsgLookupTableAlloc(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v4; // ecx

  if ( a1 )
  {
    v4 = a1 - 1;
    if ( !v4 )
    {
      v1 = 128LL;
      goto LABEL_3;
    }
    if ( v4 != 1 )
      return 0LL;
  }
  v1 = 64LL;
LABEL_3:
  v2 = Win32AllocPoolZInit(v1, 1819112277LL);
  if ( !v2 )
    UserSetLastError(14);
  return v2;
}
