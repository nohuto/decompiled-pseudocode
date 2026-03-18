/*
 * XREFs of ?FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PEAPEAVVPTPTouchpad@@@Z @ 0x14021D454
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x14021CE04 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::FindTouchpadForConfig(
        VirtualTouchpadProcessor *this,
        struct VPTP_ID *a2,
        const struct tagVIRTUAL_PTP_CONFIG *a3,
        struct VPTPTouchpad **a4)
{
  _DWORD *v4; // rbx
  unsigned int v8; // ecx
  VirtualTouchpadProcessor *i; // rax
  __int64 v10; // rax
  VirtualTouchpadProcessor *v11; // rax
  int v12; // eax
  __int64 result; // rax

  v4 = 0LL;
  v8 = -1073741811;
  if ( *(_DWORD *)a2 )
  {
    for ( i = *(VirtualTouchpadProcessor **)this; i != this; i = *(VirtualTouchpadProcessor **)i )
    {
      if ( *(_DWORD *)a2 == *((_DWORD *)i + 52) )
      {
        v8 = 0;
        v4 = i;
        break;
      }
    }
  }
  else if ( *(_DWORD *)a3 )
  {
    v10 = Win32AllocPoolZInitImpl(256LL, 0xD8uLL, 0x70747655u);
    v4 = (_DWORD *)v10;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 32) = 0LL;
      memset((void *)(v10 + 40), 0, 0x98uLL);
      *((_OWORD *)v4 + 12) = 0LL;
      v4[52] = 0;
      v11 = *(VirtualTouchpadProcessor **)this;
      if ( *(VirtualTouchpadProcessor **)(*(_QWORD *)this + 8LL) != this )
        __fastfail(3u);
      *(_QWORD *)v4 = v11;
      v8 = 0;
      *((_QWORD *)v4 + 1) = this;
      *((_QWORD *)v11 + 1) = v4;
      *(_QWORD *)this = v4;
      *((_QWORD *)v4 + 3) = v4 + 4;
      *((_QWORD *)v4 + 2) = v4 + 4;
      v12 = *((_DWORD *)this + 4);
      do
        ++v12;
      while ( !v12 );
      *((_DWORD *)this + 4) = v12;
      v4[52] = v12;
      *(_DWORD *)a2 = v12;
    }
    else
    {
      v4 = 0LL;
      v8 = -1073741801;
    }
  }
  result = v8;
  *a4 = (struct VPTPTouchpad *)v4;
  return result;
}
