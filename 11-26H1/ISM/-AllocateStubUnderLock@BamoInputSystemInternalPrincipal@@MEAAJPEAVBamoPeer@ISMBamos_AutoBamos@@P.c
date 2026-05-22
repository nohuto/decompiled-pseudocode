/*
 * XREFs of ?AllocateStubUnderLock@BamoInputSystemInternalPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputSystemInternalStub@@@Z @ 0x180131EB0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoInputSystemInternalPrincipal::AllocateStubUnderLock(
        BamoInputSystemInternalPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoInputSystemInternalStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoInputSystemInternalStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoInputSystemInternalStub::`vftable'{for `IInputSystemInternalStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoInputSystemInternalStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoInputSystemInternalStub *)v4;
  return result;
}
