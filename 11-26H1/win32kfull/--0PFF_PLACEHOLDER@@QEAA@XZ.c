/*
 * XREFs of ??0PFF_PLACEHOLDER@@QEAA@XZ @ 0x140326904
 * Callers:
 *     vCleanupPrivateFonts @ 0x1400FD9B0 (vCleanupPrivateFonts.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x14028F80C (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

PFF_PLACEHOLDER *__fastcall PFF_PLACEHOLDER::PFF_PLACEHOLDER(PFF_PLACEHOLDER *this)
{
  char *v1; // rbx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  unsigned int CurrentProcessId; // eax
  _OWORD v17[14]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+100h] [rbp-18h]

  v1 = (char *)this + 232;
  *(_OWORD *)((char *)this + 232) = 0LL;
  *(_OWORD *)((char *)this + 248) = 0LL;
  *(_OWORD *)((char *)this + 264) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  memset_0(v17, 0, 0xE8uLL);
  v3 = v17[1];
  *(_OWORD *)this = v17[0];
  v4 = v17[2];
  *((_OWORD *)this + 1) = v3;
  v5 = v17[3];
  *((_OWORD *)this + 2) = v4;
  v6 = v17[4];
  *((_OWORD *)this + 3) = v5;
  v7 = v17[5];
  *((_OWORD *)this + 4) = v6;
  v8 = v17[6];
  *((_OWORD *)this + 5) = v7;
  *((_OWORD *)this + 6) = v8;
  *((_OWORD *)this + 7) = v17[7];
  v9 = v17[9];
  *((_OWORD *)this + 8) = v17[8];
  v10 = v17[10];
  *((_OWORD *)this + 9) = v9;
  v11 = v17[11];
  *((_OWORD *)this + 10) = v10;
  v12 = v17[12];
  *((_OWORD *)this + 11) = v11;
  v13 = v17[13];
  v14 = v18;
  *((_OWORD *)this + 12) = v12;
  *((_OWORD *)this + 13) = v13;
  *((_QWORD *)this + 28) = v14;
  *((_DWORD *)this + 13) |= 0x10000u;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  *((_QWORD *)this + 19) = v1;
  *((_DWORD *)this + 61) = CurrentProcessId & 0xFFFFFFFC;
  return this;
}
