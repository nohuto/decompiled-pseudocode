/*
 * XREFs of MiHotAddBootDeferredDescriptorsDiscardable @ 0x140CFAF3C
 * Callers:
 *     MiHotAddBootDeferredDescriptors @ 0x1406EC070 (MiHotAddBootDeferredDescriptors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiHotAddBootDescriptor @ 0x140CFB1E0 (MiHotAddBootDescriptor.c)
 *     MxExtractUnusedRegions @ 0x140CFCB98 (MxExtractUnusedRegions.c)
 */

LARGE_INTEGER MiHotAddBootDeferredDescriptorsDiscardable()
{
  LARGE_INTEGER result; // rax
  __int64 *v1; // r15
  __int64 v2; // r12
  __int64 i; // r13
  LARGE_INTEGER v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 j; // rdi
  __int64 *v12; // rsi
  __int64 v13; // r14
  __int64 *v14; // rdi
  _OWORD *v15; // rdi
  __int64 v16; // rdx
  LARGE_INTEGER v17; // rcx
  __int128 v18; // xmm1
  bool v19; // zf
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h]
  _OWORD *v22; // [rsp+48h] [rbp-C0h]
  __int64 LowPart; // [rsp+50h] [rbp-B8h]
  _DWORD v24[100]; // [rsp+58h] [rbp-B0h] BYREF

  KeWaitForSingleObject(&unk_140E3C200, Executive, 0, 0, 0LL);
  result.LowPart = 64;
  if ( (unsigned __int16)KeNumberNodes > 0x40u || (result.QuadPart = (unsigned __int16)KeNumberNodes, KeNumberNodes) )
  {
    v21 = 0LL;
    v22 = &MxDescriptorTimings;
    v1 = qword_141000800;
    LowPart = result.LowPart;
    while ( 1 )
    {
      v2 = 0LL;
      PerformanceFrequency.QuadPart = 0LL;
      i = 0LL;
      v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( PerformanceFrequency.QuadPart != 10000000 )
        v4.QuadPart = 10000000 * v4.QuadPart / PerformanceFrequency.QuadPart;
      if ( v1[22] )
      {
        v24[1] = 0;
        memset_0(v24, 0, 0x184uLL);
        MxExtractUnusedRegions(v1 - 2, v24);
        v5 = 0LL;
        for ( i = v24[0]; (unsigned int)v5 < v24[0]; v5 = (unsigned int)(v5 + 1) )
        {
          v2 += *(_QWORD *)&v24[12 * v5 + 12];
          MiHotAddBootDescriptor(&v24[12 * v5 + 2]);
        }
      }
      v6 = *(v1 - 1);
      if ( (v6 & 1) == 0 )
        break;
      if ( v6 != 1 )
      {
        v7 = (_QWORD *)(v6 ^ ((unsigned __int64)(v1 - 2) | 1));
        goto LABEL_13;
      }
LABEL_23:
      v12 = v1;
      v13 = 2LL;
      do
      {
        v14 = (__int64 *)*v12;
        while ( v14 != v12 )
        {
          v2 += v14[5];
          MiHotAddBootDescriptor(v14);
          v14 = (__int64 *)*v14;
          ++i;
        }
        v12 += 4;
        --v13;
      }
      while ( v13 );
      PerformanceFrequency.QuadPart = 0LL;
      result = KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( PerformanceFrequency.QuadPart != 10000000 )
        result.QuadPart = 10000000 * result.QuadPart / PerformanceFrequency.QuadPart;
      v15 = v22;
      v16 = *(_QWORD *)(v21 + qword_140E2D838 + 376);
      v17 = v4;
      if ( result.QuadPart >= (unsigned __int64)v4.QuadPart )
        v17 = result;
      v1 += 250;
      v21 += 384LL;
      *(_QWORD *)(v16 + 920) = v17.QuadPart - v4.QuadPart;
      *(LARGE_INTEGER *)(v16 + 912) = v4;
      *(_QWORD *)(v16 + 928) = i;
      *(_QWORD *)(v16 + 936) = v2;
      *(_OWORD *)(v16 + 880) = *v15;
      v18 = v15[1];
      v19 = LowPart-- == 1;
      *(_OWORD *)(v16 + 896) = v18;
      v22 = v15 + 2;
      if ( v19 )
        return result;
    }
    v7 = (_QWORD *)*(v1 - 1);
LABEL_13:
    if ( v7 )
    {
      do
      {
        v8 = v7[1];
        v9 = v7;
        if ( v8 )
        {
          v10 = *(_QWORD **)v8;
          if ( *(_QWORD *)v8 )
          {
            do
            {
              v8 = (unsigned __int64)v10;
              v10 = (_QWORD *)*v10;
            }
            while ( v10 );
          }
        }
        else
        {
          for ( j = v7[2]; ; j = *(_QWORD *)(v8 + 16) )
          {
            v8 = j & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v8 || *(_QWORD **)v8 == v9 )
              break;
            v9 = (_QWORD *)v8;
          }
        }
        v2 += v7[5];
        MiHotAddBootDescriptor(v7);
        ++i;
        v7 = (_QWORD *)v8;
      }
      while ( v8 );
    }
    goto LABEL_23;
  }
  return result;
}
