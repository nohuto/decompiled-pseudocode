/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14002A620
 * Callers:
 *     ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x14002A530 (-Add@-$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002D0DC (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025CB60 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDPNTARGETMODE>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  int v7; // ecx
  int v8; // r9d
  int v9; // ecx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( v4 )
  {
    if ( *(_DWORD *)(v4 + 76) == *(_DWORD *)(a2 + 76)
      && *(_DWORD *)(v4 + 80) == *(_DWORD *)(a2 + 80)
      && *(_DWORD *)(v4 + 84) == *(_DWORD *)(a2 + 84)
      && *(_DWORD *)(v4 + 88) == *(_DWORD *)(a2 + 88)
      && *(_DWORD *)(v4 + 92) == *(_DWORD *)(a2 + 92)
      && *(_DWORD *)(v4 + 96) == *(_DWORD *)(a2 + 96)
      && *(_DWORD *)(v4 + 100) == *(_DWORD *)(a2 + 100)
      && *(_DWORD *)(v4 + 104) == *(_DWORD *)(a2 + 104)
      && *(_QWORD *)(v4 + 112) == *(_QWORD *)(a2 + 112) )
    {
      v7 = *(_DWORD *)(v4 + 120);
      if ( (((unsigned __int8)v7 ^ *(_BYTE *)(a2 + 120)) & 7) == 0
        && (((unsigned __int16)*(_DWORD *)(a2 + 120) ^ (unsigned __int16)v7) & 0x1F8) == 0 )
      {
        v8 = *(_DWORD *)(a2 + 128);
        v9 = *(_DWORD *)(v4 + 128);
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)(a2 + 128)) & 3) == 0
          && (((unsigned __int8)v8 ^ (unsigned __int8)v9) & 0xFC) == 0
          && (((unsigned __int16)v8 ^ (unsigned __int16)v9) & 0x3F00) == 0
          && ((v8 ^ v9) & 0xFC000) == 0
          && ((v8 ^ v9) & 0x3F00000) == 0
          && ((v8 ^ v9) & 0xFC000000) == 0 )
        {
          break;
        }
      }
    }
    v5 = *(_QWORD *)(v4 + 8);
    v4 = v5 - 8;
    if ( v5 == v2 )
      v4 = 0LL;
  }
  return v4;
}
