/*
 * XREFs of ??0tagTHREADINFO@@QEAA@PEAU_ETHREAD@@@Z @ 0x140102FF4
 * Callers:
 *     AllocateW32ThreadImpl @ 0x140102ED0 (AllocateW32ThreadImpl.c)
 * Callees:
 *     SetUnavailableInputSource @ 0x14006CD60 (SetUnavailableInputSource.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

tagTHREADINFO *__fastcall tagTHREADINFO::tagTHREADINFO(tagTHREADINFO *this, struct _ETHREAD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  *((_DWORD *)this + 130) = 0;
  *(_QWORD *)((char *)this + 1092) = 0LL;
  *(_QWORD *)((char *)this + 1100) = 0LL;
  *((_QWORD *)this + 173) = 72LL;
  memset((char *)this + 1392, 0, 0x40uLL);
  v4 = MEMORY[0xFFFFF78000000320];
  v5 = MEMORY[0xFFFFF78000000004];
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 428) = (unsigned __int64)(v4 * v5) >> 24;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_DWORD *)this + 148) = 0;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_DWORD *)this + 226) = 0;
  *((_QWORD *)this + 209) = 0LL;
  *((_QWORD *)this + 70) = (char *)this + 552;
  *((_QWORD *)this + 69) = (char *)this + 552;
  *((_QWORD *)this + 169) = (char *)this + 1344;
  *((_QWORD *)this + 168) = (char *)this + 1344;
  *((_QWORD *)this + 97) = (char *)this + 768;
  *((_QWORD *)this + 96) = (char *)this + 768;
  *((_QWORD *)this + 152) = (char *)this + 1208;
  *((_QWORD *)this + 151) = (char *)this + 1208;
  *((_DWORD *)this + 306) = 0;
  *((_QWORD *)this + 160) = (char *)this + 1272;
  *((_QWORD *)this + 159) = (char *)this + 1272;
  *((_DWORD *)this + 389) = -1;
  *((_DWORD *)this + 390) = -1;
  *((_DWORD *)this + 386) = -1;
  *((_DWORD *)this + 387) = -1;
  *((_DWORD *)this + 215) = 1;
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 401) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 72);
  *((_DWORD *)this + 429) = 0;
  *((_QWORD *)this + 216) = 0LL;
  *((_DWORD *)this + 435) = 0;
  SetUnavailableInputSource((_QWORD *)this + 172);
  SetUnavailableInputSource((_QWORD *)this + 180);
  return this;
}
