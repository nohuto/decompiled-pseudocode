/*
 * XREFs of sub_14003E714 @ 0x14003E714
 * Callers:
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14003E714(void **a1)
{
  PVOID *v1; // rdi
  PVOID *v3; // rbx

  v1 = (PVOID *)*a1;
  if ( *a1 )
  {
    do
    {
      v3 = (PVOID *)*v1;
      MmUnmapIoSpace(v1[1], *((unsigned int *)v1 + 4));
      ExFreePoolWithTag(v1, 0x4D416152u);
      v1 = v3;
    }
    while ( v3 );
  }
  *a1 = 0LL;
}
