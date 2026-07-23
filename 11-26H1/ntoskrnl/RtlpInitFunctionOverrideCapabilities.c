/*
 * XREFs of RtlpInitFunctionOverrideCapabilities @ 0x140814DEC
 * Callers:
 *     RtlInitFunctionOverrideCapabilities @ 0x14080F954 (RtlInitFunctionOverrideCapabilities.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     HviGetEnlightenmentInformation @ 0x1406E0980 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpSetFunctionOverrideCapability @ 0x14080F99C (RtlpSetFunctionOverrideCapability.c)
 *     RtlpSetUserKernelFunctionOverrideCapability @ 0x14080F9E0 (RtlpSetUserKernelFunctionOverrideCapability.c)
 *     RtlGetProcessorSignature @ 0x140C050BC (RtlGetProcessorSignature.c)
 */

char __fastcall RtlpInitFunctionOverrideCapabilities(__int64 a1, __int64 a2)
{
  __int64 *v3; // r14
  unsigned int v9; // edi
  int v15; // r11d
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  __int64 v18; // r12
  __int128 v19; // xmm0
  char v25; // bl
  unsigned int v26; // edi
  _DWORD *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  char v38; // r8
  __int64 v39; // rdx
  char v40; // r8
  __int64 v41; // rdx
  char v42; // r8
  __int64 v43; // rdx
  char v44; // r8
  __int64 v45; // rdx
  char v46; // r8
  __int64 v47; // rdx
  char v48; // r8
  __int64 v49; // rdx
  char v50; // r8
  __int64 v51; // rdx
  char v52; // r8
  __int64 v53; // rdx
  char v54; // r8
  __int64 v55; // rdx
  char v56; // r8
  __int64 v57; // rdx
  char v58; // r8
  __int64 v59; // rdx
  char v60; // r8
  __int64 v61; // rdx
  char v62; // r8
  __int64 v63; // rdx
  char v64; // r8
  __int64 v65; // rdx
  char v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  _BYTE v72[4]; // [rsp+20h] [rbp-50h] BYREF
  unsigned int ProcessorSignature; // [rsp+24h] [rbp-4Ch]
  __int128 v74; // [rsp+28h] [rbp-48h]
  __int128 v75; // [rsp+38h] [rbp-38h]
  __int128 v76; // [rsp+48h] [rbp-28h] BYREF
  __int128 v77; // [rsp+58h] [rbp-18h] BYREF

  *(_QWORD *)&v77 = a2;
  v72[0] = 0;
  v76 = 0LL;
  ProcessorSignature = RtlGetProcessorSignature(v72, 0LL, 0LL, 0LL);
  v3 = RtlpCpuFeatureTable;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v9 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v15 = 0;
  *(_QWORD *)&v76 = __PAIR64__(_RBX, _RAX);
  v16 = _RAX;
  *((_QWORD *)&v76 + 1) = __PAIR64__(_RDX, _RCX);
  v17 = 10;
  v18 = 10LL;
  do
  {
    v19 = *((_OWORD *)v3 + 1);
    v74 = *(_OWORD *)v3;
    v75 = v19;
    if ( (_DWORD)v74 != v15 )
    {
      v15 = v74;
      if ( ((unsigned int)v74 < 0x80000000 || (unsigned int)v74 > v9) && (unsigned int)v74 > v16 )
      {
        v76 = 0LL;
      }
      else
      {
        _RAX = (unsigned int)v74;
        __asm { cpuid }
        *(_QWORD *)&v76 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v76 + 1) = __PAIR64__(_RDX, _RCX);
      }
    }
    if ( ((unsigned int)v75 & *((_DWORD *)&v76 + SDWORD1(v75))) != 0
      && (*((_QWORD *)&v74 + 1) & MEMORY[0xFFFFF780000003D8]) == *((_QWORD *)&v74 + 1) )
    {
      v25 = BYTE8(v75);
      if ( (BYTE8(v75) & 1) != 0 )
        RtlpSetFunctionOverrideCapability(HIDWORD(v75), a1, 0);
      if ( (v25 & 2) != 0 )
        RtlpSetFunctionOverrideCapability(HIDWORD(v75), a1, 1);
    }
    v3 += 4;
    --v18;
  }
  while ( v18 );
  v26 = ProcessorSignature;
  v27 = (_DWORD *)v77;
  switch ( v72[0] )
  {
    case 0:
      break;
    case 1:
      v17 = 9;
      goto LABEL_22;
    case 2:
      v17 = 8;
LABEL_22:
      RtlpSetUserKernelFunctionOverrideCapability(v17, a1);
      RtlpSetUserKernelFunctionOverrideCapability(7u, v28);
      break;
    case 3:
      goto LABEL_22;
  }
  RtlpSetUserKernelFunctionOverrideCapability(((unsigned __int8)v26 >> 4) + 11, a1);
  RtlpSetUserKernelFunctionOverrideCapability((HIWORD(v26) & 0xF) + 27, v29);
  RtlpSetUserKernelFunctionOverrideCapability(((v26 >> 8) & 0xF) + 43, v30);
  RtlpSetUserKernelFunctionOverrideCapability((unsigned __int8)(v26 >> 20) + 59, v31);
  RtlpSetFunctionOverrideCapability(5u, v32, 0);
  RtlpSetFunctionOverrideCapability(6u, v33, 1);
  RtlpSetFunctionOverrideCapability(0x141u, v34, 0);
  RtlpSetUserKernelFunctionOverrideCapability(0x142u, v35);
  RtlpSetFunctionOverrideCapability(0x146u, v36, 1);
  if ( !HviIsAnyHypervisorPresent()
    || (v77 = 0LL, v76 = 0LL, HviGetHypervisorFeatures(&v76), (v76 & 0x100000000000LL) != 0)
    && (HviGetEnlightenmentInformation(&v77), (v77 & 0x1000) == 0) )
  {
    RtlpSetUserKernelFunctionOverrideCapability(0x147u, a1);
  }
  if ( v27 && (*v27 & 8) != 0 )
    RtlpSetFunctionOverrideCapability(0x14Au, a1, 1);
  RtlpSetFunctionOverrideCapability(0x149u, a1, 1);
  RtlpSetFunctionOverrideCapability(0x14Bu, v37, v38);
  RtlpSetFunctionOverrideCapability(0x14Cu, v39, v40);
  RtlpSetFunctionOverrideCapability(0x14Du, v41, v42);
  RtlpSetFunctionOverrideCapability(0x14Eu, v43, v44);
  RtlpSetFunctionOverrideCapability(0x14Fu, v45, v46);
  RtlpSetFunctionOverrideCapability(0x150u, v47, v48);
  RtlpSetFunctionOverrideCapability(0x151u, v49, v50);
  RtlpSetFunctionOverrideCapability(0x152u, v51, v52);
  RtlpSetFunctionOverrideCapability(0x153u, v53, v54);
  RtlpSetFunctionOverrideCapability(0x154u, v55, v56);
  RtlpSetFunctionOverrideCapability(0x155u, v57, v58);
  RtlpSetFunctionOverrideCapability(0x156u, v59, v60);
  RtlpSetFunctionOverrideCapability(0x157u, v61, v62);
  RtlpSetFunctionOverrideCapability(0x158u, v63, v64);
  RtlpSetFunctionOverrideCapability(0x159u, v65, v66);
  RtlpSetUserKernelFunctionOverrideCapability(0x13Bu, v67);
  RtlpSetUserKernelFunctionOverrideCapability(0x13Fu, v68);
  RtlpSetUserKernelFunctionOverrideCapability(0x140u, v69);
  return RtlpSetUserKernelFunctionOverrideCapability(0x148u, v70);
}
