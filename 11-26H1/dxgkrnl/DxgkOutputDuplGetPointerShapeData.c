/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1403CA4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403CA78C (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(void *a1)
{
  void *v2; // rax
  void *v3; // rsi
  __int64 v4; // rcx
  void *v6; // r15
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // [rsp+50h] [rbp-68h] BYREF
  __int64 v11; // [rsp+58h] [rbp-60h]
  char v12; // [rsp+60h] [rbp-58h]
  void *v13; // [rsp+68h] [rbp-50h]
  __int128 Src; // [rsp+70h] [rbp-48h] BYREF
  void *v15[2]; // [rsp+80h] [rbp-38h]
  __int128 v16; // [rsp+90h] [rbp-28h]
  __int64 v17; // [rsp+A0h] [rbp-18h]

  v10 = -1;
  v11 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2065;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2065);
  Src = 0LL;
  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  RtlCopyFromUser(&Src, a1, 0x38uLL);
  v2 = (void *)operator new[](DWORD2(Src), 0x674D444Fu, 256LL);
  v3 = v2;
  v13 = v2;
  if ( v2 )
  {
    v6 = v15[0];
    v15[0] = v2;
    v7 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(Src);
    v15[0] = v6;
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
      RtlCopyToUser(a1, &Src, 0x38uLL);
    if ( v7 >= 0 )
    {
      v8 = (unsigned int)v15[1];
      if ( LODWORD(v15[1]) )
      {
        if ( DWORD2(Src) < LODWORD(v15[1]) )
          v8 = DWORD2(Src);
        RtlCopyToUser(v6, v3, v8);
      }
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    return (unsigned int)v7;
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3776;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Couldn't allocate buffer of size 0x%I64x for pointer shape kernel mode buffer",
      DWORD2(Src),
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return 3221225495LL;
  }
}
