/*
 * XREFs of ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1401E49D0
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401E4E5C (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1401E5074 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 */

void __fastcall SetBitMask(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagVWPLGESTUREDATA *GCData; // rax
  unsigned __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax

  GCData = GetGCData(a1);
  v6 = (unsigned __int64)a2 >> 3;
  v7 = a2 & 7;
  v8 = *(_QWORD *)GCData;
  v9 = *(unsigned __int8 *)(v6 + *(_QWORD *)GCData);
  if ( a3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *(_BYTE *)(v6 + v8) = v10;
}
