/*
 * XREFs of ?CreateDoorbell@DXGHWQUEUE@@QEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z @ 0x1401E1370
 * Callers:
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x1401E2F50 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14005C5B4 (--2-$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z @ 0x14007C5E4 (--0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z.c)
 *     ?Initialize@DXGDOORBELL@@IEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z @ 0x1401E2B68 (-Initialize@DXGDOORBELL@@IEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z.c)
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1404020A8 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGHWQUEUE::CreateDoorbell(struct DXGHWQUEUE *a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v5; // ebx
  DXGDOORBELL *v6; // rax
  DXGDOORBELL *v7; // rax
  __int64 v9; // [rsp+28h] [rbp-30h]

  v2 = *((_QWORD *)a1 + 19);
  if ( v2 )
  {
    v5 = -1073741811;
    WdLogSingleEntry3(2LL, a1, v2, -1073741811LL);
    v9 = *((_QWORD *)a1 + 19);
    WdLogGlobalForLineNumber = 3844;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Can not create doorbell on DXGHWQueue 0x%I64x as DXGDOORBELL 0x%I64x already exists, returning 0x%I64x",
      (__int64)a1,
      v9,
      -1073741811LL,
      0LL,
      0LL);
    return v5;
  }
  v6 = (DXGDOORBELL *)DXGQUOTAALLOCATOR<64,1265072196>::operator new(176LL);
  if ( !v6 )
  {
    *((_QWORD *)a1 + 19) = 0LL;
    goto LABEL_8;
  }
  v7 = DXGDOORBELL::DXGDOORBELL(v6, a1);
  *((_QWORD *)a1 + 19) = v7;
  if ( !v7 )
  {
LABEL_8:
    v5 = -1073741801;
    WdLogSingleEntry2(3LL, a1, -1073741801LL);
    WdLogGlobalForLineNumber = 3855;
    return v5;
  }
  v5 = DXGDOORBELL::Initialize(v7, a2);
  if ( (v5 & 0x80000000) != 0 )
    DXGHWQUEUE::DestroyDoorbell(a1);
  return v5;
}
