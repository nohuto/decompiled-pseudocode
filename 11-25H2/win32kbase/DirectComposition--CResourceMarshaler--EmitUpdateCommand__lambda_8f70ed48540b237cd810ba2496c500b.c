/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f70ed48540b237cd810ba2496c500b5___ @ 0x140238FF4
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_8f70ed48540b237cd810ba2496c500b5___ @ 0x1402390AC (DirectComposition--CResourceMarshaler--EmitUpdateCommandToClearFlag__lambda_8f70ed48540b237cd810.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f70ed48540b237cd810ba2496c500b5___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  char result; // al
  _DWORD *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, (void **)&v8) )
    return 0;
  v5 = v8;
  *v8 = 68;
  v6 = v5 + 1;
  memset(v5 + 1, 0, 0x40uLL);
  *v6 = 113;
  v6[1] = *(_DWORD *)(a1 + 32);
  *((_QWORD *)v6 + 1) = *(_QWORD *)(*(_QWORD *)a3 + 72LL);
  *((_OWORD *)v6 + 1) = *(_OWORD *)(*(_QWORD *)a3 + 96LL);
  v6[8] = *(_DWORD *)(*(_QWORD *)a3 + 112LL);
  v6[9] = *(_DWORD *)(*(_QWORD *)a3 + 116LL);
  *(_OWORD *)(v6 + 10) = *(_OWORD *)(*(_QWORD *)a3 + 120LL);
  result = 1;
  v6[14] = *(_DWORD *)(*(_QWORD *)a3 + 144LL);
  return result;
}
