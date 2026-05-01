/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEBQEBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEBQEBG@Z @ 0x180405684
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEBQEBG@Z @ 0x180405D08 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA-AV-$ComPtr@VViewEv.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x180074D20 (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForPropertyChanged@@@Z @ 0x180074D90 (-Attach@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForProp.c)
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x180075168 (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ @ 0x1801FF300 (-InternalRelease@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const * const &>(
        ViewEventArgsForPropertyChanged **a1,
        const unsigned __int16 **a2)
{
  void *v4; // rax
  int v5; // edi
  ViewEventArgsForPropertyChanged *v6; // rax
  const unsigned __int16 *v7; // rdx
  ViewEventArgsForPropertyChanged *v8; // rbx
  volatile int *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  ViewEventArgsForPropertyChanged *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v4;
  if ( v4 )
  {
    v6 = ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged((ViewEventArgsForPropertyChanged *)v4);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::Attach((__int64 *)&v13, (__int64)v6);
    v7 = *a2;
    v8 = v13;
    v14 = 0LL;
    v5 = ViewEventArgsForPropertyChanged::RuntimeClassInitialize(v13, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
      {
        v10 = *((_QWORD *)v8 + 11);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 11, v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_12;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v10 + 16), v9);
LABEL_12:
        v8 = v13;
      }
      *a1 = v8;
      Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease((__int64 *)&v13);
      v5 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease((__int64 *)&v13);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
  return (unsigned int)v5;
}
