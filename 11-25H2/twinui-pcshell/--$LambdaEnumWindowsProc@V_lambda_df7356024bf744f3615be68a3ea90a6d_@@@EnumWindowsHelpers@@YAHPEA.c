/*
 * XREFs of ??$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x18010E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsEligibleToolWindowHResult@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJPEAUHWND__@@@Z @ 0x18010E89C (-IsEligibleToolWindowHResult@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicati.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x18030ED44 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 */

__int64 __fastcall EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_df7356024bf744f3615be68a3ea90a6d_>(
        HWND a1,
        __int64 a2)
{
  bool *v2; // rbx
  int v5; // eax
  bool v6; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-248h] BYREF
  WCHAR ClassName[264]; // [rsp+40h] [rbp-238h] BYREF

  v2 = *(bool **)a2;
  if ( !**(_BYTE **)a2 )
  {
    v5 = *((_DWORD *)v2 + 1);
    if ( v5 < 0 )
    {
      if ( a1 == *((HWND *)v2 + 1) )
        *((_DWORD *)v2 + 1) = 0;
      goto LABEL_5;
    }
    if ( v5 > 4 )
    {
LABEL_5:
      v6 = 0;
LABEL_6:
      *v2 = v6;
      goto LABEL_7;
    }
    *((_DWORD *)v2 + 1) = v5 + 1;
    if ( GetClassNameW(a1, ClassName, 260) )
    {
      if ( *((int *)v2 + 1) > 4 )
      {
        v6 = CompareStringOrdinal((LPCWCH)v2 + 32, -1, ClassName, -1, 0) == 2;
        goto LABEL_6;
      }
      if ( (int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindowHResult(a1) >= 0 )
      {
        v11 = *((_OWORD *)v2 + 1);
        if ( (int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment(
                    &v11,
                    a1,
                    1LL,
                    v2 + 584) >= 0 )
        {
          v10 = (char *)(v2 + 64);
          if ( *((_DWORD *)v2 + 1) == 1 )
          {
            if ( (int)StringCchCopyW(v10, 260LL, (char *)ClassName) < 0 )
              goto LABEL_21;
            goto LABEL_27;
          }
          if ( CompareStringOrdinal((LPCWCH)v10, -1, ClassName, -1, 0) == 2 )
          {
LABEL_27:
            *(_QWORD *)&v2[8 * *((int *)v2 + 1) + 24] = a1;
            goto LABEL_5;
          }
        }
      }
    }
LABEL_21:
    v6 = 1;
    goto LABEL_6;
  }
LABEL_7:
  v7 = *(_QWORD *)(a2 + 8);
  if ( a1 == *(HWND *)(v7 + 8) )
  {
    *(_BYTE *)v7 = 1;
  }
  else if ( !*(_BYTE *)v7 )
  {
    *(_QWORD *)(v7 + 8LL * *(int *)(v7 + 64) + 32) = a1;
    *(_DWORD *)(v7 + 64) = (*(_DWORD *)(v7 + 64) + 1) % 4;
  }
  v8 = *(_QWORD *)(a2 + 16);
  if ( a1 == *(HWND *)(v8 + 8) )
  {
    *(_BYTE *)v8 = 1;
  }
  else if ( *(_BYTE *)v8 )
  {
    *(_BYTE *)v8 = 0;
    *(_QWORD *)(v8 + 32) = a1;
  }
  return 1LL;
}
