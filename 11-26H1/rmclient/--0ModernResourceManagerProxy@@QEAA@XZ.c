/*
 * XREFs of ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x18000363C
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180002CB0 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180002DE0 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 * Callees:
 *     CempLockInitialize @ 0x180003900 (CempLockInitialize.c)
 */

ModernResourceManagerProxy *__fastcall ModernResourceManagerProxy::ModernResourceManagerProxy(
        ModernResourceManagerProxy *this)
{
  *(_QWORD *)this = &ModernResourceManagerProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  CempLockInitialize((char *)this + 96);
  return this;
}
