/*
 * XREFs of ?TryGetForPoint@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBUPoint@Foundation@67@@Z @ 0x1801D2490
 * Callers:
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x1801FBA84 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 *     ?TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@UWindowId@UI@67@@Z @ 0x1802927AC (-TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float **__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::TryGetForPoint(
        RTL_SRWLOCK *a1,
        float **a2,
        float *a3)
{
  __int64 *Ptr; // rdi
  __int64 *v7; // r14
  __int64 v8; // rcx
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float *v13; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockShared(a1);
  Ptr = (__int64 *)a1[1].Ptr;
  v7 = (__int64 *)a1[2].Ptr;
  while ( Ptr != v7 )
  {
    v8 = *Ptr;
    v13 = 0LL;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, __int64 *, float **))(*(_QWORD *)v8 + 24LL))(
        v8,
        &winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManager>,
        &v13);
      if ( v13 )
      {
        v9 = v13[8];
        if ( *a3 >= v9 && (float)(v9 + v13[10]) >= *a3 )
        {
          v10 = a3[1];
          v11 = v13[9];
          if ( v10 >= v11 && (float)(v11 + v13[11]) >= v10 )
          {
            *a2 = v13;
            goto LABEL_11;
          }
        }
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
      }
    }
    ++Ptr;
  }
  *a2 = 0LL;
LABEL_11:
  if ( a1 )
    ReleaseSRWLockShared(a1);
  return a2;
}
