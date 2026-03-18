/*
 * XREFs of ??0CChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z @ 0x1400B14A4
 * Callers:
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1400B13A0 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 * Callees:
 *     <none>
 */

DirectComposition::CChannel *__fastcall DirectComposition::CChannel::CChannel(
        DirectComposition::CChannel *this,
        struct DirectComposition::CConnection *a2,
        char a3)
{
  char v4; // al

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  v4 = *((_BYTE *)this + 48) & 0xFE;
  *((_DWORD *)this + 6) = 7;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) = a3 | v4;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  *((_QWORD *)this + 2) = PsGetCurrentProcess(this);
  return this;
}
