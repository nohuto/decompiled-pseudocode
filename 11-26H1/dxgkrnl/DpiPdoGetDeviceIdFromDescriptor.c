/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x14025653C
 * Callers:
 *     DpiPdoAddPdo @ 0x140442608 (DpiPdoAddPdo.c)
 * Callees:
 *     DpiIsValidEdid @ 0x14006D9AC (DpiIsValidEdid.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x14026F244 (-MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall DpiPdoGetDeviceIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int MonitorDescriptorIDs; // esi
  __int64 v5; // r14
  const __m128i *v7; // rcx
  __int64 v8; // rdx
  void *Pool2; // rax
  _OWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1

  v2 = *(_QWORD *)(a1 + 64);
  MonitorDescriptorIDs = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( *(_DWORD *)(v2 + 496) == 1 && !*(_QWORD *)(a2 + 8) )
  {
    MonitorDescriptorIDs = MonitorGetMonitorDescriptorIDs(
                             *(void **)(v5 + 4032),
                             *(_DWORD *)(v2 + 504),
                             (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512));
    if ( MonitorDescriptorIDs >= 0 )
      return 0LL;
  }
  v7 = *(const __m128i **)(a2 + 8);
  if ( v7 && (*(_DWORD *)(v2 + 496) != 1 || DpiIsValidEdid(v7)) )
  {
    v8 = *(unsigned int *)(a2 + 4);
    *(_DWORD *)(v2 + 924) = v8;
    Pool2 = (void *)ExAllocatePool2(256LL, v8, 1953656900LL);
    *(_QWORD *)(v2 + 928) = Pool2;
    if ( Pool2 )
    {
      v10 = *(_OWORD **)(a2 + 8);
      memmove(Pool2, v10, *(unsigned int *)(a2 + 4));
      v11 = *(_DWORD *)(v2 + 496);
      if ( v11 == 1 )
      {
        MonitorGetMonitorDescriptorIDs(
          *(void **)(v5 + 4032),
          *(_DWORD *)(v2 + 504),
          (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512));
      }
      else if ( ((v11 - 2) & 0xFFFFFFFD) != 0 )
      {
        MonitorDescriptorIDs = -1073741823;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3366;
      }
      else
      {
        v12 = 3LL;
        v13 = (_OWORD *)(v2 + 512);
        do
        {
          *v13 = *v10;
          v13[1] = v10[1];
          v13[2] = v10[2];
          v13[3] = v10[3];
          v13[4] = v10[4];
          v13[5] = v10[5];
          v13[6] = v10[6];
          v13 += 8;
          v14 = v10[7];
          v10 += 8;
          *(v13 - 1) = v14;
          --v12;
        }
        while ( v12 );
        *v13 = *v10;
        *((_QWORD *)v13 + 2) = *((_QWORD *)v10 + 2);
      }
    }
    else
    {
      MonitorDescriptorIDs = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 3321;
    }
  }
  else
  {
    memset((void *)(v2 + 512), 0, 0x198uLL);
    MonitorDescriptorIDs = -1073741823;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3297;
  }
  return (unsigned int)MonitorDescriptorIDs;
}
