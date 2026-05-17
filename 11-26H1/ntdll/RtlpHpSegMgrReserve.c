/*
 * XREFs of RtlpHpSegMgrReserve @ 0x18008B664
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x18008B594 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18008B7D0 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpHeapValidateProtection @ 0x18008B8C0 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18008C634 (RtlpHpSegMgrVaCtxInitialize.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rbx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  bool v13; // cf
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned int v17; // edi
  _DWORD *v18; // rax
  __int64 v19; // rax
  _QWORD v21[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v22; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp+20h] BYREF

  v6 = (unsigned int)-*(_DWORD *)a1;
  v23 = v6;
  v21[0] = RtlpHpSegMgrVaCtxAlloc(a1, v6, a2);
  if ( v21[0] )
    goto LABEL_6;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && (unsigned int)v6 < 0x200000 )
    v23 = 0x200000LL;
  v10 = *(_QWORD *)(a1 + 56);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = (unsigned __int8)BYTE1(*(_QWORD *)v10);
  v13 = (*(_DWORD *)(v10 + 20) & 0x40000000) != 0;
  v22 = *(_OWORD *)(a1 + 40);
  v14 = RtlpHpHeapValidateProtection(v10, v13 ? 64 : 4, v12, v11);
  v15 = RtlpHpAllocVA((unsigned int)v21, (unsigned int)&v23, v23, 0x2000, v14, (__int64)&v22);
  v16 = v23;
  v17 = v15;
  if ( v15 < 0 )
  {
    v19 = v21[0];
    goto LABEL_8;
  }
  if ( v6 < v23 )
  {
    RtlpHpSegMgrVaCtxInitialize(v23, v21[0], (unsigned int)v6, (unsigned int)v23);
LABEL_6:
    v16 = v23;
  }
  v18 = a5;
  *a4 = v6;
  *v18 = v16;
  *a3 = v21[0];
  v19 = 0LL;
  v17 = 0;
LABEL_8:
  if ( v19 )
  {
    v21[0] = (v19 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v23 = v19 + v16 - v21[0];
    if ( v23 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801C7908, v21, &v23, v9);
      if ( (RtlpHpHeapFeatures & 0x10) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v23, v21[0], 0LL);
    }
  }
  return v17;
}
