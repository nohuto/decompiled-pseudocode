/*
 * XREFs of ??0InteractiveControlManager@@AEAA@XZ @ 0x14013DC60
 * Callers:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 * Callees:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x14013DCF0 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 */

InteractiveControlManager *__fastcall InteractiveControlManager::InteractiveControlManager(
        InteractiveControlManager *this)
{
  unsigned int *v2; // r8
  __int64 v3; // r9
  InteractiveControlSettings *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 1;
  v2 = (unsigned int *)&unk_140358E78;
  *((_QWORD *)this + 2) = 0LL;
  v3 = 29LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  v4 = (InteractiveControlManager *)((char *)this + 84);
  do
  {
    *((_DWORD *)v4 + 2 * *v2) = v2[1];
    v5 = *v2;
    v6 = v2[1];
    v2 += 4;
    *((_DWORD *)v4 + 2 * v5 + 1) = v6;
    --v3;
  }
  while ( v3 );
  InteractiveControlSettings::ReadSettings(v4);
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 7) = *((_DWORD *)this + 27);
  return this;
}
