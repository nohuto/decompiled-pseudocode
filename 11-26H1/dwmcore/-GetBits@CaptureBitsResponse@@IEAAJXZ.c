/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180127CB4
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18009A310 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180127900 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180127FC4 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this, __int64 a2, __int64 a3)
{
  int RenderTargetBitmap; // eax
  unsigned int v5; // ebx
  __int64 v6; // r8
  signed int v7; // r9d
  __int64 v8; // rsi
  int v9; // r14d
  char *v10; // r13
  _DWORD *v11; // r12
  int v12; // edx
  __int64 v13; // rcx
  _DWORD *v14; // r15
  int v15; // eax
  int v16; // r10d
  signed int v17; // r11d
  int v18; // r8d
  int v19; // ecx
  int v20; // eax
  ULONG v21; // eax
  ULONG v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // rcx
  unsigned int v27; // [rsp+28h] [rbp-39h]
  int v28; // [rsp+38h] [rbp-29h]
  char v29[8]; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-19h]
  _DWORD *v31; // [rsp+50h] [rbp-11h]
  char *v32; // [rsp+58h] [rbp-9h]
  int v33; // [rsp+60h] [rbp-1h]
  int v34; // [rsp+64h] [rbp+3h]
  __int64 v35; // [rsp+70h] [rbp+Fh] BYREF
  int v36; // [rsp+78h] [rbp+17h]
  signed int v37; // [rsp+7Ch] [rbp+1Bh]
  unsigned __int128 v38; // [rsp+80h] [rbp+1Fh] BYREF

  v36 = *((_DWORD *)this + 371);
  v37 = *((_DWORD *)this + 372);
  v35 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_GETBITS,
      a3,
      1u,
      (PEVENT_DATA_DESCRIPTOR)&v38);
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v5 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v27 = 164;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderTargetBitmap, v27, 0LL);
    goto LABEL_28;
  }
  RenderTargetBitmap = CaptureBitsResponse::RenderForCapture(this);
  v5 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v27 = 167;
    goto LABEL_35;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 192LL))(*((_QWORD *)this + 6)) )
  {
    RenderTargetBitmap = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 8)
                                                                                              + 128LL))(
                           *((_QWORD *)this + 8),
                           &v35,
                           *((_QWORD *)this + 191),
                           0LL,
                           0);
    v5 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_28;
    v27 = 196;
    goto LABEL_35;
  }
  FastRegion::CRegion::BeginIterator((int **)(*((_QWORD *)this + 6) + 2520LL), (__int64)v29);
  v7 = v37;
  LODWORD(v8) = v34;
  v9 = v33;
  v10 = v32;
  v11 = v31;
LABEL_7:
  while ( (unsigned __int64)v11 < v30 )
  {
    v12 = *((_DWORD *)this + 370);
    v13 = 2 * v9;
    v14 = v11 + 2;
    v15 = *((_DWORD *)this + 369);
    v38 = 0LL;
    DWORD1(v38) = *v11;
    v16 = DWORD1(v38) - v12;
    HIDWORD(v38) = v11[2];
    v17 = HIDWORD(v38) - v12;
    LODWORD(v38) = *(_DWORD *)&v10[4 * v13];
    v18 = *(_DWORD *)&v10[4 * v13 + 4];
    v19 = v36;
    v6 = (unsigned int)(v18 - v15);
    v20 = v38 - v15;
    if ( (int)v35 > v20 )
      v20 = v35;
    v28 = v20;
    if ( SHIDWORD(v35) > v16 )
      v16 = HIDWORD(v35);
    LODWORD(v38) = v20;
    v21 = v6;
    if ( v36 < (int)v6 )
      v21 = v36;
    DWORD1(v38) = v16;
    if ( v36 >= (int)v6 )
      v19 = v6;
    DWORD2(v38) = v21;
    v22 = HIDWORD(v38) - v12;
    if ( v7 < v17 )
      v22 = v7;
    HIDWORD(v38) = v22;
    if ( v19 <= v28 )
      goto LABEL_33;
    v23 = v7;
    if ( v7 >= v17 )
      v23 = v17;
    if ( v23 <= v16 )
    {
LABEL_33:
      v38 = 0uLL;
    }
    else
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int128 *, _QWORD, _QWORD, int))(**((_QWORD **)this + 8) + 128LL))(
              *((_QWORD *)this + 8),
              &v38,
              *((_QWORD *)this + 191),
              (unsigned int)v28,
              v16);
      v5 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xBEu, 0LL);
        break;
      }
      v7 = v37;
    }
    if ( ++v9 >= (int)v8 )
    {
      while ( 1 )
      {
        v10 = (char *)v14 + (int)v14[1];
        v25 = v14;
        v11 = v14;
        v8 = ((int)v14[3] - (__int64)(int)v14[1] + 8) >> 3;
        v14 += 2;
        if ( (_DWORD)v8 )
          break;
        if ( (unsigned __int64)v25 >= v30 )
          goto LABEL_7;
      }
      v9 = 0;
    }
  }
LABEL_28:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_Stop,
      v6,
      1u,
      (PEVENT_DATA_DESCRIPTOR)&v38);
  return v5;
}
