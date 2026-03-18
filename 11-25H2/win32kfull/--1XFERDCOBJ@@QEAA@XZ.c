/*
 * XREFs of ??1XFERDCOBJ@@QEAA@XZ @ 0x140327094
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1401D3608 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall XFERDCOBJ::~XFERDCOBJ(XFERDCOBJ *this)
{
  if ( *((_DWORD *)this + 26) )
    PopThreadGuardedObject((char *)this + 72);
  DCOBJ::~DCOBJ(this);
}
