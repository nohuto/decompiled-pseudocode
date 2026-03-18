/*
 * XREFs of ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1800A874C
 * Callers:
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1800A8838 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi
  int v4; // ebp
  __int64 v5; // rsi
  int v6; // ebx
  char *v7; // rax
  char *v8; // rdx

  v3 = 1;
  v4 = dword_1803DE4F0 + 1;
  if ( dword_1803DE4F0 + 1 <= 0 )
    return 0;
  if ( dword_1803DE4F0 == dword_1803DE4F4 )
  {
    if ( dword_1803DE4F0 <= 0x3FFFFFFF )
    {
      v5 = dword_1803DE4F0;
      if ( (unsigned __int64)dword_1803DE4F0 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v6 = 2;
        if ( dword_1803DE4F4 >= 2 )
          v6 = dword_1803DE4F0 + (dword_1803DE4F0 >> 1);
        v7 = (char *)(dword_1803DE4F0
                    ? DefaultHeap::Realloc(CInteraction::s_DefaultStateLockedInteractions, 8LL * v6)
                    : DefaultHeap::AllocClear(8LL * v6));
        if ( v7 )
        {
          dword_1803DE4F4 = v6;
          CInteraction::s_DefaultStateLockedInteractions = v7;
          goto LABEL_11;
        }
      }
    }
    return 0;
  }
  v5 = dword_1803DE4F0;
  v7 = (char *)CInteraction::s_DefaultStateLockedInteractions;
LABEL_11:
  v8 = &v7[8 * v5];
  dword_1803DE4F0 = v4;
  if ( v8 )
    *(_QWORD *)v8 = *a2;
  return v3;
}
