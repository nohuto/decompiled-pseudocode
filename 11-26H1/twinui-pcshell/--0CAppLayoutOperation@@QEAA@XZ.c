/*
 * XREFs of ??0CAppLayoutOperation@@QEAA@XZ @ 0x180513100
 * Callers:
 *     ??0DesktopOperation@@QEAA@XZ @ 0x180513174 (--0DesktopOperation@@QEAA@XZ.c)
 *     ??0AppSwitchOperation@@QEAA@XZ @ 0x180522C70 (--0AppSwitchOperation@@QEAA@XZ.c)
 *     ??0WindowArrangementOperation@@QEAA@XZ @ 0x180524100 (--0WindowArrangementOperation@@QEAA@XZ.c)
 *     ??0AppResizeOperation@@QEAA@XZ @ 0x180524D08 (--0AppResizeOperation@@QEAA@XZ.c)
 *     ??0BackOperation@@QEAA@XZ @ 0x180525810 (--0BackOperation@@QEAA@XZ.c)
 *     ??0TabletModePositionerOperation@@QEAA@XZ @ 0x180525D3C (--0TabletModePositionerOperation@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CAppLayoutOperation *__fastcall CAppLayoutOperation::CAppLayoutOperation(CAppLayoutOperation *this)
{
  *(_QWORD *)this = &CAppLayoutOperation::`vftable';
  *((_QWORD *)this + 1) = &CAppLayoutOperation::`vftable'{for `IAppLayoutOperation'};
  *((_QWORD *)this + 2) = &CAppLayoutOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppLayoutOperationBuilder>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  return this;
}
