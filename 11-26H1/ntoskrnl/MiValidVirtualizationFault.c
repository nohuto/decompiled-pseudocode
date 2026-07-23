/*
 * XREFs of MiValidVirtualizationFault @ 0x140527ED0
 * Callers:
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiCompleteSecureProcessFault @ 0x14038CC80 (MiCompleteSecureProcessFault.c)
 *     MiSetFaultPacketDirectives @ 0x1403A981C (MiSetFaultPacketDirectives.c)
 *     MiPerformSafePdeWrite @ 0x14043A640 (MiPerformSafePdeWrite.c)
 *     MiFillVirtualFaultInfo @ 0x1404AC080 (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x140528228 (MiGetVirtualFaultPageInfo.c)
 *     MiPromoteVirtualizationFault @ 0x1407044DC (MiPromoteVirtualizationFault.c)
 */

__int64 __fastcall MiValidVirtualizationFault(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  const signed __int64 *VirtualFaultPageInfo; // rax
  unsigned __int64 *v7; // r14
  unsigned __int64 v9; // rdx
  _KPROCESS *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // ebp
  const __m128i *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  _KPROCESS *v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  _KPROCESS *v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  const __m128i *v29; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp+8h] BYREF
  __int64 v31; // [rsp+78h] [rbp+20h] BYREF

  VirtualFaultPageInfo = (const signed __int64 *)MiGetVirtualFaultPageInfo(a2, *(_QWORD *)a1, 0LL);
  v7 = (unsigned __int64 *)VirtualFaultPageInfo;
  if ( (*(_BYTE *)(a1 + 69) & 0x10) != 0 && _bittest64(VirtualFaultPageInfo, 0x34u) )
    return 0LL;
  v9 = *(_QWORD *)a3;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v10 = MiPteHasShadow();
    if ( v10 )
    {
      KernelWaitTime = v10[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v13 = *(_QWORD *)(KernelWaitTime + 8 * ((a3 >> 3) & 0x1FF));
        if ( (v13 & 0x20) != 0 )
          v11 |= 0x20uLL;
        v9 = v11 | 0x42;
        if ( (v13 & 0x42) == 0 )
          v9 = v11;
      }
    }
  }
  v14 = *(_DWORD *)(a2 + 56);
  v30 = v9;
  if ( (v14 & 1) != 0 && (v9 & 0x42) == 0 )
    return 3221226548LL;
  v15 = 1;
  if ( (v14 & 0x20) == 0 )
    goto LABEL_39;
  v31 = 0LL;
  v16 = (const __m128i *)(48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  v29 = v16;
  v17 = v16->m128i_i64[1];
  if ( v17 <= 0 || (v16[2].m128i_i64[1] & 0x10000000000LL) != 0 )
  {
LABEL_37:
    if ( (*(_DWORD *)(a2 + 56) & 0x20) != 0 )
    {
      v23 = MiCompleteSecureProcessFault(&v29, (__int64 *)&v30, a2);
      v9 = v30;
      v15 = v23;
    }
LABEL_39:
    if ( (v9 & 0x20) == 0 )
    {
      MiPerformSafePdeWrite(*(_QWORD *)(a1 + 56), a3, v9, 1);
      v9 = *(_QWORD *)a3;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL
        && a3 <= 0xFFFFF6FB7DBED7F8uLL
        && (v9 & 1) != 0
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        v24 = MiPteHasShadow();
        if ( v24 )
        {
          v26 = v24[2].KernelWaitTime;
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 8 * ((a3 >> 3) & 0x1FF));
            if ( (v27 & 0x20) != 0 )
              v25 |= 0x20uLL;
            v9 = v25 | 0x42;
            if ( (v27 & 0x42) == 0 )
              v9 = v25;
          }
        }
      }
    }
    v28 = MiPromoteVirtualizationFault(*(_QWORD *)(a1 + 56), a2, *(_QWORD *)a1, a3, v9);
    if ( v15 )
    {
      MiFillVirtualFaultInfo(0xFFFFFFFFFFLL, v7, (v28 >> 12) & 0xFFFFFFFFFFLL, v28);
      return 0LL;
    }
    return 3221226548LL;
  }
  if ( (*(_QWORD *)((v17 | 0x8000000000000000uLL) + 0x10) & 0x1000000000000000LL) != 0 )
    return 3221225477LL;
  v18 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, a3, -1LL, 0, &v31);
  if ( v18 >= 0 )
  {
    v9 = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 0xFFFFF6FB7DBED7F8uLL
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v19 = MiPteHasShadow();
      if ( v19 )
      {
        v21 = v19[2].KernelWaitTime;
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 8 * ((a3 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v20 |= 0x20uLL;
          v9 = v20 | 0x42;
          if ( (v22 & 0x42) == 0 )
            v9 = v20;
        }
      }
    }
    v30 = v9;
    v29 = (const __m128i *)(48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    goto LABEL_37;
  }
  MiSetFaultPacketDirectives(a1, v18, v31);
  return 3221226548LL;
}
