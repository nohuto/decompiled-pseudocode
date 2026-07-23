/*
 * XREFs of __ft_marker_array_lower_bound @ 0x180147DD8
 * Callers:
 *     RtlGetFeatureToggleConfiguration @ 0x180147870 (RtlGetFeatureToggleConfiguration.c)
 *     __ft_marker_array_record_impression @ 0x180147E30 (__ft_marker_array_record_impression.c)
 *     __ft_marker_array_set_flags @ 0x180147EF4 (__ft_marker_array_set_flags.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _ft_marker_array_lower_bound(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // r9
  _DWORD *v4; // r8
  unsigned int *v5; // rdx

  v3 = a1[1];
  v4 = (_DWORD *)*a1;
  while ( (__int64)v3 > 0 )
  {
    v5 = &v4[3 * (v3 >> 1)];
    if ( *v5 >= a2 )
    {
      v3 >>= 1;
    }
    else
    {
      v4 = v5 + 3;
      v3 += -1LL - (v3 >> 1);
    }
  }
  return 0xAAAAAAAAAAAAAAABuLL * (((__int64)v4 - *a1) >> 2);
}
