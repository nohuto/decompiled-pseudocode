/*
 * XREFs of KiTryAcquirePrcbLocksForIsolationUnit @ 0x14046D5B8
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall KiTryAcquirePrcbLocksForIsolationUnit(__int64 a1, int a2, unsigned __int64 *a3)
{
  __int64 *v3; // r10
  unsigned int v4; // r11d
  unsigned __int64 v6; // r9
  char v7; // cl
  unsigned __int8 *v9; // rax
  unsigned int v10; // edx
  __int64 *v11; // r8
  __int64 v13; // [rsp+8h] [rbp+8h] BYREF

  v3 = 0LL;
  v13 = a1;
  v4 = 0;
  v6 = a2 ^ (a1 ^ a2) & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = 1;
  *a3 = v6;
  if ( !a2 )
  {
    v3 = &v13;
    v4 = 1;
    v11 = &v13;
    v10 = 0;
    goto LABEL_7;
  }
  if ( a2 == 1 )
  {
    v9 = *(unsigned __int8 **)(a1 + 36504);
    v4 = *v9;
    v3 = (__int64 *)(v9 + 8);
  }
  v10 = 0;
  v11 = v3;
  if ( v4 )
  {
LABEL_7:
    while ( !_interlockedbittestandset64((volatile signed __int32 *)(*v3 + 48), 0LL) )
    {
      ++v10;
      ++v3;
      if ( v10 >= v4 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( v10 == v4 )
      return v7;
  }
  while ( v10 )
    _InterlockedAnd64((volatile signed __int64 *)(v11[--v10] + 48), 0LL);
  v7 = 0;
  *a3 = 0LL;
  return v7;
}
