/*
 * XREFs of UserPostNKAPC @ 0x140184F40
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall UserPostNKAPC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  char *v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+30h] [rbp-18h]

  v9 = Win32AllocPoolZInitImpl(64LL, 0x60uLL, 0x616E7355u);
  v10 = (char *)v9;
  if ( !v9 )
    return 0LL;
  v15 = 0;
  KeInitializeApc(v9, a1, 0LL, a2, a3, a4, v15, a5);
  if ( !(unsigned __int8)KeInsertQueueApc(v10, v10, 0LL, 0LL) )
  {
    GreDeleteFastMutex(v10, v12, v13, v14);
    return 0LL;
  }
  return 1LL;
}
