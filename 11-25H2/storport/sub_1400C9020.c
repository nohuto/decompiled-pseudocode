/*
 * XREFs of sub_1400C9020 @ 0x1400C9020
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 *     sub_140191D68 @ 0x140191D68 (sub_140191D68.c)
 * Callees:
 *     sub_14003CC04 @ 0x14003CC04 (sub_14003CC04.c)
 *     sub_140055690 @ 0x140055690 (sub_140055690.c)
 *     sub_140055804 @ 0x140055804 (sub_140055804.c)
 *     sub_1400D104C @ 0x1400D104C (sub_1400D104C.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_140128C2C @ 0x140128C2C (sub_140128C2C.c)
 *     sub_1401782E0 @ 0x1401782E0 (sub_1401782E0.c)
 *     sub_140178334 @ 0x140178334 (sub_140178334.c)
 *     sub_14017BF24 @ 0x14017BF24 (sub_14017BF24.c)
 *     sub_1401A8ACC @ 0x1401A8ACC (sub_1401A8ACC.c)
 *     sub_1401B0E68 @ 0x1401B0E68 (sub_1401B0E68.c)
 */

void __fastcall sub_1400C9020(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  struct _IO_WORKITEM *v5; // rcx
  unsigned __int64 v6; // rdx
  void *v7; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rax
  void *v13; // rcx
  _QWORD *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 592) )
  {
    sub_1400D104C();
    ExDeleteResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 592) + 24LL));
    ExFreePoolWithTag(*(PVOID *)(a1 + 592), 0x464E6152u);
    *(_QWORD *)(a1 + 592) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(*(_QWORD *)(a1 + 160) + 336LL));
  sub_140128C2C(a1);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 && *(_QWORD *)(a1 + 1136) )
  {
    sub_1400DEFC4(a1 + 1136);
  }
  else if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
  {
    if ( *(_BYTE *)(a1 + 1280) )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1176), 1u);
      v2 = (_QWORD **)(a1 + 1288);
      while ( 1 )
      {
        v3 = *v2;
        if ( *v2 == v2 )
          break;
        if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
          __fastfail(3u);
        *v2 = v4;
        v4[1] = v2;
        --*(_DWORD *)(a1 + 1304);
        v14 = v3 - 14;
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v3[55]);
        sub_1400DEFC4(&v14);
      }
      ExReleaseResourceLite((PERESOURCE)(a1 + 1176));
      KeLeaveCriticalRegion();
      ExDeleteResourceLite((PERESOURCE)(a1 + 1176));
      *(_BYTE *)(a1 + 1280) = 0;
    }
    v5 = *(struct _IO_WORKITEM **)(a1 + 1312);
    if ( v5 )
    {
      IoFreeWorkItem(v5);
      *(_QWORD *)(a1 + 1312) = 0LL;
    }
  }
  sub_140055690(a1 + 904);
  *(_DWORD *)(a1 + 960) = 0;
  v6 = (unsigned __int64)*(unsigned int *)(a1 + 144) >> 12;
  LOBYTE(v6) = (*(_DWORD *)(a1 + 144) & 0x1000LL) == 0;
  sub_1401B0E68(a1 + 168, v6);
  if ( *(_DWORD *)(a1 + 1336) )
    sub_14017BF24(a1 + 1144, a1 + 1320);
  sub_14003CC04((union _SLIST_HEADER *)(a1 + 608));
  sub_14003CC04((union _SLIST_HEADER *)(a1 + 736));
  if ( *(_QWORD *)(a1 + 896) )
  {
    sub_1401A8ACC();
    *(_QWORD *)(a1 + 896) = 0LL;
  }
  v7 = *(void **)(a1 + 1000);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x52446152u);
    *(_QWORD *)(a1 + 1000) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 864));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 880));
  sub_140055804((int *)a1);
  v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 152);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v8 )
  {
    ExFreeCacheAwareRundownProtection(v8);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v9 = *(void **)(a1 + 1024);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x54456152u);
    *(_QWORD *)(a1 + 1024) = 0LL;
  }
  v10 = *(void **)(a1 + 48);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x53446152u);
  v11 = *(void **)(a1 + 576);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x564E6152u);
    *(_QWORD *)(a1 + 576) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 584);
  if ( v12 )
  {
    v13 = *(void **)(v12 + 128);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0x72446152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 584) + 128LL) = 0LL;
    }
    sub_1401782E0(*(_QWORD *)(a1 + 584) + 88LL);
    sub_140178334(*(_QWORD *)(a1 + 584) + 16LL);
    ExFreePoolWithTag(*(PVOID *)(a1 + 584), 0x564E6152u);
    *(_QWORD *)(a1 + 584) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
