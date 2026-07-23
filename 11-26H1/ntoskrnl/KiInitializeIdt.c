/*
 * XREFs of KiInitializeIdt @ 0x140BFBF9C
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 *     KiEnableKvaShadowing @ 0x140BFE180 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall KiInitializeIdt(__int64 a1, char a2)
{
  unsigned __int64 v2; // r10
  __int64 *v4; // r9
  void (__fastcall **v5)(__int64, char); // r11
  __int64 v6; // r8
  int v7; // ecx
  void (__fastcall *v8)(__int64, char); // rax
  __int64 v9; // rdx
  __int64 *result; // rax
  void (*v11)(); // rcx
  unsigned __int64 v12; // rdx
  __int16 v13; // ax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int16 v16; // dx
  __int16 v17; // cx
  int v18; // ecx
  __int16 v19; // ax

  v2 = 0LL;
  KiDebugTrapIndex = 0;
  v4 = &KiInterruptInitTable;
  v5 = (void (__fastcall **)(__int64, char))KiFredVectors;
  v6 = a1 + 4;
  do
  {
    v7 = *(unsigned __int8 *)v4;
    if ( (_DWORD)v2 == v7 )
      v8 = (void (__fastcall *)(__int64, char))v4[3];
    else
      v8 = KiInterruptLinkage;
    *v5 = v8;
    if ( KiBootDebuggerActive && (unsigned int)v2 <= 0x2D && (v9 = 0x30000000600ALL, _bittest64(&v9, v2)) )
    {
      result = v4 + 4;
      if ( (_DWORD)v2 != v7 )
        result = v4;
      v4 = result;
    }
    else
    {
      v11 = (void (*)())KiIsrThunkShadow;
      if ( !a2 )
        v11 = KxUnexpectedInterrupt0;
      v12 = (unsigned __int64)v11 + 8 * v2;
      if ( KiSystemCallSelector != 1 && (_DWORD)v2 == 46 )
      {
        v13 = *(_WORD *)v6 & 0xF8;
        *(_WORD *)(v6 - 4) = v12;
        *(_WORD *)v6 = v13 | 0x8E00;
        result = (__int64 *)(v12 >> 16);
        v14 = HIDWORD(v12);
        v4 += 4;
LABEL_21:
        *(_DWORD *)(v6 + 4) = v14;
        *(_WORD *)(v6 + 2) = (_WORD)result;
        *(_WORD *)(v6 - 2) = 16;
        goto LABEL_22;
      }
      if ( (_DWORD)v2 != *(unsigned __int8 *)v4 )
      {
        v19 = *(_WORD *)v6 & 0xF8;
        *(_WORD *)(v6 - 4) = v12;
        *(_WORD *)v6 = v19 | 0x8E00;
        result = (__int64 *)(v12 >> 16);
        v14 = HIDWORD(v12);
        goto LABEL_21;
      }
      v15 = *(__int64 *)((char *)v4 + (a2 != 0 ? 8 : 0) + 8);
      *(_WORD *)(v6 - 4) = v15;
      *(_WORD *)(v6 - 2) = 16;
      v16 = *(_WORD *)v6 & 0xEEF8 | *((_BYTE *)v4 + 2) & 7 | 0xE00;
      *(_WORD *)v6 = v16;
      v17 = v16 & 0x1FFF | ((*((_BYTE *)v4 + 1) & 3 | 4) << 13);
      *(_WORD *)(v6 + 2) = WORD1(v15);
      result = (__int64 *)HIDWORD(v15);
      *(_DWORD *)(v6 + 4) = HIDWORD(v15);
      *(_WORD *)v6 = v17;
      if ( *((_BYTE *)v4 + 1) )
      {
        v18 = KiDebugTrapIndex;
        KiDebugTraps[KiDebugTrapIndex] = v15;
        KiDebugTrapIndex = v18 + 1;
      }
      v4 += 4;
    }
LABEL_22:
    v2 = (unsigned int)(v2 + 1);
    ++v5;
    v6 += 16LL;
  }
  while ( (unsigned int)v2 <= 0xFF );
  return result;
}
