/*
 * XREFs of sub_140178190 @ 0x140178190
 * Callers:
 *     sub_140041560 @ 0x140041560 (sub_140041560.c)
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 * Callees:
 *     sub_140033E20 @ 0x140033E20 (sub_140033E20.c)
 *     sub_14006B424 @ 0x14006B424 (sub_14006B424.c)
 *     sub_14006C3FC @ 0x14006C3FC (sub_14006C3FC.c)
 *     sub_14006FB14 @ 0x14006FB14 (sub_14006FB14.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_1401839D4 @ 0x1401839D4 (sub_1401839D4.c)
 */

void __fastcall sub_140178190(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  int v6; // eax
  void (__fastcall *v7)(_QWORD); // rax
  void *v8; // rcx

  if ( *(_DWORD *)a1 )
  {
    v2 = (__int64 *)(a1 + 96);
    while ( 1 )
    {
      v3 = (__int64 *)*v2;
      if ( (__int64 *)*v2 == v2 )
        break;
      if ( (__int64 *)v3[1] != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v5 = v3 - 26;
      *(_QWORD *)(v4 + 8) = v2;
      v6 = *((_DWORD *)v3 - 52);
      if ( v6 == 176 || v6 == 208 && (v5[23] & 1) != 0 )
      {
        v7 = (void (__fastcall *)(_QWORD))v5[21];
        if ( v7 )
          v7(*(_QWORD *)(a1 + 8));
      }
      sub_14006C3FC(v4, v5);
    }
    *(_DWORD *)a1 = 0;
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 40));
    if ( *(_QWORD *)(a1 + 24) )
    {
      sub_14006FB14(*(_QWORD *)(a1 + 16), a1);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v8 = *(void **)(a1 + 16);
    if ( v8 )
    {
      sub_140033E20(v8);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    if ( _InterlockedExchangeAdd(&dword_140168720, 0xFFFFFFFF) == 1 )
    {
      sub_14006B424();
      sub_1401839D4();
    }
  }
}
