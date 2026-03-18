/*
 * XREFs of ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1402BFC94
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1402C12E8 (DxgkQueryStatisticsInternal.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::GetAdapterPerfData(DXGADAPTER *this, struct _D3DKMT_ADAPTER_PERFDATA *a2)
{
  __int64 PhysicalAdapterIndex; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  _QWORD *v9; // r12
  int v10; // eax
  unsigned int v11; // edi
  __int64 result; // rax
  struct _DXGKARG_QUERYADAPTERINFO v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+98h] [rbp+48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+50h] BYREF

  if ( a2 )
  {
    PhysicalAdapterIndex = a2->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 74) )
    {
      v5 = *((_QWORD *)this + 379);
      v6 = 352 * PhysicalAdapterIndex;
      PerformanceFrequency.QuadPart = 0LL;
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v8 = v7;
      if ( *((_DWORD *)this + 40) == 1
        || 1000 * (v7.QuadPart - *(_QWORD *)(v6 + v5 + 176)) / PerformanceFrequency.QuadPart < 450 )
      {
        v11 = 0;
        v9 = (_QWORD *)(v6 + v5 + 120);
      }
      else
      {
        *(_QWORD *)&v13.Flags.0 = 0LL;
        HIDWORD(v13.hKmdProcessHandle) = 0;
        v14 = PhysicalAdapterIndex;
        v9 = (_QWORD *)(v6 + v5 + 120);
        *(_QWORD *)&v13.Type = 25LL;
        v13.pOutputData = v9;
        *(_QWORD *)&v13.InputDataSize = 4LL;
        v13.pInputData = &v14;
        v13.OutputDataSize = 53;
        v10 = DXGADAPTER::DdiQueryAdapterInfo(this, &v13);
        v11 = v10;
        if ( v10 < 0 )
        {
          if ( v10 != -1073741637 )
          {
            WdLogSingleEntry2(3LL, this, v10);
            WdLogGlobalForLineNumber = 12088;
          }
          return v11;
        }
        *(LARGE_INTEGER *)(v6 + v5 + 176) = v8;
      }
      a2->MemoryFrequency = *v9;
      a2->MaxMemoryFrequency = *(_QWORD *)(v6 + v5 + 128);
      a2->MaxMemoryFrequencyOC = *(_QWORD *)(v6 + v5 + 136);
      a2->MemoryBandwidth = *(_QWORD *)(v6 + v5 + 144);
      a2->PCIEBandwidth = *(_QWORD *)(v6 + v5 + 152);
      a2->FanRPM = *(_DWORD *)(v6 + v5 + 160);
      a2->Power = *(_DWORD *)(v6 + v5 + 164);
      a2->Temperature = *(_DWORD *)(v6 + v5 + 168);
      a2->PowerStateOverride = *(_BYTE *)(v6 + v5 + 172);
      return v11;
    }
  }
  WdLogSingleEntry1(3LL);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 12054;
  return result;
}
