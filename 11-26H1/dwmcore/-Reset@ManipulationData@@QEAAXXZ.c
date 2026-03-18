/*
 * XREFs of ?Reset@ManipulationData@@QEAAXXZ @ 0x18010859C
 * Callers:
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x180107D3C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ??0ManipulationData@@QEAA@XZ @ 0x180108564 (--0ManipulationData@@QEAA@XZ.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180109064 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationData::Reset(ManipulationData *this)
{
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 5) = 0;
  *(_QWORD *)this = *(_QWORD *)((char *)this + 12);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 9) = 1065353216;
  *((_DWORD *)this + 10) = 1065353216;
  *((_DWORD *)this + 11) = 1065353216;
  *((_QWORD *)this + 3) = *(_QWORD *)((char *)this + 36);
  *((_DWORD *)this + 8) = 1065353216;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 31) = 1065353216;
  *((_DWORD *)this + 26) = 1065353216;
  *((_DWORD *)this + 21) = 1065353216;
  *((_DWORD *)this + 16) = 1065353216;
  *(_QWORD *)((char *)this + 156) = 0LL;
}
