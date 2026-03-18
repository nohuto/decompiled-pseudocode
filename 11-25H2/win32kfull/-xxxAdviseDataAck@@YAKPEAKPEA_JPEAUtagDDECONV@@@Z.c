/*
 * XREFs of ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B1CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1402B14DC (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402B16B4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1402B1EA0 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B28D8 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1402BDD2C (xxxClientFreeDDEHandle.c)
 */

unsigned int __fastcall xxxAdviseDataAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int v3; // esi
  bool v5; // zf
  unsigned int v7; // ebx
  __int64 v8; // r9
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  struct tagINTDDEINFO *v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *a1 == 996;
  v13 = 0LL;
  if ( !v5 )
    return xxxUnexpectedClientPost(a1, a2, a3);
  v7 = xxxCopyAckIn(a1, a2, a3, &v13);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) == 0 )
    v3 = v7;
  if ( v3 != 2 )
    return v3;
  v8 = *((_QWORD *)a3 + 7);
  v9 = *(_DWORD *)(v8 + 64);
  if ( (*(_DWORD *)v13 & 0x8000LL) != 0 )
  {
    v10 = v9 & 0xFFFFFFFE;
    if ( (v9 & 0x400) != 0 )
    {
      FreeListAdd(*((struct tagDDECONV **)a3 + 4), *(void **)(v8 + 48), v10);
      goto LABEL_13;
    }
    v11 = v10;
  }
  else
  {
    v11 = v9 & 0xFFFFFFFE;
  }
  xxxClientFreeDDEHandle(*(_QWORD *)(v8 + 40), v11);
LABEL_13:
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    return 0;
  PopState(a3, v12);
  return 2;
}
