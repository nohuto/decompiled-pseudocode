/*
 * XREFs of MiPteForTrimmedProto @ 0x1402B3394
 * Callers:
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 * Callees:
 *     MiMakePrototypePteVadLookup @ 0x1402B1B50 (MiMakePrototypePteVadLookup.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiClonePteReadonly @ 0x1404D28A0 (MiClonePteReadonly.c)
 */

unsigned __int64 __fastcall MiPteForTrimmedProto(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // r11
  __int64 v5; // rsi
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 PrototypePteDirect; // rbx
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v17; // rax
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 HasShadow; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // rax

  v3 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v5 = a1;
  v6 = v3 - 0x98000000000LL;
  v7 = *(_QWORD *)(v3 - 0x98000000000LL);
  v8 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)(v3 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(a1, v7, *(_QWORD *)(v3 - 0x98000000000LL));
    if ( HasShadow )
    {
      a1 = *(_QWORD *)(HasShadow + 1288);
      if ( a1 )
      {
        v23 = *(_QWORD *)(a1 + 8 * ((v6 >> 3) & 0x1FF));
        if ( (v23 & 0x20) != 0 )
          v22 |= 0x20uLL;
        v7 = v22 | 0x42;
        if ( (v23 & 0x42) == 0 )
          v7 = v22;
      }
    }
  }
  v9 = *(_QWORD *)v6;
  v10 = v7 >> 60;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= v8 )
  {
    v8 = *(_QWORD *)v6;
    if ( (v9 & 1) != 0 && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v17 = MiPteHasShadow(a1, v10, v9);
      if ( v17 )
      {
        v19 = *(_QWORD *)(v17 + 1288);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 8 * ((v18 >> 3) & 0x1FF));
          if ( (v20 & 0x20) != 0 )
            v8 |= 0x20uLL;
          v9 = v8 | 0x42;
          if ( (v20 & 0x42) == 0 )
            v9 = v8;
        }
      }
    }
  }
  v11 = v10 & 7;
  if ( (_DWORD)v11 )
  {
    if ( (v9 & 0x18) == 8 )
    {
      LOBYTE(v11) = v11 | 0x18;
    }
    else if ( (v9 & 0x10) != 0 )
    {
      LOBYTE(v11) = v11 | 8;
    }
    return MiMakePrototypePteVadLookup(v11);
  }
  else
  {
    v12 = *(_QWORD *)(48 * ((*(_QWORD *)(v3 - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8) | 0x8000000000000000uLL;
    PrototypePteDirect = MiMakePrototypePteDirect(v12, v11, v9, v8);
    if ( (v14 & 0xA00) == 0 && v14 < 0 && (*(_DWORD *)(v5 + 184) & 0xF) != 0 )
      PrototypePteDirect |= 8uLL;
    if ( *(__int64 *)(8 * v15 - 0x220000000000LL + 8) <= 0
      || (*(_QWORD *)(8 * v15 - 0x220000000000LL + 40) & 0x10000000000LL) != 0 )
    {
      if ( (a3 & 2) != 0 && (unsigned int)MiClonePteReadonly(v12) )
        return PrototypePteDirect | 8;
    }
    else
    {
      return PrototypePteDirect | 0x800;
    }
  }
  return PrototypePteDirect;
}
