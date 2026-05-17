/*
 * XREFs of __ft_array_insert @ 0x180147E18
 * Callers:
 *     RtlGetFeatureToggleConfiguration @ 0x1801479C0 (RtlGetFeatureToggleConfiguration.c)
 *     __ft_marker_array_record_impression @ 0x180147F80 (__ft_marker_array_record_impression.c)
 *     __ft_marker_array_set_flags @ 0x180148044 (__ft_marker_array_set_flags.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

void *__fastcall _ft_array_insert(const void **a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v11; // rbx
  void *result; // rax
  const void *v13; // rbp
  __int64 v14; // rbx

  v5 = *a2;
  v7 = *a3;
  if ( *a2 < *a3 )
  {
LABEL_9:
    v14 = (__int64)*a1 + a5 * a4;
    if ( a5 < v5 )
      memmove((void *)(v14 + a4), (char *)*a1 + a5 * a4, a4 * (v5 - a5));
    result = (void *)v14;
    *a2 = v5 + 1;
    return result;
  }
  if ( v7 <= 0 )
    v11 = 20LL;
  else
    v11 = 2 * v7;
  result = (void *)RtlAllocateHeap_0();
  v13 = result;
  if ( result )
  {
    if ( *a1 )
    {
      memmove(result, *a1, a4 * v5);
      RtlpSysVolFree((__int64)*a1);
    }
    *a1 = v13;
    *a3 = v11;
    goto LABEL_9;
  }
  return result;
}
