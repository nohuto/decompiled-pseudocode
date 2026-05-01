/*
 * XREFs of ?ApplyPrependDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805E46B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x1805DE498 (--$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyPrependDefaultTaskbarLayout(
        winrt::Windows::Internal::Shell::implementation::PinManager *this)
{
  const char *v1; // r9
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64); // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 =  IDCompThumbnail::`vcall'{128,{flat}};
  v4 = 16;
  try
  {
    result = winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<,long (CPinnedList::*)(void)>(
               (__int64)this,
               4,
               (__int64)&v3);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3AA,
                           (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
                           v1);
  }
  return result;
}
