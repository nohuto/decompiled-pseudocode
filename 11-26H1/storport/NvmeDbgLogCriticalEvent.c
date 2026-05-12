/*
 * XREFs of NvmeDbgLogCriticalEvent @ 0x1400FB97C
 * Callers:
 *     NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400EAA20 (NvmeAdapterNvmeControllerKeepAliveWork.c)
 *     NvmeAdapterNvmeControllerTransportFatalError @ 0x1400EB5C0 (NvmeAdapterNvmeControllerTransportFatalError.c)
 *     NvmeControllerDetectCommandTimeout @ 0x14012B43C (NvmeControllerDetectCommandTimeout.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeDbgLogCriticalEvent(__int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rbx
  unsigned int v13; // edx
  unsigned __int64 v14; // rdi
  signed __int32 v15; // ecx
  _QWORD *v16; // rcx
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( a1 )
  {
    if ( *(_DWORD *)a1 == 1314276178 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 1368) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
      v11 = *(_DWORD *)(v10 + 12);
      v12 = v10 + 64;
      _InterlockedOr(v17, 0);
      if ( v11 )
      {
        if ( v10 != -64 )
        {
          v13 = _InterlockedIncrement((volatile signed __int32 *)v10) % v11;
          v14 = (unsigned __int64)v13 << 6;
          v15 = v13;
          if ( (*(_DWORD *)(a1 + 1336) & 1) != 0 )
            v15 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1408));
          *(_DWORD *)(v14 + v12 + 4) = v15;
          v16 = (_QWORD *)(v14 + v12 + 8);
          *(_WORD *)(v14 + v12) = 3;
          *(_WORD *)(v14 + v12 + 2) = a2;
          if ( (*(_DWORD *)(a1 + 1336) & 2) != 0 )
            KeQuerySystemTimePrecise(v16);
          else
            *v16 = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v14 + v12 + 16) = a3;
          *(_QWORD *)(v14 + v12 + 24) = a4;
          *(_QWORD *)(v14 + v12 + 32) = a5;
          *(_QWORD *)(v14 + v12 + 40) = a6;
        }
      }
    }
  }
}
