/*
 * XREFs of EtwpSetCoverageSamplerInformation @ 0x140837A74
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     EtwpCovSampApplyBounds @ 0x140836800 (EtwpCovSampApplyBounds.c)
 *     EtwpCovSampSplitSegments @ 0x140837144 (EtwpCovSampSplitSegments.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140837544 (EtwpCoverageSamplerSetBloomFilter.c)
 *     EtwpCoverageSamplerStart @ 0x14083773C (EtwpCoverageSamplerStart.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     EtwpCoverageSamplerStop @ 0x1409BDF40 (EtwpCoverageSamplerStop.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409D42F8 (ExCheckFullProcessInformationAccess.c)
 */

__int64 __fastcall EtwpSetCoverageSamplerInformation(void *a1, SIZE_T Length, unsigned __int8 AccessMode)
{
  SIZE_T v4; // r14
  char *v6; // rsi
  int inserted; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  char v14; // cl
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  __int64 v28; // r13
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  unsigned int v33; // r9d
  int v34; // r9d
  char v35; // r11
  unsigned int v36; // edx
  char i; // cl
  unsigned int v38; // r8d
  _OWORD *v39; // rcx
  char *v40; // rax
  struct _KLOCK_ENTRIES *v41; // r9
  char v43; // [rsp+50h] [rbp-548h]
  PVOID Object; // [rsp+58h] [rbp-540h] BYREF
  HANDLE v45; // [rsp+60h] [rbp-538h] BYREF
  PVOID v46; // [rsp+68h] [rbp-530h] BYREF
  __int128 v47; // [rsp+70h] [rbp-528h] BYREF
  __int128 v48; // [rsp+80h] [rbp-518h]
  __int128 v49; // [rsp+90h] [rbp-508h]
  HANDLE Handle[2]; // [rsp+A0h] [rbp-4F8h] BYREF
  _BYTE Src[8]; // [rsp+B0h] [rbp-4E8h] BYREF
  HANDLE v52; // [rsp+B8h] [rbp-4E0h]
  char v53; // [rsp+C0h] [rbp-4D8h] BYREF
  unsigned int v54; // [rsp+C8h] [rbp-4D0h] BYREF
  unsigned int v55; // [rsp+CCh] [rbp-4CCh] BYREF
  unsigned int v56; // [rsp+D0h] [rbp-4C8h] BYREF
  unsigned int v57; // [rsp+D4h] [rbp-4C4h] BYREF
  unsigned int v58; // [rsp+D8h] [rbp-4C0h] BYREF
  unsigned int v59; // [rsp+DCh] [rbp-4BCh] BYREF
  unsigned int v60; // [rsp+E0h] [rbp-4B8h] BYREF
  unsigned int v61; // [rsp+E4h] [rbp-4B4h] BYREF
  unsigned int v62; // [rsp+E8h] [rbp-4B0h] BYREF
  unsigned int v63; // [rsp+ECh] [rbp-4ACh] BYREF
  unsigned int v64; // [rsp+F0h] [rbp-4A8h] BYREF
  unsigned int v65; // [rsp+F4h] [rbp-4A4h] BYREF
  unsigned int v66; // [rsp+F8h] [rbp-4A0h] BYREF
  unsigned int v67; // [rsp+FCh] [rbp-49Ch] BYREF
  unsigned int v68; // [rsp+100h] [rbp-498h] BYREF
  unsigned int v69; // [rsp+104h] [rbp-494h] BYREF
  unsigned int v70; // [rsp+108h] [rbp-490h] BYREF
  unsigned int v71[129]; // [rsp+10Ch] [rbp-48Ch] BYREF
  __int16 v72; // [rsp+312h] [rbp-286h]
  __int16 v73; // [rsp+512h] [rbp-86h]
  _QWORD v74[5]; // [rsp+518h] [rbp-80h] BYREF
  __int128 v75; // [rsp+540h] [rbp-58h] BYREF
  __int128 v76; // [rsp+550h] [rbp-48h] BYREF
  __int64 v77; // [rsp+560h] [rbp-38h]

  v4 = (unsigned int)Length;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v6 = 0LL;
  Object = 0LL;
  memset_0(Src, 0, 0x488uLL);
  *(_OWORD *)Handle = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  *(_QWORD *)&v49 = 0LL;
  DWORD2(v49) = 0;
  v43 = 0;
  if ( (unsigned int)v4 < 0x10 )
    goto LABEL_2;
  if ( AccessMode )
    RtlCopyFromUser(Handle, a1, 0x10uLL);
  else
    RtlCopyVolatileMemory(Handle, a1, 0x10uLL);
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_7;
  v8 = BYTE4(Handle[0]);
  if ( BYTE4(Handle[0]) )
  {
    v9 = (unsigned int)BYTE4(Handle[0]) - 2;
    if ( BYTE4(Handle[0]) != 2 )
    {
      if ( BYTE4(Handle[0]) != 3 )
      {
        inserted = -1073741821;
        goto LABEL_54;
      }
LABEL_7:
      inserted = -1073741637;
      goto LABEL_54;
    }
    LODWORD(v9) = AccessMode;
    inserted = ExCheckFullProcessInformationAccess(v9);
    if ( inserted < 0 )
      goto LABEL_54;
    if ( (_DWORD)v4 == 40 )
    {
      if ( AccessMode )
        RtlCopyFromUser(&v75, a1, 0x28uLL);
      else
        RtlCopyVolatileMemory(&v75, a1, 0x28uLL);
      Object = 0LL;
      inserted = ObReferenceObjectByHandle(
                   Handle[1],
                   1u,
                   (POBJECT_TYPE)ExpSysDbgLock.KernelWaitTime,
                   AccessMode,
                   &Object,
                   0LL);
      v6 = (char *)Object;
      if ( inserted >= 0 )
      {
        inserted = EtwpCoverageSamplerSetBloomFilter((struct _KTHREAD *)Object, (__int64)&v76, AccessMode, v10);
        if ( inserted >= 0 )
          goto LABEL_52;
      }
      goto LABEL_54;
    }
LABEL_2:
    inserted = -1073741820;
    goto LABEL_54;
  }
  if ( !AccessMode )
    goto LABEL_7;
  LOBYTE(v8) = AccessMode;
  inserted = ExCheckFullProcessInformationAccess(v8);
  if ( inserted < 0 )
    goto LABEL_54;
  if ( (unsigned int)v4 < 0x488 )
    goto LABEL_2;
  ProbeForWrite(a1, v4, 4u);
  RtlCopyFromUser(Src, a1, 0x488uLL);
  EtwpCovSampApplyBounds(&v54, 0x400u, 0x10u, 0x4000u);
  EtwpCovSampApplyBounds(&v70, 0x100u, v11, v12);
  EtwpCovSampApplyBounds(v71, 0x800u, 0x100u, 0x10000u);
  v13 = v71[0];
  if ( ((v71[0] - 1) & v71[0]) != 0 )
  {
    v14 = -1;
    if ( v71[0] )
    {
      do
      {
        ++v14;
        v13 >>= 1;
      }
      while ( v13 );
    }
    v13 = 1 << v14;
  }
  v71[0] = v13;
  if ( (v53 & 0x40) != 0 )
    v71[0] = 0;
  EtwpCovSampApplyBounds(&v62, 0x3E8u, 1u, 0x6B49D200u);
  EtwpCovSampApplyBounds(&v64, 1u, v15, v16);
  EtwpCovSampApplyBounds(&v66, 1u, v17, v18);
  EtwpCovSampApplyBounds(&v68, 1u, v19, v20);
  EtwpCovSampApplyBounds(&v63, 0, 0, v21);
  EtwpCovSampApplyBounds(&v65, 0, v22, v23);
  EtwpCovSampApplyBounds(&v67, 0, v24, v25);
  EtwpCovSampApplyBounds(&v69, 0, v26, v27);
  v28 = 8LL;
  EtwpCovSampApplyBounds(&v57, 8u, 1u, 0x80u);
  EtwpCovSampApplyBounds(&v58, 0x20000u, 0x4000u, 0x100000u);
  EtwpCovSampApplyBounds(&v59, 4u, 2u, 0x100u);
  if ( v53 < 0 )
    v59 = 0;
  EtwpCovSampApplyBounds(&v60, 4u, v29, v30);
  EtwpCovSampApplyBounds(&v61, 0x10u, 4u, v31);
  EtwpCovSampApplyBounds(&v55, 0x400u, 0x10u, 0x8000000u);
  EtwpCovSampApplyBounds(&v56, 0x10000u, v32, v33);
  v36 = 4 * v70;
  if ( v55 >= 4 * v70 )
    v36 = v55;
  if ( ((v36 - 1) & v36) != 0 )
  {
    for ( i = v35; v36; v36 >>= 1 )
      ++i;
    v36 = 1 << i;
  }
  v55 = v36;
  v38 = v56;
  if ( ((v56 - 1) & v56) != 0 )
  {
    if ( v56 )
    {
      do
      {
        ++v35;
        v38 >>= 1;
      }
      while ( v38 );
    }
    v38 = 1 << v35;
  }
  v56 = v38;
  if ( v38 < v36 )
    v56 = v36;
  v73 = 0;
  v72 = 0;
  LODWORD(v47) = 48;
  *((_QWORD *)&v47 + 1) = 0LL;
  DWORD2(v48) = 0;
  *(_QWORD *)&v48 = 0LL;
  v49 = 0LL;
  LOBYTE(v34) = AccessMode;
  inserted = ObCreateObjectEx(0, ExpSysDbgLock.KernelWaitTime, (unsigned int)&v47, v34);
  if ( inserted < 0 )
  {
    v6 = (char *)Object;
  }
  else
  {
    v6 = (char *)Object;
    memset_0(Object, 0, 0x6C8uLL);
    *(_QWORD *)Object = 0LL;
    memset_0(v6 + 16, 0, 0x670uLL);
    *((_DWORD *)v6 + 412) = 1;
    *((_QWORD *)v6 + 156) = v6 + 1240;
    *((_QWORD *)v6 + 155) = v6 + 1240;
    *((_OWORD *)v6 + 79) = 0LL;
    *((_OWORD *)v6 + 80) = 0LL;
    *((_OWORD *)v6 + 81) = 0LL;
    *((_QWORD *)v6 + 164) = 0LL;
    *((_QWORD *)v6 + 158) = v6 + 16;
    *((_QWORD *)v6 + 2) = v6;
    *((_DWORD *)v6 + 431) = 1;
    *((_QWORD *)v6 + 211) = v6 + 1680;
    *((_QWORD *)v6 + 210) = v6 + 1680;
    v39 = v6 + 24;
    v40 = &v53;
    do
    {
      *v39 = *(_OWORD *)v40;
      v39[1] = *((_OWORD *)v40 + 1);
      v39[2] = *((_OWORD *)v40 + 2);
      v39[3] = *((_OWORD *)v40 + 3);
      v39[4] = *((_OWORD *)v40 + 4);
      v39[5] = *((_OWORD *)v40 + 5);
      v39[6] = *((_OWORD *)v40 + 6);
      v39 += 8;
      *(v39 - 1) = *((_OWORD *)v40 + 7);
      v40 += 128;
      --v28;
    }
    while ( v28 );
    *v39 = *(_OWORD *)v40;
    v39[1] = *((_OWORD *)v40 + 1);
    v39[2] = *((_OWORD *)v40 + 2);
    v39[3] = *((_OWORD *)v40 + 3);
    v39[4] = *((_OWORD *)v40 + 4);
    *((_DWORD *)v39 + 20) = *((_DWORD *)v40 + 20);
    *((_DWORD *)v6 + 411) = EtwpCovSampSplitSegments((wchar_t *)v6 + 310, (__int64)(v6 + 1480));
    *((_DWORD *)v6 + 410) = EtwpCovSampSplitSegments((wchar_t *)v6 + 54, (__int64)(v6 + 1320));
    if ( !v74[0]
      || (inserted = EtwpCoverageSamplerSetBloomFilter((struct _KTHREAD *)v6, (__int64)v74, AccessMode, v41),
          inserted >= 0) )
    {
      v46 = 0LL;
      inserted = ObReferenceObjectByHandle(
                   (HANDLE)v74[3],
                   0x1F0003u,
                   (POBJECT_TYPE)ExEventObjectType,
                   AccessMode,
                   &v46,
                   0LL);
      *((_QWORD *)v6 + 209) = v46;
      if ( inserted >= 0 )
      {
        v43 = 1;
        inserted = EtwpCoverageSamplerStart((unsigned __int64)v6);
        if ( inserted >= 0 )
        {
          PsReferenceSiloContext(v6);
          inserted = ObInsertObjectEx(v6, 0LL, 1LL, 0LL, 0, 0LL, &v45);
          if ( inserted >= 0 )
          {
            v52 = v45;
            Src[6] = 0;
            RtlCopyToUser(a1, Src, 0x488uLL);
            v45 = 0LL;
LABEL_52:
            inserted = 0;
          }
        }
      }
    }
  }
LABEL_54:
  if ( v45 )
    NtClose(v45);
  if ( v6 )
  {
    if ( inserted < 0 && v43 )
      EtwpCoverageSamplerStop(v6);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)inserted;
}
