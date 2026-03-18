/*
 * XREFs of ?SyncLegacyVisualCaptureRenderTargetCaptureBits@CChannel@@UEAAJIIMHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180119830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x1801172AC (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SyncLegacyVisualCaptureRenderTargetCaptureBits(
        __m128i *this,
        unsigned int a2,
        unsigned int a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        enum DXGI_FORMAT *a10,
        void **a11)
{
  __int64 v11; // rsi
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __m128i v24; // xmm1
  _DWORD v25[8]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-20h]
  int v27; // [rsp+68h] [rbp-18h]
  int v28; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v11 = this[4].m128i_i64[0];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
  CChannel::CheckHandle((__int64)this, a2, 75);
  CChannel::CheckHandle((__int64)this, a3, 156);
  v25[0] = 157;
  v27 = 0;
  v28 = 0;
  v25[4] = a5;
  v25[5] = a6;
  v25[6] = a7;
  v25[7] = a8;
  v26 = a9;
  v25[2] = a3;
  *(float *)&v25[3] = a4;
  v25[1] = a2;
  v15 = *a10;
  this[9] = 0LL;
  v27 = v15;
  this[10].m128i_i64[0] = 0LL;
  this[10].m128i_i32[2] = 0;
  v16 = CChannel::SendCommand((CChannel *)this, v25, 0x30u);
  v17 = v16;
  if ( v16 < 0 )
  {
    v22 = 208LL;
    v21 = (unsigned int)v16;
    goto LABEL_4;
  }
  v18 = CChannel::SyncFlushInternal((CChannel *)this);
  v17 = v18;
  v21 = (unsigned int)v18;
  if ( v18 < 0 )
  {
    v22 = 211LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v21);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
    return v17;
  }
  v17 = this[10].m128i_u32[2];
  v24 = this[9];
  if ( (v17 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
    return v17;
  }
  *a10 = SHIDWORD(this[10].m128i_i64[0]);
  *a11 = (void *)_mm_srli_si128(v24, 8).m128i_u64[0];
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 80LL))(v11, v19, v20, (unsigned int)v18);
  return 0LL;
}
