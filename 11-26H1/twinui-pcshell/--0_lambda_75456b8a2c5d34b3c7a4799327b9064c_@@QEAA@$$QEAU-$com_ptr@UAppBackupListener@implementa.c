/*
 * XREFs of ??0_lambda_75456b8a2c5d34b3c7a4799327b9064c_@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBQ8AppBackupListener@implementation@Shell@Internal@Windows@2@EAA?AUfire_and_forget@2@UTileCollection@StartScreen@UI@WindowsUdk@2@UTileRemovedEventArgs@StartScreen@UI@WindowsUdk@2@@Z@Z @ 0x1802C19F4
 * Callers:
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180028850 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA?AUfire_and_forget@5@UTile@StartScreen@UI@WindowsUdk@5@UTileChangedEventArgs@89WindowsUdk@5@@Z@?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAA?AUfire_and_forget@3@UTile@StartScreen@UI@WindowsUdk@3@UTileChangedEventArgs@StartScreen@UI@WindowsUdk@3@@Z@Z @ 0x1801FF75C (--$-0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA-AUfire_and_for.c)
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180616270 (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_75456b8a2c5d34b3c7a4799327b9064c_::_lambda_75456b8a2c5d34b3c7a4799327b9064c_(
        __int64 a1,
        __int64 *a2,
        _OWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *a2;
  *a2 = 0LL;
  *(_QWORD *)a1 = v3;
  result = a1;
  *(_OWORD *)(a1 + 8) = *a3;
  return result;
}
