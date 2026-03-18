/*
 * XREFs of UserReAllocPoolWithQuota @ 0x140166FE0
 * Callers:
 *     FastGetProfileKeysW @ 0x1401CE190 (FastGetProfileKeysW.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void *__fastcall UserReAllocPoolWithQuota(PVOID Buffer, size_t Size, unsigned __int64 a3, unsigned int a4)
{
  size_t v4; // rbx
  void *v7; // rax
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = a3;
  v7 = (void *)Win32AllocPoolWithQuotaZInitImpl((int)Buffer, a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( Size <= v4 )
      v4 = Size;
    memmove(v7, Buffer, v4);
    GreDeleteFastMutex((char *)Buffer, v9, v10, v11);
  }
  return v8;
}
