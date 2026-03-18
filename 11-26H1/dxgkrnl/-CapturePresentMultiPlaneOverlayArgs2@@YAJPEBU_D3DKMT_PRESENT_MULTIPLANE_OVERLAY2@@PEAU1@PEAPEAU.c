/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1401E6D7C
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1401E8610 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1401E6D54 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs2(
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *Src,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY2 **a3,
        struct tagRECT **a4)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v10; // rax
  __int64 v11; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v12; // rdi
  __int64 v13; // rax
  void **v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 CurrentProcess; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v22; // [rsp+50h] [rbp-178h] BYREF
  void *v23[38]; // [rsp+60h] [rbp-168h] BYREF

  memset(v23, 0, sizeof(v23));
  RtlCopyFromUser(v23, Src, 0x130uLL);
  if ( (unsigned int)(HIDWORD(v23[35]) - 1) > 6 )
  {
    v17 = HIDWORD(v23[35]);
    CurrentProcess = PsGetCurrentProcess(HIDWORD(v23[35]));
    WdLogSingleEntry3(2LL, v17, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 176;
    v19 = HIDWORD(v23[35]);
    v21 = PsGetCurrentProcess(v20);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v19,
      -1073741811LL,
      v21,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v8 = 120 * HIDWORD(v23[35]);
    if ( 120 * (unsigned __int64)HIDWORD(v23[35]) > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 186;
      return 3221225621LL;
    }
    else
    {
      v22 = 0LL;
      v9 = 120LL * HIDWORD(v23[35]);
      if ( !is_mul_ok(HIDWORD(v23[35]), 0x78uLL) )
        v9 = -1LL;
      v10 = (struct _D3DKMT_MULTIPLANE_OVERLAY2 *)operator new[](v9, 0x4B677844u, 256LL);
      v12 = v10;
      *(_QWORD *)&v22 = v10;
      if ( v10 )
      {
        RtlCopyFromUser(v10, v23[36], v8);
        v23[36] = v12;
        v15 = v23;
        v16 = 2LL;
        do
        {
          *(_OWORD *)&a2->hAdapter = *(_OWORD *)v15;
          *(_OWORD *)&a2->BroadcastContext[1] = *((_OWORD *)v15 + 1);
          *(_OWORD *)&a2->BroadcastContext[5] = *((_OWORD *)v15 + 2);
          *(_OWORD *)&a2->BroadcastContext[9] = *((_OWORD *)v15 + 3);
          *(_OWORD *)&a2->BroadcastContext[13] = *((_OWORD *)v15 + 4);
          *(_OWORD *)&a2->BroadcastContext[17] = *((_OWORD *)v15 + 5);
          *(_OWORD *)&a2->BroadcastContext[21] = *((_OWORD *)v15 + 6);
          a2 = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)((char *)a2 + 128);
          *(_OWORD *)&a2[-1].pPresentPlanes = *((_OWORD *)v15 + 7);
          v15 += 16;
          --v16;
        }
        while ( v16 );
        *(_OWORD *)&a2->hAdapter = *(_OWORD *)v15;
        *(_OWORD *)&a2->BroadcastContext[1] = *((_OWORD *)v15 + 1);
        *(_OWORD *)&a2->BroadcastContext[5] = *((_OWORD *)v15 + 2);
        *a3 = v12;
        *a4 = (struct tagRECT *)*((_QWORD *)&v22 + 1);
        v22 = 0LL;
        DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)&v22);
        return 0LL;
      }
      else
      {
        v13 = PsGetCurrentProcess(v11);
        WdLogSingleEntry2(3LL, -1073741801LL, v13);
        WdLogGlobalForLineNumber = 210;
        DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)&v22);
        return 3221225495LL;
      }
    }
  }
}
