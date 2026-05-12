/*
 * XREFs of sub_1401B2A00 @ 0x1401B2A00
 * Callers:
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140016930 @ 0x140016930 (sub_140016930.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_14003B24C @ 0x14003B24C (sub_14003B24C.c)
 *     sub_14003E714 @ 0x14003E714 (sub_14003E714.c)
 *     sub_14003FBDC @ 0x14003FBDC (sub_14003FBDC.c)
 *     sub_1400425B8 @ 0x1400425B8 (sub_1400425B8.c)
 *     sub_140045120 @ 0x140045120 (sub_140045120.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055DC8 @ 0x140055DC8 (sub_140055DC8.c)
 *     sub_140055F88 @ 0x140055F88 (sub_140055F88.c)
 *     sub_1400566F8 @ 0x1400566F8 (sub_1400566F8.c)
 *     sub_140070678 @ 0x140070678 (sub_140070678.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_1401B2A00(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  struct _IO_WORKITEM *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int i; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(a1 + 376) && (*(_BYTE *)(a1 + 108) & 0x40) != 0 )
    sub_140016AA8(*(_QWORD *)(a1 + 8), v3, 0LL, 0LL, 0);
  v4 = *(struct _IO_WORKITEM **)(a1 + 5680);
  if ( v4 )
  {
    IoFreeWorkItem(v4);
    *(_QWORD *)(a1 + 5680) = 0LL;
  }
  sub_140055DC8(a1);
  v5 = *(void **)(a1 + 5368);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x57506152u);
    *(_QWORD *)(a1 + 5368) = 0LL;
  }
  v6 = *(void **)(a1 + 5376);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x504F6152u);
    *(_QWORD *)(a1 + 5376) = 0LL;
  }
  v7 = *(void **)(a1 + 5704);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x504E6152u);
    *(_QWORD *)(a1 + 5704) = 0LL;
  }
  if ( (unsigned int)sub_1400566F8() )
  {
    v8 = *(_QWORD *)(a1 + 6216);
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD))(v8 + 24))(*(_QWORD *)(v8 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 6216), 0x4D4C6152u);
      *(_QWORD *)(a1 + 6216) = 0LL;
    }
  }
  sub_140045120(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  sub_1400425B8(a1);
  v9 = 0;
  while ( *(_DWORD *)(a1 + 4888) || *(_DWORD *)(a1 + 4128) )
  {
    if ( v9 < 0x32
      && off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 2) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      sub_140055930((__int64)off_140168120->AttachedDevice, 0x1Au, (__int64)&unk_14014A2D8);
    }
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( ++v9 >= 0x258 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 2) != 0
        && BYTE1(off_140168120->Timer) >= 2u )
      {
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x1Bu, (__int64)&unk_14014A2D8);
      }
      break;
    }
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 968); ++i )
    sub_140016930(*(_QWORD *)(a1 + 960) + 320LL * i, *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4370));
  *(_DWORD *)(a1 + 968) = 0;
  sub_140055F88(a1);
  sub_14003FBDC(a1);
  sub_14003E714((void **)(a1 + 952));
  sub_14003B24C(a1, 0LL);
  v11 = *(_QWORD *)(a1 + 6048);
  if ( v11 )
  {
    sub_140070678(v11);
    ExFreePoolWithTag(**(PVOID **)(a1 + 6048), 0x57526152u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 6048), 0x57526152u);
    *(_QWORD *)(a1 + 6048) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 120);
  if ( v12 )
  {
    sub_140016754(a1, v12);
    *(_DWORD *)(a1 + 128) &= ~2u;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
}
