/*
 * XREFs of MiFreeRetpolineImportInfo @ 0x140AC9D6C
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A08A4 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A7D54 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     VslFreeSecureImageIat @ 0x1404EE068 (VslFreeSecureImageIat.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineImportInfo(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rcx
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rsi
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rax
  int v9; // eax
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+44h] [rbp-24h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  __int64 (__fastcall *v14)(); // [rsp+50h] [rbp-18h]

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 112) )
  {
    v3 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    CurrentThread = KeGetCurrentThread();
    v5 = *(_QWORD *)((*(_QWORD *)(v3 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
    MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5, v6, v7);
    v8 = *(_QWORD *)(v5 + 88);
    if ( v8 )
    {
      v1 = *(void **)(v8 + 16);
      *(_QWORD *)(v8 + 16) = 0LL;
    }
    MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
    if ( (MiFlags & 0x20000) != 0 )
    {
      v9 = VslFreeSecureImageIat(*(_QWORD *)((*(_QWORD *)(v3 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64));
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x1085uLL, v3, v9, 0LL);
    }
    v13 = 128LL;
    v14 = MiWalkImageApplyImportOptimizationToPage;
    v10[1] = stru_140E2D2D0.WaitBlock[2].WaitListEntry.Flink;
    v10[0] = v3;
    v11 = 3;
    v12 = -1;
    MiWalkEntireImage(v10);
  }
  else
  {
    v2 = *(_QWORD *)(MiGetBaseLoaderPortion(a1) + 280);
    if ( !v2 )
      return;
    v1 = *(void **)(v2 + 16);
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
