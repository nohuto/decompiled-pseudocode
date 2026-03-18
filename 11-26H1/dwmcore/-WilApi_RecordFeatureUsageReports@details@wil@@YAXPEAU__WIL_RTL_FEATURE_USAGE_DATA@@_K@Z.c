/*
 * XREFs of ?WilApi_RecordFeatureUsageReports@details@wil@@YAXPEAU__WIL_RTL_FEATURE_USAGE_DATA@@_K@Z @ 0x180224448
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x180224880 (wil_details_RecordCachedUsage.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800F7F40 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsageReports(
        wil::details *this,
        struct __WIL_RTL_FEATURE_USAGE_DATA *a2)
{
  struct __WIL_RTL_FEATURE_USAGE_DATA *v2; // rdi
  unsigned __int16 *v3; // rbx

  if ( a2 )
  {
    v2 = a2;
    v3 = (unsigned __int16 *)((char *)this + 4);
    do
    {
      wil::details::WilApi_RecordFeatureUsage((wil::details *)*((unsigned int *)v3 - 1), *v3, v3[1]);
      v3 += 4;
      v2 = (struct __WIL_RTL_FEATURE_USAGE_DATA *)((char *)v2 - 1);
    }
    while ( v2 );
  }
}
