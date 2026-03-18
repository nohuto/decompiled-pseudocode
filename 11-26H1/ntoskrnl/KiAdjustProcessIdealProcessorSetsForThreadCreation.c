/*
 * XREFs of KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1402018E4
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 * Callees:
 *     ?KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x140201520 (-KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET.c)
 */

__int64 __fastcall KiAdjustProcessIdealProcessorSetsForThreadCreation(unsigned __int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // r9
  __int64 v4; // rbx
  unsigned int v5; // edx
  unsigned __int16 v6; // si
  _KI_PROCESS_CONCURRENCY_COUNT v7; // edi
  unsigned __int16 **v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned __int16 *v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r13
  unsigned __int64 v14; // rdx
  _KI_PROCESS_CONCURRENCY_COUNT v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-28h]
  unsigned __int16 **v19; // [rsp+40h] [rbp-20h]
  struct _GROUP_AFFINITY v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+50h]
  struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS v22; // [rsp+B8h] [rbp+58h] BYREF

  result = (unsigned int)KiCacheAwareScheduling;
  v17 = 0LL;
  v22 = 0LL;
  if ( (KiCacheAwareScheduling & 0x20) != 0 )
  {
    v3 = (_QWORD *)(a1 + 184);
    v4 = *(_QWORD *)(a1 + 184);
    v18 = (_QWORD *)(a1 + 184);
    result = *(unsigned int *)(v4 + 12);
    if ( (result & 1) == 0 )
    {
      v5 = (*(_DWORD *)v4 + 0x40000) ^ (*(_DWORD *)v4 ^ (*(_DWORD *)v4 + 0x40000)) & 0x3FFFF;
      *(_DWORD *)v4 = v5;
      result = v5 >> 18;
      if ( (unsigned int)result > KeMaximumProcessors )
      {
        v5 = (KeMaximumProcessors << 18) + 0x3FFFF;
        *(_DWORD *)v4 = v5;
      }
      if ( *(_DWORD *)(v4 + 4) > v5 || *(_DWORD *)(v4 + 8) < v5 )
      {
        v6 = 0;
        v21 = 0x2003FFFF00000000LL;
        v7.AllFields = 537133055;
        if ( KiActiveGroups )
        {
          v8 = (unsigned __int16 **)(a1 + 80);
          v9 = a1 >> 12;
          v19 = v8;
          do
          {
            if ( v6 >= *(_WORD *)(v4 + 208) )
              v10 = 0LL;
            else
              v10 = *(_QWORD *)(v4 + 8LL * v6 + 216);
            v11 = *v8;
            v12 = *(_DWORD *)v4 >> 18;
            v20 = 0LL;
            v20.Group = v6;
            if ( v6 >= *v11 )
            {
              v14 = 0LL;
              v13 = 4LL * v6;
            }
            else
            {
              v13 = 4LL * v6;
              v14 = *(_QWORD *)&v11[v13 + 4];
            }
            v20.Mask = v14;
            KiSelectIdealProcessorSetForGroup(&v20, *(_WORD *)(*v3 + 2LL * v6 + 80), v12, v9, &v17, &v22);
            v15.AllFields = v21;
            v16 = v17;
            if ( (unsigned int)v21 < v22.Low.AllFields )
              v15.0 = ($8E6286811530A1DBD1D5EF081D4511BD)v22.Low;
            LODWORD(v21) = v15;
            if ( v7.AllFields > v22.High.AllFields )
              v7.0 = ($8E6286811530A1DBD1D5EF081D4511BD)v22.High;
            if ( v10 != v17 )
            {
              *(_QWORD *)(v4 + v13 * 2 + 216) = v17;
              _BitScanForward64(&v16, v16 ^ v10);
              *(_WORD *)(v4 + 2LL * v6 + 16) = v16;
            }
            v3 = v18;
            ++v6;
            v8 = v19;
          }
          while ( v6 < (unsigned __int16)KiActiveGroups );
          HIDWORD(v21) = v7;
        }
        result = v21;
        *(_QWORD *)(v4 + 4) = v21;
      }
    }
  }
  return result;
}
