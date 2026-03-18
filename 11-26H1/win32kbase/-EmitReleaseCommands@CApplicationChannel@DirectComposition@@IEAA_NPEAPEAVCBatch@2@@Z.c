/*
 * XREFs of ?EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AF920
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitReleaseCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v4; // rbx
  char result; // al
  _DWORD *v6; // rcx
  int v7; // ecx
  unsigned __int64 v8; // rdx
  size_t v9; // r8
  _DWORD *Src; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v4 = *((_QWORD *)this + 60);
    if ( !v4 )
      return 1;
    *((_QWORD *)this + 60) = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 8) = 0LL;
    Src = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, (void **)&Src) )
      break;
    v6 = Src;
    *Src = 12;
    *(_QWORD *)(v6 + 1) = 0LL;
    v6[1] = 38;
    v6[2] = *(_DWORD *)(v4 + 32);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4) )
      ++*((_DWORD *)*a2 + 29);
    v7 = *(_DWORD *)(v4 + 32);
    v8 = (unsigned int)(v7 - 1);
    if ( v7 )
    {
      if ( v8 < *((_QWORD *)this + 18) )
      {
        v9 = *((_QWORD *)this + 19);
        Src = 0LL;
        memmove((void *)(*((_QWORD *)this + 15) + v8 * v9), &Src, v9);
        --*((_QWORD *)this + 20);
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 88LL))(v4, 1LL);
  }
  *(_QWORD *)(v4 + 8) = *((_QWORD *)this + 60);
  result = 0;
  *((_QWORD *)this + 60) = v4;
  return result;
}
