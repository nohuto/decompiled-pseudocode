/*
 * XREFs of ACPIProcessPhysicalDeviceLocation @ 0x1400C1884
 * Callers:
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x14004F558 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1400C098C (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     AMLIEvalPkgDataElement @ 0x140015D90 (AMLIEvalPkgDataElement.c)
 *     AMLIIsNamedChildPresent @ 0x14001C060 (AMLIIsNamedChildPresent.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1400C0430 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1400C1C4C (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIFreePhysicalDeviceLocationDescriptor @ 0x1400C1DAC (ACPIFreePhysicalDeviceLocationDescriptor.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1400C1DF0 (ACPICreatePhysicalDeviceLocationDescriptor.c)
 *     ACPIInsertPhysicalDeviceLocationDescriptor @ 0x1400D12D0 (ACPIInsertPhysicalDeviceLocationDescriptor.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocation(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *v4; // rcx
  __int64 v7; // rdi
  int v8; // ebx
  unsigned int *v10; // r12
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // rcx
  _QWORD *i; // rax
  int v15; // eax
  unsigned int v16; // r15d
  int v17; // eax
  __int128 v18; // [rsp+58h] [rbp-19h] BYREF
  __int128 v19; // [rsp+68h] [rbp-9h]
  void *Src; // [rsp+78h] [rbp+7h]
  _OWORD v21[2]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int *v22; // [rsp+A0h] [rbp+2Fh]
  __int64 v23; // [rsp+D8h] [rbp+67h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  Src = 0LL;
  v4 = *(__int64 **)(a1 + 760);
  v7 = 0LL;
  memset(v21, 0, sizeof(v21));
  v18 = 0LL;
  v19 = 0LL;
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    a2[4] = 0;
  }
  if ( a3 )
  {
    a3[2] = 0LL;
    a3[7] = 0LL;
    a3[8] = 0LL;
    a3[1] = a3;
    *a3 = a3;
    a3[4] = a3 + 3;
    a3[3] = a3 + 3;
    a3[6] = a3 + 5;
    a3[5] = a3 + 5;
  }
  if ( !v4 || !AMLIIsNamedChildPresent(v4, 1145851999) )
  {
    v8 = -1073741823;
    goto LABEL_8;
  }
  v8 = ACPIGet(a1, 1145851999, 268566528, 0LL, 0, 0LL, 0LL, (__int64)v21, 0LL);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( WORD1(v21[0]) == 3 )
  {
    if ( a2 )
    {
      v8 = ACPIGetPhysicalDeviceLocationBuffer(v21, a2);
      if ( v8 < 0 )
        goto LABEL_10;
    }
    if ( !a3 )
      goto LABEL_10;
    v15 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v23);
    v7 = v23;
    v8 = v15;
    if ( v15 < 0 )
      goto LABEL_8;
    if ( a2 )
    {
LABEL_32:
      ACPIInsertPhysicalDeviceLocationDescriptor(a3, v7);
      v7 = 0LL;
      goto LABEL_33;
    }
    v12 = ACPIGetPhysicalDeviceLocationBuffer(v21, v23 + 16);
LABEL_31:
    v8 = v12;
    if ( v12 < 0 )
      goto LABEL_8;
    goto LABEL_32;
  }
  if ( WORD1(v21[0]) != 4 )
    goto LABEL_45;
  v10 = v22;
  if ( !*v22 )
    goto LABEL_45;
  v8 = AMLIEvalPkgDataElement((__int64)v21, 0, (__int64)&v18);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( WORD1(v18) == 3 )
  {
    if ( !a2 )
    {
LABEL_26:
      if ( !a3 )
        goto LABEL_10;
      v11 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v23);
      v7 = v23;
      v8 = v11;
      if ( v11 < 0 )
        goto LABEL_8;
      if ( !a2 )
      {
        v8 = ACPIGetPhysicalDeviceLocationBuffer(&v18, v23 + 16);
        if ( v8 < 0 )
          goto LABEL_8;
      }
      v12 = ACPIProcessPhysicalDeviceLocationPackage((__int64)v21, 0LL, v7);
      goto LABEL_31;
    }
    if ( DWORD2(v19) >= 0x10 )
    {
      memmove(a2, Src, (-(__int64)(DWORD2(v19) < 0x14) & 0xFFFFFFFFFFFFFFFCuLL) + 20);
      if ( (*a2 & 0x7F) == 1 )
        a2[4] = -1;
      v8 = 0;
      goto LABEL_26;
    }
LABEL_45:
    v8 = -1073741823;
    goto LABEL_10;
  }
  if ( WORD1(v18) != 4 )
    goto LABEL_45;
  if ( !a3 )
  {
    if ( a2 )
      v8 = ACPIProcessPhysicalDeviceLocationPackage((__int64)&v18, (__int64)a2, 0LL);
    goto LABEL_10;
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = ACPICreatePhysicalDeviceLocationDescriptor(0LL, &v23);
    v7 = v23;
    v8 = v17;
    if ( v17 < 0 )
      break;
    v8 = ACPIProcessPhysicalDeviceLocationPackage((__int64)&v18, v23 + 16, v23);
    if ( v8 < 0 )
      break;
    if ( !v16 && a2 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v7 + 16);
      a2[4] = *(_DWORD *)(v7 + 32);
    }
    ACPIInsertPhysicalDeviceLocationDescriptor(a3, v7);
    ++v16;
    v7 = 0LL;
    v23 = 0LL;
    if ( v16 >= *v10 )
      goto LABEL_33;
    AMLIFreeDataBuffs((__int64)&v18);
    v8 = AMLIEvalPkgDataElement((__int64)v21, v16, (__int64)&v18);
    if ( v8 < 0 )
      break;
    if ( WORD1(v18) != 4 )
      goto LABEL_33;
  }
  if ( v8 < 0 )
    goto LABEL_8;
LABEL_33:
  v13 = (_QWORD *)a3[2];
  if ( v13 || (_QWORD *)a3[5] != a3 + 5 )
  {
LABEL_8:
    if ( v7 )
      ACPIFreePhysicalDeviceLocationDescriptor((PVOID)v7);
    goto LABEL_10;
  }
  for ( i = (_QWORD *)a3[3]; i != a3 + 3; i = (_QWORD *)*i )
  {
    if ( v13 )
    {
      a3[2] = 0LL;
      break;
    }
    a3[2] = i - 9;
    v13 = i - 9;
  }
LABEL_10:
  if ( Src )
    AMLIFreeDataBuffs((__int64)&v18);
  if ( v22 )
    AMLIFreeDataBuffs((__int64)v21);
  return (unsigned int)v8;
}
