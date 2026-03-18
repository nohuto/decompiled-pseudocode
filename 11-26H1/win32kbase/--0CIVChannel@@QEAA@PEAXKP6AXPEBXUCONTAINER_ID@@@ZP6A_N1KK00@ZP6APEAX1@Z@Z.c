/*
 * XREFs of ??0CIVChannel@@QEAA@PEAXKP6AXPEBXUCONTAINER_ID@@@ZP6A_N1KK00@ZP6APEAX1@Z@Z @ 0x140190E9C
 * Callers:
 *     IVWorkerThread @ 0x14021F9FC (IVWorkerThread.c)
 * Callees:
 *     <none>
 */

CIVChannel *__fastcall CIVChannel::CIVChannel(
        CIVChannel *this,
        void *a2,
        int a3,
        void (__high *a4)(const void *, struct CONTAINER_ID),
        bool (*a5)(const void *, unsigned int, unsigned int, void *, void *),
        void *(*a6)(const void *))
{
  *((_QWORD *)this + 3) = a5;
  *((_QWORD *)this + 4) = a6;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = a3;
  *((_QWORD *)this + 2) = a4;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 44) = 0;
  *(_QWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3) + 8LL * *((unsigned int *)this + 2) + 19488) = this;
  return this;
}
