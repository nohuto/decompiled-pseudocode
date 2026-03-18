/*
 * XREFs of UserPostNKAPCBuffer @ 0x14015EA80
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall UserPostNKAPCBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *Src, size_t Size)
{
  __int64 v10; // rax
  char *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v17; // [rsp+30h] [rbp-28h]

  v10 = Win32AllocPoolZInitImpl(64LL, (unsigned int)Size + 88LL, 0x616E7355u);
  v11 = (char *)v10;
  if ( v10 )
  {
    v12 = v10 + 88;
    memmove((void *)(v10 + 88), Src, (unsigned int)Size);
    v17 = 0;
    KeInitializeApc(v11, a1, 0LL, a2, a3, a4, v17, v12);
    if ( (unsigned __int8)KeInsertQueueApc(v11, v11, 0LL, 0LL) )
      return 1LL;
    GreDeleteFastMutex(v11, v13, v14, v15);
  }
  return 0LL;
}
