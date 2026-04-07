/*
 * XREFs of ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1800409DC
 * Callers:
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180041DF0 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800D43B8 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::complete_without_lock(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  *(_DWORD *)(a1 + 64) |= 0x300u;
  if ( *(_QWORD *)(a1 + 240) )
    tip2::details::shared_data<0,0,0>::complete_helper(a1, 2LL);
  if ( v1 )
    LeaveCriticalSection(v1);
}
