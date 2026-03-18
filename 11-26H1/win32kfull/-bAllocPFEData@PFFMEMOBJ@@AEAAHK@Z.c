/*
 * XREFs of ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1401F8F14
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401020EC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x1401F8CD4 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFFMEMOBJ::bAllocPFEData(PFFMEMOBJ *this, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax

  v2 = a2;
  *(_DWORD *)(*(_QWORD *)this + 220LL) = *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) + 19680LL)
                                       + 140;
  *(_DWORD *)(*(_QWORD *)this + 220LL) = (*(_DWORD *)(*(_QWORD *)this + 220LL) + 7) & 0xFFFFFFF8;
  v4 = *(_DWORD *)(*(_QWORD *)this + 220LL);
  if ( v2 > 0xFFFFFFFF / v4 )
  {
    v6 = 0;
    *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
  }
  else
  {
    v5 = v2 * v4;
    v6 = 0;
    if ( (_DWORD)v5 )
      v7 = Win32AllocPoolZInit(v5, 1701212231LL);
    else
      v7 = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 224LL) = v7;
  }
  LOBYTE(v6) = *(_QWORD *)(*(_QWORD *)this + 224LL) != 0LL;
  return v6;
}
