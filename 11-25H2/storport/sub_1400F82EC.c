/*
 * XREFs of sub_1400F82EC @ 0x1400F82EC
 * Callers:
 *     sub_1400CC1F4 @ 0x1400CC1F4 (sub_1400CC1F4.c)
 *     sub_1400E00D0 @ 0x1400E00D0 (sub_1400E00D0.c)
 *     sub_1400E5964 @ 0x1400E5964 (sub_1400E5964.c)
 *     sub_1400FA6EC @ 0x1400FA6EC (sub_1400FA6EC.c)
 *     sub_1400FAAB4 @ 0x1400FAAB4 (sub_1400FAAB4.c)
 * Callees:
 *     sub_1400FAE88 @ 0x1400FAE88 (sub_1400FAE88.c)
 *     sub_1400FAEEC @ 0x1400FAEEC (sub_1400FAEEC.c)
 *     sub_1401106CC @ 0x1401106CC (sub_1401106CC.c)
 *     sub_1401114CC @ 0x1401114CC (sub_1401114CC.c)
 *     sub_140122570 @ 0x140122570 (sub_140122570.c)
 *     sub_14012D540 @ 0x14012D540 (sub_14012D540.c)
 */

void __fastcall sub_1400F82EC(_QWORD *a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  struct _IO_WORKITEM *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v7; // rcx

  sub_1401114CC(*a1);
  sub_1400FAEEC(*a1);
  sub_1400FAE88(*a1);
  sub_1401106CC(*a1);
  v2 = *(void **)(*(_QWORD *)(*a1 + 128LL) + 16LL);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57506152u);
    *(_QWORD *)(*(_QWORD *)(*a1 + 128LL) + 16LL) = 0LL;
  }
  sub_14012D540(*a1);
  v3 = *(_QWORD *)(*a1 + 528LL);
  if ( v3 )
  {
    sub_140122570(*(_QWORD *)(*a1 + 16LL), v3);
    *(_QWORD *)(*a1 + 528LL) = 0LL;
  }
  v4 = *(struct _IO_WORKITEM **)(*a1 + 536LL);
  if ( v4 )
  {
    IoFreeWorkItem(v4);
    *(_QWORD *)(*a1 + 536LL) = 0LL;
  }
  v5 = *(void **)(*a1 + 184LL);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x52436152u);
    *(_QWORD *)(*a1 + 184LL) = 0LL;
  }
  v6 = *(void **)(*a1 + 176LL);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x52436152u);
    *(_QWORD *)(*a1 + 176LL) = 0LL;
  }
  v7 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*a1 + 120LL);
  if ( v7 )
  {
    ExFreeCacheAwareRundownProtection(v7);
    *(_QWORD *)(*a1 + 120LL) = 0LL;
  }
  IoDeleteDevice(*(PDEVICE_OBJECT *)(*a1 + 8LL));
  *a1 = 0LL;
}
