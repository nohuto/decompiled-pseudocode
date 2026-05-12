/*
 * XREFs of sub_1400BCC68 @ 0x1400BCC68
 * Callers:
 *     sub_1400BD2A0 @ 0x1400BD2A0 (sub_1400BD2A0.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400BCC68(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // rcx
  struct _IO_WORKITEM *v4; // rcx

  v1 = *(_QWORD *)(a1 + 1656);
  if ( v1 )
  {
    v3 = *(void **)(v1 + 48);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74456152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1656) + 48LL) = 0LL;
    }
    v4 = *(struct _IO_WORKITEM **)(*(_QWORD *)(a1 + 1656) + 40LL);
    if ( v4 )
    {
      IoFreeWorkItem(v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 1656) + 40LL) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1656), 0x74456152u);
    *(_QWORD *)(a1 + 1656) = 0LL;
  }
}
