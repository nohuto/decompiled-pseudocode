/*
 * XREFs of NtGdiExtTextOutW @ 0x14015E570
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x14015EAE4 (-GrepExtTextOutW@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryP.c)
 *     ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x14015EC24 (-GreExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiExtTextOutW(
        HDC a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        ULONG64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9)
{
  char v9; // r10
  __int128 *v11; // rbx
  __int64 v12; // rcx
  int v13; // esi
  const void *v14; // r9
  __int16 v15; // r10
  unsigned int v16; // r15d
  unsigned int v17; // r13d
  __int64 v18; // rcx
  __int64 v19; // r14
  _BYTE *v20; // rdi
  _QWORD *v21; // r12
  ULONG64 v22; // rcx
  char *v23; // rdx
  _BYTE *v24; // r15
  _BYTE *v25; // rdi
  size_t v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  __int64 SessionState; // rax
  int v30; // edx
  unsigned int *v31; // rcx
  int v33; // edx
  __int64 v34; // rax
  unsigned int v35; // [rsp+60h] [rbp-248h] BYREF
  int v36; // [rsp+68h] [rbp-240h]
  signed int v37; // [rsp+6Ch] [rbp-23Ch]
  unsigned int v38; // [rsp+70h] [rbp-238h] BYREF
  __int128 *v39; // [rsp+78h] [rbp-230h]
  unsigned int v40; // [rsp+80h] [rbp-228h]
  int v41; // [rsp+88h] [rbp-220h]
  unsigned int v42; // [rsp+90h] [rbp-218h] BYREF
  _BYTE *v43; // [rsp+98h] [rbp-210h]
  int v44; // [rsp+A0h] [rbp-208h]
  __int64 v45; // [rsp+A8h] [rbp-200h]
  __int64 v46; // [rsp+B0h] [rbp-1F8h]
  __int64 v47; // [rsp+B8h] [rbp-1F0h]
  _BYTE *v48; // [rsp+C0h] [rbp-1E8h]
  HDC v49; // [rsp+C8h] [rbp-1E0h]
  __int64 v50; // [rsp+D0h] [rbp-1D8h]
  HDC v51; // [rsp+D8h] [rbp-1D0h]
  __int64 v52; // [rsp+E0h] [rbp-1C8h]
  __int64 v53; // [rsp+E8h] [rbp-1C0h]
  _BYTE v54[48]; // [rsp+F0h] [rbp-1B8h] BYREF
  _QWORD v55[14]; // [rsp+120h] [rbp-188h] BYREF
  __int128 v56; // [rsp+190h] [rbp-118h] BYREF
  _BYTE v57[192]; // [rsp+1A0h] [rbp-108h] BYREF

  v9 = a4;
  v36 = a4;
  v49 = a1;
  v37 = a7;
  v51 = a1;
  v35 = a2;
  v42 = a3;
  v41 = a4;
  v11 = (__int128 *)a5;
  v39 = (__int128 *)a5;
  v12 = a6;
  v46 = a6;
  v53 = a6;
  v40 = a7;
  v45 = a8;
  v50 = a8;
  v44 = a9;
  v56 = 0LL;
  if ( a7 > 0xFFFF )
    goto LABEL_47;
  if ( a5 )
  {
    if ( (a4 & 6) != 0 )
    {
      if ( a5 >= MmUserProbeAddress )
        v11 = (__int128 *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v56, v11, 0x10uLL);
      v11 = &v56;
      v39 = &v56;
      v9 = v36;
      v12 = v46;
    }
    else
    {
      v11 = 0LL;
      v39 = 0LL;
    }
  }
  if ( a7 )
  {
    if ( ((v9 & 6) == 0 || v11) && v12 )
    {
      v13 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v38, 1);
      v16 = 0;
      v17 = (30 * a7 + 7) & 0xFFFFFFF8;
      v38 = v17;
      if ( v14 )
      {
        v16 = 4 * a7;
        if ( (v15 & 0x2000) != 0 )
          v16 = 8 * a7;
      }
      v52 = v16 + 7;
      LODWORD(v48) = v16 + 7;
      v18 = v17 + 2 * a7 + (v52 & 0xFFFFFFF8);
      if ( (unsigned int)v18 <= 0xC0 )
      {
        v19 = 0LL;
        v47 = 0LL;
        v20 = v57;
        v43 = v57;
LABEL_15:
        if ( v14 )
        {
          v21 = (_QWORD *)MmUserProbeAddress;
          if ( v16 )
          {
            v22 = (ULONG64)v14 + v16;
            if ( v22 < (unsigned __int64)v14 || v22 > MmUserProbeAddress )
            {
              v21 = (_QWORD *)MmUserProbeAddress;
              v11 = v39;
            }
          }
          memmove(v20, v14, v16);
          v23 = (char *)v46;
          v24 = v20;
          v50 = (__int64)v20;
          v20 += (unsigned int)v52 & 0xFFFFFFF8;
        }
        else
        {
          v21 = (_QWORD *)MmUserProbeAddress;
          v24 = (_BYTE *)v45;
          v23 = (char *)v46;
        }
        v48 = v20;
        v25 = &v20[v17];
        v43 = v25;
        v26 = 2LL * v37;
        if ( v26 )
        {
          if ( ((unsigned __int8)v23 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( &v23[v26] < v23 || (unsigned __int64)&v23[v26] > *v21 )
            v11 = v39;
        }
        memmove(v25, v23, v26);
        if ( v13 )
        {
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v55, v49);
          if ( v55[0] )
          {
            SessionState = W32GetSessionState(v28, v27);
            EUDCCountRegion::EUDCCountRegion(
              (EUDCCountRegion *)v54,
              (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
            v13 = *(_DWORD *)GrepExtTextOutW(&v35, v55, v35, v42, v36, v11, v25, v37, v24, v48, v44, 24);
            EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v54);
          }
          else
          {
            v13 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v35, 0);
          }
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v55);
        }
        if ( v19 )
          FreeTmpBuffer(v19);
        goto LABEL_33;
      }
      v19 = AllocFreeTmpBuffer(v18);
      v47 = v19;
      v20 = (_BYTE *)v19;
      v43 = (_BYTE *)v19;
      if ( v19 )
      {
        v14 = (const void *)v45;
        goto LABEL_15;
      }
LABEL_47:
      v30 = 0;
      v31 = &v35;
      return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v31, v30);
    }
    v33 = 0;
    goto LABEL_44;
  }
  if ( !v11 || (v9 & 2) == 0 )
  {
    v33 = 1;
LABEL_44:
    v13 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v35, v33);
    goto LABEL_33;
  }
  v34 = W32GetSessionState(v12, a2);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v54,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v34 + 96) + 4872LL));
  v13 = *(_DWORD *)GreExtTextOutRect(&v35, a1, v11);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v54);
LABEL_33:
  v30 = v13;
  v31 = &v42;
  return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v31, v30);
}
