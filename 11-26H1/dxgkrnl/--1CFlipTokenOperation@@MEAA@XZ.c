/*
 * XREFs of ??1CFlipTokenOperation@@MEAA@XZ @ 0x14001B910
 * Callers:
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x14001B744 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ??_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z @ 0x140059970 (--_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z.c)
 *     ??_GCFlipTokenOperation@@MEAAPEAXI@Z @ 0x1400A4490 (--_GCFlipTokenOperation@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipTokenOperation::~CFlipTokenOperation(CFlipTokenOperation *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &CFlipTokenOperation::`vftable';
  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    ObfDereferenceObject(v1);
}
