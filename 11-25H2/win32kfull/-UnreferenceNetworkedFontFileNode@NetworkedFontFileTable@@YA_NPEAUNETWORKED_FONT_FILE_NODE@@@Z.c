/*
 * XREFs of ?UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x140305814
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14010C4A4 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x140305498 (-ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEA.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BK@@@QEAAXXZ @ 0x1401CE590 (-vUnlock@-$SEMOBJ@$0BK@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BK@@@QEAA@PEAUtagSILOGLOBALS@@@Z @ 0x140305140 (--0-$SEMOBJ@$0BK@@@QEAA@PEAUtagSILOGLOBALS@@@Z.c)
 */

char __fastcall NetworkedFontFileTable::UnreferenceNetworkedFontFileNode(
        HANDLE *Buffer,
        struct NETWORKED_FONT_FILE_NODE *a2)
{
  __int64 SiloGlobals; // rsi
  char v5; // bl
  HSEMAPHORE v7; // [rsp+30h] [rbp+8h] BYREF

  SiloGlobals = UserGetSiloGlobals(Buffer, a2);
  SEMOBJ<26>::SEMOBJ<26>(&v7, (HSEMAPHORE *)SiloGlobals);
  if ( (*((_DWORD *)Buffer + 8))-- == 1 )
  {
    if ( *Buffer )
    {
      ZwClose(*Buffer);
      *Buffer = 0LL;
    }
    RtlDeleteElementGenericTableAvl(*(PRTL_AVL_TABLE *)(SiloGlobals + 8), Buffer);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  SEMOBJ<26>::vUnlock(&v7);
  return v5;
}
