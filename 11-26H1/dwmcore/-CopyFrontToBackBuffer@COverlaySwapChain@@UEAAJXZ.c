/*
 * XREFs of ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x1800358F0
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034920 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x180105110 (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802A67C0 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180035FC0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlaySwapChain::CopyFrontToBackBuffer(COverlaySwapChain *this)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  FastRegion::CRegion *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int *v11; // r15
  int v12; // eax
  __int64 v13; // r13
  int v14; // edx
  unsigned __int64 v15; // r8
  _DWORD *v16; // r15
  char *v17; // r13
  _DWORD *v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rax
  int v22; // esi
  __int64 v23; // rcx
  unsigned int v24; // ebx
  ULONG v25; // edi
  __int64 v26; // rcx
  int v27; // r14d
  ULONGLONG Ptr; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // [rsp+68h] [rbp-59h] BYREF
  unsigned int RectangleCount; // [rsp+70h] [rbp-51h] BYREF
  __int64 v33; // [rsp+78h] [rbp-49h]
  unsigned __int64 v34; // [rsp+80h] [rbp-41h]
  __int64 v35; // [rsp+88h] [rbp-39h]
  COverlaySwapChain *v36; // [rsp+90h] [rbp-31h]
  __int64 v37; // [rsp+98h] [rbp-29h]
  FastRegion::CRegion *v38; // [rsp+A0h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+A8h] [rbp-19h] BYREF
  unsigned int *p_RectangleCount; // [rsp+B8h] [rbp-9h]
  __int64 v41; // [rsp+C0h] [rbp-1h]
  int *v42; // [rsp+C8h] [rbp+7h]
  __int64 v43; // [rsp+D0h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+D8h] [rbp+17h] BYREF

  v1 = *(_QWORD *)this;
  v36 = this;
  v3 = (*(__int64 (__fastcall **)(COverlaySwapChain *))(v1 + 208))(this);
  v35 = v3;
  v4 = (FastRegion::CRegion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
  v38 = v4;
  if ( **(_DWORD **)v4 )
  {
    v5 = *(_QWORD *)v3;
    RectangleCount = 0;
    v6 = (*(__int64 (__fastcall **)(__int64))(v5 + 152))(v3);
    v7 = *(_QWORD *)this;
    v37 = v6;
    v8 = (*(__int64 (__fastcall **)(COverlaySwapChain *))(v7 + 216))(this);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 152LL))(v8);
    v33 = v10;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start,
        v9,
        1u,
        &v44);
      v10 = v33;
    }
    v11 = *(int **)v4;
    v12 = **(_DWORD **)v4;
    if ( v12 )
    {
      v13 = v11[4];
      v14 = 0;
      v31 = 0;
      v15 = (unsigned __int64)&v11[2 * v12 + 1];
      v16 = v11 + 3;
      v17 = (char *)v16 + v13;
      v34 = v15;
      v18 = v16 + 2;
      v19 = ((__int64)v16 + (int)v16[3] - (_QWORD)v17 + 8) >> 3;
      if ( (int)v19 <= 0 )
      {
        v14 = 1;
        v31 = 1;
        do
        {
          v16 = v18;
          v20 = (int)v18[3];
          v17 = (char *)v18 + (int)v18[1];
          v18 += 2;
          LODWORD(v19) = ((__int64)v18 + v20 - (__int64)v17) >> 3;
          if ( (_DWORD)v19 )
            goto LABEL_19;
        }
        while ( (unsigned __int64)v16 < v15 );
      }
    }
    else
    {
      LODWORD(v19) = RectangleCount;
      v15 = 0LL;
      v17 = (char *)v35;
      v16 = 0LL;
      v14 = v31;
      v34 = 0LL;
    }
LABEL_15:
    while ( (unsigned __int64)v16 < v15 )
    {
      v22 = *v16;
      v23 = 2 * v14;
      v24 = *(_DWORD *)&v17[4 * v23];
      v25 = *(_DWORD *)&v17[4 * v23 + 4];
      v26 = *(_QWORD *)(*((_QWORD *)v36 + 5) + 552LL);
      v39.Ptr = __PAIR64__(*v16, v24);
      v39.Size = 0;
      v39.Reserved = v25;
      HIDWORD(p_RectangleCount) = 1;
      v44.Ptr = (ULONGLONG)(v16 + 2);
      LODWORD(p_RectangleCount) = v16[2];
      v27 = (int)p_RectangleCount;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, struct _EVENT_DATA_DESCRIPTOR *, _DWORD))(*(_QWORD *)v26 + 920LL))(
        v26,
        v37,
        0LL,
        v24,
        v22,
        0,
        v10,
        0,
        &v39,
        0);
      v15 = v34;
      v10 = v33;
      v14 = v31 + 1;
      v31 = v14;
      RectangleCount += (v25 - v24) * (v27 - v22);
      if ( v14 >= (int)v19 )
      {
        Ptr = v44.Ptr;
        while ( 1 )
        {
          v16 = (_DWORD *)Ptr;
          v29 = *(int *)(Ptr + 12);
          v17 = (char *)(Ptr + *(int *)(Ptr + 4));
          Ptr += 8LL;
          LODWORD(v19) = (__int64)(Ptr + v29 - (_QWORD)v17) >> 3;
          if ( (_DWORD)v19 )
            break;
          if ( (unsigned __int64)v16 >= v34 )
            goto LABEL_15;
        }
LABEL_19:
        v14 = 0;
        v31 = 0;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v31 = RectangleCount;
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v38);
      v41 = 4LL;
      p_RectangleCount = &RectangleCount;
      v43 = 4LL;
      v42 = &v31;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        (const EVENT_DESCRIPTOR *)"#",
        v30,
        3u,
        &v39);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 128LL))(v35);
  }
  return 0LL;
}
