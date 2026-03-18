/*
 * XREFs of ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1402B4484
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14039EE6C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140434008 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer @ 0x140053670 (McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqq_EtwWriteTransfer @ 0x140057EF4 (McTemplateK0qqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqddddddddq_EtwWriteTransfer @ 0x14005DD74 (McTemplateK0qqddddddddq_EtwWriteTransfer.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

void __fastcall LogCheckMutiplaneOverlaySupport(
        __int64 a1,
        D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes,
        unsigned int a3,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a4,
        void **a5,
        unsigned int a6,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a7,
        struct ADAPTER_RENDER *a8)
{
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // rsi
  __int64 v9; // rbx
  int v10; // r12d
  float v11; // xmm2_4
  int v12; // ebp
  unsigned int v13; // r14d
  int v14; // r10d
  __int64 v15; // r8
  float v16; // xmm3_4
  __int64 v17; // r11
  int v18; // edi
  int v19; // eax
  float v20; // xmm1_4
  void **v21; // rdi
  __int64 v22; // rbp
  signed __int64 v23; // rsi
  void *v24; // rax
  char v25; // bl
  __int64 v26; // r14
  _DWORD *v27; // rcx
  __int64 v29; // rbp
  int *v30; // r9
  int v31; // [rsp+28h] [rbp-F0h]
  struct _DXGKARG_DESCRIBEALLOCATION v32; // [rsp+C0h] [rbp-58h] BYREF

  v8 = a4;
  v9 = a3;
  v10 = (int)pPlaneAttributes;
  if ( bTracingEnabled )
  {
    v11 = FLOAT_1_0;
    LOBYTE(v12) = 1;
    v13 = 1;
    v14 = 1;
    v15 = 1LL;
    v16 = FLOAT_1_0;
    if ( (_DWORD)v9 )
    {
      v17 = (unsigned int)v9;
      do
      {
        pPlaneAttributes = (*a4)->pPlaneAttributes;
        v18 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
        v19 = pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left;
        v20 = (float)v19 / (float)v18;
        if ( v20 > v11 )
        {
          v12 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
          v13 = pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left;
          v11 = (float)v19 / (float)v18;
        }
        else if ( v16 > v20 )
        {
          v14 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
          v15 = (unsigned int)v19;
          v16 = (float)v19 / (float)v18;
        }
        ++a4;
        --v17;
      }
      while ( v17 );
    }
    if ( v14 == 1 )
    {
      v15 = v13;
      LOBYTE(v14) = v12;
    }
    if ( v10 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqqq_EtwWriteTransfer(
          a1,
          &EventCheckMultiPlaneOverlaySuccess,
          v15,
          (*v8)->VidPnSourceId,
          v9,
          v31,
          v14,
          v15,
          0);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0qqqqqq_EtwWriteTransfer(
        a1,
        &EventCheckMultiPlaneOverlayFail,
        v15,
        (*v8)->VidPnSourceId,
        v9,
        v31,
        v14,
        v15,
        a1);
    }
    if ( a6 )
    {
      v29 = a6;
      do
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v30 = (int *)*a7;
          McTemplateK0qqddddddddq_EtwWriteTransfer(
            a1,
            (__int64)pPlaneAttributes,
            v15,
            *v30,
            v30[1],
            v30[2],
            v30[4],
            v30[3],
            v30[5],
            v30[6],
            v30[8],
            v30[7],
            v30[9],
            v30[10]);
        }
        ++a7;
        --v29;
      }
      while ( v29 );
    }
    if ( (_DWORD)v9 )
    {
      v21 = a5;
      v22 = v9;
      v23 = (char *)v8 - (char *)a5;
      do
      {
        v24 = *v21;
        v25 = 0;
        v26 = *(__int64 *)((char *)v21 + v23);
        if ( *v21 )
        {
          memset(&v32.Width, 0, 40);
          v32.hAllocation = v24;
          if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(a8, &v32) >= 0 )
            v25 = v32.Format >= 0xFFFFFF;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v27 = *(_DWORD **)(v26 + 24);
          McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer(
            (__int64)v27,
            (__int64)pPlaneAttributes,
            v15,
            *(_DWORD *)(v26 + 16),
            v25,
            *v27,
            v27[1],
            v27[3],
            v27[2],
            v27[4],
            v27[5],
            v27[7],
            v27[6],
            v27[8],
            v27[9],
            v27[11],
            v27[10],
            v27[12],
            v27[13],
            v27[14],
            v27[18],
            v27[19],
            *(_DWORD *)v26,
            v27[20]);
        }
        ++v21;
        --v22;
      }
      while ( v22 );
    }
  }
}
