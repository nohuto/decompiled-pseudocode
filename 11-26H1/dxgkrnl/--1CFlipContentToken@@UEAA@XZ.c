/*
 * XREFs of ??1CFlipContentToken@@UEAA@XZ @ 0x14003E548
 * Callers:
 *     ??_GCFlipContentToken@@UEAAPEAXI@Z @ 0x14003E510 (--_GCFlipContentToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Discard@CFlipContentToken@@UEAAXXZ @ 0x140018B30 (-Discard@CFlipContentToken@@UEAAXXZ.c)
 *     ??1CToken@@UEAA@XZ @ 0x14003E580 (--1CToken@@UEAA@XZ.c)
 */

void __fastcall CFlipContentToken::~CFlipContentToken(CFlipContentToken *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CFlipContentToken::`vftable';
  if ( !v1 )
    CFlipContentToken::Discard(this);
  CToken::~CToken(this);
}
