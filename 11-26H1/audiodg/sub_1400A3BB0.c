/*
 * XREFs of sub_1400A3BB0 @ 0x1400A3BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_14009ECD0 @ 0x14009ECD0 (sub_14009ECD0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

char __fastcall sub_1400A3BB0(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rbp
  _DWORD *v9; // rbx
  _DWORD *v10; // rbp
  __int64 v11; // rcx
  HANDLE v12; // rax
  _OWORD v14[4]; // [rsp+40h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(v5, v4, a1 - 472, 15, a2, 0, 0);
  v6 = *(_QWORD *)(a1 - 384);
  *(_DWORD *)(a1 - 472 + 492) = 0;
  v7 = *(unsigned int *)(v6 + 164);
  v8 = *(_QWORD *)(a1 - 384);
  if ( (v7 & 0xFFFFFFF8) != 0 )
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v7, v4, *(_QWORD *)(a1 - 384));
    sub_140048108();
    _InterlockedAnd((volatile signed __int32 *)(v8 + 164), 0xFFFFFFFE);
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v7, v4, a1 - 472);
    v6 = *(_QWORD *)(a1 - 384);
    _InterlockedAnd((volatile signed __int32 *)(v6 + 164), 0xFFFFFFFE);
    v9 = (_DWORD *)(a1 + 16);
  }
  else
  {
    v9 = (_DWORD *)(a1 + 16);
    if ( !*(_DWORD *)(a1 + 16) )
    {
      v7 = (unsigned int)(*(_DWORD *)(a1 - 368) * a2);
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 24), v7);
    }
  }
  if ( a2 )
    LOBYTE(v6) = sub_14009ECD0((_QWORD *)(a1 - 472), v14);
  v10 = v9;
  if ( (byte_1400E8401 & 4) != 0 )
  {
    LOBYTE(v6) = sub_14000F5B0(v7, v4, a1 - 472, 16, a2, 0, *v9);
    v10 = (_DWORD *)(a1 + 16);
  }
  v11 = *(_QWORD *)(a1 - 24);
  if ( v11 )
  {
    sub_1400B6010(v11);
    LOBYTE(v6) = SetEvent(v12);
    v9 = v10;
  }
  *v9 = 3;
  return v6;
}
