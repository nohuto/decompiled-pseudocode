/*
 * XREFs of sub_140055DC8 @ 0x140055DC8
 * Callers:
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140055DC8(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx

  v1 = *(_QWORD **)(a1 + 4960);
  if ( v1 )
  {
    v3 = (void *)v1[14];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x4F506152u);
      v1[14] = 0LL;
      *((_DWORD *)v1 + 26) = 0;
    }
    *(_QWORD *)(a1 + 4960) = 0LL;
    PoFxUnregisterDevice(*v1);
    ExFreePoolWithTag(v1, 0x4F506152u);
  }
}
