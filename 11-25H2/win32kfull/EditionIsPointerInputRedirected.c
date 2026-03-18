/*
 * XREFs of EditionIsPointerInputRedirected @ 0x1401AAA30
 * Callers:
 *     <none>
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1401AAB4C (UpdatePointerRedirIsAlive.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_BOOL8 __fastcall EditionIsPointerInputRedirected(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // esi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax
  _BOOL8 result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _OWORD v16[5]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v17; // [rsp+70h] [rbp-38h]
  __int128 v18; // [rsp+80h] [rbp-28h]

  v4 = a2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) + 8LL);
  UpdatePointerRedirIsAlive(v7);
  if ( (unsigned int)(v4 - 2) <= 1 )
  {
    v8 = 208LL;
    if ( v4 != 2 )
      v8 = 216LL;
    v6 = *(_QWORD *)(v8 + v7);
    if ( v6 && a1 == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL) )
      v6 = 0LL;
  }
  memset_0(v16, 0, 0x70uLL);
  if ( v6 )
  {
    LODWORD(v16[0]) = 4;
    *(_QWORD *)&v17 = v6;
    HIDWORD(v17) = 2;
  }
  result = v6 != 0;
  v10 = v16[1];
  *a3 = v16[0];
  v11 = v16[2];
  a3[1] = v10;
  v12 = v16[3];
  a3[2] = v11;
  v13 = v16[4];
  a3[3] = v12;
  v14 = v17;
  a3[4] = v13;
  v15 = v18;
  a3[5] = v14;
  a3[6] = v15;
  return result;
}
