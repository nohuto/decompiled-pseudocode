/*
 * XREFs of MiCompleteSecureDriverLoad @ 0x140AC8F74
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140AC8C4C (MiMarkKernelImageCfgBits.c)
 *     MiFinalizeDriverCfgState @ 0x140AC8F20 (MiFinalizeDriverCfgState.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiUnlockDriverPages @ 0x140AC8FF4 (MiUnlockDriverPages.c)
 *     VslCompleteSecureDriverLoad @ 0x140AC90A8 (VslCompleteSecureDriverLoad.c)
 */

__int64 __fastcall MiCompleteSecureDriverLoad(__int64 a1)
{
  unsigned int v2; // r9d
  unsigned int v3; // edi
  __int64 v4; // r8
  int v5; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+48h] [rbp-60h]

  memset_0(v7, 0, 0x68uLL);
  v2 = *(_DWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v7[0] = a1;
  v8 = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  v5 = VslCompleteSecureDriverLoad(a1, *(_QWORD *)(a1 + 112), v4);
  if ( v5 < 0 )
    v3 = v5;
  MiUnlockDriverPages(v7);
  return v3;
}
