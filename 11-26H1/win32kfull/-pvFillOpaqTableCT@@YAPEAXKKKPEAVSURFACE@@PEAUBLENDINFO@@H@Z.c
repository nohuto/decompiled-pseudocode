/*
 * XREFs of ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1400EF26C
 * Callers:
 *     ?vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EDEF4 (-vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1400EE428 (-vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z.c)
 *     ?vSrcOpaqCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EE89C (-vSrcOpaqCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400EEC3C (-vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z @ 0x1400EF808 (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z @ 0x1400EFBC0 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z.c)
 */

_DWORD *__fastcall pvFillOpaqTableCT(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct SURFACE *a4,
        struct BLENDINFO *a5,
        int a6)
{
  unsigned int v7; // ebp
  unsigned int v8; // esi
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // rbx
  char v13; // di

  v7 = a3;
  v8 = a2;
  v9 = a1;
  v10 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v11 = *(_QWORD *)(v10 + 5328);
  v12 = (_DWORD *)(v10 + 4864);
  if ( *(_QWORD *)a4 == v11 && v7 == v12[119] && v8 == v12[118] && v12[2146] == v12[121] )
  {
    v13 = 1;
    if ( !a6 )
      return v12;
  }
  else
  {
    v13 = 0;
  }
  vGetBlendInfo(v9, a4, v8, a5);
  if ( !v13 )
    vClearTypeLookupTableLoop(v9, a4, a5, v8, v7);
  return v12;
}
