/*
 * XREFs of ?AllocateStubUnderLock@BamoInputProcessPrincipalOwner@@UEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputProcessStub@@@Z @ 0x1800CBC80
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoInputProcessPrincipalOwner::AllocateStubUnderLock(
        BamoInputProcessPrincipalOwner *this,
        struct BamoInputProcessPrincipal *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct BamoInputProcessStub **a4)
{
  _QWORD *v5; // rbx
  __int64 result; // rax

  v5 = operator new(0x50uLL);
  memset_0(v5, 0, 0x50uLL);
  *v5 = &BamoInputProcessStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v5[1] = &BamoInputProcessStub::`vftable'{for `IInputProcessStub'};
  *((_DWORD *)v5 + 8) = 0;
  v5[5] = 0LL;
  *((_DWORD *)v5 + 6) = 1;
  v5[6] = 0LL;
  v5[7] = 0LL;
  v5[8] = 0LL;
  *((_WORD *)v5 + 38) = 0;
  v5[2] = &BamoImpl::BamoInputProcessStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v5 + 18) = 256;
  *a4 = (struct BamoInputProcessStub *)v5;
  return result;
}
