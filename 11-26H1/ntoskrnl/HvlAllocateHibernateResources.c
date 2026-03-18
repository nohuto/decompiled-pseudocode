/*
 * XREFs of HvlAllocateHibernateResources @ 0x140772C6C
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1407D04CC (PopPreallocateHibernateMemory.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 * Callees:
 *     HvlpPreallocatePageListResources @ 0x140772CA4 (HvlpPreallocatePageListResources.c)
 *     HvlpAllocatePageListResources @ 0x140B4E9F8 (HvlpAllocatePageListResources.c)
 */

__int64 __fastcall HvlAllocateHibernateResources(__int64 a1)
{
  if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x40) == 0 )
    return 0LL;
  if ( (_BYTE)a1 )
    return HvlpPreallocatePageListResources();
  return HvlpAllocatePageListResources(a1, 256LL);
}
