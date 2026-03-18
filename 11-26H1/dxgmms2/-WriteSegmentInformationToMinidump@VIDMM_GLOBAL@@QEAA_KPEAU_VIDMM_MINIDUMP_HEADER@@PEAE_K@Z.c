/*
 * XREFs of ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1400A3890
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x14009FB4C (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     ?VidMmCheckForApertureGuardPageCorruption@@YAJPEBUVIDMM_SEGMENT_BASE@@PEAPEAK_N@Z @ 0x14004F898 (-VidMmCheckForApertureGuardPageCorruption@@YAJPEBUVIDMM_SEGMENT_BASE@@PEAPEAK_N@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WriteSegmentInformationToMinidump(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  struct _VIDMM_MINIDUMP_HEADER *v5; // rax
  VIDMM_GLOBAL *v6; // r14
  int v7; // r15d
  __int64 v8; // r12
  unsigned __int16 v9; // si
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int128 v16; // xmm1
  unsigned __int64 v17; // r9
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int16 v25; // [rsp+20h] [rbp-99h]
  void *Src; // [rsp+28h] [rbp-91h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-89h]
  VIDMM_GLOBAL *v28; // [rsp+38h] [rbp-81h]
  struct _VIDMM_MINIDUMP_HEADER *v29; // [rsp+40h] [rbp-79h]
  _OWORD v30[8]; // [rsp+50h] [rbp-69h] BYREF

  v27 = a4;
  v29 = a2;
  v5 = a2;
  v6 = this;
  v7 = 0;
  v28 = this;
  v8 = 0LL;
  v9 = 0;
  v25 = 0;
  if ( *((_DWORD *)this + 1738) )
  {
    do
    {
      v10 = *((_QWORD *)v6 + 5040);
      v11 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 8LL * v9) + 136LL) )
      {
        v12 = *(_QWORD *)(v10 + 8LL * v9);
        do
        {
          Src = 0LL;
          if ( a4 < 0x80 )
            break;
          v13 = *(_QWORD *)(*(_QWORD *)(v12 + 1752) + 8LL * v11);
          v14 = (v13 + 8) & -(__int64)(v13 != 0);
          memset(v30, 0, sizeof(v30));
          v30[0] = *(_OWORD *)(v14 + 16);
          *(_QWORD *)&v30[1] = *(_QWORD *)(v14 + 32);
          *((_QWORD *)&v30[2] + 1) = *(_QWORD *)(v14 + 72);
          LODWORD(v30[3]) = *(_DWORD *)(v14 + 56);
          DWORD2(v30[1]) = 0;
          *(_QWORD *)&v30[2] = 0LL;
          if ( (int)VidMmCheckForApertureGuardPageCorruption(
                      (const struct VIDMM_SEGMENT_BASE *)v14,
                      (unsigned int **)&Src,
                      0) < 0 )
          {
            DWORD2(v30[3]) = 1;
            if ( Src )
            {
              v15 = 4096 - ((unsigned __int16)Src & 0xFFF);
              HIDWORD(v30[3]) = (unsigned __int16)Src & 0xFFF;
              if ( v15 > 0x40 )
                v15 = 64;
              memmove(&v30[4], Src, v15);
            }
            else
            {
              HIDWORD(v30[3]) = -1;
            }
          }
          else
          {
            *((_QWORD *)&v30[3] + 1) = 0LL;
          }
          v16 = v30[1];
          v8 += 128LL;
          v17 = v27;
          ++v7;
          *(_OWORD *)a3 = v30[0];
          a4 = v17 - 128;
          ++v11;
          v18 = v30[2];
          *((_OWORD *)a3 + 1) = v16;
          v27 = a4;
          v19 = v30[3];
          *((_OWORD *)a3 + 2) = v18;
          v20 = v30[4];
          *((_OWORD *)a3 + 3) = v19;
          v21 = v30[5];
          *((_OWORD *)a3 + 4) = v20;
          v22 = v30[6];
          *((_OWORD *)a3 + 5) = v21;
          v23 = v30[7];
          *((_OWORD *)a3 + 6) = v22;
          *((_OWORD *)a3 + 7) = v23;
          a3 += 128;
        }
        while ( v11 < *(_DWORD *)(v12 + 136) );
        v9 = v25;
        v6 = v28;
      }
      v25 = ++v9;
    }
    while ( (unsigned int)v9 < *((_DWORD *)v6 + 1738) );
    v5 = v29;
  }
  *((_DWORD *)v5 + 371) = v7;
  return v8;
}
