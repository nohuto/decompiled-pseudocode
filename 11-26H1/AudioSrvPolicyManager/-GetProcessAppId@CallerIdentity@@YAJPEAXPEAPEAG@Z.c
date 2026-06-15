/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000B24C
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18000B504 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseToken@SysAppId@ProcessToken@ARI@@YAXPEAX@Z @ 0x180023DC8 (-CloseToken@SysAppId@ProcessToken@ARI@@YAXPEAX@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x180023DEC (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180023E30 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180023FF8 (-Free@ARI@@YAXPEAX@Z.c)
 *     ?GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18002B630 (-GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@.c)
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x18002CC64 (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 *     ?GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18002E270 (-GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(CallerIdentity *this, _QWORD *a2, unsigned __int16 **a3)
{
  void *v4; // rdx
  signed int v5; // ebx
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v6; // r9
  void *v7; // rdx
  ARI::ProcessToken::SysAppId *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // ebx
  _WORD *v13; // rbx
  unsigned int v14; // edi
  unsigned int v15; // esi
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdx
  char *v20; // rbx
  __int64 v21; // rax
  int v22; // edi
  _WORD *v23; // rdi
  void *v24; // rdx
  int PackageFamilyName; // eax
  __int64 v26; // rdx
  void *v27; // rcx
  unsigned int *v28; // r9
  unsigned int v29; // eax
  __int64 v30; // rcx
  bool *v31; // [rsp+20h] [rbp-20h]
  unsigned __int16 *v32; // [rsp+20h] [rbp-20h]
  unsigned __int16 *v33; // [rsp+20h] [rbp-20h]
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  LPVOID pv; // [rsp+78h] [rbp+38h] BYREF

  *a2 = 0LL;
  pv = 0LL;
  *(_OWORD *)P = 0LL;
  v5 = ARI::ProcessToken::SysAppId::OpenTokenForProcess(this, &pv, (void **)a3);
  if ( !v5 )
  {
    v5 = ARI::ProcessToken::SysAppId::Open(pv, P, (struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION **)&P[1], v6, v31);
    ARI::ProcessToken::SysAppId::CloseToken((ARI::ProcessToken::SysAppId *)pv, v7);
  }
  if ( v5 > 0 )
    v5 = (unsigned __int16)v5 | 0x80070000;
  if ( v5 == -2147023728 || v5 == -2147024891 )
    goto LABEL_6;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)v5,
      (int)v31);
LABEL_6:
    if ( P[0] )
      ARI::Free(P[0], v4);
    return (unsigned int)v5;
  }
  v9 = (ARI::ProcessToken::SysAppId *)P[1];
  v10 = *((_QWORD *)P[1] + 4);
  v11 = *(unsigned __int16 *)(v10 + 16) >> 1;
  v12 = v11 + 1;
  if ( (_DWORD)v11 == -1 )
  {
    v13 = (_WORD *)(2 * v11);
    memcpy_0(0LL, *(const void **)(v10 + 24), 2 * v11);
    *v13 = 0;
LABEL_13:
    v14 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)0x8000FFFFLL,
      (int)v31);
LABEL_14:
    ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
    return v14;
  }
  LODWORD(pv) = 0;
  PackageFamilyName = ARI::ProcessToken::SysAppId::GetPackageFamilyName(
                        (ARI::ProcessToken::SysAppId *)P[1],
                        0LL,
                        (unsigned int)&pv,
                        0LL,
                        (unsigned __int16 *)v31);
  if ( PackageFamilyName != 122 )
  {
    if ( PackageFamilyName )
      goto LABEL_13;
    if ( !(v12 + (_DWORD)pv) )
    {
      v26 = (unsigned int)((_DWORD)pv - 1);
      *(_WORD *)(2 * v26) = 33;
      ARI::ProcessToken::SysAppId::GetPackageRelativeApplicationId(
        v9,
        (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)~(_DWORD)v26,
        (unsigned int)&pv,
        (unsigned int *)(2 * v26 + 2),
        (unsigned __int16 *)v31);
      goto LABEL_13;
    }
  }
  v15 = v12 + (_DWORD)pv;
  pv = 0LL;
  CoTaskMemFree(0LL);
  v18 = _AllocStringWorker<CTCoAllocPolicy>(v17, v16, 0, v15, (_DWORD)v31, (__int64)&pv);
  v14 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)v18,
      (int)v32);
    v27 = pv;
LABEL_33:
    CoTaskMemFree(v27);
    goto LABEL_14;
  }
  v19 = *((_QWORD *)v9 + 4);
  v20 = (char *)pv;
  v21 = *(unsigned __int16 *)(v19 + 16) >> 1;
  v22 = v21 + 1;
  if ( (_DWORD)v21 != -1 )
  {
    v28 = (unsigned int *)pv;
    LODWORD(pv) = 0;
    v29 = ARI::ProcessToken::SysAppId::GetPackageFamilyName(
            v9,
            (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)v15,
            (unsigned int)&pv,
            v28,
            v32);
    if ( v29 != 122 )
    {
      if ( v29 )
      {
LABEL_32:
        v14 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0xAC,
                (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                (const char *)v29);
        v27 = v20;
        goto LABEL_33;
      }
      if ( v15 >= v22 + (int)pv )
      {
        v30 = (unsigned int)((_DWORD)pv - 1);
        *(_WORD *)&v20[2 * v30] = 33;
        ARI::ProcessToken::SysAppId::GetPackageRelativeApplicationId(
          v9,
          (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(v15 - (unsigned int)v30 - 1),
          (unsigned int)&pv,
          (unsigned int *)&v20[2 * (unsigned int)v30 + 2],
          v33);
        goto LABEL_19;
      }
    }
    v29 = 122;
    goto LABEL_32;
  }
  v23 = (_WORD *)(2 * v21);
  memcpy_0(0LL, *(const void **)(v19 + 24), 2 * v21);
  *v23 = 0;
LABEL_19:
  *a2 = v20;
  CoTaskMemFree(0LL);
  if ( P[0] )
    ARI::Free(P[0], v24);
  return 0LL;
}
