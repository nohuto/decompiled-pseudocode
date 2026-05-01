/*
 * XREFs of ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x180116090
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800EBDE0 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1801154B4 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1801162F0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18018E4D0 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802D4E6C (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

char __fastcall wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::operator()(
        __int64 a1,
        void **a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned __int64 *a5,
        unsigned int *a6)
{
  unsigned __int64 v7; // r15
  void *v8; // r13
  unsigned int v9; // r12d
  unsigned __int64 v10; // r14
  _BYTE *v11; // rdi
  char v12; // bl
  unsigned __int64 v14; // rdx
  void *v15[2]; // [rsp+30h] [rbp-48h] BYREF
  void *v16[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v17; // [rsp+A8h] [rbp+30h]

  v7 = *a3;
  v8 = *a4;
  v9 = *a6;
  v17 = *a2;
  v10 = *a5;
  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16) )
    goto LABEL_3;
  v11 = *(_BYTE **)(a1 + 24);
  v12 = 0;
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(
         (wil::details_abi::RawUsageIndex *)v11,
         *a2,
         v7,
         v8,
         v10,
         v9) )
  {
    goto LABEL_3;
  }
  v14 = v10 + v7 + 32;
  if ( *((_QWORD *)v11 + 3) )
  {
    if ( v11[58] )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)(v11 + 24), v14);
  }
  else
  {
    *(_OWORD *)v15 = 0LL;
    *(_OWORD *)v16 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v15, v14 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(
        (wil::details_abi::RawUsageIndex *)v11,
        (_WORD *)v15[0],
        0LL,
        (const char *)((char *)v16[0] - (char *)v15[0]));
      wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(v11 + 48, &v16[1]);
      v11[58] = 1;
    }
    if ( v16[1] )
      MemoryFree(v16[1]);
  }
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(
         (wil::details_abi::RawUsageIndex *)v11,
         v17,
         v7,
         v8,
         v10,
         v9) )
  {
LABEL_3:
    v12 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v12;
}
