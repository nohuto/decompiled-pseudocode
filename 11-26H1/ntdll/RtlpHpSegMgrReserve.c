/*
 * XREFs of RtlpHpSegMgrReserve @ 0x18006EA9C
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x18006E9CC (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18006EC08 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpHeapValidateProtection @ 0x18006ED00 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 *     RtlpHpTlLogVAChange @ 0x18006F198 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18006FA70 (RtlpHpSegMgrVaCtxInitialize.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, unsigned int a2, PVOID *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rbx
  void *v9; // rcx
  ULONG v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  _DWORD *v14; // rax
  _BYTE *v15; // rax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  v6 = (unsigned int)-*(_DWORD *)a1;
  v19 = v6;
  BaseAddress[0] = (PVOID)RtlpHpSegMgrVaCtxAlloc(a1, v6, a2);
  if ( BaseAddress[0] )
    goto LABEL_6;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && (unsigned int)v6 < 0x200000 )
    v19 = 0x200000LL;
  v9 = *(void **)(a1 + 56);
  *(_OWORD *)RegionSize = *(_OWORD *)(a1 + 40);
  v10 = RtlpHpHeapValidateProtection(v9);
  v11 = RtlpHpAllocVA(BaseAddress, v10, (ULONG_PTR)RegionSize);
  v12 = v19;
  v13 = v11;
  if ( v11 < 0 )
  {
    v15 = BaseAddress[0];
    goto LABEL_8;
  }
  if ( v6 < v19 )
  {
    RtlpHpSegMgrVaCtxInitialize(v19, BaseAddress[0], (unsigned int)v6, (unsigned int)v19);
LABEL_6:
    v12 = v19;
  }
  v14 = a5;
  *a4 = v6;
  *v14 = v12;
  *a3 = BaseAddress[0];
  v15 = 0LL;
  v13 = 0;
LABEL_8:
  if ( v15 )
  {
    BaseAddress[0] = (PVOID)((unsigned __int64)(v15 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v19 = &v15[v12] - (char *)BaseAddress[0];
    if ( v19 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801C6958, BaseAddress, &v19);
      if ( (RtlpHpHeapFeatures & 0x10) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v19, BaseAddress[0], 0LL);
    }
  }
  return v13;
}
