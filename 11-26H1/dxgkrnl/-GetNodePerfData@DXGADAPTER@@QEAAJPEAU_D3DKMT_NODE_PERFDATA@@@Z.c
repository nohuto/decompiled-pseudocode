/*
 * XREFs of ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1402BFE58
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1402C12E8 (DxgkQueryStatisticsInternal.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     McTemplateK0pqqxxxqqqx_EtwWriteTransfer @ 0x14005B584 (McTemplateK0pqqxxxqqqx_EtwWriteTransfer.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::GetNodePerfData(DXGADAPTER *this, struct _D3DKMT_NODE_PERFDATA *a2)
{
  __int64 PhysicalAdapterIndex; // r15
  __int64 NodeOrdinal; // rcx
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rdi
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r15d
  bool v16; // zf
  __int64 result; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-19h] BYREF
  __int64 v19; // [rsp+78h] [rbp-11h]
  struct _DXGKARG_QUERYADAPTERINFO v20; // [rsp+80h] [rbp-9h] BYREF
  int v21; // [rsp+F8h] [rbp+6Fh]
  int v22; // [rsp+100h] [rbp+77h] BYREF
  int v23; // [rsp+108h] [rbp+7Fh]

  if ( !a2
    || (PhysicalAdapterIndex = a2->PhysicalAdapterIndex,
        v23 = PhysicalAdapterIndex,
        (unsigned int)PhysicalAdapterIndex >= *((_DWORD *)this + 74)) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 11972;
    return 3221225485LL;
  }
  NodeOrdinal = a2->NodeOrdinal;
  v6 = *((_QWORD *)this + 379);
  v7 = 352 * PhysicalAdapterIndex;
  v21 = NodeOrdinal;
  if ( (unsigned int)NodeOrdinal >= *(unsigned __int16 *)(352 * PhysicalAdapterIndex + v6) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 11982;
    return 3221225485LL;
  }
  v8 = *(_QWORD *)(v7 + v6 + 104);
  if ( v8 && *(_QWORD *)(v7 + v6 + 112) )
  {
    v19 = a2->NodeOrdinal;
    v9 = (_QWORD *)(v8 + 44 * NodeOrdinal);
    PerformanceFrequency.QuadPart = 0LL;
    v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v11 = v10;
    if ( bTracingEnabled
      || *((_DWORD *)this + 40) != 1
      && 1000 * (v10.QuadPart - *(_QWORD *)(*(_QWORD *)(v7 + v6 + 112) + 8 * v19)) / PerformanceFrequency.QuadPart >= 450 )
    {
      *(_QWORD *)&v20.Type = 24LL;
      v22 = v21 | ((_DWORD)PhysicalAdapterIndex << 16);
      v20.pInputData = &v22;
      *(_QWORD *)&v20.InputDataSize = 4LL;
      *(_QWORD *)&v20.Flags.0 = 0LL;
      HIDWORD(v20.hKmdProcessHandle) = 0;
      v20.pOutputData = v9;
      v20.OutputDataSize = 44;
      v12 = DXGADAPTER::DdiQueryAdapterInfo(this, &v20);
      v15 = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -1073741637 )
        {
          WdLogSingleEntry2(3LL, this, v12);
          WdLogGlobalForLineNumber = 12026;
        }
        return v15;
      }
      v16 = bTracingEnabled == 0;
      *(LARGE_INTEGER *)(*(_QWORD *)(v7 + v6 + 112) + 8 * v19) = v11;
      if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqqxxxqqqx_EtwWriteTransfer(
          *(_QWORD *)((char *)v9 + 36),
          v13,
          v14,
          this,
          v21,
          v23,
          *v9,
          v9[1],
          v9[2],
          *((_DWORD *)v9 + 6),
          *((_DWORD *)v9 + 7),
          *((_DWORD *)v9 + 8),
          *(_QWORD *)((char *)v9 + 36));
    }
    else
    {
      v15 = 0;
    }
    a2->Frequency = *v9;
    a2->MaxFrequency = v9[1];
    a2->MaxFrequencyOC = v9[2];
    a2->Voltage = *((_DWORD *)v9 + 6);
    a2->VoltageMax = *((_DWORD *)v9 + 7);
    a2->VoltageMaxOC = *((_DWORD *)v9 + 8);
    a2->MaxTransitionLatency = *(_QWORD *)((char *)v9 + 36);
    return v15;
  }
  WdLogSingleEntry1(3LL);
  result = 3221225659LL;
  WdLogGlobalForLineNumber = 11989;
  return result;
}
