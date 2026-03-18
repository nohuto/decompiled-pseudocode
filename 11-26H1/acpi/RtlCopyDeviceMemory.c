/*
 * XREFs of RtlCopyDeviceMemory @ 0x140055E90
 * Callers:
 *     ACPIMakeCachedTableCopy @ 0x140068864 (ACPIMakeCachedTableCopy.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140072320 (RtlCopyVolatileMemory.c)
 */

char *__fastcall RtlCopyDeviceMemory(char *a1, char *a2, size_t a3)
{
  char *v5; // rcx
  unsigned __int64 v6; // rax
  char *v7; // rcx

  if ( !a3 )
    return a1;
  v5 = a2;
  v6 = (unsigned __int64)a2;
  if ( a1 < a2 )
    v5 = a1;
  v7 = &v5[a3];
  if ( a1 >= a2 )
    v6 = (unsigned __int64)a1;
  if ( (unsigned __int64)v7 > v6 )
    __fastfail(5u);
  return (char *)RtlCopyVolatileMemory(a1, a2, a3);
}
