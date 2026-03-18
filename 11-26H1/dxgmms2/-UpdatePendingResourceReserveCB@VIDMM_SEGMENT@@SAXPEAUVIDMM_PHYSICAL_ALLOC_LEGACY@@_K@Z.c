/*
 * XREFs of ?UpdatePendingResourceReserveCB@VIDMM_SEGMENT@@SAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K@Z @ 0x1400B7C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::UpdatePendingResourceReserveCB(struct VIDMM_PHYSICAL_ALLOC_LEGACY *a1, __int64 a2)
{
  __int64 v2; // rax

  *((_QWORD *)a1 + 14) = *((_QWORD *)a1 + 17);
  v2 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 16) = v2;
  *((_QWORD *)a1 + 15) = a2;
  *(_BYTE *)(v2 + 480) = 1;
}
