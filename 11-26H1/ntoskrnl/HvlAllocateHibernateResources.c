/*
 * XREFs of HvlAllocateHibernateResources @ 0x140775C6C
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1407D356C (PopPreallocateHibernateMemory.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 * Callees:
 *     HvlpPreallocatePageListResources @ 0x140775CA4 (HvlpPreallocatePageListResources.c)
 *     HvlpAllocatePageListResources @ 0x140B51288 (HvlpAllocatePageListResources.c)
 */

__int64 __fastcall HvlAllocateHibernateResources(__int64 a1)
{
  if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x40) == 0 )
    return 0LL;
  if ( (_BYTE)a1 )
    return HvlpPreallocatePageListResources();
  return HvlpAllocatePageListResources(a1, 256LL);
}
