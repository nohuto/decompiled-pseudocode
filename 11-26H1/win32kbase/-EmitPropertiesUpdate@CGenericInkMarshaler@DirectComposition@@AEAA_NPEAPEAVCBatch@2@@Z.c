/*
 * XREFs of ?EmitPropertiesUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140145CB8
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140145BF0 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitPropertiesUpdate(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v4; // edi
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
    return 1;
  v4 = *((_DWORD *)this + 20) + 12;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, v4, &v6) )
  {
    v5 = (char *)v6;
    *(_DWORD *)v6 = v4;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 1) = 90;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    memmove(v5 + 12, *((const void **)this + 7), *((_QWORD *)this + 10) * *((_QWORD *)this + 11));
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  return 0;
}
