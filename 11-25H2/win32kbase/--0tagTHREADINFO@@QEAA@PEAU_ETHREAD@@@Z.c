/*
 * XREFs of ??0tagTHREADINFO@@QEAA@PEAU_ETHREAD@@@Z @ 0x1400C6554
 * Callers:
 *     AllocateW32ThreadImpl @ 0x1400C6430 (AllocateW32ThreadImpl.c)
 * Callees:
 *     SetUnavailableInputSource @ 0x1400C3540 (SetUnavailableInputSource.c)
 *     memset @ 0x140243000 (memset.c)
 */

tagTHREADINFO *__fastcall tagTHREADINFO::tagTHREADINFO(tagTHREADINFO *this, struct _ETHREAD *a2)
{
  unsigned __int64 v4; // rcx

  *((_QWORD *)this + 173) = 72LL;
  *((_DWORD *)this + 132) = 0;
  *(_QWORD *)((char *)this + 1100) = 0LL;
  *(_QWORD *)((char *)this + 1108) = 0LL;
  memset((char *)this + 1392, 0, 0x40uLL);
  v4 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 71) = (char *)this + 560;
  *((_QWORD *)this + 70) = (char *)this + 560;
  *((_QWORD *)this + 169) = (char *)this + 1344;
  *((_QWORD *)this + 168) = (char *)this + 1344;
  *((_QWORD *)this + 98) = (char *)this + 776;
  *((_QWORD *)this + 97) = (char *)this + 776;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 152) = (char *)this + 1208;
  *((_QWORD *)this + 151) = (char *)this + 1208;
  *((_DWORD *)this + 428) = v4 >> 24;
  *((_DWORD *)this + 112) = 0;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 160) = (char *)this + 1272;
  *((_QWORD *)this + 159) = (char *)this + 1272;
  *((_DWORD *)this + 150) = 0;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 389) = -1;
  *((_DWORD *)this + 390) = -1;
  *((_DWORD *)this + 386) = -1;
  *((_DWORD *)this + 387) = -1;
  *((_DWORD *)this + 228) = 0;
  *((_QWORD *)this + 209) = 0LL;
  *((_DWORD *)this + 306) = 0;
  *((_DWORD *)this + 217) = 1;
  *((_DWORD *)this + 235) = 3;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 401) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 72);
  *((_DWORD *)this + 429) = 0;
  *((_QWORD *)this + 216) = 0LL;
  *((_DWORD *)this + 435) = 0;
  SetUnavailableInputSource((_DWORD *)this + 344);
  SetUnavailableInputSource((_DWORD *)this + 360);
  return this;
}
