/*
 * XREFs of AcpiArblibIsAliasedRangeAvailable @ 0x1400AD534
 * Callers:
 *     AcpiPortarbFindSuitableRange @ 0x1400B5B60 (AcpiPortarbFindSuitableRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memset @ 0x140072740 (memset.c)
 *     AcpiArblibGetNextAlias @ 0x1400AD500 (AcpiArblibGetNextAlias.c)
 */

char __fastcall AcpiArblibIsAliasedRangeAvailable(__int64 a1, __int128 *a2)
{
  __int64 v4; // rcx
  UCHAR AttributeAvailableMask; // r14
  int v6; // eax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  ULONGLONG v9; // rdi
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int16 v12; // r12
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // r15d
  __int64 v17; // rax
  char result; // al
  _OWORD v19[5]; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int8 Available; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONGLONG Start; // [rsp+D0h] [rbp+77h] BYREF

  Available = 0;
  memset(v19, 0, sizeof(v19));
  v4 = *((_QWORD *)a2 + 4);
  AttributeAvailableMask = 0;
  v6 = *(_DWORD *)(v4 + 40);
  if ( !v6 || v6 == 2 || (*(_DWORD *)(v4 + 44) & 1) != 0 )
    AttributeAvailableMask = 1;
  v7 = *((_QWORD *)a2 + 5);
  v8 = *a2;
  v9 = *(_QWORD *)a2;
  v10 = a2[1];
  v11 = *(_QWORD *)(v7 + 40);
  Start = *(_QWORD *)a2;
  v12 = *(_WORD *)(v11 + 4);
  v19[0] = v8;
  v13 = a2[2];
  v19[1] = v10;
  v14 = a2[3];
  v19[2] = v13;
  v15 = a2[4];
  v19[3] = v14;
  v19[4] = v15;
  v16 = *(_DWORD *)(v7 + 36) & 1;
  while ( AcpiArblibGetNextAlias(v12, v9, &Start) )
  {
    v9 = Start;
    RtlIsRangeAvailable(
      *(PRTL_RANGE_LIST *)(a1 + 48),
      Start,
      *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL) + Start - 1,
      v16 + 2,
      AttributeAvailableMask,
      *(PVOID *)(a1 + 328),
      *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 336),
      &Available);
    if ( Available != 1 )
    {
      v17 = *((_QWORD *)a2 + 5);
      *(_QWORD *)&v19[1] = v9;
      *((_QWORD *)&v19[1] + 1) = v9 + *(_QWORD *)(v17 + 16) - 1LL;
      result = (*(__int64 (__fastcall **)(__int64, _OWORD *))(a1 + 272))(a1, v19);
      if ( !result )
        return result;
    }
  }
  return 1;
}
