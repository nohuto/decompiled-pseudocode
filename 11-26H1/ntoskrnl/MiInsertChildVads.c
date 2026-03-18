/*
 * XREFs of MiInsertChildVads @ 0x140B2090C
 * Callers:
 *     MiAllocateChildVads @ 0x140961AD0 (MiAllocateChildVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiUpControlAreaRefs @ 0x1404DE558 (MiUpControlAreaRefs.c)
 *     MiCommitPageTableRangesForVad @ 0x14052B41C (MiCommitPageTableRangesForVad.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MiReferenceExtendInfo @ 0x14086AF30 (MiReferenceExtendInfo.c)
 *     MiDeletePartialCloneVads @ 0x1409619E4 (MiDeletePartialCloneVads.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, _QWORD *a2)
{
  int inserted; // ebp
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  void *v14; // rcx
  _OWORD v16[3]; // [rsp+20h] [rbp-58h] BYREF

  inserted = 0;
  memset(v16, 0, sizeof(v16));
  KiStackAttachProcess(a1, 0, (__int64)v16);
  while ( 1 )
  {
    v5 = a2;
    if ( !a2 )
      break;
    v8 = MiReadVadFlags((__int64)a2) & 0x80000;
    if ( !v8 )
    {
      inserted = MiUpControlAreaRefs(v7, 1);
      if ( inserted < 0 )
        goto LABEL_16;
    }
    inserted = MiCommitPageTableRangesForVad((__int64)a2, v6, v9, v10);
    if ( inserted < 0 || (inserted = MiInsertVadCharges((__int64)a2, (ULONG_PTR)a1), inserted < 0) )
    {
      if ( !v8 )
        MiUpControlAreaRefs((__int64)a2, 0);
LABEL_16:
      MiDeletePartialCloneVads(a2);
      break;
    }
    a2 = (_QWORD *)*a2;
    if ( !v8 )
    {
      v14 = (void *)v5[17];
      if ( v14 )
        ObfReferenceObjectWithTag(v14, 0x63536D4Du);
      if ( (__int64)v5[16] < 0 )
        MiReferenceExtendInfo((__int64)v5, v11, v12, v13);
    }
    v5[2] = -2LL;
    MiInsertVad((ULONG_PTR)v5, (__int64)a1, 0);
  }
  KiUnstackDetachProcess((__int64)v16, 0);
  return (unsigned int)inserted;
}
