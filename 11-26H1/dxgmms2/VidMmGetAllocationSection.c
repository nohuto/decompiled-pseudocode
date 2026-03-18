/*
 * XREFs of VidMmGetAllocationSection @ 0x1400A3B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void *__fastcall VidMmGetAllocationSection(__int64 a1)
{
  void *v1; // rax
  void *v2; // rbx

  v1 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a1 + 216LL) + 112LL))(
                 *(_QWORD *)(**(_QWORD **)a1 + 216LL),
                 *(_QWORD *)(**(_QWORD **)a1 + 224LL));
  v2 = v1;
  if ( v1 )
    ObfReferenceObject(v1);
  return v2;
}
