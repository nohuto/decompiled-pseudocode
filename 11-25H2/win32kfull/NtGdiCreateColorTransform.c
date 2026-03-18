/*
 * XREFs of NtGdiCreateColorTransform @ 0x14033DE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14033D594 (-GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorTransform(
        HDC a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        PVOID Address,
        unsigned int a6,
        PVOID a7,
        unsigned int a8)
{
  SIZE_T v8; // r12
  tagLOGCOLORSPACEW *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edi
  struct HOBJ__ *v14; // rsi
  int v16; // [rsp+40h] [rbp-378h]
  void *v17; // [rsp+60h] [rbp-358h]
  void *v18; // [rsp+68h] [rbp-350h]
  void *v19; // [rsp+70h] [rbp-348h]
  HANDLE SecureHandle; // [rsp+78h] [rbp-340h]
  HANDLE v21; // [rsp+80h] [rbp-338h]
  HANDLE v22; // [rsp+88h] [rbp-330h]
  _QWORD v24[14]; // [rsp+B0h] [rbp-308h] BYREF
  tagLOGCOLORSPACEW v25; // [rsp+120h] [rbp-298h] BYREF

  v8 = a4;
  memset_0(&v25, 0, sizeof(v25));
  SecureHandle = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0;
  if ( !a2 )
    return 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = &v25;
  v12 = 4LL;
  do
  {
    *(_OWORD *)&v11->lcsSignature = *(_OWORD *)a2;
    *(_OWORD *)&v11->lcsIntent = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v11->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v11->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v11->lcsGammaBlue = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v11->lcsFilename[6] = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v11->lcsFilename[14] = *(_OWORD *)(a2 + 96);
    v11 = (tagLOGCOLORSPACEW *)((char *)v11 + 128);
    *(_OWORD *)&v11[-1].lcsFilename[252] = *(_OWORD *)(a2 + 112);
    a2 += 128LL;
    --v12;
  }
  while ( v12 );
  *(_OWORD *)&v11->lcsSignature = *(_OWORD *)a2;
  *(_OWORD *)&v11->lcsIntent = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v11->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&v11->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
  *(_QWORD *)&v11->lcsGammaBlue = *(_QWORD *)(a2 + 64);
  *(_DWORD *)&v11->lcsFilename[2] = *(_DWORD *)(a2 + 72);
  if ( a3 && (_DWORD)v8 )
  {
    SecureHandle = MmSecureVirtualMemory(a3, v8, 2u);
    if ( SecureHandle )
      v19 = a3;
    else
      v16 = 1;
  }
  if ( Address )
  {
    v13 = a6;
    if ( a6 )
    {
      v21 = MmSecureVirtualMemory(Address, a6, 2u);
      if ( v21 )
        v18 = Address;
      else
        v16 = 1;
    }
  }
  else
  {
    v13 = a6;
  }
  if ( a7 && a8 )
  {
    v22 = MmSecureVirtualMemory(a7, a8, 2u);
    if ( v22 )
      v17 = a7;
    else
      v16 = 1;
  }
  v14 = 0LL;
  if ( !v16 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v24, a1);
    if ( v24[0] )
      v14 = GrepCreateColorTransform((struct XDCOBJ *)v24, &v25, v19, v8, v18, v13, v17, a8);
    else
      EngSetLastError(0x57u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
  }
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v21 )
    MmUnsecureVirtualMemory(v21);
  if ( v22 )
    MmUnsecureVirtualMemory(v22);
  return v14;
}
