/*
 * XREFs of ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402FCD34
 * Callers:
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402FD39C (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     SetRITTimer @ 0x1401F74F0 (SetRITTimer.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1402FCE84 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 */

void __fastcall InteractiveControlDevice::DetectPressAndHoldGesture(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  int v3; // r14d
  __int16 v4; // r15
  unsigned int v7; // r12d
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  struct InteractiveControlManager *v12; // rax
  int v13; // eax
  struct InteractiveControlManager *v14; // rax
  __int64 v15; // rdx

  v3 = 0;
  v4 = a3;
  v7 = 128;
  v8 = (a3 >> 9) & 1;
  if ( *((_DWORD *)InteractiveControlManager::Instance((__int64)this, (__int64)a2) + 39) && (v4 & 0x80) != 0 )
  {
    v11 = *((_DWORD *)a2 + 19);
    if ( *((_QWORD *)this + 44) )
    {
      *((_DWORD *)this + 90) += v11;
      v11 = *((_DWORD *)this + 90);
    }
    v12 = InteractiveControlManager::Instance(v10, v9);
    v10 = (unsigned int)-v11;
    if ( v11 > 0 )
      v10 = (unsigned int)v11;
    if ( (int)v10 > *((_DWORD *)v12 + 41) )
    {
      v7 = 0;
      v3 = 1;
      v8 = 0;
    }
  }
  if ( (v4 & 0x100) != 0 )
    v3 = 1;
  v13 = 0;
  if ( (v4 & 0x100) == 0 )
    v13 = v8;
  if ( v13 )
  {
    *((_DWORD *)this + 91) = 1;
    *((_QWORD *)this + 46) = a2;
    *((_DWORD *)this + 90) = 0;
    v14 = InteractiveControlManager::Instance(v10, v9);
    *((_QWORD *)this + 44) = SetRITTimer(
                               0LL,
                               *((_DWORD *)v14 + 37),
                               (__int64)lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_,
                               1);
  }
  else if ( v3 )
  {
    v15 = *((_QWORD *)this + 44);
    if ( v15 )
    {
      FindTimer(0LL, v15, 4u, 1, 0LL);
      *((_QWORD *)this + 44) = 0LL;
      InteractiveControlDevice::FlushBufferedInput(this, v7);
    }
  }
  if ( (v4 & 0x20) != 0 )
    *((_DWORD *)this + 94) = 0;
}
