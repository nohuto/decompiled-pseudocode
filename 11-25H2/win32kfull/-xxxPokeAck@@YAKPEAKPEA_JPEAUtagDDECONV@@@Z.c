/*
 * XREFs of ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B24F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1402B14DC (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402B16B4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1402B1EA0 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B29A0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1402BDD2C (xxxClientFreeDDEHandle.c)
 */

unsigned int __fastcall xxxPokeAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  int v3; // esi
  bool v5; // zf
  int v7; // ebx
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // rdx
  struct tagINTDDEINFO *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *a1 == 996;
  v11 = 0LL;
  if ( !v5 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v7 = xxxCopyAckIn(a1, (void **)a2, a3, &v11);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) == 0 )
    v3 = v7;
  if ( v3 != 2 )
    return v3;
  v8 = *((_QWORD *)a3 + 7);
  v9 = *(_DWORD *)(v8 + 64);
  if ( (*(_DWORD *)v11 & 0x8000LL) != 0 )
  {
    if ( (v9 & 0x400) != 0 )
      FreeListAdd(*((struct tagDDECONV **)a3 + 4), *(void **)(v8 + 40), v9 & 0xFFFFFFFE);
  }
  else
  {
    xxxClientFreeDDEHandle(*(_QWORD *)(v8 + 48), v9 & 0xFFFFFFFE);
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    return 0;
  PopState(a3, v10);
  return 2;
}
