/*
 * XREFs of DrvDxgkCheckDisplayState @ 0x1401F784C
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401D2960 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline @ 0x1401F9844 (Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkCheckDisplayState(int a1, __int64 a2, __int64 a3, __int64 a4, __int128 *a5, int a6)
{
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 DxgkWin32kInterface; // rax
  _DWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+38h] [rbp-30h]

  v8 = a2;
  v16 = 0LL;
  v9 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)v9 )
    goto LABEL_17;
  v9 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v9 )
  {
    v10 = 2;
    goto LABEL_18;
  }
  v9 = (unsigned int)(v9 - 2);
  if ( !(_DWORD)v9 )
  {
    v9 = (unsigned int)(a6 - 1);
    if ( a6 == 1 )
      goto LABEL_15;
    v9 = (unsigned int)(a6 - 2);
    if ( a6 != 2 )
    {
      v9 = (unsigned int)(a6 - 3);
      if ( a6 == 3 )
      {
        v10 = 9;
        goto LABEL_18;
      }
      v9 = (unsigned int)(a6 - 4);
      if ( a6 == 4 )
      {
        v10 = 10;
        goto LABEL_18;
      }
      if ( a6 == 5 )
      {
        v9 = (unsigned int)Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline() != 0 ? 7 : 0;
        v10 = v9 + 4;
        goto LABEL_18;
      }
LABEL_15:
      v10 = 4;
      goto LABEL_18;
    }
LABEL_17:
    v10 = 1;
    goto LABEL_18;
  }
  if ( (_DWORD)v9 == 4 )
    v10 = 8;
  else
    v10 = 0;
LABEL_18:
  v16 = *a5;
  v13[0] = v10;
  v13[1] = v8;
  v14 = a3;
  v15 = a4;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9, a2);
  return (*(__int64 (__fastcall **)(_DWORD *))(DxgkWin32kInterface + 744))(v13);
}
