/*
 * XREFs of ?SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180074250
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800ED4BC (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800F437C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH0H@Z @ 0x1800FB184 (-ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH0H@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800FD580 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?ClearShape@HardwareCursorVisual@SystemCursors@@QEAAJXZ @ 0x1800FD9C0 (-ClearShape@HardwareCursorVisual@SystemCursors@@QEAAJXZ.c)
 *     ?SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z @ 0x1800FDC84 (-SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopSystemCursorService::SetShapeForInputType(__int64 a1, int a2, __int64 a3)
{
  const char *v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  DWORD LastError; // eax
  unsigned __int64 v10; // r8
  char *v11; // r14
  void *v12; // rdx
  char *v13; // rax
  size_t v14; // rsi
  int *v15; // rsi
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // r14d
  int v22; // r12d
  int v23; // r15d
  __int64 v24; // rdx
  int v25; // r8d
  char v26; // r12
  int v28; // eax
  unsigned int v29; // edi
  unsigned int v30; // [rsp+20h] [rbp-40h]
  unsigned int v31; // [rsp+20h] [rbp-40h]
  void *v32[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v35; // [rsp+A8h] [rbp+48h] BYREF

  v7 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    if ( a2 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\li"
                      "b\\desktopsystemcursorservice.cpp",
        v6);
    if ( *(_DWORD *)(a3 + 8) )
    {
      v8 = *(_DWORD *)(a3 + 12);
      *(_OWORD *)v32 = 0LL;
      v33 = 0LL;
      if ( *(_DWORD *)(a1 + 36) )
        std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v32);
      v35 = 0;
      if ( (unsigned int)NtUserGetDwmCursorShape(v8, v32[0], *(unsigned int *)(a1 + 36), &v35) )
        goto LABEL_25;
      LastError = GetLastError();
      if ( LastError == 87 )
      {
LABEL_44:
        std::vector<unsigned char>::_Tidy(v32);
        return v7;
      }
      if ( LastError != 8 )
      {
LABEL_24:
        v7 = -2147467259;
        goto LABEL_44;
      }
      v10 = v35;
      if ( v35 > 0x2000000 )
      {
        v7 = -2147024882;
        goto LABEL_44;
      }
      if ( v35 <= 0x200000 )
        *(_DWORD *)(a1 + 36) = v35;
      v11 = (char *)v32[1];
      v12 = v32[0];
      if ( v32[1] != v32[0] )
      {
        v11 = (char *)v32[0];
        v32[1] = v32[0];
      }
      if ( v10 >= v11 - (char *)v32[0] )
      {
        if ( v10 <= v11 - (char *)v32[0] )
          goto LABEL_22;
        if ( v10 > v33 - (unsigned __int64)v32[0] )
        {
          std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v32);
          v12 = v32[0];
          v10 = v35;
          goto LABEL_22;
        }
        v14 = v10 - (v11 - (char *)v32[0]);
        memset_0(v11, 0, v14);
        v13 = &v11[v14];
        v12 = v32[0];
        v10 = v35;
      }
      else
      {
        v13 = (char *)v32[0] + v10;
      }
      v32[1] = v13;
LABEL_22:
      if ( !(unsigned int)NtUserGetDwmCursorShape(v8, v12, v10, &v35) )
      {
        if ( GetLastError() == 87 )
          goto LABEL_44;
        goto LABEL_24;
      }
LABEL_25:
      v15 = (int *)v32[0];
      v16 = *((unsigned int *)v32[0] + 1);
      v17 = v16 * *(unsigned int *)v32[0];
      if ( v17 > 0xFFFFFFFF )
      {
        v19 = 132LL;
      }
      else
      {
        v18 = 4LL * (unsigned int)v17;
        if ( v18 > 0xFFFFFFFF )
        {
          v19 = 133LL;
        }
        else
        {
          if ( (int)v18 + 32 >= (unsigned int)v18 )
          {
            if ( v35 != (_DWORD)v18 + 32 )
            {
              v7 = -2147024809;
              v19 = 135LL;
LABEL_43:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v19,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\ser"
                              "vice\\lib\\desktopsystemcursorservice.cpp",
                (const char *)v7,
                v30);
              goto LABEL_44;
            }
            v20 = SystemCursors::HardwareCursorVisual::SetShape(
                    *(SystemCursors::HardwareCursorVisual **)(a1 + 24),
                    (char *)v32[0] + 32,
                    *(_DWORD *)v32[0],
                    v16,
                    *((_DWORD *)v32[0] + 2),
                    *((_DWORD *)v32[0] + 3),
                    *((_DWORD *)v32[0] + 5) != 0,
                    (float)*((int *)v32[0] + 4));
            v21 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x92,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\ser"
                              "vice\\lib\\desktopsystemcursorservice.cpp",
                (const char *)(unsigned int)v20,
                v31);
              v7 = v21;
              goto LABEL_44;
            }
            v22 = v15[6];
            v23 = v22 & 2;
            InputTraceLogging::Cursor::ChangeDwmCursorShape(1, 1, *v15, v15[1], v15[2], v15[3], v15[5] != 0, v15[4]);
            v25 = *(_DWORD *)(a1 + 32);
            v26 = v22 & 1;
            if ( v26 != (*(_BYTE *)(a1 + 32) & 1) )
            {
              LOBYTE(v24) = v26;
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 40LL) + 48LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                v24);
              *(_DWORD *)(a1 + 32) ^= 1u;
              v25 = *(_DWORD *)(a1 + 32);
            }
            if ( (v23 != 0) != ((v25 & 2) != 0) )
            {
              LOBYTE(v24) = v23 != 0;
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 40LL) + 56LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                v24);
              *(_DWORD *)(a1 + 32) ^= 2u;
            }
            if ( v23 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 40LL) + 88LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                (unsigned int)v15[7]);
            std::vector<unsigned char>::_Tidy(v32);
            return 0LL;
          }
          v19 = 134LL;
        }
      }
      v7 = -2147024362;
      goto LABEL_43;
    }
    v28 = SystemCursors::HardwareCursorVisual::ClearShape(*(SystemCursors::HardwareCursorVisual **)(a1 + 24));
    v29 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\li"
                      "b\\desktopsystemcursorservice.cpp",
        (const char *)(unsigned int)v28,
        v30);
      return v29;
    }
    InputTraceLogging::Cursor::ChangeDwmCursorShape(0, 1, 0, 0, 0, 0, 0, 100);
  }
  return 0LL;
}
