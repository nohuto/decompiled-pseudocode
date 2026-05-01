/*
 * XREFs of ??1CDuiRefThread@@MEAA@XZ @ 0x1802AB34C
 * Callers:
 *     ??_GCDuiRefThread@@MEAAPEAXI@Z @ 0x1802113C0 (--_GCDuiRefThread@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDuiRefThread::~CDuiRefThread(CDuiRefThread *this)
{
  bool v1; // zf

  v1 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = &CDuiRefThread::`vftable'{for `CRefThread'};
  *((_QWORD *)this + 4) = &CDuiRefThread::`vftable'{for `IDuiThreadRef'};
  if ( !v1 )
  {
    UnInitThread();
    UnInitProcessPriv(&_ImageBase);
    *((_BYTE *)this + 40) = 0;
  }
  CRefThread::~CRefThread(this);
}
