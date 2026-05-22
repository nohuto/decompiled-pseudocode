/*
 * XREFs of ?ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z @ 0x180112830
 * Callers:
 *     <none>
 * Callees:
 *     ?FindSection@SipcPort@@IEAAPEAVSipcSection@@PEAX@Z @ 0x180111964 (-FindSection@SipcPort@@IEAAPEAVSipcSection@@PEAX@Z.c)
 */

__int64 __fastcall SipcEndpoint::ProtectBuffer(SipcEndpoint *this, void *a2, __int16 a3, unsigned __int64 a4)
{
  SipcPort *v5; // rcx
  struct SipcSection *Section; // rax
  unsigned __int64 v8; // r11
  SipcSection *v9; // rcx
  unsigned __int64 v10; // rax

  if ( (((_WORD)a2 + a3) & 0xFFF) != 0 || (a4 & 0xFFF) != 0 )
    return 2147942487LL;
  v5 = (SipcPort *)*((_QWORD *)this + 2);
  if ( !v5 )
    return 2147549183LL;
  Section = SipcPort::FindSection(v5, a2);
  v9 = Section;
  if ( !Section )
    return 2147942487LL;
  v10 = *((_QWORD *)Section + 6);
  if ( v8 >= v10 || a4 > v10 - v8 )
    return 2147483659LL;
  else
    return SipcSection::ProtectMemory(v9, v8, a4, 2u);
}
