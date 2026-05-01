/*
 * XREFs of ?ApplyReorderTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x1805E4700
 * Callers:
 *     <none>
 * Callees:
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x1805DE5D0 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyReorderTaskbarLayout(
        __int64 a1,
        __int64 a2,
        int a3)
{
  const char *v3; // r9
  __int64 result; // rax
  __int64 (__fastcall *v6)(__int64); // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 =  CPinnedList::`vcall'{152,{flat}};
  v7 = 16;
  try
  {
    result = winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<enum TaskbarLayoutType,int,long (CPinnedList::*)(enum TaskbarLayoutType,int)>(
               a1,
               a2,
               (__int64)&v6,
               a2,
               a3);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3C5,
                           (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
                           v3);
  }
  return result;
}
