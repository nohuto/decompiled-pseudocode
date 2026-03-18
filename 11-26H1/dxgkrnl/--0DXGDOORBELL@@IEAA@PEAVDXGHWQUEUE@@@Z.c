/*
 * XREFs of ??0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z @ 0x14007C5E4
 * Callers:
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z @ 0x1401E1370 (-CreateDoorbell@DXGHWQUEUE@@QEAAJU_D3DDDI_CREATEHWQUEUEFORUSERMODESUBMISSION_FLAGS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

DXGDOORBELL *__fastcall DXGDOORBELL::DXGDOORBELL(DXGDOORBELL *this, struct DXGHWQUEUE *a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rax
  __int128 v6; // xmm1
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rcx
  char v10; // al
  __int64 v11; // r8
  _QWORD *v12; // rax

  v2 = (_QWORD *)((char *)this + 16);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  memset((char *)this + 72, 0, 0x40uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *(_QWORD *)this = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 16LL) + 3168LL);
  v6 = *(_OWORD *)(v5 + 1272);
  v7 = *(_QWORD *)(v5 + 1272);
  v8 = HIDWORD(v7);
  *((_QWORD *)this + 1) = HIDWORD(v7);
  if ( (v7 & 1) != 0 )
  {
    v9 = (_QWORD *)((char *)this + 16);
    *v2 = DWORD2(v6);
  }
  else
  {
    v9 = v2;
  }
  v10 = *((_BYTE *)a2 + 149);
  *((_BYTE *)this + 171) = v10;
  if ( v10 )
  {
    v11 = HIDWORD(v7);
    v12 = v2;
    if ( !v8 )
    {
      *((_QWORD *)this + 1) = 4096LL;
      v11 = 4096LL;
      v12 = v9;
    }
    v8 = v11;
    v9 = v12;
    if ( !*v2 )
      *v12 = 4096LL;
  }
  if ( !v8 || (v7 & 1) != 0 && !*v9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 358;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"_SizeInBytes > 0 && (!Caps.Flags.SecondaryDoorbellSupported || _SecondaryDoorbellSizeInBytes > 0)",
      358LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return this;
}
