/*
 * XREFs of SmpValidatePagingFileSizes @ 0x14000D6D4
 * Callers:
 *     SmpProcessPagefileDescriptor @ 0x14000BDB4 (SmpProcessPagefileDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpValidatePagingFileSizes(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // r8

  v1 = a1[7];
  v2 = v1;
  v3 = v1;
  if ( v1 <= a1[8] )
    v2 = a1[8];
  if ( v1 > 0xFFFFFFFF000LL )
    v3 = 0xFFFFFFFF000LL;
  if ( v2 <= 0xFFFFFFFF000LL )
  {
    if ( v1 <= 0xFFFFFFFF000LL )
      goto LABEL_9;
  }
  else
  {
    v2 = 0xFFFFFFFF000LL;
  }
  v1 = v3;
LABEL_9:
  a1[7] = v1;
  a1[8] = v2;
  if ( a1[6] > v1 )
    a1[6] = v1;
  return 0LL;
}
