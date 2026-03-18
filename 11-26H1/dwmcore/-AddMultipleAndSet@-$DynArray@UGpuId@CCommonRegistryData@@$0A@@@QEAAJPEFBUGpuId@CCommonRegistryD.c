/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UGpuId@CCommonRegistryData@@$0A@@@QEAAJPEFBUGpuId@CCommonRegistryData@@I@Z @ 0x18028C75C
 * Callers:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x1801E425C (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CCommonRegistryData::GpuId,0>::AddMultipleAndSet(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v5 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 6, 1, a2);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xC2u, 0LL);
    }
    else
    {
      v7 = *(_QWORD *)a1;
      v8 = 3 * v2;
      *(_DWORD *)(v7 + 2 * v8) = *(_DWORD *)a2;
      *(_WORD *)(v7 + 2 * v8 + 4) = a2[2];
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v6;
}
