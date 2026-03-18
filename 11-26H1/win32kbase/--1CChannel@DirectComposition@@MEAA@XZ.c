/*
 * XREFs of ??1CChannel@DirectComposition@@MEAA@XZ @ 0x14012931C
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1401290C8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x14022A8B0 (--_GCChannel@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CChannel::~CChannel(DirectComposition::CChannel *this)
{
  bool v1; // zf
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v1 = (*((_BYTE *)this + 48) & 1) == 0;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  if ( !v1 )
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 5));
  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    ExDeleteResourceLite(v3);
    GreDeleteFastMutex(*((char **)this + 4), v4, v5, v6);
  }
}
