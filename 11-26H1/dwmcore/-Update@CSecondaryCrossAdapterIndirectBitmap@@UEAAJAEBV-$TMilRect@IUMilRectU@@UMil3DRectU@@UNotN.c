/*
 * XREFs of ?Update@CSecondaryCrossAdapterIndirectBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802B05F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E4068 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x180105534 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     McTemplateU0qqqqxx_EventWriteTransfer @ 0x1802B0700 (McTemplateU0qqqqxx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryCrossAdapterIndirectBitmap::Update(_QWORD *a1, int *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64, __int64 *); // rax
  int v10; // edx
  int v11; // ecx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  CD3DDevice::CopySubresourceRegion(
    (*(_QWORD *)(a1[5] + 24LL) - 16LL) & -(__int64)(*(_QWORD *)(a1[5] + 24LL) != 0LL),
    a1[41],
    0,
    a2,
    a1[13],
    0,
    *a2,
    a2[1],
    0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v6 = *(_QWORD *)(a1[5] + 24LL);
    v7 = v6 + 928;
    if ( !v6 )
      v7 = 944LL;
    v8 = *(_QWORD *)v7;
    v9 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 88LL);
    v13 = 0LL;
    v9(a3, &v13);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qqqqxx_EventWriteTransfer(v11, v10, *a2, a2[1], a2[2], a2[3], v13, v8);
  }
  CSecondaryBitmap::AddValidRect((__int64)(a1 + 30), a2);
  return 0LL;
}
