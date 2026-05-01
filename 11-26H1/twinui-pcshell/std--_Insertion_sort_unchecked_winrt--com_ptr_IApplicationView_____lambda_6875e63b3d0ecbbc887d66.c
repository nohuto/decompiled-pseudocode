/*
 * XREFs of std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180287FB8
 * Callers:
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180287EC8 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIApplicationView@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800E2684 (--4-$com_ptr@UIApplicationView@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$_Move_backward_unchecked@PEAU?$com_ptr@UIApplicationView@@@winrt@@PEAU12@@std@@YAPEAU?$com_ptr@UIApplicationView@@@winrt@@PEAU12@00@Z @ 0x180288168 (--$_Move_backward_unchecked@PEAU-$com_ptr@UIApplicationView@@@winrt@@PEAU12@@std@@YAPEAU-$com_pt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *i; // rdi
  __int64 *v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 *j; // r14
  __int64 v9; // rax
  __int64 v11[2]; // [rsp+20h] [rbp-10h] BYREF
  FILETIME FileTime2; // [rsp+70h] [rbp+40h] BYREF
  FILETIME FileTime1; // [rsp+78h] [rbp+48h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 1; i != a2; ++i )
    {
      v5 = i;
      v6 = *i;
      *i = 0LL;
      v7 = v6;
      v11[0] = v6;
      FileTime1 = 0LL;
      FileTime2 = 0LL;
      if ( (*(int (__fastcall **)(__int64, FILETIME *))(*(_QWORD *)v6 + 480LL))(v6, &FileTime1) < 0
        || (*(int (__fastcall **)(__int64, FILETIME *))(*(_QWORD *)*a1 + 480LL))(*a1, &FileTime2) < 0
        || CompareFileTime(&FileTime1, &FileTime2) == 1 )
      {
        std::_Move_backward_unchecked<winrt::com_ptr<IApplicationView> *,winrt::com_ptr<IApplicationView> *>(
          a1,
          i,
          i + 1);
        winrt::com_ptr<IApplicationView>::operator=(a1, v11);
        v7 = v11[0];
      }
      else
      {
        for ( j = i; ; v5 = j )
        {
          --j;
          FileTime1 = 0LL;
          FileTime2 = 0LL;
          if ( (*(int (__fastcall **)(__int64, FILETIME *))(*(_QWORD *)v6 + 480LL))(v6, &FileTime1) >= 0
            && (*(int (__fastcall **)(__int64, FILETIME *))(*(_QWORD *)*j + 480LL))(*j, &FileTime2) >= 0
            && CompareFileTime(&FileTime1, &FileTime2) != 1 )
          {
            break;
          }
          if ( v5 != j )
          {
            winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(v5);
            v9 = *j;
            *j = 0LL;
            *v5 = v9;
          }
        }
        if ( v5 != v11 )
        {
          winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(v5);
          v7 = 0LL;
          v11[0] = 0LL;
          *v5 = v6;
        }
      }
      if ( v7 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v11);
    }
  }
  return a2;
}
