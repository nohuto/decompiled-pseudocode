/*
 * XREFs of MiIsSystemVaAllocated @ 0x1406FA104
 * Callers:
 *     MmAllocateSecurePoolMemory @ 0x140700968 (MmAllocateSecurePoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140700AB8 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1402A42B4 (MiSystemVaToDynamicBitmap.c)
 */

unsigned __int64 MiIsSystemVaAllocated()
{
  unsigned __int64 v0; // rdx
  __int64 v1; // r8
  $A4FCC2D77D2C8DA06473821DBD6C3FF5 *v2; // r10
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r11
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY **v7; // r10
  struct _LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY **v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx

  v2 = MiSystemVaToDynamicBitmap(14);
  v3 = (v0 - (unsigned __int64)v2->SavedApcState.Process) >> 21;
  v4 = ((__int64)((((v0 + v1 - 1) >> 18) & 0x3FFFFFF8) - ((v0 >> 18) & 0x3FFFFFF8)) >> 3) + 1;
  if ( (struct _LIST_ENTRY *)v3 >= v2->SavedApcState.ApcListHead[0].Flink )
    goto LABEL_12;
  if ( v4 > 1 )
  {
    if ( (struct _LIST_ENTRY *)((char *)v2->SavedApcState.ApcListHead[0].Flink - v3) >= (struct _LIST_ENTRY *)v4 )
    {
      Blink = v2->SavedApcState.ApcListHead[0].Blink;
      v7 = &Blink->Flink + (v3 >> 6);
      v8 = *v7;
      v9 = &Blink->Flink + ((v4 + v3 - 1) >> 6);
      if ( v7 == v9 )
      {
        v10 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v3;
        result = (unsigned __int64)v8 & v10;
      }
      else
      {
        if ( ((unsigned __int64)v8 & (-1LL << v3)) != -1LL << v3 )
          goto LABEL_12;
        while ( 1 )
        {
          v11 = (__int64)*++v7;
          if ( v7 == v9 )
            break;
          if ( v11 != -1 )
            goto LABEL_12;
        }
        v10 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v4 + (unsigned __int8)v3 - 1);
        result = v11 & v10;
      }
      LOBYTE(result) = result == v10;
      return (unsigned __int8)result;
    }
LABEL_12:
    LOBYTE(result) = 0;
    return (unsigned __int8)result;
  }
  if ( (__int64)((((v0 + v1 - 1) >> 18) & 0x3FFFFFF8) - ((v0 >> 18) & 0x3FFFFFF8)) >> 3 )
    goto LABEL_12;
  LOBYTE(result) = _bittest64(
                     (const signed __int64 *)v2->SavedApcState.ApcListHead[0].Blink
                   + ((v0 - (unsigned __int64)v2->SavedApcState.Process) >> 27),
                     ((v0 - (unsigned __int64)v2->SavedApcState.Process) >> 21) & 0x3F);
  return (unsigned __int8)result;
}
