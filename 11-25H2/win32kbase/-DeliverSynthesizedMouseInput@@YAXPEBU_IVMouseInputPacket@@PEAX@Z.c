/*
 * XREFs of ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1402198A4
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A480 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ChildSubmitRootSynthesizedMouseInput @ 0x140215E98 (ChildSubmitRootSynthesizedMouseInput.c)
 */

void __fastcall DeliverSynthesizedMouseInput(const struct _IVMouseInputPacket *a1, void *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v6; // rax
  _WORD *v7; // rdx
  _QWORD *v8; // r8
  _WORD *v9; // rcx
  __int64 v10; // r9
  __int16 v11; // ax

  v2 = *((_DWORD *)a1 + 8);
  v4 = *((_QWORD *)a1 + 3);
  v6 = Win32AllocPoolZInitImpl(256LL, (int)(28 * v2) + 36LL, 0x736D5649u);
  v8 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 16) = a2;
    *(_DWORD *)(v6 + 32) = v2;
    *(_QWORD *)(v6 + 24) = *((_QWORD *)a1 + 6);
    if ( v2 )
    {
      v9 = (_WORD *)(v4 + 8);
      v10 = v2;
      v7 = (_WORD *)(v6 + 40);
      do
      {
        *(v7 - 2) = *(v9 - 4);
        *(v7 - 1) = *(v9 - 2);
        v11 = *v9;
        v9 += 24;
        *v7 = v11;
        v7 += 14;
        *(v7 - 13) = *(v9 - 22);
        *((_DWORD *)v7 - 6) = *((_DWORD *)v9 - 10);
        *((_DWORD *)v7 - 5) = *((_DWORD *)v9 - 9);
        *((_DWORD *)v7 - 4) = *((_DWORD *)v9 - 8);
        *((_DWORD *)v7 - 3) = *((_DWORD *)v9 - 7);
        *((_DWORD *)v7 - 2) = *((_DWORD *)v9 - 4);
        --v10;
      }
      while ( v10 );
    }
    ChildSubmitRootSynthesizedMouseInput(v8, (__int64)v7);
  }
}
