/*
 * XREFs of ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18021C088
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1801A1A20 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPositionMotion::StartInertia(
        CPositionMotion *this,
        float a2,
        float a3,
        float a4,
        int a5,
        float a6,
        float a7,
        char a8,
        bool a9)
{
  *((float *)this + 17) = a3;
  *((float *)this + 34) = a3;
  *((float *)this + 30) = a6;
  *((float *)this + 28) = a4;
  *((float *)this + 35) = a4;
  *((float *)this + 31) = *(float *)&a5;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 27) = 0;
  LOBYTE(a5) = a9;
  CMotion::StartInertia(this, a2, a7, a8, a5);
}
