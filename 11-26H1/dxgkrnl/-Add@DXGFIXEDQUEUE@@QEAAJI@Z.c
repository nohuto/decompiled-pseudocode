/*
 * XREFs of ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x140050CB0
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140301D84 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Add(DXGFIXEDQUEUE *this, int a2)
{
  char *v2; // r14
  int *v5; // rdi
  int v6; // eax
  char *v7; // rsi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v12; // edx
  int v13; // r8d
  unsigned __int64 v14; // rax
  int v15; // ecx
  char *v16; // rbp
  int v17; // eax

  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v5 = (int *)((char *)this + 8);
    v6 = *((_DWORD *)this + 2);
    v7 = (char *)this + 4;
    v8 = *((_DWORD *)this + 1);
    v9 = v6 + 1;
    if ( v9 == v8 )
      v9 = 0;
    if ( v9 == *((_DWORD *)this + 3) )
    {
      v14 = 4LL * (unsigned int)(v8 + *(_DWORD *)this);
      if ( !is_mul_ok((unsigned int)(v8 + *(_DWORD *)this), 4uLL) )
        v14 = -1LL;
      v2 = (char *)operator new[](v14, 0x4B677844u, 256LL);
      if ( !v2 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 63;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Queue 0x%I64x has run out of space",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225507LL;
      }
      memmove(
        v2,
        (const void *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 3)),
        4LL * (unsigned int)(*(_DWORD *)v7 - *((_DWORD *)this + 3)));
      v15 = *((_DWORD *)this + 3);
      if ( v15 )
      {
        memmove(&v2[4 * (*(_DWORD *)v7 - v15)], *((const void **)this + 2), 4LL * (unsigned int)*v5);
        v16 = (char *)this + 4;
        v17 = *(_DWORD *)v7 - 1;
        *((_DWORD *)this + 3) = 0;
        *v5 = v17;
        v5 = (int *)((char *)this + 8);
      }
      else
      {
        v16 = v7;
      }
      *(_DWORD *)v7 += *(_DWORD *)this;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2));
      *((_QWORD *)this + 2) = v2;
      v7 = v16;
    }
    *(_DWORD *)&v2[4 * *v5] = a2;
    v10 = *v5 + 1;
    if ( v10 == *(_DWORD *)v7 )
      v10 = 0;
    *v5 = v10;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 52;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        52,
        v12,
        v13,
        0LL,
        0,
        -1,
        (__int64)L"Queue Init function not called or failed",
        52LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225495LL;
  }
}
