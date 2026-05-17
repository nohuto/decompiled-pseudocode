/*
 * XREFs of RtlpHpStackTraceSerializeRemote @ 0x18014FE10
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1801223E0 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpStackTraceSerializeRemote(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  signed __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  signed __int64 v10; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v11[3]; // [rsp+60h] [rbp-29h] BYREF
  int v12; // [rsp+78h] [rbp-11h]
  unsigned __int64 v13; // [rsp+80h] [rbp-9h]
  char v14; // [rsp+B8h] [rbp+2Fh]
  __int64 v15; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+6Fh] BYREF
  signed __int64 v17; // [rsp+100h] [rbp+77h] BYREF
  __int64 v18; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = 0x10000LL;
  v18 = 0LL;
  v17 = 0x10000LL;
  v10 = 0LL;
  Handle = 0LL;
  v15 = 0LL;
  while ( 1 )
  {
    memset_thunk_772440563353939046(v11, 0, 0x60uLL);
    if ( *(_BYTE *)(a1 + 32) == 2 )
    {
      v3 = NtCreateSection(&Handle, 983071LL, 0LL, &v17, 4, 0x8000000, 0LL);
      if ( v3 < 0 )
        goto LABEL_22;
      v11[0] = Handle;
      v11[1] = v17;
      v12 = 0x20000000;
    }
    else
    {
      v12 = 0x8000000;
    }
    v4 = RtlpHeapPerformCrossProcessQuery(*(void **)(a1 + 8), (__int64)v11);
    v3 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741789 )
      goto LABEL_22;
    NtClose(Handle);
    v17 = (v13 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  }
  if ( (v14 & 1) != 0 )
    *(_BYTE *)(a1 + 33) |= 1u;
  if ( *(_BYTE *)(a1 + 32) == 1 )
  {
LABEL_22:
    v5 = v15;
    goto LABEL_23;
  }
  v5 = v15;
  v6 = 0LL;
  v7 = 0LL;
  v18 = 0x10000LL;
  while ( v6 < v17 && v7 < v13 )
  {
    v3 = ZwMapViewOfSection(Handle, -1LL, &v15, 0LL, v1, &v10, &v18, 2, 0, 4);
    if ( v3 < 0 )
      goto LABEL_22;
    v8 = v10 + v18 <= v13 ? v18 : v13 - v10;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 16))(v15, v8, *(_QWORD *)(a1 + 24));
    if ( v3 < 0 )
      goto LABEL_22;
    NtUnmapViewOfSection(-1LL, v15);
    v5 = 0LL;
    v1 = v18;
    v6 = v18 + v10;
    v15 = 0LL;
    v10 = v6;
    v7 = v6;
  }
  v3 = 0;
LABEL_23:
  if ( v5 )
    NtUnmapViewOfSection(-1LL, v5);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
