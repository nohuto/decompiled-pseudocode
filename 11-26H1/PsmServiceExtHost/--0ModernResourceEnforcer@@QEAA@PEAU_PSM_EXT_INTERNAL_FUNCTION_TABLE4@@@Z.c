/*
 * XREFs of ??0ModernResourceEnforcer@@QEAA@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x18007F6FC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     <none>
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::ModernResourceEnforcer(
        ModernResourceEnforcer *this,
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a2)
{
  __int128 v4; // xmm0

  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  *((_DWORD *)this + 54) = 1;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  RtlInitializeCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 6);
  v4 = *((_OWORD *)a2 + 7);
  a2 = (struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *)((char *)a2 + 128);
  *(_OWORD *)((char *)this + 120) = v4;
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)a2 + 4);
  return this;
}
