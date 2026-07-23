/*
 * XREFs of MiWritePteHighLevelIsr @ 0x1406F79F0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiWriteValidPteNewPage @ 0x14029F1C0 (MiWriteValidPteNewPage.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     MiCopyKstack @ 0x14050CEF4 (MiCopyKstack.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiSwitchKstackPages @ 0x140532FD0 (MiSwitchKstackPages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

ULONG_PTR __fastcall MiWritePteHighLevelIsr(ULONG_PTR Argument)
{
  ULONG_PTR v1; // r14
  signed __int64 *v2; // r12
  _QWORD *v3; // r13
  __int64 v4; // rbx
  signed __int64 v5; // rdi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 CurrentIrql; // rax
  volatile signed __int32 *v17; // r15
  signed __int32 v18; // eax
  unsigned int v19; // esi
  __m128i *v20; // r14
  const __m128i *v21; // rsi
  __int64 v22; // rdx
  int v23; // r13d
  int *v24; // rdi
  signed __int32 v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // r14d
  char v28; // r12
  signed __int32 v29; // ecx
  signed __int32 v30; // edx
  volatile signed __int32 v31; // r8d
  int v32; // esi
  unsigned int v33; // edi
  char v34; // r14
  signed __int32 v35; // ecx
  signed __int32 v36; // edx
  signed __int32 v37; // r8d
  int v38; // ebx
  signed __int32 v39; // eax
  unsigned int v40; // ebx
  unsigned int v41; // esi
  char v42; // r14
  signed __int32 v43; // ecx
  signed __int32 v44; // edx
  volatile signed __int32 v45; // r8d
  int v46; // edi
  int v47; // r12d
  signed __int32 v48; // eax
  unsigned int v49; // ebx
  signed __int32 v50; // eax
  unsigned int v51; // ebx
  int v52; // ebx
  unsigned int v53; // edi
  char v54; // r14
  signed __int32 v55; // ecx
  signed __int32 v56; // edx
  volatile signed __int32 v57; // r8d
  int v58; // esi
  unsigned int v59; // esi
  char v60; // r14
  signed __int32 v61; // ecx
  signed __int32 v62; // edx
  volatile signed __int32 v63; // r8d
  int v64; // edi
  signed __int32 v65; // eax
  unsigned int v66; // edi
  char v67; // r14
  signed __int32 v68; // ecx
  signed __int32 v69; // edx
  volatile signed __int32 v70; // r8d
  int v71; // esi
  unsigned __int8 v72; // bl
  ULONG_PTR result; // rax
  __int64 v74; // [rsp+28h] [rbp-E0h] BYREF
  ULONG_PTR v75; // [rsp+30h] [rbp-D8h]
  __int64 v76; // [rsp+38h] [rbp-D0h]
  __int128 v77; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v78; // [rsp+58h] [rbp-B0h]
  __int128 v79; // [rsp+68h] [rbp-A0h]
  __int128 v80; // [rsp+78h] [rbp-90h]
  __int128 v81; // [rsp+88h] [rbp-80h]
  __int128 v82; // [rsp+98h] [rbp-70h]
  __int128 v83; // [rsp+A8h] [rbp-60h]
  __int128 v84; // [rsp+B8h] [rbp-50h]
  __int128 v85; // [rsp+C8h] [rbp-40h]
  __int128 v86; // [rsp+D8h] [rbp-30h]
  __int128 v87; // [rsp+E8h] [rbp-20h]
  __int128 v88; // [rsp+F8h] [rbp-10h]
  __int64 v89; // [rsp+108h] [rbp+0h]

  v1 = Argument;
  v75 = Argument;
  memset_0(&v77, 0, 0xC8uLL);
  v2 = *(signed __int64 **)(v1 + 8);
  v3 = *(_QWORD **)(v1 + 240);
  v4 = *(_QWORD *)(v1 + 16);
  v5 = *v2;
  v6 = *(_OWORD *)(v1 + 56);
  v77 = *(_OWORD *)(v1 + 40);
  v7 = *(_OWORD *)(v1 + 72);
  v78 = v6;
  v8 = *(_OWORD *)(v1 + 88);
  v79 = v7;
  v9 = *(_OWORD *)(v1 + 104);
  v80 = v8;
  v10 = *(_OWORD *)(v1 + 120);
  v81 = v9;
  v11 = *(_OWORD *)(v1 + 136);
  v82 = v10;
  v83 = v11;
  v84 = *(_OWORD *)(v1 + 152);
  v12 = *(_OWORD *)(v1 + 184);
  v85 = *(_OWORD *)(v1 + 168);
  v13 = *(_OWORD *)(v1 + 200);
  v86 = v12;
  v14 = *(_OWORD *)(v1 + 216);
  v15 = *(_QWORD *)(v1 + 232);
  v87 = v13;
  v88 = v14;
  v89 = v15;
  CurrentIrql = KeGetCurrentIrql();
  v76 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v17 = (volatile signed __int32 *)(v1 + 32);
  v18 = _InterlockedDecrement((volatile signed __int32 *)(v1 + 32));
  v19 = ~v18 & 0x80000000;
  if ( (v18 & 0x3FFFFFFF) != 0 )
  {
    v33 = 0;
    v34 = 0;
    while ( (*v17 & 0x80000000) != v19 )
    {
      if ( (++v33 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v34;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v34 & 7) == 0 )
        {
          v35 = *v17;
          if ( (*v17 & 0x80000000) != v19 )
          {
            v36 = *v17;
            v37 = *v17;
            do
            {
              v38 = v35 | 0x40000000;
              v35 = _InterlockedCompareExchange(v17, v35 | 0x40000000, v36);
              if ( v35 == v37 )
              {
                LODWORD(v74) = v38;
                do
                {
                  KiHaltOnAddress((unsigned __int64)v17, &v74, 4LL);
                  v35 = *v17;
                }
                while ( *v17 == v38 );
              }
              v36 = v35;
              v37 = v35;
            }
            while ( (v35 & 0x80000000) != v19 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v33);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    v39 = _InterlockedDecrement(v17);
    v40 = ~v39 & 0x80000000;
    if ( (v39 & 0x3FFFFFFF) != 0 )
    {
      v41 = 0;
      v42 = 0;
      while ( (*v17 & 0x80000000) != v40 )
      {
        if ( (++v41 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v42;
          if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v42 & 7) == 0 )
          {
            v43 = *v17;
            if ( (*v17 & 0x80000000) != v40 )
            {
              v44 = *v17;
              v45 = *v17;
              do
              {
                v46 = v43 | 0x40000000;
                v43 = _InterlockedCompareExchange(v17, v43 | 0x40000000, v44);
                if ( v43 == v45 )
                {
                  LODWORD(v74) = v46;
                  do
                  {
                    KiHaltOnAddress((unsigned __int64)v17, &v74, 4LL);
                    v43 = *v17;
                  }
                  while ( *v17 == v46 );
                }
                v44 = v43;
                v45 = v43;
              }
              while ( (v43 & 0x80000000) != v40 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v41);
          }
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else if ( (_InterlockedExchange(v17, *((_DWORD *)v17 + 1) | v40) & 0x40000000) != 0 )
    {
      KeWakeAddressAll();
    }
    v24 = (int *)(v75 + 24);
    v23 = *(_DWORD *)(v75 + 24);
  }
  else
  {
    if ( (_InterlockedExchange((volatile __int32 *)(v1 + 32), *(_DWORD *)(v1 + 36) | v19) & 0x40000000) != 0 )
      KeWakeAddressAll();
    if ( v3 )
    {
      v20 = (__m128i *)(48LL * v3[1] - 0x220000000000LL);
      v21 = (const __m128i *)(48LL * *v3 - 0x220000000000LL);
      MiCopyKstack((__int64)v20, (__int64)v21, v3[2], 0);
      MiSwitchKstackPages(v20, v21);
      MiClearPfnReuseFields((__int64)v21);
      v1 = v75;
    }
    v22 = v4 | 0x20;
    if ( ((v5 ^ (v4 | 0x20)) & 0xFFFFFFFFFF000LL) != 0 )
      MiWriteValidPteNewPage(v2, v22, 0LL);
    else
      MiWriteValidPteNewProtection(v2, v22);
    v23 = DWORD1(v78);
    v24 = (int *)(v1 + 24);
    *(_DWORD *)(v1 + 24) = DWORD1(v78);
    v25 = _InterlockedDecrement(v17);
    v26 = ~v25 & 0x80000000;
    if ( (v25 & 0x3FFFFFFF) != 0 )
    {
      v27 = 0;
      v28 = 0;
      while ( (*v17 & 0x80000000) != v26 )
      {
        if ( (++v27 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v28;
          if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v28 & 7) == 0 )
          {
            v29 = *v17;
            if ( (*v17 & 0x80000000) != v26 )
            {
              v30 = *v17;
              v31 = *v17;
              do
              {
                v32 = v29 | 0x40000000;
                v29 = _InterlockedCompareExchange(v17, v29 | 0x40000000, v30);
                if ( v29 == v31 )
                {
                  LODWORD(v74) = v32;
                  do
                  {
                    KiHaltOnAddress((unsigned __int64)v17, &v74, 4LL);
                    v29 = *v17;
                  }
                  while ( *v17 == v32 );
                }
                v30 = v29;
                v31 = v29;
              }
              while ( (v29 & 0x80000000) != v26 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v27);
          }
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else if ( (_InterlockedExchange(v17, *((_DWORD *)v17 + 1) | v26) & 0x40000000) != 0 )
    {
      KeWakeAddressAll();
    }
  }
  DWORD1(v78) = v23;
  MiFlushTbList((__int64)&v77);
  v47 = *v24;
  v48 = _InterlockedDecrement(v17);
  v49 = ~v48 & 0x80000000;
  if ( (v48 & 0x3FFFFFFF) != 0 )
  {
    v59 = 0;
    v60 = 0;
    while ( (*v17 & 0x80000000) != v49 )
    {
      if ( (++v59 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v60;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v60 & 7) == 0 )
        {
          v61 = *v17;
          if ( (*v17 & 0x80000000) != v49 )
          {
            v62 = *v17;
            v63 = *v17;
            do
            {
              v64 = v61 | 0x40000000;
              v61 = _InterlockedCompareExchange(v17, v61 | 0x40000000, v62);
              if ( v61 == v63 )
              {
                LODWORD(v74) = v64;
                do
                {
                  KiHaltOnAddress((unsigned __int64)v17, &v74, 4LL);
                  v61 = *v17;
                }
                while ( *v17 == v64 );
              }
              v62 = v61;
              v63 = v61;
            }
            while ( (v61 & 0x80000000) != v49 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v59);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    v65 = _InterlockedDecrement(v17);
    v51 = ~v65 & 0x80000000;
    if ( (v65 & 0x3FFFFFFF) == 0 )
      goto LABEL_76;
    v66 = 0;
    v67 = 0;
    while ( (*v17 & 0x80000000) != v51 )
    {
      if ( (++v66 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v67;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v67 & 7) == 0 )
        {
          v68 = *v17;
          if ( (*v17 & 0x80000000) != v51 )
          {
            v69 = *v17;
            v70 = *v17;
            do
            {
              v71 = v68 | 0x40000000;
              v68 = _InterlockedCompareExchange(v17, v68 | 0x40000000, v69);
              if ( v68 == v70 )
              {
                LODWORD(v74) = v71;
                do
                {
                  KiHaltOnAddress((unsigned __int64)v17, &v74, 4LL);
                  v68 = *v17;
                }
                while ( *v17 == v71 );
              }
              v69 = v68;
              v70 = v68;
            }
            while ( (v68 & 0x80000000) != v51 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v66);
        }
      }
      else
      {
        _mm_pause();
      }
    }
LABEL_131:
    _InterlockedIncrement(v17 + 1);
    goto LABEL_132;
  }
  if ( (_InterlockedExchange(v17, *((_DWORD *)v17 + 1) | v49) & 0x40000000) != 0 )
    KeWakeAddressAll();
  v50 = _InterlockedDecrement(v17);
  v51 = ~v50 & 0x80000000;
  if ( (v50 & 0x3FFFFFFF) != 0 )
  {
    v53 = 0;
    v54 = 0;
    while ( (*v17 & 0x80000000) != v51 )
    {
      if ( (++v53 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v54;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v54 & 7) == 0 )
        {
          v55 = *v17;
          if ( (*v17 & 0x80000000) != v51 )
          {
            v56 = *v17;
            v57 = *v17;
            do
            {
              v58 = v55 | 0x40000000;
              v55 = _InterlockedCompareExchange(v17, v55 | 0x40000000, v56);
              if ( v55 == v57 )
              {
                LODWORD(v74) = v58;
                do
                {
                  KiHaltOnAddress((unsigned __int64)v17, &v74, 4LL);
                  v55 = *v17;
                }
                while ( *v17 == v58 );
              }
              v56 = v55;
              v57 = v55;
            }
            while ( (v55 & 0x80000000) != v51 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v53);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    goto LABEL_131;
  }
LABEL_76:
  v52 = *((_DWORD *)v17 + 1) | v51;
  *((_DWORD *)v17 + 1) = 1;
  if ( (_InterlockedExchange(v17, v52) & 0x40000000) != 0 )
    KeWakeAddressAll();
LABEL_132:
  DWORD1(v78) = v47 & 0xFFFFFEBD | 0x100;
  MiFlushTbList((__int64)&v77);
  v72 = v76;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v76);
  result = v72;
  __writecr8(v72);
  return result;
}
