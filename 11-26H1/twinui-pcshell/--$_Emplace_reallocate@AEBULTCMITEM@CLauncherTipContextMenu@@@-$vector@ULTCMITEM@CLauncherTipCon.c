/*
 * XREFs of ??$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@AEAAPEAULTCMITEM@CLauncherTipContextMenu@@QEAU23@AEBU23@@Z @ 0x18027B2C4
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x18021A4B4 (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@AEAAXQEAULTCMITEM@CLauncherTipContextMenu@@_K1@Z @ 0x1802B64AC (-_Change_array@-$vector@ULTCMITEM@CLauncherTipContextMenu@@V-$allocator@ULTCMITEM@CLauncherTipCo.c)
 *     ??$_Uninitialized_move@PEAULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@YAPEAULTCMITEM@CLauncherTipContextMenu@@QEAU12@0PEAU12@AEAV?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@0@@Z @ 0x1802B93A0 (--$_Uninitialized_move@PEAULTCMITEM@CLauncherTipContextMenu@@V-$allocator@ULTCMITEM@CLauncherTip.c)
 *     ??1_Reallocation_guard@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEAA@XZ @ 0x1806009F4 (--1_Reallocation_guard@-$vector@ULTCMITEM@CLauncherTipContextMenu@@V-$allocator@ULTCMITEM@CLaunc.c)
 */

__int64 __fastcall std::vector<CLauncherTipContextMenu::LTCMITEM>::_Emplace_reallocate<CLauncherTipContextMenu::LTCMITEM const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-38h]

  v4 = 0x1555555555555555LL;
  v7 = (a2 - *a1) / 12;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 2);
  if ( v8 == 0x1555555555555555LL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0x1555555555555555LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<12>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v21 = a1;
  v22 = v4;
  v16 = v13;
  v17 = v13 + 12 * v7;
  *(_QWORD *)v17 = v14;
  *(_DWORD *)(v17 + 8) = *((_DWORD *)a3 + 2);
  v18 = a1[1];
  v19 = *a1;
  v24 = v17 + 12;
  v23 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CLauncherTipContextMenu::LTCMITEM *>(v19, a2, v13);
    v18 = a1[1];
    v16 = v17 + 12;
    v19 = a2;
    v23 = v15;
  }
  std::_Uninitialized_move<CLauncherTipContextMenu::LTCMITEM *>(v19, v18, v16);
  std::vector<CLauncherTipContextMenu::LTCMITEM>::_Change_array(a1, v15, v9, v4, v21, 0LL, v22, v23, v24);
  std::vector<CLauncherTipContextMenu::LTCMITEM>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v17;
}
