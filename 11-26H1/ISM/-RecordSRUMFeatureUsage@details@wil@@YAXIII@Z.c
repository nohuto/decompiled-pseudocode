/*
 * XREFs of ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x18009F910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::details::RecordSRUMFeatureUsage(
        wil::details *this,
        int a2,
        unsigned int a3,
        unsigned int a4,
        const char *a5)
{
  wil::details::WilApi_RecordFeatureUsage(this, a2 | 0x40000000, a3, a4, a5);
}
